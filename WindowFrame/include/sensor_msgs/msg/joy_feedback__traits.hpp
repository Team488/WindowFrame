// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\JoyFeedback.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY_FEEDBACK__TRAITS_HPP_
#define SENSOR_MSGS__MSG__JOY_FEEDBACK__TRAITS_HPP_

#include "sensor_msgs/msg/joy_feedback__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::JoyFeedback>()
{
  return "sensor_msgs::msg::JoyFeedback";
}

template<>
struct has_fixed_size<sensor_msgs::msg::JoyFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_msgs::msg::JoyFeedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__JOY_FEEDBACK__TRAITS_HPP_