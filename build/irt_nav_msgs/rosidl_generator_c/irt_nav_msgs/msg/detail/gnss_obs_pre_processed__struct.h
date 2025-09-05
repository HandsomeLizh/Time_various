// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_H_

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
// Member 'gnss_obs_ant_main'
// Member 'gnss_obs_ant_aux'
// Member 'dd_gnss_obs_dualantenna'
// Member 'dd_gnss_obs_time'
// Member 'dd_gnss_obs_rtcm'
#include "irt_nav_msgs/msg/detail/gnss_obs__struct.h"
// Member 'gnss_corrections'
#include "irt_nav_msgs/msg/detail/gnss_correction__struct.h"
// Member 'faulty_prn_main'
// Member 'faulty_prn_aux'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GNSSObsPreProcessed in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GNSSObsPreProcessed
{
  std_msgs__msg__Header header;
  uint32_t counter;
  double time_offset_gal_gps;
  bool is_ggto_valid;
  irt_nav_msgs__msg__GNSSObs gnss_obs_ant_main;
  irt_nav_msgs__msg__GNSSObs gnss_obs_ant_aux;
  irt_nav_msgs__msg__GNSSObs dd_gnss_obs_dualantenna;
  irt_nav_msgs__msg__GNSSObs dd_gnss_obs_time;
  irt_nav_msgs__msg__GNSSObs dd_gnss_obs_rtcm;
  irt_nav_msgs__msg__GNSSCorrection__Sequence gnss_corrections;
  rosidl_runtime_c__uint8__Sequence faulty_prn_main;
  rosidl_runtime_c__uint8__Sequence faulty_prn_aux;
  bool has_time_dd;
  bool has_dualantenna;
  bool has_dualantenna_dd;
  bool has_rtcm_dd;
  bool has_rtk;
} irt_nav_msgs__msg__GNSSObsPreProcessed;

// Struct for a sequence of irt_nav_msgs__msg__GNSSObsPreProcessed.
typedef struct irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence
{
  irt_nav_msgs__msg__GNSSObsPreProcessed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_H_
