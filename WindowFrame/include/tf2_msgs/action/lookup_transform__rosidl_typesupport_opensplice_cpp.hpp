// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef TF2_MSGS__ACTION__LOOKUP_TRANSFORM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TF2_MSGS__ACTION__LOOKUP_TRANSFORM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "tf2_msgs/action/lookup_transform__struct.hpp"
#include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_Goal(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_Goal & ros_message,
  tf2_msgs::action::dds_::LookupTransform_Goal_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_Goal(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_Goal_ & dds_message,
  tf2_msgs::action::LookupTransform_Goal & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_Goal(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_Goal(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_Goal(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_Goal)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_Result(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_Result & ros_message,
  tf2_msgs::action::dds_::LookupTransform_Result_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_Result(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_Result_ & dds_message,
  tf2_msgs::action::LookupTransform_Result & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_Result(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_Result(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_Result(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_Result)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_Feedback(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_Feedback & ros_message,
  tf2_msgs::action::dds_::LookupTransform_Feedback_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_Feedback(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_Feedback_ & dds_message,
  tf2_msgs::action::LookupTransform_Feedback & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_Feedback(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_Feedback(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_Feedback)();

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
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_SendGoal_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_SendGoal_Request & ros_message,
  tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_SendGoal_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_ & dds_message,
  tf2_msgs::action::LookupTransform_SendGoal_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_SendGoal_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_SendGoal_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_SendGoal_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_SendGoal_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_SendGoal_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_SendGoal_Response & ros_message,
  tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_SendGoal_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_ & dds_message,
  tf2_msgs::action::LookupTransform_SendGoal_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_SendGoal_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_SendGoal_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_SendGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_SendGoal_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_SendGoal)();

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
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_GetResult_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_GetResult_Request & ros_message,
  tf2_msgs::action::dds_::LookupTransform_GetResult_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_GetResult_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_GetResult_Request_ & dds_message,
  tf2_msgs::action::LookupTransform_GetResult_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_GetResult_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_GetResult_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_GetResult_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_GetResult_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_GetResult_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_GetResult_Response & ros_message,
  tf2_msgs::action::dds_::LookupTransform_GetResult_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_GetResult_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_GetResult_Response_ & dds_message,
  tf2_msgs::action::LookupTransform_GetResult_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_GetResult_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_GetResult_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_GetResult_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_GetResult_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_GetResult)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tf2_msgs/action/lookup_transform__struct.hpp"
// already included above
// #include "tf2_msgs/action/dds_opensplice/ccpp_LookupTransform_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__LookupTransform_FeedbackMessage(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::action::LookupTransform_FeedbackMessage & ros_message,
  tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__LookupTransform_FeedbackMessage(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_ & dds_message,
  tf2_msgs::action::LookupTransform_FeedbackMessage & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__LookupTransform_FeedbackMessage(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
serialize__LookupTransform_FeedbackMessage(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tf2_msgs
const char *
deserialize__LookupTransform_FeedbackMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tf2_msgs, action,
  LookupTransform_FeedbackMessage)();

#ifdef __cplusplus
}
#endif
#endif  // TF2_MSGS__ACTION__LOOKUP_TRANSFORM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
