// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\PointField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_FIELD__TRAITS_HPP_
#define SENSOR_MSGS__MSG__POINT_FIELD__TRAITS_HPP_

#include "sensor_msgs/msg/point_field__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::PointField>()
{
  return "sensor_msgs::msg::PointField";
}

template<>
struct has_fixed_size<sensor_msgs::msg::PointField>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::PointField>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__POINT_FIELD__TRAITS_HPP_
