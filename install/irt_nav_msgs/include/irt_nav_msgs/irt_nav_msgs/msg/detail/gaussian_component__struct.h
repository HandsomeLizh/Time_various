// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mean'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GaussianComponent in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GaussianComponent
{
  double weight;
  rosidl_runtime_c__double__Sequence mean;
  rosidl_runtime_c__double__Sequence covariance;
} irt_nav_msgs__msg__GaussianComponent;

// Struct for a sequence of irt_nav_msgs__msg__GaussianComponent.
typedef struct irt_nav_msgs__msg__GaussianComponent__Sequence
{
  irt_nav_msgs__msg__GaussianComponent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GaussianComponent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_H_
