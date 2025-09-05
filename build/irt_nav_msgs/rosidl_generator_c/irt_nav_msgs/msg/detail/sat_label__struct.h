// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sat_pos'
// Member 'sat_vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'factor'
// Member 'msg'
#include "rosidl_runtime_c/string.h"
// Member 'residuals'
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'gaussian'
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.h"

/// Struct defined in msg/SatLabel in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SatLabel
{
  uint8_t integrity_flag;
  uint32_t prn;
  geometry_msgs__msg__Vector3 sat_pos;
  geometry_msgs__msg__Vector3 sat_vel;
  double psr;
  double psr_raw;
  double psr_satclk_corrected;
  double psr_dev_measured;
  double psr_dev_preproc;
  double dr;
  double dr_raw;
  double dr_satclk_corrected;
  double dr_dev_preproc;
  double cp;
  double cp_raw;
  double cp_satclk_corrected;
  double cp_dev_measured;
  double locktime;
  double psr_correction;
  double cn0;
  bool cycle_slip;
  double psr_residual;
  double dr_residual;
  double cp_residual;
  double elevation_angle;
  double azimuth_angle;
  double cmc;
  double drc;
  /// calculated data from VBI
  rosidl_runtime_c__String factor;
  uint8_t dim;
  rosidl_runtime_c__double__Sequence residuals;
  irt_nav_msgs__msg__GaussianComponent__Sequence gaussian;
  double weight;
  rosidl_runtime_c__double__Sequence data;
  /// labels
  /// 0 == opensky 1 == Multipath 2 == NLOS 3 == invalid
  uint8_t label;
  double label_dev;
  rosidl_runtime_c__String msg;
} irt_nav_msgs__msg__SatLabel;

// Struct for a sequence of irt_nav_msgs__msg__SatLabel.
typedef struct irt_nav_msgs__msg__SatLabel__Sequence
{
  irt_nav_msgs__msg__SatLabel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SatLabel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_H_
