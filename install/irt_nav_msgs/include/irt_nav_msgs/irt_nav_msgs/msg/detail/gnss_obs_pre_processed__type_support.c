// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__functions.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `gnss_obs_ant_main`
// Member `gnss_obs_ant_aux`
// Member `dd_gnss_obs_dualantenna`
// Member `dd_gnss_obs_time`
// Member `dd_gnss_obs_rtcm`
#include "irt_nav_msgs/msg/gnss_obs.h"
// Member `gnss_obs_ant_main`
// Member `gnss_obs_ant_aux`
// Member `dd_gnss_obs_dualantenna`
// Member `dd_gnss_obs_time`
// Member `dd_gnss_obs_rtcm`
#include "irt_nav_msgs/msg/detail/gnss_obs__rosidl_typesupport_introspection_c.h"
// Member `gnss_corrections`
#include "irt_nav_msgs/msg/gnss_correction.h"
// Member `gnss_corrections`
#include "irt_nav_msgs/msg/detail/gnss_correction__rosidl_typesupport_introspection_c.h"
// Member `faulty_prn_main`
// Member `faulty_prn_aux`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__GNSSObsPreProcessed__init(message_memory);
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__GNSSObsPreProcessed__fini(message_memory);
}

size_t irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__gnss_corrections(
  const void * untyped_member)
{
  const irt_nav_msgs__msg__GNSSCorrection__Sequence * member =
    (const irt_nav_msgs__msg__GNSSCorrection__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__gnss_corrections(
  const void * untyped_member, size_t index)
{
  const irt_nav_msgs__msg__GNSSCorrection__Sequence * member =
    (const irt_nav_msgs__msg__GNSSCorrection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__gnss_corrections(
  void * untyped_member, size_t index)
{
  irt_nav_msgs__msg__GNSSCorrection__Sequence * member =
    (irt_nav_msgs__msg__GNSSCorrection__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__gnss_corrections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irt_nav_msgs__msg__GNSSCorrection * item =
    ((const irt_nav_msgs__msg__GNSSCorrection *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__gnss_corrections(untyped_member, index));
  irt_nav_msgs__msg__GNSSCorrection * value =
    (irt_nav_msgs__msg__GNSSCorrection *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__gnss_corrections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irt_nav_msgs__msg__GNSSCorrection * item =
    ((irt_nav_msgs__msg__GNSSCorrection *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__gnss_corrections(untyped_member, index));
  const irt_nav_msgs__msg__GNSSCorrection * value =
    (const irt_nav_msgs__msg__GNSSCorrection *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__gnss_corrections(
  void * untyped_member, size_t size)
{
  irt_nav_msgs__msg__GNSSCorrection__Sequence * member =
    (irt_nav_msgs__msg__GNSSCorrection__Sequence *)(untyped_member);
  irt_nav_msgs__msg__GNSSCorrection__Sequence__fini(member);
  return irt_nav_msgs__msg__GNSSCorrection__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__faulty_prn_main(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_main(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_main(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__faulty_prn_main(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_main(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__faulty_prn_main(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_main(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__faulty_prn_main(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__faulty_prn_aux(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_aux(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_aux(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__faulty_prn_aux(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_aux(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__faulty_prn_aux(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_aux(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__faulty_prn_aux(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, header),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_offset_gal_gps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, time_offset_gal_gps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_ggto_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, is_ggto_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnss_obs_ant_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, gnss_obs_ant_main),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnss_obs_ant_aux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, gnss_obs_ant_aux),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_dualantenna",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, dd_gnss_obs_dualantenna),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, dd_gnss_obs_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_rtcm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, dd_gnss_obs_rtcm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnss_corrections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, gnss_corrections),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__gnss_corrections,  // size() function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__gnss_corrections,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__gnss_corrections,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__gnss_corrections,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__gnss_corrections,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__gnss_corrections  // resize(index) function pointer
  },
  {
    "faulty_prn_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, faulty_prn_main),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__faulty_prn_main,  // size() function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_main,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_main,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__faulty_prn_main,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__faulty_prn_main,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__faulty_prn_main  // resize(index) function pointer
  },
  {
    "faulty_prn_aux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, faulty_prn_aux),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__size_function__GNSSObsPreProcessed__faulty_prn_aux,  // size() function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_const_function__GNSSObsPreProcessed__faulty_prn_aux,  // get_const(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__get_function__GNSSObsPreProcessed__faulty_prn_aux,  // get(index) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__fetch_function__GNSSObsPreProcessed__faulty_prn_aux,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__assign_function__GNSSObsPreProcessed__faulty_prn_aux,  // assign(index, value) function pointer
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__resize_function__GNSSObsPreProcessed__faulty_prn_aux  // resize(index) function pointer
  },
  {
    "has_time_dd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, has_time_dd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_dualantenna",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, has_dualantenna),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_dualantenna_dd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, has_dualantenna_dd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_rtcm_dd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, has_rtcm_dd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_rtk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__GNSSObsPreProcessed, has_rtk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "GNSSObsPreProcessed",  // message name
  17,  // number of fields
  sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed),
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array,  // message members
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObsPreProcessed)() {
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSObs)();
  irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, GNSSCorrection)();
  if (!irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__GNSSObsPreProcessed__rosidl_typesupport_introspection_c__GNSSObsPreProcessed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
