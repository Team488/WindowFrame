// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from logging_demo:srv\ConfigLogger.idl
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_

#include "logging_demo/srv/config_logger__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger_Request>()
{
  return "logging_demo::srv::ConfigLogger_Request";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger_Response>()
{
  return "logging_demo::srv::ConfigLogger_Response";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger>()
{
  return "logging_demo::srv::ConfigLogger";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_fixed_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_fixed_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_bounded_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_bounded_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_
