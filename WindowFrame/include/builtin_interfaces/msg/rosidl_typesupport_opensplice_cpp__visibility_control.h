// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_
#define BUILTIN_INTERFACES__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_builtin_interfaces __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_builtin_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_builtin_interfaces __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_builtin_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_builtin_interfaces
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_builtin_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_builtin_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_builtin_interfaces
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
#endif

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_
