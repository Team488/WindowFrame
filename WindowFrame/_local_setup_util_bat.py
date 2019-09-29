# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
from collections import OrderedDict
import os
from pathlib import Path
import sys


FORMAT_STR_COMMENT_LINE = ':: {comment}'
FORMAT_STR_SET_ENV_VAR = 'set "{name}={value}"'
FORMAT_STR_USE_ENV_VAR = '%{name}%'
FORMAT_STR_INVOKE_SCRIPT = 'call:_colcon_prefix_bat_call_script "{script_path}"'

DSV_TYPE_PREPEND_NON_DUPLICATE = 'prepend-non-duplicate'
DSV_TYPE_PREPEND_NON_DUPLICATE_IF_EXISTS = 'prepend-non-duplicate-if-exists'
DSV_TYPE_SOURCE = 'source'


def main(argv=sys.argv[1:]):  # noqa: D103
    parser = argparse.ArgumentParser(
        description='Output shell commands for the packages in topological '
                    'order')
    parser.add_argument(
        'primary_extension',
        help='The file extension of the primary shell')
    parser.add_argument(
        'additional_extension', nargs='?',
        help='The additional file extension to be considered')
    parser.add_argument(
        '--merged-install', action='store_true',
        help='All install prefixes are merged into a single location')
    args = parser.parse_args(argv)

    packages = get_packages(Path(__file__).parent, args.merged_install)

    ordered_packages = order_packages(packages)
    for pkg_name in ordered_packages:
        if _include_comments():
            print(
                FORMAT_STR_COMMENT_LINE.format_map(
                    {'comment': 'Package: ' + pkg_name}))
        prefix = os.path.abspath(os.path.dirname(__file__))
        if not args.merged_install:
            prefix = os.path.join(prefix, pkg_name)
        for line in get_commands(
            pkg_name, prefix, args.primary_extension,
            args.additional_extension
        ):
            print(line)


def get_packages(prefix_path, merged_install):
    """
    Find packages based on colcon-specific files created during installation.

    :param Path prefix_path: The install prefix path of all packages
    :param bool merged_install: The flag if the packages are all installed
      directly in the prefix or if each package is installed in a subdirectory
      named after the package
    :returns: A mapping from the package name to the set of runtime
      dependencies
    :rtype: dict
    """
    packages = {}
    # since importing colcon_core isn't feasible here the following constant
    # must match colcon_core.location.get_relative_package_index_path()
    subdirectory = 'share/colcon-core/packages'
    if merged_install:
        # return if workspace is empty
        if not (prefix_path / subdirectory).is_dir():
            return packages
        # find all files in the subdirectory
        for p in (prefix_path / subdirectory).iterdir():
            if not p.is_file():
                continue
            if p.name.startswith('.'):
                continue
            add_package_runtime_dependencies(p, packages)
    else:
        # for each subdirectory look for the package specific file
        for p in prefix_path.iterdir():
            if not p.is_dir():
                continue
            if p.name.startswith('.'):
                continue
            p = p / subdirectory / p.name
            if p.is_file():
                add_package_runtime_dependencies(p, packages)

    # remove unknown dependencies
    pkg_names = set(packages.keys())
    for k in packages.keys():
        packages[k] = {d for d in packages[k] if d in pkg_names}

    return packages


def add_package_runtime_dependencies(path, packages):
    """
    Check the path and if it exists extract the packages runtime dependencies.

    :param Path path: The resource file containing the runtime dependencies
    :param dict packages: A mapping from package names to the sets of runtime
      dependencies to add to
    """
    content = path.read_text()
    dependencies = set(content.split(os.pathsep) if content else [])
    packages[path.name] = dependencies


def order_packages(packages):
    """
    Order packages topologically.

    :param dict packages: A mapping from package name to the set of runtime
      dependencies
    :returns: The package names
    :rtype: list
    """
    # select packages with no dependencies in alphabetical order
    to_be_ordered = list(packages.keys())
    ordered = []
    while to_be_ordered:
        pkg_names_without_deps = [
            name for name in to_be_ordered if not packages[name]]
        if not pkg_names_without_deps:
            reduce_cycle_set(packages)
            raise RuntimeError(
                'Circular dependency between: ' + ', '.join(sorted(packages)))
        pkg_names_without_deps.sort()
        pkg_name = pkg_names_without_deps[0]
        to_be_ordered.remove(pkg_name)
        ordered.append(pkg_name)
        # remove item from dependency lists
        for k in list(packages.keys()):
            if pkg_name in packages[k]:
                packages[k].remove(pkg_name)
    return ordered


def reduce_cycle_set(packages):
    """
    Reduce the set of packages to the ones part of the circular dependency.

    :param dict packages: A mapping from package name to the set of runtime
      dependencies which is modified in place
    """
    last_depended = None
    while len(packages) > 0:
        # get all remaining dependencies
        depended = set()
        for pkg_name, dependencies in packages.items():
            depended = depended.union(dependencies)
        # remove all packages which are not dependent on
        for name in list(packages.keys()):
            if name not in depended:
                del packages[name]
        if last_depended:
            # if remaining packages haven't changed return them
            if last_depended == depended:
                return packages.keys()
        # otherwise reduce again
        last_depended = depended


def _include_comments():
    # skipping comment lines when COLCON_TRACE is not set speeds up the
    # processing especially on Windows
    return bool(os.environ.get('COLCON_TRACE'))


def get_commands(pkg_name, prefix, primary_extension, additional_extension):
    commands = []
    package_dsv_path = os.path.join(prefix, 'share', pkg_name, 'package.dsv')
    if os.path.exists(package_dsv_path):
        commands += process_dsv_file(
            package_dsv_path, prefix, primary_extension, additional_extension)
    return commands


def process_dsv_file(
    dsv_path, prefix, primary_extension=None, additional_extension=None
):
    commands = []
    if _include_comments():
        commands.append(FORMAT_STR_COMMENT_LINE.format_map({'comment': dsv_path}))
    with open(dsv_path, 'r') as h:
        content = h.read()
    lines = content.splitlines()

    basenames = OrderedDict()
    for line in lines:
        type_, remainder = line.split(';', 1)
        if type_ != DSV_TYPE_SOURCE:
            # handle non-source lines
            commands += handle_dsv_types_except_source(
                type_, remainder, prefix)
        else:
            # group remaining source lines by basename
            path_without_ext, ext = os.path.splitext(remainder)
            assert ext.startswith('.')
            ext = ext[1:]
            if ext in (primary_extension, additional_extension):
                if path_without_ext not in basenames:
                    basenames[path_without_ext] = set()
                basenames[path_without_ext].add(ext)

    # add the dsv extension to each basename if the file exists
    for basename, extensions in basenames.items():
        if not os.path.isabs(basename):
            basename = os.path.join(prefix, basename)
        if os.path.exists(basename + '.dsv'):
            extensions.add('dsv')

    for basename, extensions in basenames.items():
        if not os.path.isabs(basename):
            basename = os.path.join(prefix, basename)
        if 'dsv' in extensions:
            # process dsv files recursively
            commands += process_dsv_file(
                basename + '.dsv', prefix, primary_extension=primary_extension,
                additional_extension=additional_extension)
        elif primary_extension in extensions and len(extensions) == 1:
            # source primary-only files
            commands += [
                FORMAT_STR_INVOKE_SCRIPT.format_map({
                    'prefix': prefix,
                    'script_path': basename + '.' + primary_extension})]
        elif additional_extension in extensions:
            # source non-primary files
            commands += [
                FORMAT_STR_INVOKE_SCRIPT.format_map({
                    'prefix': prefix,
                    'script_path': basename + '.' + additional_extension})]

    return commands


def handle_dsv_types_except_source(type_, remainder, prefix):
    commands = []
    if type_ in (
        DSV_TYPE_PREPEND_NON_DUPLICATE,
        DSV_TYPE_PREPEND_NON_DUPLICATE_IF_EXISTS
    ):
        env_name, value = remainder.split(';', 1)
        if not value:
            value = prefix
        elif not os.path.isabs(value):
            value = os.path.join(prefix, value)
        if (
            type_ == DSV_TYPE_PREPEND_NON_DUPLICATE_IF_EXISTS and
            not os.path.exists(value)
        ):
            comment = 'skip extending {env_name} with not existing path: ' \
                '{value}'.format_map(locals())
            if _include_comments():
                commands.append(
                    FORMAT_STR_COMMENT_LINE.format_map({'comment': comment}))
        else:
            commands += _prepend_unique_value(env_name, value)
    else:
        assert False, 'Unknown environment hook type: ' + type_
    return commands


env_state = {}


def _prepend_unique_value(name, value):
    global env_state
    if name not in env_state:
        if name not in os.environ:
            env_state[name] = set()
        if os.environ.get(name):
            env_state[name] = set(os.environ[name].split(os.pathsep))
    if not env_state[name]:
        extend = ''
    else:
        extend = os.pathsep + FORMAT_STR_USE_ENV_VAR.format_map(
            {'name': name})
    line = FORMAT_STR_SET_ENV_VAR.format_map(
        {'name': name, 'value': value + extend})
    if value not in env_state[name]:
        env_state[name].add(value)
    else:
        if not _include_comments():
            return []
        line = FORMAT_STR_COMMENT_LINE.format_map({'comment': line})
    return [line]


if __name__ == '__main__':  # pragma: no cover
    main()
