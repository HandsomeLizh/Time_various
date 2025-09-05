// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_H_

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

/// Struct defined in msg/DumperOdom in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__DumperOdom
{
  std_msgs__msg__Header header;
  double timestamp;
  double wheelspeed_count_fl;
  double wheelspeed_count_fr;
  double wheelspeed_count_rl;
  double wheelspeed_count_rr;
  double bin_position;
  double bin_tilt;
  double boost;
  double brake;
  double direction_value;
  double engine_speed;
  double fuel;
  double handbreak;
  double horn;
  double steering_angle;
  double steering_rate;
  double steering_switch;
  double throttle;
} irt_nav_msgs__msg__DumperOdom;

// Struct for a sequence of irt_nav_msgs__msg__DumperOdom.
typedef struct irt_nav_msgs__msg__DumperOdom__Sequence
{
  irt_nav_msgs__msg__DumperOdom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__DumperOdom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_H_
