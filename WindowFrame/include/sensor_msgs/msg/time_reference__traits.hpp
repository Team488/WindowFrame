// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\TimeReference.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_

#include "sensor_msgs/msg/time_reference__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'time_ref'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::TimeReference>()
{
  return "sensor_msgs::msg::TimeReference";
}

template<>
struct has_fixed_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_
