// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/sol_ls__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/sol_ls__functions.h"
#include "irt_nav_msgs/msg/detail/sol_ls__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__SolLS__init(message_memory);
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__SolLS__fini(message_memory);
}

size_t irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__llh(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__llh(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__llh(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__llh(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__llh(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__llh(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__llh(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__vel_ned(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__vel_ned(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__vel_ned(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__vel_ned(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__vel_ned(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__vel_ned(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__vel_ned(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__dop(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__dop(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__dop(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__dop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__dop(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__dop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__dop(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_member_array[6] = {
  {
    "llh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, llh),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__llh,  // size() function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__llh,  // get_const(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__llh,  // get(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__llh,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__llh,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, vel_ned),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__vel_ned,  // size() function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__vel_ned,  // get_const(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__vel_ned,  // get(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__vel_ned,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__vel_ned,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receiver_clock_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, receiver_clock_bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receiver_clock_drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, receiver_clock_drift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, dop),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__size_function__SolLS__dop,  // size() function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_const_function__SolLS__dop,  // get_const(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__get_function__SolLS__dop,  // get(index) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__fetch_function__SolLS__dop,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__assign_function__SolLS__dop,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SolLS, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "SolLS",  // message name
  6,  // number of fields
  sizeof(irt_nav_msgs__msg__SolLS),
  irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_member_array,  // message members
  irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, SolLS)() {
  if (!irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__SolLS__rosidl_typesupport_introspection_c__SolLS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
