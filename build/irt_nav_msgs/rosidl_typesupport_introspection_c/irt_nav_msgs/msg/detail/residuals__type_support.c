// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/Residuals.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/residuals__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/residuals__functions.h"
#include "irt_nav_msgs/msg/detail/residuals__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `residuals_ant_main`
// Member `residuals_ant_aux`
#include "irt_nav_msgs/msg/residual.h"
// Member `residuals_ant_main`
// Member `residuals_ant_aux`
#include "irt_nav_msgs/msg/detail/residual__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__Residuals__init(message_memory);
}

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__Residuals__fini(message_memory);
}

size_t irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__size_function__Residuals__residuals_ant_main(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__Residual__Sequence * member =
    (const irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_main(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__Residual__Sequence * member =
    (const irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_main(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__Residual__Sequence * member =
    (irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__fetch_function__Residuals__residuals_ant_main(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__Residual * item =
    ((const irt_nav_msgs__msg__Residual *)
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_main(untyped_member, index));
  irt_nav_msgs__msg__Residual * value =
    (irt_nav_msgs__msg__Residual *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__assign_function__Residuals__residuals_ant_main(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__Residual * item =
    ((irt_nav_msgs__msg__Residual *)
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_main(untyped_member, index));
  const irt_nav_msgs__msg__Residual * value =
    (const irt_nav_msgs__msg__Residual *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__resize_function__Residuals__residuals_ant_main(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__Residual__Sequence * member =
    (irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  irt_nav_msgs__msg__Residual__Sequence__fini(member);
  return irt_nav_msgs__msg__Residual__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__size_function__Residuals__residuals_ant_aux(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__Residual__Sequence * member =
    (const irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_aux(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__Residual__Sequence * member =
    (const irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_aux(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__Residual__Sequence * member =
    (irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__fetch_function__Residuals__residuals_ant_aux(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__Residual * item =
    ((const irt_nav_msgs__msg__Residual *)
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_aux(untyped_member, index));
  irt_nav_msgs__msg__Residual * value =
    (irt_nav_msgs__msg__Residual *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__assign_function__Residuals__residuals_ant_aux(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__Residual * item =
    ((irt_nav_msgs__msg__Residual *)
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_aux(untyped_member, index));
  const irt_nav_msgs__msg__Residual * value =
    (const irt_nav_msgs__msg__Residual *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__resize_function__Residuals__residuals_ant_aux(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__Residual__Sequence * member =
    (irt_nav_msgs__msg__Residual__Sequence *)(untyped_member);
  irt_nav_msgs__msg__Residual__Sequence__fini(member);
  return irt_nav_msgs__msg__Residual__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Residuals, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "residuals_ant_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Residuals, residuals_ant_main),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__size_function__Residuals__residuals_ant_main,  // size() function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_main,  // get_const(index) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_main,  // get(index) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__fetch_function__Residuals__residuals_ant_main,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__assign_function__Residuals__residuals_ant_main,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__resize_function__Residuals__residuals_ant_main  // resize(index) function pointer
  },
  {
    "residuals_ant_aux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__Residuals, residuals_ant_aux),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__size_function__Residuals__residuals_ant_aux,  // size() function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_const_function__Residuals__residuals_ant_aux,  // get_const(index) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__get_function__Residuals__residuals_ant_aux,  // get(index) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__fetch_function__Residuals__residuals_ant_aux,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__assign_function__Residuals__residuals_ant_aux,  // assign(index, value) function pointer
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__resize_function__Residuals__residuals_ant_aux  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "Residuals",  // message name
  3,  // number of fields
  sizeof(irt_nav_msgs__msg__Residuals),
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_member_array,  // message members
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, Residuals)() {
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, Residual)();
  irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, Residual)();
  if (!irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__Residuals__rosidl_typesupport_introspection_c__Residuals_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
