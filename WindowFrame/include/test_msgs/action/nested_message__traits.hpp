// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:action\NestedMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__TRAITS_HPP_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__TRAITS_HPP_

#include "test_msgs/action/nested_message__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'nested_field_no_pkg'
#include "test_msgs/msg/builtins__traits.hpp"
// Member 'nested_field'
#include "test_msgs/msg/basic_types__traits.hpp"
// Member 'nested_different_pkg'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_Goal>()
{
  return "test_msgs::action::NestedMessage_Goal";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<test_msgs::msg::BasicTypes>::value && has_fixed_size<test_msgs::msg::Builtins>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<test_msgs::msg::BasicTypes>::value && has_bounded_size<test_msgs::msg::Builtins>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'nested_field_no_pkg'
// already included above
// #include "test_msgs/msg/builtins__traits.hpp"
// Member 'nested_field'
// already included above
// #include "test_msgs/msg/basic_types__traits.hpp"
// Member 'nested_different_pkg'
// already included above
// #include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_Result>()
{
  return "test_msgs::action::NestedMessage_Result";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<test_msgs::msg::BasicTypes>::value && has_fixed_size<test_msgs::msg::Builtins>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<test_msgs::msg::BasicTypes>::value && has_bounded_size<test_msgs::msg::Builtins>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'nested_field_no_pkg'
// already included above
// #include "test_msgs/msg/builtins__traits.hpp"
// Member 'nested_field'
// already included above
// #include "test_msgs/msg/basic_types__traits.hpp"
// Member 'nested_different_pkg'
// already included above
// #include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_Feedback>()
{
  return "test_msgs::action::NestedMessage_Feedback";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<test_msgs::msg::BasicTypes>::value && has_fixed_size<test_msgs::msg::Builtins>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<test_msgs::msg::BasicTypes>::value && has_bounded_size<test_msgs::msg::Builtins>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "test_msgs/action/nested_message__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_SendGoal_Request>()
{
  return "test_msgs::action::NestedMessage_SendGoal_Request";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<test_msgs::action::NestedMessage_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<test_msgs::action::NestedMessage_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_SendGoal_Response>()
{
  return "test_msgs::action::NestedMessage_SendGoal_Response";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_SendGoal>()
{
  return "test_msgs::action::NestedMessage_SendGoal";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::action::NestedMessage_SendGoal_Request>::value &&
    has_fixed_size<test_msgs::action::NestedMessage_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::action::NestedMessage_SendGoal_Request>::value &&
    has_bounded_size<test_msgs::action::NestedMessage_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_GetResult_Request>()
{
  return "test_msgs::action::NestedMessage_GetResult_Request";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "test_msgs/action/nested_message__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_GetResult_Response>()
{
  return "test_msgs::action::NestedMessage_GetResult_Response";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<test_msgs::action::NestedMessage_Result>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<test_msgs::action::NestedMessage_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_GetResult>()
{
  return "test_msgs::action::NestedMessage_GetResult";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::action::NestedMessage_GetResult_Request>::value &&
    has_fixed_size<test_msgs::action::NestedMessage_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::action::NestedMessage_GetResult_Request>::value &&
    has_bounded_size<test_msgs::action::NestedMessage_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "test_msgs/action/nested_message__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::action::NestedMessage_FeedbackMessage>()
{
  return "test_msgs::action::NestedMessage_FeedbackMessage";
}

template<>
struct has_fixed_size<test_msgs::action::NestedMessage_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<test_msgs::action::NestedMessage_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<test_msgs::action::NestedMessage_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__TRAITS_HPP_
