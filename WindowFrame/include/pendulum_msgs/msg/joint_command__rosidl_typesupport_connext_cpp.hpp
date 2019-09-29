// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from pendulum_msgs:msg\JointCommand.idl
// generated code does not contain a copyright notice


#ifndef PENDULUM_MSGS__MSG__JOINT_COMMAND__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define PENDULUM_MSGS__MSG__JOINT_COMMAND__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pendulum_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "pendulum_msgs/msg/joint_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "pendulum_msgs/msg/dds_connext/JointCommand_Support.h"
#include "pendulum_msgs/msg/dds_connext/JointCommand_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace pendulum_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__JointCommand();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pendulum_msgs
convert_ros_message_to_dds(
  const pendulum_msgs::msg::JointCommand & ros_message,
  pendulum_msgs::msg::dds_::JointCommand_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pendulum_msgs
convert_dds_message_to_ros(
  const pendulum_msgs::msg::dds_::JointCommand_ & dds_message,
  pendulum_msgs::msg::JointCommand & ros_message);

bool
to_cdr_stream__JointCommand(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__JointCommand(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace pendulum_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pendulum_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  pendulum_msgs, msg,
  JointCommand)();

#ifdef __cplusplus
}
#endif


#endif  // PENDULUM_MSGS__MSG__JOINT_COMMAND__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
