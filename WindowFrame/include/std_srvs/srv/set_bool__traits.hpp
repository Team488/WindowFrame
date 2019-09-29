// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv\SetBool.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__TRAITS_HPP_
#define STD_SRVS__SRV__SET_BOOL__TRAITS_HPP_

#include "std_srvs/srv/set_bool__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetBool_Request>()
{
  return "std_srvs::srv::SetBool_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_srvs::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetBool_Response>()
{
  return "std_srvs::srv::SetBool_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetBool>()
{
  return "std_srvs::srv::SetBool";
}

template<>
struct has_fixed_size<std_srvs::srv::SetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::SetBool_Request>::value &&
    has_fixed_size<std_srvs::srv::SetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::SetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::SetBool_Request>::value &&
    has_bounded_size<std_srvs::srv::SetBool_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__SET_BOOL__TRAITS_HPP_
