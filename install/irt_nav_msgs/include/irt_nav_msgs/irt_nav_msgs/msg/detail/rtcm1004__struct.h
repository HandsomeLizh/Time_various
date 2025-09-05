// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_H_

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

/// Struct defined in msg/RTCM1004 in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__RTCM1004
{
  std_msgs__msg__Header header;
  uint16_t msg_number;
  uint16_t ref_station_id;
  uint32_t gps_epoch_time_ms;
  uint8_t flag_gnss_synchronous;
  uint8_t no_gps_sat_signal_processed;
  uint8_t divergency_free_smoothing_indicator;
  uint8_t smoothing_interval;
  uint8_t sat_id[12];
  uint8_t l1_code_indicator[12];
  double l1_pseudorange_mod1lightms_m[12];
  double l1_phasenrange_l1_pseudorange_m[12];
  uint8_t l1_locktime_indicator[12];
  double l1_integer_pseudorange_modulus_ambiguity_m[12];
  double l1_cnr_db_hz[12];
  uint8_t l2_code_indicator[12];
  double l2_l1_pseudorange_difference_m[12];
  double l2_phaserange_l1_pseudorange_m[12];
  uint8_t l2_locktime_indicator[12];
  double l2_cnr_db_hz[12];
  uint32_t msg_counter;
} irt_nav_msgs__msg__RTCM1004;

// Struct for a sequence of irt_nav_msgs__msg__RTCM1004.
typedef struct irt_nav_msgs__msg__RTCM1004__Sequence
{
  irt_nav_msgs__msg__RTCM1004 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__RTCM1004__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_H_
