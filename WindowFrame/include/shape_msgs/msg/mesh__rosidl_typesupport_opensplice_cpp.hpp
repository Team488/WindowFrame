// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef SHAPE_MSGS__MSG__MESH__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define SHAPE_MSGS__MSG__MESH__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "shape_msgs/msg/mesh__struct.hpp"
#include "shape_msgs/msg/dds_opensplice/ccpp_Mesh_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace shape_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
extern void register_type__Mesh(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
extern void convert_ros_message_to_dds(
  const shape_msgs::msg::Mesh & ros_message,
  shape_msgs::msg::dds_::Mesh_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
extern void publish__Mesh(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
extern void convert_dds_message_to_ros(
  const shape_msgs::msg::dds_::Mesh_ & dds_message,
  shape_msgs::msg::Mesh & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
extern bool take__Mesh(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_shape_msgs
const char *
serialize__Mesh(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_shape_msgs
const char *
deserialize__Mesh(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace shape_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  shape_msgs, msg,
  Mesh)();

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_MSGS__MSG__MESH__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
