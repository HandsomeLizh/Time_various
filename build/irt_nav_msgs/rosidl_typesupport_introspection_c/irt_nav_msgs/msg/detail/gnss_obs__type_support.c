// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/gnss_obs__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/gnss_obs__functions.h"
#include "irt_nav_msgs/msg/detail/gnss_obs__struct.h"


// Include directives for member types
// Member `satelite_pos`
// Member `satelite_vec`
// Member `base_pos`
#include "geometry_msgs/msg/vector3.h"
// Member `satelite_pos`
// Member `satelite_vec`
// Member `base_pos`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `prn`
// Member `svid_carrier_used`
// Member `pseudorange`
// Member `pseudorange_raw`
// Member `pseudorange_satclk_corrected`
// Member `deltarange`
// Member `deltarange_raw`
// Member `deltarange_satclk_corrected`
// Member `pseudorange_var`
// Member `pseudorange_var_measured`
// Member `deltarange_var`
// Member `carrierphase`
// Member `carrierphase_raw`
// Member `carrierphase_satclk_corrected`
// Member `carrierphase_var_measured`
// Member `elevation_angle`
// Member `azimuth_angle`
// Member `locktime`
// Member `cn0`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__GNSSObs__init(message_memory);
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__GNSSObs__fini(message_memory);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__satelite_pos(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_pos(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_pos(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__satelite_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_pos(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__satelite_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_pos(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__satelite_pos(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__satelite_vec(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_vec(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_vec(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__satelite_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_vec(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__satelite_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_vec(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__satelite_vec(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__prn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__prn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__prn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__prn(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__prn(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__prn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__svid_carrier_used(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__svid_carrier_used(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__svid_carrier_used(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__svid_carrier_used(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__svid_carrier_used(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__svid_carrier_used(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__svid_carrier_used(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__svid_carrier_used(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_raw(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_raw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_raw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_raw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_raw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_raw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_satclk_corrected(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_satclk_corrected(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_satclk_corrected(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_satclk_corrected(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_satclk_corrected(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_satclk_corrected(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_raw(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_raw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_raw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_raw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_raw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_raw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_satclk_corrected(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_satclk_corrected(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_satclk_corrected(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_satclk_corrected(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_satclk_corrected(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_satclk_corrected(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_var_measured(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var_measured(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var_measured(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_var_measured(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var_measured(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_var_measured(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var_measured(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_var_measured(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_var(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_var(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_var(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_var(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_var(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_var(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_raw(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_raw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_raw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_raw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_raw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_raw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_satclk_corrected(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_satclk_corrected(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_satclk_corrected(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_satclk_corrected(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_satclk_corrected(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_satclk_corrected(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_var_measured(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_var_measured(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_var_measured(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_var_measured(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_var_measured(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_var_measured(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_var_measured(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_var_measured(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__elevation_angle(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__elevation_angle(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__elevation_angle(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__elevation_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__elevation_angle(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__elevation_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__elevation_angle(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__elevation_angle(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__azimuth_angle(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__azimuth_angle(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__azimuth_angle(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__azimuth_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__azimuth_angle(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__azimuth_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__azimuth_angle(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__azimuth_angle(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__locktime(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__locktime(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__locktime(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__locktime(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__locktime(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__locktime(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__locktime(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__locktime(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__cn0(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__cn0(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__cn0(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__cn0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__cn0(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__cn0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__cn0(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__cn0(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_member_array[30] = {
  {
    "time_receive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, time_receive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integrity_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, integrity_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd_idx_sync_ref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, dd_idx_sync_ref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd_idx_sync_user",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, dd_idx_sync_user),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "satelite_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, satelite_pos),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__satelite_pos,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_pos,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_pos,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__satelite_pos,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__satelite_pos,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__satelite_pos  // resize(index) function pointer
  },
  {
    "satelite_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, satelite_vec),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__satelite_vec,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__satelite_vec,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__satelite_vec,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__satelite_vec,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__satelite_vec,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__satelite_vec  // resize(index) function pointer
  },
  {
    "base_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, base_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, prn),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__prn,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__prn,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__prn,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__prn,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__prn,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__prn  // resize(index) function pointer
  },
  {
    "svid_carrier_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, svid_carrier_used),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__svid_carrier_used,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__svid_carrier_used,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__svid_carrier_used,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__svid_carrier_used,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__svid_carrier_used,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__svid_carrier_used  // resize(index) function pointer
  },
  {
    "pseudorange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, pseudorange),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange  // resize(index) function pointer
  },
  {
    "pseudorange_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, pseudorange_raw),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_raw,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_raw,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_raw,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_raw,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_raw,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_raw  // resize(index) function pointer
  },
  {
    "pseudorange_satclk_corrected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, pseudorange_satclk_corrected),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_satclk_corrected,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_satclk_corrected,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_satclk_corrected,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_satclk_corrected,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_satclk_corrected,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_satclk_corrected  // resize(index) function pointer
  },
  {
    "deltarange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, deltarange),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange  // resize(index) function pointer
  },
  {
    "deltarange_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, deltarange_raw),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_raw,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_raw,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_raw,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_raw,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_raw,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_raw  // resize(index) function pointer
  },
  {
    "deltarange_satclk_corrected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, deltarange_satclk_corrected),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_satclk_corrected,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_satclk_corrected,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_satclk_corrected,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_satclk_corrected,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_satclk_corrected,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_satclk_corrected  // resize(index) function pointer
  },
  {
    "pseudorange_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, pseudorange_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_var,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_var  // resize(index) function pointer
  },
  {
    "pseudorange_var_measured",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, pseudorange_var_measured),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__pseudorange_var_measured,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__pseudorange_var_measured,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__pseudorange_var_measured,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__pseudorange_var_measured,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__pseudorange_var_measured,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__pseudorange_var_measured  // resize(index) function pointer
  },
  {
    "deltarange_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, deltarange_var),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__deltarange_var,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__deltarange_var,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__deltarange_var,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__deltarange_var,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__deltarange_var,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__deltarange_var  // resize(index) function pointer
  },
  {
    "carrierphase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, carrierphase),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase  // resize(index) function pointer
  },
  {
    "carrierphase_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, carrierphase_raw),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_raw,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_raw,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_raw,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_raw,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_raw,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_raw  // resize(index) function pointer
  },
  {
    "carrierphase_satclk_corrected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, carrierphase_satclk_corrected),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_satclk_corrected,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_satclk_corrected,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_satclk_corrected,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_satclk_corrected,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_satclk_corrected,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_satclk_corrected  // resize(index) function pointer
  },
  {
    "carrierphase_var_measured",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, carrierphase_var_measured),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__carrierphase_var_measured,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__carrierphase_var_measured,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__carrierphase_var_measured,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__carrierphase_var_measured,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__carrierphase_var_measured,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__carrierphase_var_measured  // resize(index) function pointer
  },
  {
    "elevation_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, elevation_angle),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__elevation_angle,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__elevation_angle,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__elevation_angle,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__elevation_angle,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__elevation_angle,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__elevation_angle  // resize(index) function pointer
  },
  {
    "azimuth_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, azimuth_angle),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__azimuth_angle,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__azimuth_angle,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__azimuth_angle,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__azimuth_angle,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__azimuth_angle,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__azimuth_angle  // resize(index) function pointer
  },
  {
    "locktime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, locktime),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__locktime,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__locktime,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__locktime,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__locktime,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__locktime,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__locktime  // resize(index) function pointer
  },
  {
    "cn0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, cn0),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__size_function__GNSSObs__cn0,  // size() function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_const_function__GNSSObs__cn0,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__get_function__GNSSObs__cn0,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__fetch_function__GNSSObs__cn0,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__assign_function__GNSSObs__cn0,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__resize_function__GNSSObs__cn0  // resize(index) function pointer
  },
  {
    "ref_sat_svid_gps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, ref_sat_svid_gps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_sat_svid_gal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, ref_sat_svid_gal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_corrected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, gps_corrected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gal_corrected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObs, gal_corrected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "GNSSObs",  // message name
  30,  // number of fields
  sizeof(irt_nav_msgs__msg__GNSSObs),
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_member_array,  // message members
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)() {
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__GNSSObs__rosidl_typesupport_introspection_c__GNSSObs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
