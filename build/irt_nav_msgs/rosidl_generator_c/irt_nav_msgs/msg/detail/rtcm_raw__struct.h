// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/RTCMRaw.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RTCMRaw in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__RTCMRaw
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence data;
} irt_nav_msgs__msg__RTCMRaw;

// Struct for a sequence of irt_nav_msgs__msg__RTCMRaw.
typedef struct irt_nav_msgs__msg__RTCMRaw__Sequence
{
  irt_nav_msgs__msg__RTCMRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__RTCMRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__STRUCT_H_
