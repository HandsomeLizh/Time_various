// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SimulationTime.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__STRUCT_H_

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

/// Struct defined in msg/SimulationTime in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SimulationTime
{
  std_msgs__msg__Header header;
  double sim_time;
} irt_nav_msgs__msg__SimulationTime;

// Struct for a sequence of irt_nav_msgs__msg__SimulationTime.
typedef struct irt_nav_msgs__msg__SimulationTime__Sequence
{
  irt_nav_msgs__msg__SimulationTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SimulationTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__STRUCT_H_
