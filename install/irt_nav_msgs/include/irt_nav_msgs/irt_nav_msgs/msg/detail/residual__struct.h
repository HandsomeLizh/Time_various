// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/Residual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Residual in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__Residual
{
  std_msgs__msg__Header header;
  double tow;
  uint32_t sat;
  rosidl_runtime_c__String factor;
  bool outlier;
  rosidl_runtime_c__double__Sequence data;
} irt_nav_msgs__msg__Residual;

// Struct for a sequence of irt_nav_msgs__msg__Residual.
typedef struct irt_nav_msgs__msg__Residual__Sequence
{
  irt_nav_msgs__msg__Residual * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__Residual__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_H_
