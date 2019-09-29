// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv\Empty.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__EMPTY__TRAITS_HPP_
#define STD_SRVS__SRV__EMPTY__TRAITS_HPP_

#include "std_srvs/srv/empty__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::Empty_Request>()
{
  return "std_srvs::srv::Empty_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_srvs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::Empty_Response>()
{
  return "std_srvs::srv::Empty_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_srvs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::Empty>()
{
  return "std_srvs::srv::Empty";
}

template<>
struct has_fixed_size<std_srvs::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::Empty_Request>::value &&
    has_fixed_size<std_srvs::srv::Empty_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::Empty>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::Empty_Request>::value &&
    has_bounded_size<std_srvs::srv::Empty_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__EMPTY__TRAITS_HPP_