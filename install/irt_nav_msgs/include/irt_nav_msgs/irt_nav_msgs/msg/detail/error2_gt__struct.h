// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_H_

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
// Member 'pose_std_ecef'
// Member 'pose_std_ned'
// Member 'vel_std_ecef'
// Member 'vel_std_ned'
// Member 'ref_llh'
// Member 'ref_llh_std'
// Member 'cbd'
// Member 'cbd_std'
// Member 'ref_cbd'
// Member 'acc_bias'
// Member 'gyro_bias'
// Member 'acc_bias_std'
// Member 'gyro_bias_std'
// Member 'vel_ned'
// Member 'omega_body'
// Member 'omega_body_std'
// Member 'ref_vel'
// Member 'ref_vel_std'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Error2GT in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__Error2GT
{
  std_msgs__msg__Header header;
  double ref_tow_before;
  double ref_tow_after;
  double tow;
  double pos_1d_error_ned;
  double pos_2d_error_ned;
  double pos_3d_error_ned;
  double pos_1d_error_body;
  double pos_2d_error_body;
  double pos_3d_error_body;
  double pos_2d_error_geographic;
  double pos_3d_error_geographic;
  double pos_2d_error_ecef;
  double pos_3d_error_ecef;
  double vel_2d_error;
  double vel_3d_error;
  rosidl_runtime_c__double__Sequence pose_std_ecef;
  rosidl_runtime_c__double__Sequence pose_std_ned;
  rosidl_runtime_c__double__Sequence vel_std_ecef;
  rosidl_runtime_c__double__Sequence vel_std_ned;
  rosidl_runtime_c__double__Sequence ref_llh;
  rosidl_runtime_c__double__Sequence ref_llh_std;
  double yaw_error;
  double yaw;
  double pitch;
  double roll;
  double ref_yaw;
  double ref_yaw_std;
  double ref_pitch_roll;
  double ref_pitch_roll_std;
  rosidl_runtime_c__double__Sequence cbd;
  rosidl_runtime_c__double__Sequence cbd_std;
  rosidl_runtime_c__double__Sequence ref_cbd;
  rosidl_runtime_c__double__Sequence acc_bias;
  rosidl_runtime_c__double__Sequence gyro_bias;
  rosidl_runtime_c__double__Sequence acc_bias_std;
  rosidl_runtime_c__double__Sequence gyro_bias_std;
  rosidl_runtime_c__double__Sequence vel_ned;
  rosidl_runtime_c__double__Sequence omega_body;
  rosidl_runtime_c__double__Sequence omega_body_std;
  rosidl_runtime_c__double__Sequence ref_vel;
  rosidl_runtime_c__double__Sequence ref_vel_std;
  uint8_t ref_mode;
  uint8_t ref_error;
} irt_nav_msgs__msg__Error2GT;

// Struct for a sequence of irt_nav_msgs__msg__Error2GT.
typedef struct irt_nav_msgs__msg__Error2GT__Sequence
{
  irt_nav_msgs__msg__Error2GT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__Error2GT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_H_
