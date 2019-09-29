// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:srv\SetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__SET_MAP__TRAITS_HPP_
#define NAV_MSGS__SRV__SET_MAP__TRAITS_HPP_

#include "nav_msgs/srv/set_map__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/occupancy_grid__traits.hpp"
// Member 'initial_pose'
#include "geometry_msgs/msg/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::SetMap_Request>()
{
  return "nav_msgs::srv::SetMap_Request";
}

template<>
struct has_fixed_size<nav_msgs::srv::SetMap_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::SetMap_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::SetMap_Response>()
{
  return "nav_msgs::srv::SetMap_Response";
}

template<>
struct has_fixed_size<nav_msgs::srv::SetMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav_msgs::srv::SetMap_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::SetMap>()
{
  return "nav_msgs::srv::SetMap";
}

template<>
struct has_fixed_size<nav_msgs::srv::SetMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::SetMap_Request>::value &&
    has_fixed_size<nav_msgs::srv::SetMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav_msgs::srv::SetMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav_msgs::srv::SetMap_Request>::value &&
    has_bounded_size<nav_msgs::srv::SetMap_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__SET_MAP__TRAITS_HPP_
