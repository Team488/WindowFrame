// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\BoundedSequences.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_SEQUENCES__TRAITS_HPP_
#define TEST_MSGS__MSG__BOUNDED_SEQUENCES__TRAITS_HPP_

#include "test_msgs/msg/bounded_sequences__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_values'
#include "test_msgs/msg/basic_types__traits.hpp"
// Member 'constants_values'
#include "test_msgs/msg/constants__traits.hpp"
// Member 'defaults_values'
#include "test_msgs/msg/defaults__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::msg::BoundedSequences>()
{
  return "test_msgs::msg::BoundedSequences";
}

template<>
struct has_fixed_size<test_msgs::msg::BoundedSequences>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::BoundedSequences>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__BOUNDED_SEQUENCES__TRAITS_HPP_
