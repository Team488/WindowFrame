// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from trajectory_msgs:msg\MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice


#ifndef TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "trajectory_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "trajectory_msgs/msg/dds_connext/MultiDOFJointTrajectoryPoint_Support.h"
#include "trajectory_msgs/msg/dds_connext/MultiDOFJointTrajectoryPoint_Plugin.h"
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


namespace trajectory_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MultiDOFJointTrajectoryPoint();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_trajectory_msgs
convert_ros_message_to_dds(
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros_message,
  trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_trajectory_msgs
convert_dds_message_to_ros(
  const trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_ & dds_message,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros_message);

bool
to_cdr_stream__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MultiDOFJointTrajectoryPoint(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace trajectory_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  trajectory_msgs, msg,
  MultiDOFJointTrajectoryPoint)();

#ifdef __cplusplus
}
#endif


#endif  // TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_