// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from composition_interfaces:srv\ListNodes.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__LIST_NODES__TRAITS_HPP_
#define COMPOSITION_INTERFACES__SRV__LIST_NODES__TRAITS_HPP_

#include "composition_interfaces/srv/list_nodes__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Request>()
{
  return "composition_interfaces::srv::ListNodes_Request";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Response>()
{
  return "composition_interfaces::srv::ListNodes_Response";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes>()
{
  return "composition_interfaces::srv::ListNodes";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_fixed_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_bounded_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION_INTERFACES__SRV__LIST_NODES__TRAITS_HPP_
