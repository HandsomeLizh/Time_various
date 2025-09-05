// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/GaussianMixture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/gaussian_mixture__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/gaussian_mixture__functions.h"
#include "irt_nav_msgs/msg/detail/gaussian_mixture__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `factor`
// Member `environment`
#include "rosidl_runtime_c/string_functions.h"
// Member `residuals`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gaussian`
#include "irt_nav_msgs/msg/gaussian_component.h"
// Member `gaussian`
#include "irt_nav_msgs/msg/detail/gaussian_component__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__GaussianMixture__init(message_memory);
}

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__GaussianMixture__fini(message_memory);
}

size_t irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__size_function__GaussianMixture__residuals(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__residuals(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__residuals(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__fetch_function__GaussianMixture__residuals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__residuals(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__assign_function__GaussianMixture__residuals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__residuals(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__resize_function__GaussianMixture__residuals(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__size_function__GaussianMixture__gaussian(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__GaussianComponent__Sequence * member =
    (const irt_nav_msgs__msg__GaussianComponent__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__gaussian(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__GaussianComponent__Sequence * member =
    (const irt_nav_msgs__msg__GaussianComponent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__gaussian(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__GaussianComponent__Sequence * member =
    (irt_nav_msgs__msg__GaussianComponent__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__fetch_function__GaussianMixture__gaussian(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__GaussianComponent * item =
    ((const irt_nav_msgs__msg__GaussianComponent *)
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__gaussian(untyped_member, index));
  irt_nav_msgs__msg__GaussianComponent * value =
    (irt_nav_msgs__msg__GaussianComponent *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__assign_function__GaussianMixture__gaussian(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__GaussianComponent * item =
    ((irt_nav_msgs__msg__GaussianComponent *)
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__gaussian(untyped_member, index));
  const irt_nav_msgs__msg__GaussianComponent * value =
    (const irt_nav_msgs__msg__GaussianComponent *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__resize_function__GaussianMixture__gaussian(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__GaussianComponent__Sequence * member =
    (irt_nav_msgs__msg__GaussianComponent__Sequence *)(untyped_member);
  irt_nav_msgs__msg__GaussianComponent__Sequence__fini(member);
  return irt_nav_msgs__msg__GaussianComponent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, header),  // bytes offset in struct
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
    offsetof(irt_nav_msgs__msg__GaussianMixture, tow),  // bytes offset in struct
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
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, sat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "environment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, environment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dim",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, dim),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "residuals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, residuals),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__size_function__GaussianMixture__residuals,  // size() function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__residuals,  // get_const(index) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__residuals,  // get(index) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__fetch_function__GaussianMixture__residuals,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__assign_function__GaussianMixture__residuals,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__resize_function__GaussianMixture__residuals  // resize(index) function pointer
  },
  {
    "gaussian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianMixture, gaussian),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__size_function__GaussianMixture__gaussian,  // size() function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_const_function__GaussianMixture__gaussian,  // get_const(index) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__get_function__GaussianMixture__gaussian,  // get(index) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__fetch_function__GaussianMixture__gaussian,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__assign_function__GaussianMixture__gaussian,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__resize_function__GaussianMixture__gaussian  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "GaussianMixture",  // message name
  9,  // number of fields
  sizeof(irt_nav_msgs__msg__GaussianMixture),
  irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_member_array,  // message members
  irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GaussianMixture)() {
  irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GaussianComponent)();
  if (!irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__GaussianMixture__rosidl_typesupport_introspection_c__GaussianMixture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
