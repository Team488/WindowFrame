// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:action\LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__LOOKUP_TRANSFORM__TRAITS_HPP_
#define TF2_MSGS__ACTION__LOOKUP_TRANSFORM__TRAITS_HPP_

#include "tf2_msgs/action/lookup_transform__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'source_time'
// Member 'target_time'
#include "builtin_interfaces/msg/time__traits.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Goal>()
{
  return "tf2_msgs::action::LookupTransform_Goal";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/transform_stamped__traits.hpp"
// Member 'error'
#include "tf2_msgs/msg/tf2_error__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Result>()
{
  return "tf2_msgs::action::LookupTransform_Result";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value && has_fixed_size<tf2_msgs::msg::TF2Error>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value && has_bounded_size<tf2_msgs::msg::TF2Error>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Feedback>()
{
  return "tf2_msgs::action::LookupTransform_Feedback";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "tf2_msgs/action/lookup_transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal_Request>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal_Request";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal_Response>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal_Response";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Request>::value &&
    has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Request>::value &&
    has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Response>::value
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
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult_Request>()
{
  return "tf2_msgs::action::LookupTransform_GetResult_Request";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_msgs/action/lookup_transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult_Response>()
{
  return "tf2_msgs::action::LookupTransform_GetResult_Response";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Result>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult>()
{
  return "tf2_msgs::action::LookupTransform_GetResult";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Request>::value &&
    has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Request>::value &&
    has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Response>::value
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
// #include "tf2_msgs/action/lookup_transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_FeedbackMessage>()
{
  return "tf2_msgs::action::LookupTransform_FeedbackMessage";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__ACTION__LOOKUP_TRANSFORM__TRAITS_HPP_
