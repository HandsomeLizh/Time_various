// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_H_

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
// Member 'sat'
// Member 'weight'
// Member 'cardinality'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PRFactorWeights in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__PRFactorWeights
{
  std_msgs__msg__Header header;
  double mean;
  double median;
  double variance;
  rosidl_runtime_c__uint32__Sequence sat;
  rosidl_runtime_c__double__Sequence weight;
  rosidl_runtime_c__uint32__Sequence cardinality;
} irt_nav_msgs__msg__PRFactorWeights;

// Struct for a sequence of irt_nav_msgs__msg__PRFactorWeights.
typedef struct irt_nav_msgs__msg__PRFactorWeights__Sequence
{
  irt_nav_msgs__msg__PRFactorWeights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__PRFactorWeights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_H_
