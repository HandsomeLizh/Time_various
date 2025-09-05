// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/Correvit.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_H_

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

/// Struct defined in msg/Correvit in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__Correvit
{
  std_msgs__msg__Header header;
  double angle_correvit;
  double vel_x_correvit;
  double vel_y_correvit;
  double vel_correvit;
} irt_nav_msgs__msg__Correvit;

// Struct for a sequence of irt_nav_msgs__msg__Correvit.
typedef struct irt_nav_msgs__msg__Correvit__Sequence
{
  irt_nav_msgs__msg__Correvit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__Correvit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_H_
