// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MAP_MSGS__SRV__PROJECTED_MAPS_INFO__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MAP_MSGS__SRV__PROJECTED_MAPS_INFO__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "map_msgs/srv/projected_maps_info__struct.hpp"
#include "map_msgs/srv/dds_opensplice/ccpp_ProjectedMapsInfo_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace map_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void register_type__ProjectedMapsInfo_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_ros_message_to_dds(
  const map_msgs::srv::ProjectedMapsInfo_Request & ros_message,
  map_msgs::srv::dds_::ProjectedMapsInfo_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void publish__ProjectedMapsInfo_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_dds_message_to_ros(
  const map_msgs::srv::dds_::ProjectedMapsInfo_Request_ & dds_message,
  map_msgs::srv::ProjectedMapsInfo_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern bool take__ProjectedMapsInfo_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_map_msgs
const char *
serialize__ProjectedMapsInfo_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_map_msgs
const char *
deserialize__ProjectedMapsInfo_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  map_msgs, srv,
  ProjectedMapsInfo_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "map_msgs/srv/projected_maps_info__struct.hpp"
// already included above
// #include "map_msgs/srv/dds_opensplice/ccpp_ProjectedMapsInfo_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace map_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void register_type__ProjectedMapsInfo_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_ros_message_to_dds(
  const map_msgs::srv::ProjectedMapsInfo_Response & ros_message,
  map_msgs::srv::dds_::ProjectedMapsInfo_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void publish__ProjectedMapsInfo_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_dds_message_to_ros(
  const map_msgs::srv::dds_::ProjectedMapsInfo_Response_ & dds_message,
  map_msgs::srv::ProjectedMapsInfo_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern bool take__ProjectedMapsInfo_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_map_msgs
const char *
serialize__ProjectedMapsInfo_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_map_msgs
const char *
deserialize__ProjectedMapsInfo_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  map_msgs, srv,
  ProjectedMapsInfo_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "map_msgs/srv/projected_maps_info__struct.hpp"
// already included above
// #include "map_msgs/srv/dds_opensplice/ccpp_ProjectedMapsInfo_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  map_msgs, srv,
  ProjectedMapsInfo)();

#ifdef __cplusplus
}
#endif
#endif  // MAP_MSGS__SRV__PROJECTED_MAPS_INFO__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
