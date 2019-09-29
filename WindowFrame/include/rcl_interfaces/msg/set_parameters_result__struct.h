// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg\SetParametersResult.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__SET_PARAMETERS_RESULT__STRUCT_H_
#define RCL_INTERFACES__MSG__SET_PARAMETERS_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/SetParametersResult in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__SetParametersResult
{
  bool successful;
  rosidl_generator_c__String reason;
} rcl_interfaces__msg__SetParametersResult;

// Struct for a sequence of rcl_interfaces__msg__SetParametersResult.
typedef struct rcl_interfaces__msg__SetParametersResult__Sequence
{
  rcl_interfaces__msg__SetParametersResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__SetParametersResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__SET_PARAMETERS_RESULT__STRUCT_H_
