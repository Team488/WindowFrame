// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef COMPOSITION_INTERFACES__SRV__LIST_NODES__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define COMPOSITION_INTERFACES__SRV__LIST_NODES__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "composition_interfaces/srv/list_nodes__struct.hpp"
#include "composition_interfaces/srv/dds_opensplice/ccpp_ListNodes_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace composition_interfaces
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void register_type__ListNodes_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void convert_ros_message_to_dds(
  const composition_interfaces::srv::ListNodes_Request & ros_message,
  composition_interfaces::srv::dds_::ListNodes_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void publish__ListNodes_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void convert_dds_message_to_ros(
  const composition_interfaces::srv::dds_::ListNodes_Request_ & dds_message,
  composition_interfaces::srv::ListNodes_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern bool take__ListNodes_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_composition_interfaces
const char *
serialize__ListNodes_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_composition_interfaces
const char *
deserialize__ListNodes_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace composition_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  composition_interfaces, srv,
  ListNodes_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "composition_interfaces/srv/list_nodes__struct.hpp"
// already included above
// #include "composition_interfaces/srv/dds_opensplice/ccpp_ListNodes_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace composition_interfaces
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void register_type__ListNodes_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void convert_ros_message_to_dds(
  const composition_interfaces::srv::ListNodes_Response & ros_message,
  composition_interfaces::srv::dds_::ListNodes_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void publish__ListNodes_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern void convert_dds_message_to_ros(
  const composition_interfaces::srv::dds_::ListNodes_Response_ & dds_message,
  composition_interfaces::srv::ListNodes_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
extern bool take__ListNodes_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_composition_interfaces
const char *
serialize__ListNodes_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_composition_interfaces
const char *
deserialize__ListNodes_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace composition_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  composition_interfaces, srv,
  ListNodes_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "composition_interfaces/srv/list_nodes__struct.hpp"
// already included above
// #include "composition_interfaces/srv/dds_opensplice/ccpp_ListNodes_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  composition_interfaces, srv,
  ListNodes)();

#ifdef __cplusplus
}
#endif
#endif  // COMPOSITION_INTERFACES__SRV__LIST_NODES__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
