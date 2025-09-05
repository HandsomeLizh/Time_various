// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice

#ifndef BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_H_
#define BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_H_

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

/// Struct defined in msg/SensorPose in the package boreas_msgs.
typedef struct boreas_msgs__msg__SensorPose
{
  std_msgs__msg__Header header;
  double gps_timestamp;
  double pos_easting;
  double pos_northing;
  double pos_altitude;
  double vel_north;
  double vel_east;
  double vel_up;
  double roll;
  double pitch;
  double heading;
  double ang_vel_x;
  double ang_vel_y;
  double ang_vel_z;
} boreas_msgs__msg__SensorPose;

// Struct for a sequence of boreas_msgs__msg__SensorPose.
typedef struct boreas_msgs__msg__SensorPose__Sequence
{
  boreas_msgs__msg__SensorPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boreas_msgs__msg__SensorPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_H_
