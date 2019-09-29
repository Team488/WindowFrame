// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv\SaveMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SAVE_MAP__TRAITS_HPP_
#define MAP_MSGS__SRV__SAVE_MAP__TRAITS_HPP_

#include "map_msgs/srv/save_map__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'filename'
#include "std_msgs/msg/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::SaveMap_Request>()
{
  return "map_msgs::srv::SaveMap_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<map_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::SaveMap_Response>()
{
  return "map_msgs::srv::SaveMap_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::SaveMap>()
{
  return "map_msgs::srv::SaveMap";
}

template<>
struct has_fixed_size<map_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::SaveMap_Request>::value &&
    has_fixed_size<map_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::SaveMap_Request>::value &&
    has_bounded_size<map_msgs::srv::SaveMap_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__SAVE_MAP__TRAITS_HPP_
