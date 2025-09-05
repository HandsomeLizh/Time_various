// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_H_

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

/// Struct defined in msg/RTCM1005 in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__RTCM1005
{
  std_msgs__msg__Header header;
  uint16_t msg_number;
  uint16_t ref_station_id;
  uint8_t reserved_itrf_realization_year;
  uint8_t gps_indicator;
  uint8_t glo_indicator;
  uint8_t galileo_indicator;
  uint8_t reference_station_indicator;
  double antenna_reference_point_ecef_x_m;
  double antenna_reference_point_ecef_y_m;
  double antenna_reference_point_ecef_z_m;
  uint8_t signle_receiver_oscillator_indicator;
  uint8_t reserved1;
  uint8_t reserved2;
  uint32_t msg_counter;
} irt_nav_msgs__msg__RTCM1005;

// Struct for a sequence of irt_nav_msgs__msg__RTCM1005.
typedef struct irt_nav_msgs__msg__RTCM1005__Sequence
{
  irt_nav_msgs__msg__RTCM1005 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__RTCM1005__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_H_
