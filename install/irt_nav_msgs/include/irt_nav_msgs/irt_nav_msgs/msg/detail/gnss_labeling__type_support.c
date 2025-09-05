// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/gnss_labeling__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/gnss_labeling__functions.h"
#include "irt_nav_msgs/msg/detail/gnss_labeling__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ant_main_labels`
// Member `ant_aux_labels`
#include "irt_nav_msgs/msg/sat_label.h"
// Member `ant_main_labels`
// Member `ant_aux_labels`
#include "irt_nav_msgs/msg/detail/sat_label__rosidl_typesupport_introspection_c.h"
// Member `faulty_prn_main`
// Member `faulty_prn_aux`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `ant_pos`
// Member `ant_vel`
// Member `gt_pos`
// Member `gt_vel`
#include "geometry_msgs/msg/vector3.h"
// Member `ant_pos`
// Member `ant_vel`
// Member `gt_pos`
// Member `gt_vel`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `environment`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__GNSSLabeling__init(message_memory);
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__GNSSLabeling__fini(message_memory);
}

size_t irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__ant_main_labels(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__SatLabel__Sequence * member =
    (const irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_main_labels(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__SatLabel__Sequence * member =
    (const irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_main_labels(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__SatLabel__Sequence * member =
    (irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__ant_main_labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__SatLabel * item =
    ((const irt_nav_msgs__msg__SatLabel *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_main_labels(untyped_member, index));
  irt_nav_msgs__msg__SatLabel * value =
    (irt_nav_msgs__msg__SatLabel *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__ant_main_labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__SatLabel * item =
    ((irt_nav_msgs__msg__SatLabel *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_main_labels(untyped_member, index));
  const irt_nav_msgs__msg__SatLabel * value =
    (const irt_nav_msgs__msg__SatLabel *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__ant_main_labels(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__SatLabel__Sequence * member =
    (irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  irt_nav_msgs__msg__SatLabel__Sequence__fini(member);
  return irt_nav_msgs__msg__SatLabel__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__ant_aux_labels(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__SatLabel__Sequence * member =
    (const irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_aux_labels(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__SatLabel__Sequence * member =
    (const irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_aux_labels(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__SatLabel__Sequence * member =
    (irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__ant_aux_labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__SatLabel * item =
    ((const irt_nav_msgs__msg__SatLabel *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_aux_labels(untyped_member, index));
  irt_nav_msgs__msg__SatLabel * value =
    (irt_nav_msgs__msg__SatLabel *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__ant_aux_labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__SatLabel * item =
    ((irt_nav_msgs__msg__SatLabel *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_aux_labels(untyped_member, index));
  const irt_nav_msgs__msg__SatLabel * value =
    (const irt_nav_msgs__msg__SatLabel *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__ant_aux_labels(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__SatLabel__Sequence * member =
    (irt_nav_msgs__msg__SatLabel__Sequence *)(untyped_member);
  irt_nav_msgs__msg__SatLabel__Sequence__fini(member);
  return irt_nav_msgs__msg__SatLabel__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__faulty_prn_main(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_main(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_main(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__faulty_prn_main(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_main(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__faulty_prn_main(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_main(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__faulty_prn_main(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__faulty_prn_aux(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_aux(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_aux(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__faulty_prn_aux(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_aux(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__faulty_prn_aux(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_aux(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__faulty_prn_aux(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "related_state_timestamp_nanosec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, related_state_timestamp_nanosec),  // bytes offset in struct
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
    offsetof(irt_nav_msgs__msg__GNSSLabeling, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_receive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, time_receive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solution_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, solution_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_main_labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, ant_main_labels),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__ant_main_labels,  // size() function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_main_labels,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_main_labels,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__ant_main_labels,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__ant_main_labels,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__ant_main_labels  // resize(index) function pointer
  },
  {
    "ant_aux_labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, ant_aux_labels),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__ant_aux_labels,  // size() function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__ant_aux_labels,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__ant_aux_labels,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__ant_aux_labels,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__ant_aux_labels,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__ant_aux_labels  // resize(index) function pointer
  },
  {
    "faulty_prn_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, faulty_prn_main),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__faulty_prn_main,  // size() function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_main,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_main,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__faulty_prn_main,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__faulty_prn_main,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__faulty_prn_main  // resize(index) function pointer
  },
  {
    "faulty_prn_aux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, faulty_prn_aux),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__size_function__GNSSLabeling__faulty_prn_aux,  // size() function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_const_function__GNSSLabeling__faulty_prn_aux,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__get_function__GNSSLabeling__faulty_prn_aux,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__fetch_function__GNSSLabeling__faulty_prn_aux,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__assign_function__GNSSLabeling__faulty_prn_aux,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__resize_function__GNSSLabeling__faulty_prn_aux  // resize(index) function pointer
  },
  {
    "gt_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, gt_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, ant_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ant_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, ant_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gt_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, gt_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gt_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, gt_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clock_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, clock_bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clock_drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, clock_drift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gt_clock_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, gt_clock_bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gt_clock_drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSLabeling, gt_clock_drift),  // bytes offset in struct
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
    offsetof(irt_nav_msgs__msg__GNSSLabeling, environment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "GNSSLabeling",  // message name
  19,  // number of fields
  sizeof(irt_nav_msgs__msg__GNSSLabeling),
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array,  // message members
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSLabeling)() {
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, SatLabel)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, SatLabel)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__GNSSLabeling__rosidl_typesupport_introspection_c__GNSSLabeling_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
