// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv\ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__PROJECTED_MAPS_INFO__TRAITS_HPP_
#define MAP_MSGS__SRV__PROJECTED_MAPS_INFO__TRAITS_HPP_

#include "map_msgs/srv/projected_maps_info__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo_Request>()
{
  return "map_msgs::srv::ProjectedMapsInfo_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo_Response>()
{
  return "map_msgs::srv::ProjectedMapsInfo_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo>()
{
  return "map_msgs::srv::ProjectedMapsInfo";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Request>::value &&
    has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Request>::value &&
    has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__PROJECTED_MAPS_INFO__TRAITS_HPP_