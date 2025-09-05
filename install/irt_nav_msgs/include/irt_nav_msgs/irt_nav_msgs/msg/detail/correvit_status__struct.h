// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_H_

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

/// Struct defined in msg/CorrevitStatus in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__CorrevitStatus
{
  std_msgs__msg__Header header;
  double angle_vel_correction;
  double angle_switch_off;
  double direction;
  double direction_head;
  double direction_head_valid;
  double direction_motion;
  double direction_mounting;
  double filter_off_on;
  double filter_setting;
  double head_status;
  double lamp_current;
  double lamp_current_control;
  double sensor_id;
  double temperature;
  double temperature_ok;
} irt_nav_msgs__msg__CorrevitStatus;

// Struct for a sequence of irt_nav_msgs__msg__CorrevitStatus.
typedef struct irt_nav_msgs__msg__CorrevitStatus__Sequence
{
  irt_nav_msgs__msg__CorrevitStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__CorrevitStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_H_
