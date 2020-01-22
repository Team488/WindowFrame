// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef VISUALIZATION_MSGS__SRV__GET_INTERACTIVE_MARKERS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define VISUALIZATION_MSGS__SRV__GET_INTERACTIVE_MARKERS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "visualization_msgs/srv/get_interactive_markers__struct.hpp"
#include "visualization_msgs/srv/dds_opensplice/ccpp_GetInteractiveMarkers_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace visualization_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void register_type__GetInteractiveMarkers_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_ros_message_to_dds(
  const visualization_msgs::srv::GetInteractiveMarkers_Request & ros_message,
  visualization_msgs::srv::dds_::GetInteractiveMarkers_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void publish__GetInteractiveMarkers_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_dds_message_to_ros(
  const visualization_msgs::srv::dds_::GetInteractiveMarkers_Request_ & dds_message,
  visualization_msgs::srv::GetInteractiveMarkers_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern bool take__GetInteractiveMarkers_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
serialize__GetInteractiveMarkers_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
deserialize__GetInteractiveMarkers_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  visualization_msgs, srv,
  GetInteractiveMarkers_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "visualization_msgs/srv/get_interactive_markers__struct.hpp"
// already included above
// #include "visualization_msgs/srv/dds_opensplice/ccpp_GetInteractiveMarkers_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace visualization_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void register_type__GetInteractiveMarkers_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_ros_message_to_dds(
  const visualization_msgs::srv::GetInteractiveMarkers_Response & ros_message,
  visualization_msgs::srv::dds_::GetInteractiveMarkers_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void publish__GetInteractiveMarkers_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_dds_message_to_ros(
  const visualization_msgs::srv::dds_::GetInteractiveMarkers_Response_ & dds_message,
  visualization_msgs::srv::GetInteractiveMarkers_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern bool take__GetInteractiveMarkers_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
serialize__GetInteractiveMarkers_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
deserialize__GetInteractiveMarkers_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  visualization_msgs, srv,
  GetInteractiveMarkers_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "visualization_msgs/srv/get_interactive_markers__struct.hpp"
// already included above
// #include "visualization_msgs/srv/dds_opensplice/ccpp_GetInteractiveMarkers_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  visualization_msgs, srv,
  GetInteractiveMarkers)();

#ifdef __cplusplus
}
#endif
#endif  // VISUALIZATION_MSGS__SRV__GET_INTERACTIVE_MARKERS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
