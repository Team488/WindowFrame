// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "move_base_msgs/action/move_base__struct.hpp"
#include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_Goal(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Goal & ros_message,
  move_base_msgs::action::dds_::MoveBase_Goal_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_Goal(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Goal_ & dds_message,
  move_base_msgs::action::MoveBase_Goal & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_Goal(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_Goal(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_Goal(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_Goal)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_Result(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Result & ros_message,
  move_base_msgs::action::dds_::MoveBase_Result_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_Result(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Result_ & dds_message,
  move_base_msgs::action::MoveBase_Result & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_Result(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_Result(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_Result(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_Result)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_Feedback(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Feedback & ros_message,
  move_base_msgs::action::dds_::MoveBase_Feedback_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_Feedback(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Feedback_ & dds_message,
  move_base_msgs::action::MoveBase_Feedback & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_Feedback(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_Feedback(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_Feedback)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_SendGoal_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_SendGoal_Request & ros_message,
  move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_SendGoal_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ & dds_message,
  move_base_msgs::action::MoveBase_SendGoal_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_SendGoal_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_SendGoal_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_SendGoal_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_SendGoal_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_SendGoal_Response & ros_message,
  move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_SendGoal_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ & dds_message,
  move_base_msgs::action::MoveBase_SendGoal_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_SendGoal_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_SendGoal_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_SendGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_GetResult_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_GetResult_Request & ros_message,
  move_base_msgs::action::dds_::MoveBase_GetResult_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_GetResult_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_GetResult_Request_ & dds_message,
  move_base_msgs::action::MoveBase_GetResult_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_GetResult_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_GetResult_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_GetResult_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_GetResult_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_GetResult_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_GetResult_Response & ros_message,
  move_base_msgs::action::dds_::MoveBase_GetResult_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_GetResult_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_GetResult_Response_ & dds_message,
  move_base_msgs::action::MoveBase_GetResult_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_GetResult_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_GetResult_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_GetResult_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_GetResult_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_GetResult)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "move_base_msgs/action/move_base__struct.hpp"
// already included above
// #include "move_base_msgs/action/dds_opensplice/ccpp_MoveBase_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace move_base_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void register_type__MoveBase_FeedbackMessage(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_FeedbackMessage & ros_message,
  move_base_msgs::action::dds_::MoveBase_FeedbackMessage_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void publish__MoveBase_FeedbackMessage(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern void convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_FeedbackMessage_ & dds_message,
  move_base_msgs::action::MoveBase_FeedbackMessage & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
extern bool take__MoveBase_FeedbackMessage(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
serialize__MoveBase_FeedbackMessage(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_move_base_msgs
const char *
deserialize__MoveBase_FeedbackMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  move_base_msgs, action,
  MoveBase_FeedbackMessage)();

#ifdef __cplusplus
}
#endif
#endif  // MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
