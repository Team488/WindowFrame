// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef PENDULUM_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define PENDULUM_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "pendulum_msgs/msg/joint_state__struct.hpp"
#include "pendulum_msgs/msg/dds_opensplice/ccpp_JointState_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace pendulum_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void register_type__JointState(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void convert_ros_message_to_dds(
  const pendulum_msgs::msg::JointState & ros_message,
  pendulum_msgs::msg::dds_::JointState_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void publish__JointState(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void convert_dds_message_to_ros(
  const pendulum_msgs::msg::dds_::JointState_ & dds_message,
  pendulum_msgs::msg::JointState & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern bool take__JointState(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs
const char *
serialize__JointState(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs
const char *
deserialize__JointState(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace pendulum_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  pendulum_msgs, msg,
  JointState)();

#ifdef __cplusplus
}
#endif
#endif  // PENDULUM_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
