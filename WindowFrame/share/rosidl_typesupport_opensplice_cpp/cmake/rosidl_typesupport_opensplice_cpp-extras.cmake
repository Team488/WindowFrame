# generated from
# rosidl_typesupport_opensplice_cpp/
#   rosidl_typesupport_opensplice_cpp-extras.cmake.in

find_package(opensplice_cmake_module QUIET)
find_package(OpenSplice QUIET MODULE)
if(NOT OpenSplice_FOUND)
  message(STATUS
    "Could not find PrismTech OpenSplice - "
    "skipping rosidl_typesupport_opensplice_cpp")
else()
  find_package(ament_cmake_core QUIET)
  ament_register_extension(
    "rosidl_generate_idl_interfaces"
    "rosidl_typesupport_opensplice_cpp"
    "rosidl_typesupport_opensplice_cpp_generate_interfaces.cmake")

  set(rosidl_typesupport_opensplice_cpp_BIN
    "${rosidl_typesupport_opensplice_cpp_DIR}/../../../lib/rosidl_typesupport_opensplice_cpp/rosidl_typesupport_opensplice_cpp")
  normalize_path(rosidl_typesupport_opensplice_cpp_BIN
    "${rosidl_typesupport_opensplice_cpp_BIN}")

  set(rosidl_typesupport_opensplice_cpp_GENERATOR_FILES
    "${rosidl_typesupport_opensplice_cpp_DIR}/../../../Lib/site-packages/rosidl_typesupport_opensplice_cpp/__init__.py")
  normalize_path(rosidl_typesupport_opensplice_cpp_GENERATOR_FILES
    "${rosidl_typesupport_opensplice_cpp_GENERATOR_FILES}")

  set(rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR
    "${rosidl_typesupport_opensplice_cpp_DIR}/../resource")
  normalize_path(rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR
    "${rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR}")
endif()
