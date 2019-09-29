// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_

#include "visualization_msgs/msg/marker_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::msg::MarkerArray>()
{
  return "visualization_msgs::msg::MarkerArray";
}

template<>
struct has_fixed_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_
