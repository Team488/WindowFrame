// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg\Pose2D.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE2_D__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__POSE2_D__TRAITS_HPP_

#include "geometry_msgs/msg/pose2_d__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Pose2D>()
{
  return "geometry_msgs::msg::Pose2D";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Pose2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Pose2D>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__POSE2_D__TRAITS_HPP_
