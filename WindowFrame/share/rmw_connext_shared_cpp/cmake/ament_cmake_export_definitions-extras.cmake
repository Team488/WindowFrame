# generated from ament_cmake_export_definitions/cmake/ament_cmake_export_definitions-extras.cmake.in

set(_exported_definitions "RTI_WIN32;NDDS_DLL_VARIABLE")

# append definitions to rmw_connext_shared_cpp_DEFINITIONS
if(NOT _exported_definitions STREQUAL "")
  foreach(_def ${_exported_definitions})
    list(APPEND rmw_connext_shared_cpp_DEFINITIONS "${_def}")
  endforeach()
endif()
