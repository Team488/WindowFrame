// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:srv\GetParameterTypes.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TRAITS_HPP_
#define RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TRAITS_HPP_

#include "rcl_interfaces/srv/get_parameter_types__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::GetParameterTypes_Request>()
{
  return "rcl_interfaces::srv::GetParameterTypes_Request";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::GetParameterTypes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::srv::GetParameterTypes_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::GetParameterTypes_Response>()
{
  return "rcl_interfaces::srv::GetParameterTypes_Response";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::GetParameterTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::srv::GetParameterTypes_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::srv::GetParameterTypes>()
{
  return "rcl_interfaces::srv::GetParameterTypes";
}

template<>
struct has_fixed_size<rcl_interfaces::srv::GetParameterTypes>
  : std::integral_constant<
    bool,
    has_fixed_size<rcl_interfaces::srv::GetParameterTypes_Request>::value &&
    has_fixed_size<rcl_interfaces::srv::GetParameterTypes_Response>::value
  >
{
};

template<>
struct has_bounded_size<rcl_interfaces::srv::GetParameterTypes>
  : std::integral_constant<
    bool,
    has_bounded_size<rcl_interfaces::srv::GetParameterTypes_Request>::value &&
    has_bounded_size<rcl_interfaces::srv::GetParameterTypes_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TRAITS_HPP_