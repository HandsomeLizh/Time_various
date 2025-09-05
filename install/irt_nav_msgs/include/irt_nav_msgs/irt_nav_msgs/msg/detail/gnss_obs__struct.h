// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'satelite_pos'
// Member 'satelite_vec'
// Member 'base_pos'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'prn'
// Member 'svid_carrier_used'
// Member 'pseudorange'
// Member 'pseudorange_raw'
// Member 'pseudorange_satclk_corrected'
// Member 'deltarange'
// Member 'deltarange_raw'
// Member 'deltarange_satclk_corrected'
// Member 'pseudorange_var'
// Member 'pseudorange_var_measured'
// Member 'deltarange_var'
// Member 'carrierphase'
// Member 'carrierphase_raw'
// Member 'carrierphase_satclk_corrected'
// Member 'carrierphase_var_measured'
// Member 'elevation_angle'
// Member 'azimuth_angle'
// Member 'locktime'
// Member 'cn0'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GNSSObs in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__GNSSObs
{
  double time_receive;
  uint8_t integrity_flag;
  uint8_t dd_idx_sync_ref;
  uint8_t dd_idx_sync_user;
  geometry_msgs__msg__Vector3__Sequence satelite_pos;
  geometry_msgs__msg__Vector3__Sequence satelite_vec;
  geometry_msgs__msg__Vector3 base_pos;
  rosidl_runtime_c__uint16__Sequence prn;
  rosidl_runtime_c__uint16__Sequence svid_carrier_used;
  rosidl_runtime_c__double__Sequence pseudorange;
  rosidl_runtime_c__double__Sequence pseudorange_raw;
  rosidl_runtime_c__double__Sequence pseudorange_satclk_corrected;
  rosidl_runtime_c__double__Sequence deltarange;
  rosidl_runtime_c__double__Sequence deltarange_raw;
  rosidl_runtime_c__double__Sequence deltarange_satclk_corrected;
  rosidl_runtime_c__double__Sequence pseudorange_var;
  rosidl_runtime_c__double__Sequence pseudorange_var_measured;
  rosidl_runtime_c__double__Sequence deltarange_var;
  rosidl_runtime_c__double__Sequence carrierphase;
  rosidl_runtime_c__double__Sequence carrierphase_raw;
  rosidl_runtime_c__double__Sequence carrierphase_satclk_corrected;
  rosidl_runtime_c__double__Sequence carrierphase_var_measured;
  rosidl_runtime_c__double__Sequence elevation_angle;
  rosidl_runtime_c__double__Sequence azimuth_angle;
  rosidl_runtime_c__double__Sequence locktime;
  rosidl_runtime_c__double__Sequence cn0;
  uint8_t ref_sat_svid_gps;
  uint8_t ref_sat_svid_gal;
  bool gps_corrected;
  bool gal_corrected;
} irt_nav_msgs__msg__GNSSObs;

// Struct for a sequence of irt_nav_msgs__msg__GNSSObs.
typedef struct irt_nav_msgs__msg__GNSSObs__Sequence
{
  irt_nav_msgs__msg__GNSSObs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__GNSSObs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_H_
