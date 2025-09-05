// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/factor_residual__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/factor_residual__functions.h"
#include "irt_nav_msgs/msg/detail/factor_residual__struct.h"


// Include directives for member types
// Member `factor_name`
// Member `related_keys`
#include "rosidl_runtime_c/string_functions.h"
// Member `samples`
#include "irt_nav_msgs/msg/residual_sample.h"
// Member `samples`
#include "irt_nav_msgs/msg/detail/residual_sample__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__FactorResidual__init(message_memory);
}

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__FactorResidual__fini(message_memory);
}

size_t irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__size_function__FactorResidual__related_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__related_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__related_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__fetch_function__FactorResidual__related_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__related_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__assign_function__FactorResidual__related_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__related_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__resize_function__FactorResidual__related_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__size_function__FactorResidual__samples(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__ResidualSample__Sequence * member =
    (const irt_nav_msgs__msg__ResidualSample__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__samples(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__ResidualSample__Sequence * member =
    (const irt_nav_msgs__msg__ResidualSample__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__samples(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__ResidualSample__Sequence * member =
    (irt_nav_msgs__msg__ResidualSample__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__fetch_function__FactorResidual__samples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__ResidualSample * item =
    ((const irt_nav_msgs__msg__ResidualSample *)
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__samples(untyped_member, index));
  irt_nav_msgs__msg__ResidualSample * value =
    (irt_nav_msgs__msg__ResidualSample *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__assign_function__FactorResidual__samples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__ResidualSample * item =
    ((irt_nav_msgs__msg__ResidualSample *)
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__samples(untyped_member, index));
  const irt_nav_msgs__msg__ResidualSample * value =
    (const irt_nav_msgs__msg__ResidualSample *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__resize_function__FactorResidual__samples(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__ResidualSample__Sequence * member =
    (irt_nav_msgs__msg__ResidualSample__Sequence *)(untyped_member);
  irt_nav_msgs__msg__ResidualSample__Sequence__fini(member);
  return irt_nav_msgs__msg__ResidualSample__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_member_array[4] = {
  {
    "factor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResidual, factor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_state_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResidual, current_state_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "related_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResidual, related_keys),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__size_function__FactorResidual__related_keys,  // size() function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__related_keys,  // get_const(index) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__related_keys,  // get(index) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__fetch_function__FactorResidual__related_keys,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__assign_function__FactorResidual__related_keys,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__resize_function__FactorResidual__related_keys  // resize(index) function pointer
  },
  {
    "samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResidual, samples),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__size_function__FactorResidual__samples,  // size() function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_const_function__FactorResidual__samples,  // get_const(index) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__get_function__FactorResidual__samples,  // get(index) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__fetch_function__FactorResidual__samples,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__assign_function__FactorResidual__samples,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__resize_function__FactorResidual__samples  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "FactorResidual",  // message name
  4,  // number of fields
  sizeof(irt_nav_msgs__msg__FactorResidual),
  irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_member_array,  // message members
  irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, FactorResidual)() {
  irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, ResidualSample)();
  if (!irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__FactorResidual__rosidl_typesupport_introspection_c__FactorResidual_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
