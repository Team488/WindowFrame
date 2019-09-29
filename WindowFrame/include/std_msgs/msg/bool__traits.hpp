// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg\Bool.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__BOOL__TRAITS_HPP_
#define STD_MSGS__MSG__BOOL__TRAITS_HPP_

#include "std_msgs/msg/bool__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Bool>()
{
  return "std_msgs::msg::Bool";
}

template<>
struct has_fixed_size<std_msgs::msg::Bool>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_msgs::msg::Bool>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__BOOL__TRAITS_HPP_
