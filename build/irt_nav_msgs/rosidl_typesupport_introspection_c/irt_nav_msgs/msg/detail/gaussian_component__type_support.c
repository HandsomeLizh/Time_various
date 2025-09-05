// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/gaussian_component__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.h"


// Include directives for member types
// Member `mean`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__GaussianComponent__init(message_memory);
}

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__GaussianComponent__fini(message_memory);
}

size_t irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__size_function__GaussianComponent__mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__fetch_function__GaussianComponent__mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__mean(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__assign_function__GaussianComponent__mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__mean(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__resize_function__GaussianComponent__mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__size_function__GaussianComponent__covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__fetch_function__GaussianComponent__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__assign_function__GaussianComponent__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__resize_function__GaussianComponent__covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_member_array[3] = {
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianComponent, weight),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianComponent, mean),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__size_function__GaussianComponent__mean,  // size() function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__mean,  // get_const(index) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__mean,  // get(index) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__fetch_function__GaussianComponent__mean,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__assign_function__GaussianComponent__mean,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__resize_function__GaussianComponent__mean  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GaussianComponent, covariance),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__size_function__GaussianComponent__covariance,  // size() function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_const_function__GaussianComponent__covariance,  // get_const(index) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__get_function__GaussianComponent__covariance,  // get(index) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__fetch_function__GaussianComponent__covariance,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__assign_function__GaussianComponent__covariance,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__resize_function__GaussianComponent__covariance  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "GaussianComponent",  // message name
  3,  // number of fields
  sizeof(irt_nav_msgs__msg__GaussianComponent),
  irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_member_array,  // message members
  irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GaussianComponent)() {
  if (!irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__GaussianComponent__rosidl_typesupport_introspection_c__GaussianComponent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
