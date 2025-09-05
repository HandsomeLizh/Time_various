// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GROUND_TRUTH'.
enum
{
  irt_nav_msgs__msg__ResidualSample__GROUND_TRUTH = 0
};

/// Constant 'ESTIMATE'.
enum
{
  irt_nav_msgs__msg__ResidualSample__ESTIMATE = 1
};

/// Constant 'SAMPLED_FROM_GROUND_TRUTH'.
enum
{
  irt_nav_msgs__msg__ResidualSample__SAMPLED_FROM_GROUND_TRUTH = 2
};

/// Constant 'SAMPLED_FROM_ESTIMATE'.
enum
{
  irt_nav_msgs__msg__ResidualSample__SAMPLED_FROM_ESTIMATE = 3
};

// Include directives for member types
// Member 'whitened_error'
// Member 'unwhitened_error'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ResidualSample in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__ResidualSample
{
  uint64_t id;
  uint8_t type;
  rosidl_runtime_c__double__Sequence whitened_error;
  rosidl_runtime_c__double__Sequence unwhitened_error;
  double loss_error;
  double noise_model_weight;
} irt_nav_msgs__msg__ResidualSample;

// Struct for a sequence of irt_nav_msgs__msg__ResidualSample.
typedef struct irt_nav_msgs__msg__ResidualSample__Sequence
{
  irt_nav_msgs__msg__ResidualSample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__ResidualSample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_H_
