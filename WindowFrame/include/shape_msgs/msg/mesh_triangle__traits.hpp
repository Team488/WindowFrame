// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg\MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_

#include "shape_msgs/msg/mesh_triangle__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs::msg::MeshTriangle";
}

template<>
struct has_fixed_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_
