// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg\IntegerRange.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__INTEGER_RANGE__TRAITS_HPP_
#define RCL_INTERFACES__MSG__INTEGER_RANGE__TRAITS_HPP_

#include "rcl_interfaces/msg/integer_range__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::msg::IntegerRange>()
{
  return "rcl_interfaces::msg::IntegerRange";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::IntegerRange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::IntegerRange>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__INTEGER_RANGE__TRAITS_HPP_