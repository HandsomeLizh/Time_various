// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/fgo_state__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/fgo_state__functions.h"
#include "irt_nav_msgs/msg/detail/fgo_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `vel`
// Member `acc`
#include "geometry_msgs/msg/twist.h"
// Member `vel`
// Member `acc`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `pose_var`
// Member `vel_var`
// Member `acc_var`
// Member `imu_bias`
// Member `imu_bias_var`
// Member `cbd`
// Member `cbd_var`
// Member `amb`
// Member `amb_var`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__FGOState__init(message_memory);
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__FGOState__fini(message_memory);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__pose_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__pose_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__pose_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__pose_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__pose_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__pose_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__pose_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__pose_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__vel_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__vel_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__vel_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__vel_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__vel_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__vel_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__vel_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__vel_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__acc_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__acc_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__acc_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__acc_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__acc_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__acc_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__acc_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__acc_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__imu_bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__imu_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__imu_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__imu_bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__imu_bias_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__imu_bias_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__imu_bias_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__imu_bias_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__cbd(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__cbd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__cbd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__cbd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__cbd_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__cbd_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__cbd_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__cbd_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__amb(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__amb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__amb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__amb(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__amb_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__amb_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__amb_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__amb_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array[14] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, pose_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__pose_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__pose_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__pose_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__pose_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__pose_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__pose_var  // resize(index) function pointer
  },
  {
    "vel_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, vel_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__vel_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__vel_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__vel_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__vel_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__vel_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__vel_var  // resize(index) function pointer
  },
  {
    "acc_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, acc_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__acc_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__acc_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__acc_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__acc_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__acc_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__acc_var  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, imu_bias),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__imu_bias,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__imu_bias,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__imu_bias,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__imu_bias  // resize(index) function pointer
  },
  {
    "imu_bias_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, imu_bias_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__imu_bias_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__imu_bias_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__imu_bias_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__imu_bias_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__imu_bias_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__imu_bias_var  // resize(index) function pointer
  },
  {
    "cbd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, cbd),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__cbd,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__cbd,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__cbd,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__cbd  // resize(index) function pointer
  },
  {
    "cbd_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, cbd_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__cbd_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__cbd_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__cbd_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__cbd_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__cbd_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__cbd_var  // resize(index) function pointer
  },
  {
    "amb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, amb),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__amb,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__amb,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__amb,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__amb  // resize(index) function pointer
  },
  {
    "amb_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FGOState, amb_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__size_function__FGOState__amb_var,  // size() function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_const_function__FGOState__amb_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__get_function__FGOState__amb_var,  // get(index) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__fetch_function__FGOState__amb_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__assign_function__FGOState__amb_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__resize_function__FGOState__amb_var  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "FGOState",  // message name
  14,  // number of fields
  sizeof(irt_nav_msgs__msg__FGOState),
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array,  // message members
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, FGOState)() {
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__FGOState__rosidl_typesupport_introspection_c__FGOState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
