// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\FluidPressure.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__FLUID_PRESSURE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__FLUID_PRESSURE__TRAITS_HPP_

#include "sensor_msgs/msg/fluid_pressure__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::FluidPressure>()
{
  return "sensor_msgs::msg::FluidPressure";
}

template<>
struct has_fixed_size<sensor_msgs::msg::FluidPressure>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::FluidPressure>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__FLUID_PRESSURE__TRAITS_HPP_
