// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/factor_residuals__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/factor_residuals__functions.h"
#include "irt_nav_msgs/msg/detail/factor_residuals__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `residuals`
#include "irt_nav_msgs/msg/factor_residual.h"
// Member `residuals`
#include "irt_nav_msgs/msg/detail/factor_residual__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__FactorResiduals__init(message_memory);
}

void irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__FactorResiduals__fini(message_memory);
}

size_t irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__size_function__FactorResiduals__residuals(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__FactorResidual__Sequence * member =
    (const irt_nav_msgs__msg__FactorResidual__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_const_function__FactorResiduals__residuals(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__FactorResidual__Sequence * member =
    (const irt_nav_msgs__msg__FactorResidual__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_function__FactorResiduals__residuals(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__FactorResidual__Sequence * member =
    (irt_nav_msgs__msg__FactorResidual__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__fetch_function__FactorResiduals__residuals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__FactorResidual * item =
    ((const irt_nav_msgs__msg__FactorResidual *)
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_const_function__FactorResiduals__residuals(untyped_member, index));
  irt_nav_msgs__msg__FactorResidual * value =
    (irt_nav_msgs__msg__FactorResidual *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__assign_function__FactorResiduals__residuals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__FactorResidual * item =
    ((irt_nav_msgs__msg__FactorResidual *)
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_function__FactorResiduals__residuals(untyped_member, index));
  const irt_nav_msgs__msg__FactorResidual * value =
    (const irt_nav_msgs__msg__FactorResidual *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__resize_function__FactorResiduals__residuals(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__FactorResidual__Sequence * member =
    (irt_nav_msgs__msg__FactorResidual__Sequence *)(untyped_member);
  irt_nav_msgs__msg__FactorResidual__Sequence__fini(member);
  return irt_nav_msgs__msg__FactorResidual__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResiduals, header),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__FactorResiduals, residuals),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__size_function__FactorResiduals__residuals,  // size() function pointer
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_const_function__FactorResiduals__residuals,  // get_const(index) function pointer
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__get_function__FactorResiduals__residuals,  // get(index) function pointer
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__fetch_function__FactorResiduals__residuals,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__assign_function__FactorResiduals__residuals,  // assign(index, value) function pointer
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__resize_function__FactorResiduals__residuals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "FactorResiduals",  // message name
  2,  // number of fields
  sizeof(irt_nav_msgs__msg__FactorResiduals),
  irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_member_array,  // message members
  irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, FactorResiduals)() {
  irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, FactorResidual)();
  if (!irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__FactorResiduals__rosidl_typesupport_introspection_c__FactorResiduals_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
