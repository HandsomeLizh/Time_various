// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_H_

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

/// Struct defined in msg/NavFilter in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__NavFilter
{
  std_msgs__msg__Header header;
  bool filter_enabled;
  double gnss_obs_delay;
  double state_ekf[18];
  double var_ekf[17];
  double vel_normed_ekf;
  double euler_ekf[3];
  bool update_exit_ekf;
  double ant_ecef_ekf[3];
  double ant_llh_ekf[3];
  double ant_vel_ekf[3];
  double state_ukf[18];
  double var_ukf[17];
  double vel_normed_ukf;
  double euler_ukf[3];
  bool update_exit_ukf;
  double ant_ecef_ukf[3];
  double ant_llh_ukf[3];
  double ant_vel_ukf[3];
  double filter_time;
} irt_nav_msgs__msg__NavFilter;

// Struct for a sequence of irt_nav_msgs__msg__NavFilter.
typedef struct irt_nav_msgs__msg__NavFilter__Sequence
{
  irt_nav_msgs__msg__NavFilter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__NavFilter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_H_
