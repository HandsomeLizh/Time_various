// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_H_

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

/// Struct defined in msg/Microstrain in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__Microstrain
{
  std_msgs__msg__Header header;
  double sensor_timestamp;
  bool data_ok;
  double acc_x;
  double acc_y;
  double acc_z;
  double gyro_x;
  double gyro_y;
  double gyro_z;
  double mag_x;
  double mag_y;
  double mag_z;
  double amb;
  double deltatheta_x;
  double deltatheta_y;
  double deltatheta_z;
  double deltavel_x;
  double deltavel_y;
  double deltavel_z;
  double freq_acc;
  double freq_gyro;
  double freq_mag;
  double freq_amb;
  double freq_d_theta;
  double freq_d_vel;
} irt_nav_msgs__msg__Microstrain;

// Struct for a sequence of irt_nav_msgs__msg__Microstrain.
typedef struct irt_nav_msgs__msg__Microstrain__Sequence
{
  irt_nav_msgs__msg__Microstrain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__Microstrain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_H_
