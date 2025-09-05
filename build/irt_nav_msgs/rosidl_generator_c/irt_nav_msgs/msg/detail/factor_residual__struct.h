// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'factor_name'
// Member 'related_keys'
#include "rosidl_runtime_c/string.h"
// Member 'samples'
#include "irt_nav_msgs/msg/detail/residual_sample__struct.h"

/// Struct defined in msg/FactorResidual in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__FactorResidual
{
  rosidl_runtime_c__String factor_name;
  uint64_t current_state_key;
  rosidl_runtime_c__String__Sequence related_keys;
  irt_nav_msgs__msg__ResidualSample__Sequence samples;
} irt_nav_msgs__msg__FactorResidual;

// Struct for a sequence of irt_nav_msgs__msg__FactorResidual.
typedef struct irt_nav_msgs__msg__FactorResidual__Sequence
{
  irt_nav_msgs__msg__FactorResidual * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__FactorResidual__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_H_
