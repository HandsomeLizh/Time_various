// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_H_

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
// Member 'residuals'
#include "irt_nav_msgs/msg/detail/factor_residual__struct.h"

/// Struct defined in msg/FactorResiduals in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__FactorResiduals
{
  std_msgs__msg__Header header;
  irt_nav_msgs__msg__FactorResidual__Sequence residuals;
} irt_nav_msgs__msg__FactorResiduals;

// Struct for a sequence of irt_nav_msgs__msg__FactorResiduals.
typedef struct irt_nav_msgs__msg__FactorResiduals__Sequence
{
  irt_nav_msgs__msg__FactorResiduals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__FactorResiduals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_H_
