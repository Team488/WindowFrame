# generated from
# rosidl_typesupport_opensplice_c/
#   rosidl_typesupport_opensplice_c-extras.cmake.in

find_package(opensplice_cmake_module QUIET)
find_package(OpenSplice QUIET MODULE)
if(NOT OpenSplice_FOUND)
  message(STATUS
    "Could not find PrismTech OpenSplice - "
    "skipping rosidl_typesupport_opensplice_c")
else()
  find_package(ament_cmake_core QUIET REQUIRED)
  ament_register_extension(
    "rosidl_generate_idl_interfaces"
    "rosidl_typesupport_opensplice_c"
    "rosidl_typesupport_opensplice_c_generate_interfaces.cmake")

  set(rosidl_typesupport_opensplice_c_BIN
    "${rosidl_typesupport_opensplice_c_DIR}/../../../lib/rosidl_typesupport_opensplice_c/rosidl_typesupport_opensplice_c")
  normalize_path(rosidl_typesupport_opensplice_c_BIN
    "${rosidl_typesupport_opensplice_c_BIN}")

  set(rosidl_typesupport_opensplice_c_GENERATOR_FILES
    "${rosidl_typesupport_opensplice_c_DIR}/../../../Lib/site-packages/rosidl_typesupport_opensplice_c/__init__.py")
  normalize_path(rosidl_typesupport_opensplice_c_GENERATOR_FILES
    "${rosidl_typesupport_opensplice_c_GENERATOR_FILES}")

  set(rosidl_typesupport_opensplice_c_TEMPLATE_DIR
    "${rosidl_typesupport_opensplice_c_DIR}/../resource")
  normalize_path(rosidl_typesupport_opensplice_c_TEMPLATE_DIR
    "${rosidl_typesupport_opensplice_c_TEMPLATE_DIR}")
endif()
