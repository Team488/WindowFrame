# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget rviz_common::rviz_common)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target rviz_common::rviz_common
add_library(rviz_common::rviz_common SHARED IMPORTED)

set_target_properties(rviz_common::rviz_common PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "PLUGINLIB__DISABLE_BOOST_FUNCTIONS"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include;C:/J/workspace/ci_packaging_windows/ws/install/include;C:/ProgramData/chocolatey/lib/tinyxml2/include;C:/J/workspace/ci_packaging_windows/ws/install/include;C:/ProgramData/chocolatey/lib/tinyxml-usestl/include;C:/J/workspace/ci_packaging_windows/ws/install/include;C:/J/workspace/ci_packaging_windows/ws/install/opt/libcurl_vendor/include;C:/J/workspace/ci_packaging_windows/ws/install/opt/rviz_assimp_vendor/include;C:/ProgramData/chocolatey/lib/eigen/include;C:/ProgramData/chocolatey/lib/tinyxml-usestl/include;C:/J/workspace/ci_packaging_windows/ws/install/opt/yaml_cpp_vendor/CMake/../include;${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "rviz_ogre_vendor::OgreMain;rviz_ogre_vendor::OgreOverlay;\$<\$<CONFIG:DEBUG>:C:/ProgramData/chocolatey/lib/tinyxml2/lib/tinyxml2d.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/ProgramData/chocolatey/lib/tinyxml2/lib/tinyxml2.lib>;C:/J/workspace/ci_packaging_windows/ws/install/Lib/ament_index_cpp.lib;Poco::Foundation;console_bridge;C:/J/workspace/ci_packaging_windows/ws/install/Lib/class_loader.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcutils.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcutils.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcutils.lib;\$<\$<CONFIG:DEBUG>:C:/ProgramData/chocolatey/lib/tinyxml2/lib/tinyxml2d.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/ProgramData/chocolatey/lib/tinyxml2/lib/tinyxml2.lib>;rviz_rendering::rviz_rendering;Qt5::Widgets;\$<\$<CONFIG:DEBUG>:C:/ProgramData/chocolatey/lib/tinyxml-usestl/lib/tinyxmld.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/ProgramData/chocolatey/lib/tinyxml-usestl/lib/tinyxml.lib>;C:/J/workspace/ci_packaging_windows/ws/install/Lib/ament_index_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/opt/libcurl_vendor/lib/libcurl_imp.lib;C:/J/workspace/ci_packaging_windows/ws/install/opt/rviz_assimp_vendor/lib/assimp-vc140-mt.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/sensor_msgs__rosidl_typesupport_fastrtps_cpp.lib;orocos-kdl;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_ros.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/message_filters.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rclcpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_interfaces__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rmw_implementation.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rmw.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcutils.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_logging_noop.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosgraph_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rcl_yaml_param_parser.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/std_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/geometry_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/builtin_interfaces__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/unique_identifier_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/action_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_generator_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_fastrtps_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_fastrtps_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_introspection_c.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2_msgs__rosidl_typesupport_introspection_cpp.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/tf2.lib;C:/J/workspace/ci_packaging_windows/ws/install/Lib/urdf.lib;\$<\$<CONFIG:DEBUG>:C:/ProgramData/chocolatey/lib/tinyxml-usestl/lib/tinyxmld.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/ProgramData/chocolatey/lib/tinyxml-usestl/lib/tinyxml.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/J/workspace/ci_packaging_windows/ws/install/Lib/urdfdom_sensor.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/J/workspace/ci_packaging_windows/ws/install/Lib/urdfdom_model_state.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/J/workspace/ci_packaging_windows/ws/install/Lib/urdfdom_model.lib>;\$<\$<NOT:\$<CONFIG:DEBUG>>:C:/J/workspace/ci_packaging_windows/ws/install/Lib/urdfdom_world.lib>;console_bridge;yaml-cpp"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/rviz_commonExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
