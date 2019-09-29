// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:msg\PointCloud2Update.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/msg/point_cloud2_update__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/msg/point_cloud2_update__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `points`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__PointCloud2Update, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__PointCloud2Update, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__PointCloud2Update, points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_members = {
  "map_msgs__msg",  // message namespace
  "PointCloud2Update",  // message name
  3,  // number of fields
  sizeof(map_msgs__msg__PointCloud2Update),
  PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_type_support_handle = {
  0,
  &PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, PointCloud2Update)() {
  PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_type_support_handle.typesupport_identifier) {
    PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PointCloud2Update__rosidl_typesupport_introspection_c__PointCloud2Update_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif