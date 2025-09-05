// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_

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
// Member 'odom_anchor_ecef_pos'
// Member 'odom_anchor_ecef_to_enu_rpy'
// Member 'odom_local_pos'
// Member 'odom_local_rpy'
// Member 'odom_ecef_pos'
// Member 'odom_ecef_rpy'
// Member 'sensor_local_pos_from'
// Member 'sensor_local_rpy_from'
// Member 'sensor_enu_pos_from'
// Member 'sensor_enu_rpy_from'
// Member 'sensor_ecef_pos_from'
// Member 'sensor_ecef_rpy_from'
// Member 'sensor_local_pos_to'
// Member 'sensor_local_rpy_to'
// Member 'sensor_enu_pos_to'
// Member 'sensor_enu_rpy_to'
// Member 'sensor_ecef_pos_to'
// Member 'sensor_ecef_rpy_to'
// Member 'sensor_local_pos_to_optimized'
// Member 'sensor_local_rpy_to_optimized'
// Member 'sensor_enu_pos_to_optimized'
// Member 'sensor_enu_rpy_to_optimized'
// Member 'sensor_ecef_pos_to_optimized'
// Member 'sensor_ecef_rpy_to_optimized'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/OdomInfo in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__OdomInfo
{
  std_msgs__msg__Header header;
  uint64_t counter;
  uint64_t key_current;
  uint64_t key_previous;
  geometry_msgs__msg__Vector3 odom_anchor_ecef_pos;
  geometry_msgs__msg__Vector3 odom_anchor_ecef_to_enu_rpy;
  double odom_anchor_yaw_offset;
  double associated_state_timestamp_i;
  double associated_state_timestamp_j;
  double duration_to_i;
  bool associated_with_i;
  bool associated_with_j;
  geometry_msgs__msg__Vector3 odom_local_pos;
  geometry_msgs__msg__Vector3 odom_local_rpy;
  geometry_msgs__msg__Vector3 odom_ecef_pos;
  geometry_msgs__msg__Vector3 odom_ecef_rpy;
  geometry_msgs__msg__Vector3 sensor_local_pos_from;
  geometry_msgs__msg__Vector3 sensor_local_rpy_from;
  geometry_msgs__msg__Vector3 sensor_enu_pos_from;
  geometry_msgs__msg__Vector3 sensor_enu_rpy_from;
  geometry_msgs__msg__Vector3 sensor_ecef_pos_from;
  geometry_msgs__msg__Vector3 sensor_ecef_rpy_from;
  geometry_msgs__msg__Vector3 sensor_local_pos_to;
  geometry_msgs__msg__Vector3 sensor_local_rpy_to;
  geometry_msgs__msg__Vector3 sensor_enu_pos_to;
  geometry_msgs__msg__Vector3 sensor_enu_rpy_to;
  geometry_msgs__msg__Vector3 sensor_ecef_pos_to;
  geometry_msgs__msg__Vector3 sensor_ecef_rpy_to;
  geometry_msgs__msg__Vector3 sensor_local_pos_to_optimized;
  geometry_msgs__msg__Vector3 sensor_local_rpy_to_optimized;
  geometry_msgs__msg__Vector3 sensor_enu_pos_to_optimized;
  geometry_msgs__msg__Vector3 sensor_enu_rpy_to_optimized;
  geometry_msgs__msg__Vector3 sensor_ecef_pos_to_optimized;
  geometry_msgs__msg__Vector3 sensor_ecef_rpy_to_optimized;
} irt_nav_msgs__msg__OdomInfo;

// Struct for a sequence of irt_nav_msgs__msg__OdomInfo.
typedef struct irt_nav_msgs__msg__OdomInfo__Sequence
{
  irt_nav_msgs__msg__OdomInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__OdomInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_
