// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/CorrevitPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_H_

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

/// Struct defined in msg/CorrevitPitchRoll in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__CorrevitPitchRoll
{
  std_msgs__msg__Header header;
  double pitch;
  double radius;
  double roll;
  double timestamp;
} irt_nav_msgs__msg__CorrevitPitchRoll;

// Struct for a sequence of irt_nav_msgs__msg__CorrevitPitchRoll.
typedef struct irt_nav_msgs__msg__CorrevitPitchRoll__Sequence
{
  irt_nav_msgs__msg__CorrevitPitchRoll * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__CorrevitPitchRoll__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_H_
