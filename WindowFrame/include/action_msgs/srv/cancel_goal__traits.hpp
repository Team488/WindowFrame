// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_msgs:srv\CancelGoal.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__TRAITS_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__TRAITS_HPP_

#include "action_msgs/srv/cancel_goal__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/goal_info__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::srv::CancelGoal_Request>()
{
  return "action_msgs::srv::CancelGoal_Request";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_msgs::msg::GoalInfo>::value> {};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_msgs::msg::GoalInfo>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::srv::CancelGoal_Response>()
{
  return "action_msgs::srv::CancelGoal_Response";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::srv::CancelGoal>()
{
  return "action_msgs::srv::CancelGoal";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_msgs::srv::CancelGoal_Request>::value &&
    has_fixed_size<action_msgs::srv::CancelGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_msgs::srv::CancelGoal_Request>::value &&
    has_bounded_size<action_msgs::srv::CancelGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__TRAITS_HPP_
