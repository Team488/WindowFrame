// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg\Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__TRAITS_HPP_
#define STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__TRAITS_HPP_

#include "std_msgs/msg/float64_multi_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Float64MultiArray>()
{
  return "std_msgs::msg::Float64MultiArray";
}

template<>
struct has_fixed_size<std_msgs::msg::Float64MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Float64MultiArray>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__TRAITS_HPP_