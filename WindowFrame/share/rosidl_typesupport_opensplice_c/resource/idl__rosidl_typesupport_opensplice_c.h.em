// generated from rosidl_typesupport_opensplice_c/resource/idl__rosidl_typesupport_c.h.em
// generated code does not contain a copyright notice
@{
from rosidl_cmake import convert_camel_case_to_lower_case_underscore
include_parts = [package_name] + list(interface_path.parents[0].parts) + \
    [convert_camel_case_to_lower_case_underscore(interface_path.stem)]
header_guard_variable = '__'.join([x.upper() for x in include_parts]) + \
    '__ROSIDL_TYPESUPPORT_OPENSPLICE_C_H_'
}@
#ifndef @(header_guard_variable)
#define @(header_guard_variable)
@{
#######################################################################
# EmPy template for generating <idl>__rosidl_typesupport_c.h files
#
# Context:
#  - package_name (string)
#  - content (rosidl_parser.definition.IdlContent result of parsing IDL file)
#  - interface_path (Path relative to the directory named after the package)
#######################################################################

include_directives = set()

#######################################################################
# Handle message
#######################################################################
from rosidl_parser.definition import Message
for message in content.get_elements_of_type(Message):
    TEMPLATE(
        'msg__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, message=message,
        include_directives=include_directives)

#######################################################################
# Handle service
#######################################################################
from rosidl_parser.definition import Service
for service in content.get_elements_of_type(Service):
    TEMPLATE(
        'srv__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, service=service,
        include_directives=include_directives)

#######################################################################
# Handle action
#######################################################################
from rosidl_parser.definition import Action
for action in content.get_elements_of_type(Action):
    TEMPLATE(
        'msg__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, message=action.goal,
        include_directives=include_directives)
    TEMPLATE(
        'msg__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, message=action.result,
        include_directives=include_directives)
    TEMPLATE(
        'msg__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, message=action.feedback,
        include_directives=include_directives)
    TEMPLATE(
        'srv__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, service=action.send_goal_service,
        include_directives=include_directives)
    TEMPLATE(
        'srv__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, service=action.get_result_service,
        include_directives=include_directives)
    TEMPLATE(
        'msg__rosidl_typesupport_opensplice_c.h.em',
        package_name=package_name, interface_path=interface_path, message=action.feedback_message,
        include_directives=include_directives)
}@
#endif  // @(header_guard_variable)
