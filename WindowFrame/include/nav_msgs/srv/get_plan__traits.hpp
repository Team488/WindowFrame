// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:srv\GetPlan.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_
#define NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_

#include "nav_msgs/srv/get_plan__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetPlan_Request>()
{
  return "nav_msgs::srv::GetPlan_Request";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "nav_msgs/msg/path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetPlan_Response>()
{
  return "nav_msgs::srv::GetPlan_Response";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetPlan>()
{
  return "nav_msgs::srv::GetPlan";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::GetPlan_Request>::value &&
    has_fixed_size<nav_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<nav_msgs::srv::GetPlan_Request>::value &&
    has_bounded_size<nav_msgs::srv::GetPlan_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_
