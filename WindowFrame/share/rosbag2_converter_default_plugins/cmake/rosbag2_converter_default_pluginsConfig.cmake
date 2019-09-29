# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosbag2_converter_default_plugins_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosbag2_converter_default_plugins_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosbag2_converter_default_plugins_FOUND FALSE)
  elseif(NOT rosbag2_converter_default_plugins_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosbag2_converter_default_plugins_FOUND FALSE)
  endif()
  return()
endif()
set(_rosbag2_converter_default_plugins_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosbag2_converter_default_plugins_FIND_QUIETLY)
  message(STATUS "Found rosbag2_converter_default_plugins: 0.1.5 (${rosbag2_converter_default_plugins_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosbag2_converter_default_plugins' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosbag2_converter_default_plugins_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rosbag2_converter_default_plugins_DIR}/${_extra}")
endforeach()