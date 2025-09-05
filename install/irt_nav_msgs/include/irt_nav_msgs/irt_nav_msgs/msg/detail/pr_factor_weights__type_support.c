// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/pr_factor_weights__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/pr_factor_weights__functions.h"
#include "irt_nav_msgs/msg/detail/pr_factor_weights__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sat`
// Member `weight`
// Member `cardinality`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__PRFactorWeights__init(message_memory);
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__PRFactorWeights__fini(message_memory);
}

size_t irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__sat(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__sat(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__sat(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__sat(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__sat(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__sat(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__sat(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__sat(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__weight(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__weight(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__weight(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__weight(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__weight(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__weight(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__weight(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__weight(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__cardinality(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__cardinality(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__cardinality(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__cardinality(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__cardinality(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__cardinality(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__cardinality(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__cardinality(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "median",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, median),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, sat),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__sat,  // size() function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__sat,  // get_const(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__sat,  // get(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__sat,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__sat,  // assign(index, value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__sat  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, weight),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__weight,  // size() function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__weight,  // get_const(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__weight,  // get(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__weight,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__weight,  // assign(index, value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__weight  // resize(index) function pointer
  },
  {
    "cardinality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__PRFactorWeights, cardinality),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__size_function__PRFactorWeights__cardinality,  // size() function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_const_function__PRFactorWeights__cardinality,  // get_const(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__get_function__PRFactorWeights__cardinality,  // get(index) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__fetch_function__PRFactorWeights__cardinality,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__assign_function__PRFactorWeights__cardinality,  // assign(index, value) function pointer
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__resize_function__PRFactorWeights__cardinality  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "PRFactorWeights",  // message name
  7,  // number of fields
  sizeof(irt_nav_msgs__msg__PRFactorWeights),
  irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_member_array,  // message members
  irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, PRFactorWeights)() {
  irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__PRFactorWeights__rosidl_typesupport_introspection_c__PRFactorWeights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
