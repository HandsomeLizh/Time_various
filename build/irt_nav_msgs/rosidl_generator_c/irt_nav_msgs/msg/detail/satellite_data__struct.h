// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SatelliteData.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_H_

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
// Member 'factor'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SatelliteData in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SatelliteData
{
  std_msgs__msg__Header header;
  uint32_t sat;
  rosidl_runtime_c__String factor;
  double variance;
  double elevation;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 velocity;
} irt_nav_msgs__msg__SatelliteData;

// Struct for a sequence of irt_nav_msgs__msg__SatelliteData.
typedef struct irt_nav_msgs__msg__SatelliteData__Sequence
{
  irt_nav_msgs__msg__SatelliteData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SatelliteData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_H_
