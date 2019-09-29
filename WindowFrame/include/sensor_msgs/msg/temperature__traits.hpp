// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\Temperature.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__TEMPERATURE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__TEMPERATURE__TRAITS_HPP_

#include "sensor_msgs/msg/temperature__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::Temperature>()
{
  return "sensor_msgs::msg::Temperature";
}

template<>
struct has_fixed_size<sensor_msgs::msg::Temperature>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::Temperature>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__TEMPERATURE__TRAITS_HPP_
