// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "irt_nav_msgs/msg/detail/gnss_correction__functions.h"  // gnss_corrections
#include "irt_nav_msgs/msg/detail/gnss_obs__functions.h"  // dd_gnss_obs_dualantenna, dd_gnss_obs_rtcm, dd_gnss_obs_time, gnss_obs_ant_aux, gnss_obs_ant_main
#include "rosidl_runtime_c/primitives_sequence.h"  // faulty_prn_aux, faulty_prn_main
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // faulty_prn_aux, faulty_prn_main
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_irt_nav_msgs__msg__GNSSCorrection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_irt_nav_msgs__msg__GNSSCorrection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSCorrection)();
size_t get_serialized_size_irt_nav_msgs__msg__GNSSObs(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_irt_nav_msgs__msg__GNSSObs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GNSSObsPreProcessed__ros_msg_type = irt_nav_msgs__msg__GNSSObsPreProcessed;

static bool _GNSSObsPreProcessed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GNSSObsPreProcessed__ros_msg_type * ros_message = static_cast<const _GNSSObsPreProcessed__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: time_offset_gal_gps
  {
    cdr << ros_message->time_offset_gal_gps;
  }

  // Field name: is_ggto_valid
  {
    cdr << (ros_message->is_ggto_valid ? true : false);
  }

  // Field name: gnss_obs_ant_main
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_obs_ant_main, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_obs_ant_aux
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_obs_ant_aux, cdr))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_dualantenna
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dd_gnss_obs_dualantenna, cdr))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dd_gnss_obs_time, cdr))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_rtcm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dd_gnss_obs_rtcm, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_corrections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSCorrection
      )()->data);
    size_t size = ros_message->gnss_corrections.size;
    auto array_ptr = ros_message->gnss_corrections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: faulty_prn_main
  {
    size_t size = ros_message->faulty_prn_main.size;
    auto array_ptr = ros_message->faulty_prn_main.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: faulty_prn_aux
  {
    size_t size = ros_message->faulty_prn_aux.size;
    auto array_ptr = ros_message->faulty_prn_aux.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: has_time_dd
  {
    cdr << (ros_message->has_time_dd ? true : false);
  }

  // Field name: has_dualantenna
  {
    cdr << (ros_message->has_dualantenna ? true : false);
  }

  // Field name: has_dualantenna_dd
  {
    cdr << (ros_message->has_dualantenna_dd ? true : false);
  }

  // Field name: has_rtcm_dd
  {
    cdr << (ros_message->has_rtcm_dd ? true : false);
  }

  // Field name: has_rtk
  {
    cdr << (ros_message->has_rtk ? true : false);
  }

  return true;
}

static bool _GNSSObsPreProcessed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GNSSObsPreProcessed__ros_msg_type * ros_message = static_cast<_GNSSObsPreProcessed__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: time_offset_gal_gps
  {
    cdr >> ros_message->time_offset_gal_gps;
  }

  // Field name: is_ggto_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ggto_valid = tmp ? true : false;
  }

  // Field name: gnss_obs_ant_main
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_obs_ant_main))
    {
      return false;
    }
  }

  // Field name: gnss_obs_ant_aux
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_obs_ant_aux))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_dualantenna
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dd_gnss_obs_dualantenna))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dd_gnss_obs_time))
    {
      return false;
    }
  }

  // Field name: dd_gnss_obs_rtcm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dd_gnss_obs_rtcm))
    {
      return false;
    }
  }

  // Field name: gnss_corrections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSCorrection
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gnss_corrections.data) {
      irt_nav_msgs__msg__GNSSCorrection__Sequence__fini(&ros_message->gnss_corrections);
    }
    if (!irt_nav_msgs__msg__GNSSCorrection__Sequence__init(&ros_message->gnss_corrections, size)) {
      fprintf(stderr, "failed to create array for field 'gnss_corrections'");
      return false;
    }
    auto array_ptr = ros_message->gnss_corrections.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: faulty_prn_main
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->faulty_prn_main.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->faulty_prn_main);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->faulty_prn_main, size)) {
      fprintf(stderr, "failed to create array for field 'faulty_prn_main'");
      return false;
    }
    auto array_ptr = ros_message->faulty_prn_main.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: faulty_prn_aux
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->faulty_prn_aux.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->faulty_prn_aux);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->faulty_prn_aux, size)) {
      fprintf(stderr, "failed to create array for field 'faulty_prn_aux'");
      return false;
    }
    auto array_ptr = ros_message->faulty_prn_aux.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: has_time_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_time_dd = tmp ? true : false;
  }

  // Field name: has_dualantenna
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_dualantenna = tmp ? true : false;
  }

  // Field name: has_dualantenna_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_dualantenna_dd = tmp ? true : false;
  }

  // Field name: has_rtcm_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_rtcm_dd = tmp ? true : false;
  }

  // Field name: has_rtk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_rtk = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__GNSSObsPreProcessed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GNSSObsPreProcessed__ros_msg_type * ros_message = static_cast<const _GNSSObsPreProcessed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_offset_gal_gps
  {
    size_t item_size = sizeof(ros_message->time_offset_gal_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ggto_valid
  {
    size_t item_size = sizeof(ros_message->is_ggto_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_obs_ant_main

  current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSObs(
    &(ros_message->gnss_obs_ant_main), current_alignment);
  // field.name gnss_obs_ant_aux

  current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSObs(
    &(ros_message->gnss_obs_ant_aux), current_alignment);
  // field.name dd_gnss_obs_dualantenna

  current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSObs(
    &(ros_message->dd_gnss_obs_dualantenna), current_alignment);
  // field.name dd_gnss_obs_time

  current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSObs(
    &(ros_message->dd_gnss_obs_time), current_alignment);
  // field.name dd_gnss_obs_rtcm

  current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSObs(
    &(ros_message->dd_gnss_obs_rtcm), current_alignment);
  // field.name gnss_corrections
  {
    size_t array_size = ros_message->gnss_corrections.size;
    auto array_ptr = ros_message->gnss_corrections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_irt_nav_msgs__msg__GNSSCorrection(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name faulty_prn_main
  {
    size_t array_size = ros_message->faulty_prn_main.size;
    auto array_ptr = ros_message->faulty_prn_main.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name faulty_prn_aux
  {
    size_t array_size = ros_message->faulty_prn_aux.size;
    auto array_ptr = ros_message->faulty_prn_aux.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_time_dd
  {
    size_t item_size = sizeof(ros_message->has_time_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_dualantenna
  {
    size_t item_size = sizeof(ros_message->has_dualantenna);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_dualantenna_dd
  {
    size_t item_size = sizeof(ros_message->has_dualantenna_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_rtcm_dd
  {
    size_t item_size = sizeof(ros_message->has_rtcm_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_rtk
  {
    size_t item_size = sizeof(ros_message->has_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GNSSObsPreProcessed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__GNSSObsPreProcessed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__GNSSObsPreProcessed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_offset_gal_gps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_ggto_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_obs_ant_main
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gnss_obs_ant_aux
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dd_gnss_obs_dualantenna
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dd_gnss_obs_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dd_gnss_obs_rtcm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gnss_corrections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GNSSCorrection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: faulty_prn_main
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: faulty_prn_aux
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_time_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_dualantenna
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_dualantenna_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_rtcm_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_rtk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__GNSSObsPreProcessed;
    is_plain =
      (
      offsetof(DataType, has_rtk) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GNSSObsPreProcessed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__GNSSObsPreProcessed(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GNSSObsPreProcessed = {
  "irt_nav_msgs::msg",
  "GNSSObsPreProcessed",
  _GNSSObsPreProcessed__cdr_serialize,
  _GNSSObsPreProcessed__cdr_deserialize,
  _GNSSObsPreProcessed__get_serialized_size,
  _GNSSObsPreProcessed__max_serialized_size
};

static rosidl_message_type_support_t _GNSSObsPreProcessed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GNSSObsPreProcessed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObsPreProcessed)() {
  return &_GNSSObsPreProcessed__type_support;
}

#if defined(__cplusplus)
}
#endif
