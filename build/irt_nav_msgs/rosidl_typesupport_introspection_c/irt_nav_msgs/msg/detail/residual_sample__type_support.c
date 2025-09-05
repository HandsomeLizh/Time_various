// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/residual_sample__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/residual_sample__functions.h"
#include "irt_nav_msgs/msg/detail/residual_sample__struct.h"


// Include directives for member types
// Member `whitened_error`
// Member `unwhitened_error`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__ResidualSample__init(message_memory);
}

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__ResidualSample__fini(message_memory);
}

size_t irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__size_function__ResidualSample__whitened_error(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__whitened_error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__whitened_error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__fetch_function__ResidualSample__whitened_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__whitened_error(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__assign_function__ResidualSample__whitened_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__whitened_error(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__resize_function__ResidualSample__whitened_error(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__size_function__ResidualSample__unwhitened_error(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__unwhitened_error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__unwhitened_error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__fetch_function__ResidualSample__unwhitened_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__unwhitened_error(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__assign_function__ResidualSample__unwhitened_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__unwhitened_error(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__resize_function__ResidualSample__unwhitened_error(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "whitened_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, whitened_error),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__size_function__ResidualSample__whitened_error,  // size() function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__whitened_error,  // get_const(index) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__whitened_error,  // get(index) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__fetch_function__ResidualSample__whitened_error,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__assign_function__ResidualSample__whitened_error,  // assign(index, value) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__resize_function__ResidualSample__whitened_error  // resize(index) function pointer
  },
  {
    "unwhitened_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, unwhitened_error),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__size_function__ResidualSample__unwhitened_error,  // size() function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_const_function__ResidualSample__unwhitened_error,  // get_const(index) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__get_function__ResidualSample__unwhitened_error,  // get(index) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__fetch_function__ResidualSample__unwhitened_error,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__assign_function__ResidualSample__unwhitened_error,  // assign(index, value) function pointer
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__resize_function__ResidualSample__unwhitened_error  // resize(index) function pointer
  },
  {
    "loss_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, loss_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noise_model_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__ResidualSample, noise_model_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "ResidualSample",  // message name
  6,  // number of fields
  sizeof(irt_nav_msgs__msg__ResidualSample),
  irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_member_array,  // message members
  irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, ResidualSample)() {
  if (!irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__ResidualSample__rosidl_typesupport_introspection_c__ResidualSample_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
