// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "tf2_msgs/msg/tf_message__struct.hpp"
#include "tf2_msgs/msg/dds_opensplice/ccpp_TFMessage_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__TFMessage(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::msg::TFMessage & ros_message,
  tf2_msgs::msg::dds_::TFMessage_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__TFMessage(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::msg::dds_::TFMessage_ & dds_message,
  tf2_msgs::msg::TFMessage & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__TFMessage(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__TFMessage(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__TFMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, msg,
  TFMessage)();

#ifdef __cplusplus
}
#endif
#endif  // TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_