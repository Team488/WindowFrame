// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "visualization_msgs/msg/interactive_marker_control__struct.hpp"
#include "visualization_msgs/msg/dds_opensplice/ccpp_InteractiveMarkerControl_.h"
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
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void register_type__InteractiveMarkerControl(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_ros_message_to_dds(
  const visualization_msgs::msg::InteractiveMarkerControl & ros_message,
  visualization_msgs::msg::dds_::InteractiveMarkerControl_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void publish__InteractiveMarkerControl(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_dds_message_to_ros(
  const visualization_msgs::msg::dds_::InteractiveMarkerControl_ & dds_message,
  visualization_msgs::msg::InteractiveMarkerControl & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern bool take__InteractiveMarkerControl(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
serialize__InteractiveMarkerControl(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_visualization_msgs
const char *
deserialize__InteractiveMarkerControl(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  visualization_msgs, msg,
  InteractiveMarkerControl)();

#ifdef __cplusplus
}
#endif
#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
