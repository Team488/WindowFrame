// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:srv\ListParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__LIST_PARAMETERS__TRAITS_HPP_
#define RCL_INTERFACES__SRV__LIST_PARAMETERS__TRAITS_HPP_

#include "rcl_interfaces/srv/list_parameters__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::ListParameters_Request>()
{
  return "rcl_interfaces::srv::ListParameters_Request";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::ListParameters_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::srv::ListParameters_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "rcl_interfaces/msg/list_parameters_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::ListParameters_Response>()
{
  return "rcl_interfaces::srv::ListParameters_Response";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::ListParameters_Response>
  : std::integral_constant<bool, has_fixed_size<rcl_interfaces::msg::ListParametersResult>::value> {};

template<>
struct has_bounded_size<rcl_interfaces::srv::ListParameters_Response>
  : std::integral_constant<bool, has_bounded_size<rcl_interfaces::msg::ListParametersResult>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::ListParameters>()
{
  return "rcl_interfaces::srv::ListParameters";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::ListParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<rcl_interfaces::srv::ListParameters_Request>::value &&
    has_fixed_size<rcl_interfaces::srv::ListParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<rcl_interfaces::srv::ListParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<rcl_interfaces::srv::ListParameters_Request>::value &&
    has_bounded_size<rcl_interfaces::srv::ListParameters_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__SRV__LIST_PARAMETERS__TRAITS_HPP_