// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef NAV_MSGS__MSG__GRID_CELLS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define NAV_MSGS__MSG__GRID_CELLS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "nav_msgs/msg/grid_cells__struct.hpp"
#include "nav_msgs/msg/dds_opensplice/ccpp_GridCells_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace nav_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void register_type__GridCells(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_ros_message_to_dds(
  const nav_msgs::msg::GridCells & ros_message,
  nav_msgs::msg::dds_::GridCells_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void publish__GridCells(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_dds_message_to_ros(
  const nav_msgs::msg::dds_::GridCells_ & dds_message,
  nav_msgs::msg::GridCells & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern bool take__GridCells(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_nav_msgs
const char *
serialize__GridCells(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_nav_msgs
const char *
deserialize__GridCells(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  nav_msgs, msg,
  GridCells)();

#ifdef __cplusplus
}
#endif
#endif  // NAV_MSGS__MSG__GRID_CELLS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
