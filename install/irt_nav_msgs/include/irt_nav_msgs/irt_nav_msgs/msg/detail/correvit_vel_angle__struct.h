// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/CorrevitVelAngle.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__STRUCT_H_

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

/// Struct defined in msg/CorrevitVelAngle in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__CorrevitVelAngle
{
  std_msgs__msg__Header header;
  double angle;
  double vel;
  double vel_x;
  double vel_y;
} irt_nav_msgs__msg__CorrevitVelAngle;

// Struct for a sequence of irt_nav_msgs__msg__CorrevitVelAngle.
typedef struct irt_nav_msgs__msg__CorrevitVelAngle__Sequence
{
  irt_nav_msgs__msg__CorrevitVelAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__CorrevitVelAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__STRUCT_H_
