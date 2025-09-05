// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GaussianMixture.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'factor'
// Member 'environment'
#include "rosidl_runtime_c/string.h"
// Member 'residuals'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'gaussian'
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.h"

/// Struct defined in msg/GaussianMixture in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GaussianMixture
{
  std_msgs__msg__Header header;
  double tow;
  uint32_t sat;
  rosidl_runtime_c__String factor;
  rosidl_runtime_c__String environment;
  double runtime;
  uint8_t dim;
  rosidl_runtime_c__double__Sequence residuals;
  irt_nav_msgs__msg__GaussianComponent__Sequence gaussian;
} irt_nav_msgs__msg__GaussianMixture;

// Struct for a sequence of irt_nav_msgs__msg__GaussianMixture.
typedef struct irt_nav_msgs__msg__GaussianMixture__Sequence
{
  irt_nav_msgs__msg__GaussianMixture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GaussianMixture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_H_
