# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rmw_connext_shared_cpp_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rmw_connext_shared_cpp_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rmw_connext_shared_cpp_FOUND FALSE)
  elseif(NOT rmw_connext_shared_cpp_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rmw_connext_shared_cpp_FOUND FALSE)
  endif()
  return()
endif()
set(_rmw_connext_shared_cpp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rmw_connext_shared_cpp_FIND_QUIETLY)
  message(STATUS "Found rmw_connext_shared_cpp: 0.7.3 (${rmw_connext_shared_cpp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rmw_connext_shared_cpp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rmw_connext_shared_cpp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rmw_connext_shared_cpp-extras.cmake;ament_cmake_export_definitions-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rmw_connext_shared_cpp_DIR}/${_extra}")
endforeach()