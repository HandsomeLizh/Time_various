// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/RTCML1E1.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__STRUCT_H_

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

/// Struct defined in msg/RTCML1E1 in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__RTCML1E1
{
  std_msgs__msg__Header header;
  double tow;
  double base[3];
  uint8_t svid[40];
  double pseudorange[40];
  uint8_t type[40];
  double carrier[40];
  double cn0[40];
  uint16_t locktime[40];
  uint16_t lli[40];
  uint16_t reference_station_id;
} irt_nav_msgs__msg__RTCML1E1;

// Struct for a sequence of irt_nav_msgs__msg__RTCML1E1.
typedef struct irt_nav_msgs__msg__RTCML1E1__Sequence
{
  irt_nav_msgs__msg__RTCML1E1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__RTCML1E1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__STRUCT_H_
