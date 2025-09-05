// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'vel'
// Member 'acc'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'pose_var'
// Member 'vel_var'
// Member 'acc_var'
// Member 'imu_bias'
// Member 'imu_bias_var'
// Member 'cbd'
// Member 'cbd_var'
// Member 'amb'
// Member 'amb_var'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FGOState in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__FGOState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist vel;
  geometry_msgs__msg__Twist acc;
  rosidl_runtime_c__double__Sequence pose_var;
  rosidl_runtime_c__double__Sequence vel_var;
  rosidl_runtime_c__double__Sequence acc_var;
  double heading;
  rosidl_runtime_c__double__Sequence imu_bias;
  rosidl_runtime_c__double__Sequence imu_bias_var;
  rosidl_runtime_c__double__Sequence cbd;
  rosidl_runtime_c__double__Sequence cbd_var;
  rosidl_runtime_c__uint32__Sequence amb;
  rosidl_runtime_c__double__Sequence amb_var;
} irt_nav_msgs__msg__FGOState;

// Struct for a sequence of irt_nav_msgs__msg__FGOState.
typedef struct irt_nav_msgs__msg__FGOState__Sequence
{
  irt_nav_msgs__msg__FGOState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__FGOState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_H_
