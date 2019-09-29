// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stereo_msgs:msg\DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_

#include "stereo_msgs/msg/disparity_image__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"
// Member 'valid_window'
#include "sensor_msgs/msg/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stereo_msgs::msg::DisparityImage>()
{
  return "stereo_msgs::msg::DisparityImage";
}

template<>
struct has_fixed_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_
