// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_H_

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
// Member 'ant_main_labels'
// Member 'ant_aux_labels'
#include "irt_nav_msgs/msg/detail/sat_label__struct.h"
// Member 'faulty_prn_main'
// Member 'faulty_prn_aux'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'ant_pos'
// Member 'ant_vel'
// Member 'gt_pos'
// Member 'gt_vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'environment'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GNSSLabeling in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GNSSLabeling
{
  std_msgs__msg__Header header;
  int64_t related_state_timestamp_nanosec;
  uint64_t counter;
  double time_receive;
  /// solution type of the pvt: 0 = fixed 1 = float 2 = single
  uint8_t solution_type;
  irt_nav_msgs__msg__SatLabel__Sequence ant_main_labels;
  irt_nav_msgs__msg__SatLabel__Sequence ant_aux_labels;
  rosidl_runtime_c__uint8__Sequence faulty_prn_main;
  rosidl_runtime_c__uint8__Sequence faulty_prn_aux;
  bool gt_available;
  /// calculated data from fgo
  geometry_msgs__msg__Vector3 ant_pos;
  geometry_msgs__msg__Vector3 ant_vel;
  geometry_msgs__msg__Vector3 gt_pos;
  geometry_msgs__msg__Vector3 gt_vel;
  double clock_bias;
  double clock_drift;
  double gt_clock_bias;
  double gt_clock_drift;
  /// calculated data from VBI
  rosidl_runtime_c__String environment;
} irt_nav_msgs__msg__GNSSLabeling;

// Struct for a sequence of irt_nav_msgs__msg__GNSSLabeling.
typedef struct irt_nav_msgs__msg__GNSSLabeling__Sequence
{
  irt_nav_msgs__msg__GNSSLabeling * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GNSSLabeling__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_H_
