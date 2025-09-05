// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/error2_gt__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/error2_gt__functions.h"
#include "irt_nav_msgs/msg/detail/error2_gt__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose_std_ecef`
// Member `pose_std_ned`
// Member `vel_std_ecef`
// Member `vel_std_ned`
// Member `ref_llh`
// Member `ref_llh_std`
// Member `cbd`
// Member `cbd_std`
// Member `ref_cbd`
// Member `acc_bias`
// Member `gyro_bias`
// Member `acc_bias_std`
// Member `gyro_bias_std`
// Member `vel_ned`
// Member `omega_body`
// Member `omega_body_std`
// Member `ref_vel`
// Member `ref_vel_std`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__Error2GT__init(message_memory);
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__Error2GT__fini(message_memory);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__pose_std_ecef(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ecef(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ecef(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__pose_std_ecef(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ecef(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__pose_std_ecef(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ecef(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__pose_std_ecef(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__pose_std_ned(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ned(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ned(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__pose_std_ned(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ned(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__pose_std_ned(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ned(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__pose_std_ned(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_std_ecef(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ecef(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ecef(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_std_ecef(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ecef(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_std_ecef(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ecef(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_std_ecef(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_std_ned(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ned(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ned(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_std_ned(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ned(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_std_ned(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ned(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_std_ned(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_llh(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_llh(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_llh(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_llh(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_llh_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_llh_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_llh_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_llh_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__cbd(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__cbd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__cbd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__cbd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__cbd_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__cbd_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__cbd_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__cbd_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_cbd(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_cbd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_cbd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_cbd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_cbd(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_cbd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_cbd(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_cbd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__acc_bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__acc_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__acc_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__acc_bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__gyro_bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__gyro_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__gyro_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__gyro_bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__acc_bias_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__acc_bias_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__acc_bias_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__acc_bias_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__gyro_bias_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__gyro_bias_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__gyro_bias_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__gyro_bias_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_ned(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_ned(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_ned(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_ned(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_ned(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_ned(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_ned(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_ned(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__omega_body(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__omega_body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__omega_body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__omega_body(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__omega_body_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__omega_body_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__omega_body_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__omega_body_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_vel_std(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel_std(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel_std(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_vel_std(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel_std(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_vel_std(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel_std(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_vel_std(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_member_array[44] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_tow_before",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_tow_before),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_tow_after",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_tow_after),  // bytes offset in struct
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
    offsetof(irt_nav_msgs__msg__Error2GT, tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_1d_error_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_1d_error_ned),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_2d_error_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_2d_error_ned),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_3d_error_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_3d_error_ned),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_1d_error_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_1d_error_body),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_2d_error_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_2d_error_body),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_3d_error_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_3d_error_body),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_2d_error_geographic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_2d_error_geographic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_3d_error_geographic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_3d_error_geographic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_2d_error_ecef",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_2d_error_ecef),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_3d_error_ecef",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pos_3d_error_ecef),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_2d_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, vel_2d_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_3d_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, vel_3d_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_std_ecef",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pose_std_ecef),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__pose_std_ecef,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ecef,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ecef,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__pose_std_ecef,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__pose_std_ecef,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__pose_std_ecef  // resize(index) function pointer
  },
  {
    "pose_std_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pose_std_ned),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__pose_std_ned,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__pose_std_ned,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__pose_std_ned,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__pose_std_ned,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__pose_std_ned,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__pose_std_ned  // resize(index) function pointer
  },
  {
    "vel_std_ecef",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, vel_std_ecef),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_std_ecef,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ecef,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ecef,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_std_ecef,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_std_ecef,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_std_ecef  // resize(index) function pointer
  },
  {
    "vel_std_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, vel_std_ned),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_std_ned,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_std_ned,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_std_ned,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_std_ned,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_std_ned,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_std_ned  // resize(index) function pointer
  },
  {
    "ref_llh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_llh),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_llh,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_llh,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_llh,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_llh  // resize(index) function pointer
  },
  {
    "ref_llh_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_llh_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_llh_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_llh_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_llh_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_llh_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_llh_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_llh_std  // resize(index) function pointer
  },
  {
    "yaw_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, yaw_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_yaw_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_yaw_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_pitch_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_pitch_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_pitch_roll_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_pitch_roll_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cbd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, cbd),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__cbd,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__cbd,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__cbd,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__cbd  // resize(index) function pointer
  },
  {
    "cbd_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, cbd_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__cbd_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__cbd_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__cbd_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__cbd_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__cbd_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__cbd_std  // resize(index) function pointer
  },
  {
    "ref_cbd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_cbd),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_cbd,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_cbd,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_cbd,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_cbd,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_cbd,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_cbd  // resize(index) function pointer
  },
  {
    "acc_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, acc_bias),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__acc_bias,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__acc_bias,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__acc_bias,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__acc_bias  // resize(index) function pointer
  },
  {
    "gyro_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, gyro_bias),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__gyro_bias,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__gyro_bias,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__gyro_bias,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__gyro_bias  // resize(index) function pointer
  },
  {
    "acc_bias_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, acc_bias_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__acc_bias_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__acc_bias_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__acc_bias_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__acc_bias_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__acc_bias_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__acc_bias_std  // resize(index) function pointer
  },
  {
    "gyro_bias_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, gyro_bias_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__gyro_bias_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__gyro_bias_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__gyro_bias_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__gyro_bias_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__gyro_bias_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__gyro_bias_std  // resize(index) function pointer
  },
  {
    "vel_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, vel_ned),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__vel_ned,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__vel_ned,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__vel_ned,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__vel_ned,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__vel_ned,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__vel_ned  // resize(index) function pointer
  },
  {
    "omega_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, omega_body),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__omega_body,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__omega_body,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__omega_body,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__omega_body  // resize(index) function pointer
  },
  {
    "omega_body_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, omega_body_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__omega_body_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__omega_body_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__omega_body_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__omega_body_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__omega_body_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__omega_body_std  // resize(index) function pointer
  },
  {
    "ref_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_vel),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_vel,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_vel,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_vel,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_vel  // resize(index) function pointer
  },
  {
    "ref_vel_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_vel_std),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__size_function__Error2GT__ref_vel_std,  // size() function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_const_function__Error2GT__ref_vel_std,  // get_const(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__get_function__Error2GT__ref_vel_std,  // get(index) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__fetch_function__Error2GT__ref_vel_std,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__assign_function__Error2GT__ref_vel_std,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__resize_function__Error2GT__ref_vel_std  // resize(index) function pointer
  },
  {
    "ref_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Error2GT, ref_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "Error2GT",  // message name
  44,  // number of fields
  sizeof(irt_nav_msgs__msg__Error2GT),
  irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_member_array,  // message members
  irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, Error2GT)() {
  irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__Error2GT__rosidl_typesupport_introspection_c__Error2GT_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
