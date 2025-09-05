// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/PVTLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVTLS__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__PVTLS__STRUCT_H_

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
// Member 'ls_ant_main'
// Member 'ls_ant_aux'
#include "irt_nav_msgs/msg/detail/sol_ls__struct.h"

/// Struct defined in msg/PVTLS in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__PVTLS
{
  std_msgs__msg__Header header;
  irt_nav_msgs__msg__SolLS ls_ant_main;
  irt_nav_msgs__msg__SolLS ls_ant_aux;
} irt_nav_msgs__msg__PVTLS;

// Struct for a sequence of irt_nav_msgs__msg__PVTLS.
typedef struct irt_nav_msgs__msg__PVTLS__Sequence
{
  irt_nav_msgs__msg__PVTLS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__PVTLS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVTLS__STRUCT_H_
