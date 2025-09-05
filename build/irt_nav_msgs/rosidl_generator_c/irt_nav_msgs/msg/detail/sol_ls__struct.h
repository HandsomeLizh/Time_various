// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SolLS in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SolLS
{
  double llh[3];
  double vel_ned[3];
  double receiver_clock_bias;
  double receiver_clock_drift;
  double dop[2];
  bool available;
} irt_nav_msgs__msg__SolLS;

// Struct for a sequence of irt_nav_msgs__msg__SolLS.
typedef struct irt_nav_msgs__msg__SolLS__Sequence
{
  irt_nav_msgs__msg__SolLS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SolLS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_H_
