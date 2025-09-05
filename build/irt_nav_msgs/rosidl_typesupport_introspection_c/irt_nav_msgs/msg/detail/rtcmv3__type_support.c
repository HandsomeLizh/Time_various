// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/rtcmv3__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/rtcmv3__functions.h"
#include "irt_nav_msgs/msg/detail/rtcmv3__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__RTCMV3__init(message_memory);
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__RTCMV3__fini(message_memory);
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__base(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__base(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__base(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__base(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__base(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__base(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__base(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__svid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__svid(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__svid(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__svid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__svid(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__svid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__svid(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__pseudorange(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__pseudorange(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__pseudorange(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__pseudorange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__pseudorange(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__pseudorange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__pseudorange(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__type(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__type(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__type(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__carrier(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__carrier(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__carrier(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__carrier(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__carrier(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__carrier(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__carrier(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__cn0(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__cn0(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__cn0(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__cn0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__cn0(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__cn0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__cn0(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__locktime(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__locktime(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__locktime(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__locktime(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__locktime(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__locktime(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__locktime(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__lli(
  const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__lli(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__lli(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__lli(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__lli(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__lli(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__lli(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, base),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__base,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__base,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__base,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__base,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__base,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "svid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, svid),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__svid,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__svid,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__svid,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__svid,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__svid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pseudorange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, pseudorange),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__pseudorange,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__pseudorange,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__pseudorange,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__pseudorange,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__pseudorange,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, type),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__type,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__type,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__type,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__type,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__type,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, carrier),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__carrier,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__carrier,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__carrier,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__carrier,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__carrier,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cn0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, cn0),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__cn0,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__cn0,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__cn0,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__cn0,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__cn0,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "locktime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, locktime),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__locktime,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__locktime,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__locktime,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__locktime,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__locktime,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lli",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, lli),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__size_function__RTCMV3__lli,  // size() function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_const_function__RTCMV3__lli,  // get_const(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__get_function__RTCMV3__lli,  // get(index) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__fetch_function__RTCMV3__lli,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__assign_function__RTCMV3__lli,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_station_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__RTCMV3, reference_station_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "RTCMV3",  // message name
  11,  // number of fields
  sizeof(irt_nav_msgs__msg__RTCMV3),
  irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_member_array,  // message members
  irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, RTCMV3)() {
  irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__RTCMV3__rosidl_typesupport_introspection_c__RTCMV3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
