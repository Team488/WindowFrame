// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\ImageMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__IMAGE_MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__IMAGE_MARKER__TRAITS_HPP_

#include "visualization_msgs/msg/image_marker__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/point__traits.hpp"
// Member 'outline_color'
// Member 'fill_color'
#include "std_msgs/msg/color_rgba__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::msg::ImageMarker>()
{
  return "visualization_msgs::msg::ImageMarker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::ImageMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::ImageMarker>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__IMAGE_MARKER__TRAITS_HPP_