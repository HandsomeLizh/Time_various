// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/SensorProcessingReport.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_H_

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
// Member 'sensor_name'
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'residual_information'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorProcessingReport in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__SensorProcessingReport
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String sensor_name;
  double ts_measurement;
  uint16_t num_measurements;
  double measurement_delay;
  double ts_start_processing;
  double duration_processing;
  bool observation_available;
  rosidl_runtime_c__double__Sequence residual_information;
  rosidl_runtime_c__String message;
} irt_nav_msgs__msg__SensorProcessingReport;

// Struct for a sequence of irt_nav_msgs__msg__SensorProcessingReport.
typedef struct irt_nav_msgs__msg__SensorProcessingReport__Sequence
{
  irt_nav_msgs__msg__SensorProcessingReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__SensorProcessingReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_H_
