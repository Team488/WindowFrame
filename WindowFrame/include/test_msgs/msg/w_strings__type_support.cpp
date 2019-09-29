// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg\WStrings.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_msgs/msg/w_strings__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__WStrings__array_of_wstrings(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__WStrings__array_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::u16string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__array_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::u16string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__WStrings__bounded_sequence_of_wstrings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WStrings__bounded_sequence_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__bounded_sequence_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void resize_function__WStrings__bounded_sequence_of_wstrings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WStrings__unbounded_sequence_of_wstrings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WStrings__unbounded_sequence_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__unbounded_sequence_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void resize_function__WStrings__unbounded_sequence_of_wstrings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WStrings_message_member_array[4] = {
  {
    "wstring_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::WStrings, wstring_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "array_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::WStrings, array_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__array_of_wstrings,  // size() function pointer
    get_const_function__WStrings__array_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__array_of_wstrings,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::WStrings, bounded_sequence_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__bounded_sequence_of_wstrings,  // size() function pointer
    get_const_function__WStrings__bounded_sequence_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__bounded_sequence_of_wstrings,  // get(index) function pointer
    resize_function__WStrings__bounded_sequence_of_wstrings  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::WStrings, unbounded_sequence_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__unbounded_sequence_of_wstrings,  // size() function pointer
    get_const_function__WStrings__unbounded_sequence_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__unbounded_sequence_of_wstrings,  // get(index) function pointer
    resize_function__WStrings__unbounded_sequence_of_wstrings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WStrings_message_members = {
  "test_msgs::msg",  // message namespace
  "WStrings",  // message name
  4,  // number of fields
  sizeof(test_msgs::msg::WStrings),
  WStrings_message_member_array  // message members
};

static const rosidl_message_type_support_t WStrings_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WStrings_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::WStrings>()
{
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::WStrings_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, msg, WStrings)() {
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::WStrings_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
