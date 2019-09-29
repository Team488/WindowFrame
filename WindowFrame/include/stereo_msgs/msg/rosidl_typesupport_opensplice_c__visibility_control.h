// generated from
// rosidl_typesupport_opensplice_c/resource/rosidl_typesupport_opensplice_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_C__VISIBILITY_CONTROL_H_
#define STEREO_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_EXPORT_stereo_msgs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_stereo_msgs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_EXPORT_stereo_msgs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_stereo_msgs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_C_BUILDING_DLL_stereo_msgs
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_PUBLIC_stereo_msgs ROSIDL_TYPESUPPORT_OPENSPLICE_C_EXPORT_stereo_msgs
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_PUBLIC_stereo_msgs ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_stereo_msgs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_EXPORT_stereo_msgs __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_stereo_msgs
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_PUBLIC_stereo_msgs __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_C_PUBLIC_stereo_msgs
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_C__VISIBILITY_CONTROL_H_
