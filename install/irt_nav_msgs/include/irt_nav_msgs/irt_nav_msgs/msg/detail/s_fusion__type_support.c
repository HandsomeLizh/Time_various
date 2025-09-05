// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/s_fusion__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/s_fusion__functions.h"
#include "irt_nav_msgs/msg/detail/s_fusion__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `state`
// Member `cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pva_geodetic`
#include "irt_nav_msgs/msg/pva_geodetic.h"
// Member `pva_geodetic`
#include "irt_nav_msgs/msg/detail/pva_geodetic__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__SFusion__init(message_memory);
}

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__SFusion__fini(message_memory);
}

size_t irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__size_function__SFusion__state(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__fetch_function__SFusion__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__state(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__assign_function__SFusion__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__state(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__resize_function__SFusion__state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__size_function__SFusion__cov(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__cov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__cov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__fetch_function__SFusion__cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__cov(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__assign_function__SFusion__cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__cov(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__resize_function__SFusion__cov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_member_array[14] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "simulation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, simulation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, counter),  // bytes offset in struct
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
    offsetof(irt_nav_msgs__msg__SFusion, tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, filter_tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pps_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, pps_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, state),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__size_function__SFusion__state,  // size() function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__state,  // get_const(index) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__state,  // get(index) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__fetch_function__SFusion__state,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__assign_function__SFusion__state,  // assign(index, value) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__resize_function__SFusion__state  // resize(index) function pointer
  },
  {
    "cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, cov),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__size_function__SFusion__cov,  // size() function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_const_function__SFusion__cov,  // get_const(index) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__get_function__SFusion__cov,  // get(index) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__fetch_function__SFusion__cov,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__assign_function__SFusion__cov,  // assign(index, value) function pointer
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__resize_function__SFusion__cov  // resize(index) function pointer
  },
  {
    "num_used_stat_ant1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, num_used_stat_ant1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_used_stat_ant2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, num_used_stat_ant2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtcm_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, rtcm_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_inited_success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, filter_inited_success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_inited",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, filter_inited),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pva_geodetic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SFusion, pva_geodetic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "SFusion",  // message name
  14,  // number of fields
  sizeof(irt_nav_msgs__msg__SFusion),
  irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_member_array,  // message members
  irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, SFusion)() {
  irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, PVAGeodetic)();
  if (!irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__SFusion__rosidl_typesupport_introspection_c__SFusion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
