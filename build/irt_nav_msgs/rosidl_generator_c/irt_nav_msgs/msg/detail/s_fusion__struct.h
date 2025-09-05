// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_H_

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
// Member 'state'
// Member 'cov'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pva_geodetic'
#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.h"

/// Struct defined in msg/SFusion in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SFusion
{
  std_msgs__msg__Header header;
  double simulation_time;
  uint64_t counter;
  double tow;
  double filter_tow;
  uint64_t pps_counter;
  rosidl_runtime_c__double__Sequence state;
  rosidl_runtime_c__double__Sequence cov;
  uint16_t num_used_stat_ant1;
  uint16_t num_used_stat_ant2;
  uint64_t rtcm_counter;
  bool filter_inited_success;
  bool filter_inited;
  irt_nav_msgs__msg__PVAGeodetic pva_geodetic;
} irt_nav_msgs__msg__SFusion;

// Struct for a sequence of irt_nav_msgs__msg__SFusion.
typedef struct irt_nav_msgs__msg__SFusion__Sequence
{
  irt_nav_msgs__msg__SFusion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SFusion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_H_
