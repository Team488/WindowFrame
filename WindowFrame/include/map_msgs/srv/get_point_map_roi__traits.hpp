// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv\GetPointMapROI.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_
#define MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_

#include "map_msgs/srv/get_point_map_roi__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI_Request>()
{
  return "map_msgs::srv::GetPointMapROI_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'sub_map'
#include "sensor_msgs/msg/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI_Response>()
{
  return "map_msgs::srv::GetPointMapROI_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI>()
{
  return "map_msgs::srv::GetPointMapROI";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_fixed_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_bounded_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_