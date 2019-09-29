# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rviz_common_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rviz_common_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rviz_common_FOUND FALSE)
  elseif(NOT rviz_common_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rviz_common_FOUND FALSE)
  endif()
  return()
endif()
set(_rviz_common_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rviz_common_FIND_QUIETLY)
  message(STATUS "Found rviz_common: 6.1.4 (${rviz_common_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rviz_common' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rviz_common_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rviz_common-extras.cmake;ament_cmake_export_interfaces-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rviz_common_DIR}/${_extra}")
endforeach()
