// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/nav_filter__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/nav_filter__functions.h"
#include "irt_nav_msgs/msg/detail/nav_filter__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__NavFilter__init(message_memory);
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__NavFilter__fini(message_memory);
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__state_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__state_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__state_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__var_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__var_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__var_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__euler_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__euler_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__euler_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_ecef_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_ecef_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_ecef_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_llh_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_llh_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_llh_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_vel_ekf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ekf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ekf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_vel_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ekf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_vel_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ekf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__state_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__state_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__state_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__var_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__var_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__var_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__euler_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__euler_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__euler_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_ecef_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_ecef_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_ecef_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_llh_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_llh_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_llh_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_vel_ukf(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ukf(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ukf(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_vel_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ukf(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_vel_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ukf(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_member_array[20] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, filter_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnss_obs_delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, gnss_obs_delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, state_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__state_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__state_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__state_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "var_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, var_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__var_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__var_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__var_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_normed_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, vel_normed_ekf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euler_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, euler_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__euler_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__euler_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__euler_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_exit_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, update_exit_ekf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_ecef_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_ecef_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_ecef_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_ecef_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_ecef_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_llh_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_llh_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_llh_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_llh_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_llh_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_vel_ekf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_vel_ekf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_vel_ekf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ekf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ekf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_vel_ekf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_vel_ekf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, state_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__state_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__state_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__state_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__state_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__state_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "var_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, var_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__var_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__var_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__var_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__var_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__var_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_normed_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, vel_normed_ukf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euler_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, euler_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__euler_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__euler_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__euler_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__euler_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__euler_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_exit_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, update_exit_ukf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_ecef_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_ecef_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_ecef_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_ecef_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_ecef_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_ecef_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_ecef_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_llh_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_llh_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_llh_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_llh_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_llh_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_llh_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_llh_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_vel_ukf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, ant_vel_ukf),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__size_function__NavFilter__ant_vel_ukf,  // size() function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_const_function__NavFilter__ant_vel_ukf,  // get_const(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__get_function__NavFilter__ant_vel_ukf,  // get(index) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__fetch_function__NavFilter__ant_vel_ukf,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__assign_function__NavFilter__ant_vel_ukf,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__NavFilter, filter_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "NavFilter",  // message name
  20,  // number of fields
  sizeof(irt_nav_msgs__msg__NavFilter),
  irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_member_array,  // message members
  irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, NavFilter)() {
  irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__NavFilter__rosidl_typesupport_introspection_c__NavFilter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
