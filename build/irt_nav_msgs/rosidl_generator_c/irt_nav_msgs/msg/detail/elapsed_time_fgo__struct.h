// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_H_

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

/// Struct defined in msg/ElapsedTimeFGO in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__ElapsedTimeFGO
{
  std_msgs__msg__Header header;
  double ts_start_construction;
  double ts_start_optimization;
  double duration_construction;
  double duration_optimization;
  uint16_t num_new_factors;
} irt_nav_msgs__msg__ElapsedTimeFGO;

// Struct for a sequence of irt_nav_msgs__msg__ElapsedTimeFGO.
typedef struct irt_nav_msgs__msg__ElapsedTimeFGO__Sequence
{
  irt_nav_msgs__msg__ElapsedTimeFGO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__ElapsedTimeFGO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_H_
