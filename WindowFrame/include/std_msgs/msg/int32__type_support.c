// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg\Int32.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/int32__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/int32__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Int32__rosidl_typesupport_introspection_c__Int32_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int32, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Int32__rosidl_typesupport_introspection_c__Int32_message_members = {
  "std_msgs__msg",  // message namespace
  "Int32",  // message name
  1,  // number of fields
  sizeof(std_msgs__msg__Int32),
  Int32__rosidl_typesupport_introspection_c__Int32_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Int32__rosidl_typesupport_introspection_c__Int32_message_type_support_handle = {
  0,
  &Int32__rosidl_typesupport_introspection_c__Int32_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)() {
  if (!Int32__rosidl_typesupport_introspection_c__Int32_message_type_support_handle.typesupport_identifier) {
    Int32__rosidl_typesupport_introspection_c__Int32_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Int32__rosidl_typesupport_introspection_c__Int32_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
