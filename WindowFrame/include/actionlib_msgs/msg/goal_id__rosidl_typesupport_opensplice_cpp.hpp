// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "actionlib_msgs/msg/goal_id__struct.hpp"
#include "actionlib_msgs/msg/dds_opensplice/ccpp_GoalID_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace actionlib_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void register_type__GoalID(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void convert_ros_message_to_dds(
  const actionlib_msgs::msg::GoalID & ros_message,
  actionlib_msgs::msg::dds_::GoalID_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void publish__GoalID(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void convert_dds_message_to_ros(
  const actionlib_msgs::msg::dds_::GoalID_ & dds_message,
  actionlib_msgs::msg::GoalID & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern bool take__GoalID(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_actionlib_msgs
const char *
serialize__GoalID(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_actionlib_msgs
const char *
deserialize__GoalID(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace actionlib_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  actionlib_msgs, msg,
  GoalID)();

#ifdef __cplusplus
}
#endif
#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
