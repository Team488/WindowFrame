// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unique_identifier_msgs:msg\UUID.idl
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_

#include "unique_identifier_msgs/msg/uuid__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unique_identifier_msgs::msg::UUID>()
{
  return "unique_identifier_msgs::msg::UUID";
}

template<>
struct has_fixed_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_
