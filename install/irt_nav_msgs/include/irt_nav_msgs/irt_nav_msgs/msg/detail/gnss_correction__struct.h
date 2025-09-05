// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GNSSCorrection.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GNSSCorrection in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GNSSCorrection
{
  uint16_t prn;
  double psr_correction;
} irt_nav_msgs__msg__GNSSCorrection;

// Struct for a sequence of irt_nav_msgs__msg__GNSSCorrection.
typedef struct irt_nav_msgs__msg__GNSSCorrection__Sequence
{
  irt_nav_msgs__msg__GNSSCorrection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GNSSCorrection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_H_
