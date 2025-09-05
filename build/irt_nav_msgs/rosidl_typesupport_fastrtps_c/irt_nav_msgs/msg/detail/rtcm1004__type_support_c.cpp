// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcm1004__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/rtcm1004__struct.h"
#include "irt_nav_msgs/msg/detail/rtcm1004__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
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


using _RTCM1004__ros_msg_type = irt_nav_msgs__msg__RTCM1004;

static bool _RTCM1004__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCM1004__ros_msg_type * ros_message = static_cast<const _RTCM1004__ros_msg_type *>(untyped_ros_message);
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

  // Field name: msg_number
  {
    cdr << ros_message->msg_number;
  }

  // Field name: ref_station_id
  {
    cdr << ros_message->ref_station_id;
  }

  // Field name: gps_epoch_time_ms
  {
    cdr << ros_message->gps_epoch_time_ms;
  }

  // Field name: flag_gnss_synchronous
  {
    cdr << ros_message->flag_gnss_synchronous;
  }

  // Field name: no_gps_sat_signal_processed
  {
    cdr << ros_message->no_gps_sat_signal_processed;
  }

  // Field name: divergency_free_smoothing_indicator
  {
    cdr << ros_message->divergency_free_smoothing_indicator;
  }

  // Field name: smoothing_interval
  {
    cdr << ros_message->smoothing_interval;
  }

  // Field name: sat_id
  {
    size_t size = 12;
    auto array_ptr = ros_message->sat_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_code_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_code_indicator;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_pseudorange_mod1lightms_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_pseudorange_mod1lightms_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_phasenrange_l1_pseudorange_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_phasenrange_l1_pseudorange_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_locktime_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_locktime_indicator;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_integer_pseudorange_modulus_ambiguity_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l1_cnr_db_hz
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_cnr_db_hz;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l2_code_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_code_indicator;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l2_l1_pseudorange_difference_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_l1_pseudorange_difference_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l2_phaserange_l1_pseudorange_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_phaserange_l1_pseudorange_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l2_locktime_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_locktime_indicator;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: l2_cnr_db_hz
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_cnr_db_hz;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: msg_counter
  {
    cdr << ros_message->msg_counter;
  }

  return true;
}

static bool _RTCM1004__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCM1004__ros_msg_type * ros_message = static_cast<_RTCM1004__ros_msg_type *>(untyped_ros_message);
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

  // Field name: msg_number
  {
    cdr >> ros_message->msg_number;
  }

  // Field name: ref_station_id
  {
    cdr >> ros_message->ref_station_id;
  }

  // Field name: gps_epoch_time_ms
  {
    cdr >> ros_message->gps_epoch_time_ms;
  }

  // Field name: flag_gnss_synchronous
  {
    cdr >> ros_message->flag_gnss_synchronous;
  }

  // Field name: no_gps_sat_signal_processed
  {
    cdr >> ros_message->no_gps_sat_signal_processed;
  }

  // Field name: divergency_free_smoothing_indicator
  {
    cdr >> ros_message->divergency_free_smoothing_indicator;
  }

  // Field name: smoothing_interval
  {
    cdr >> ros_message->smoothing_interval;
  }

  // Field name: sat_id
  {
    size_t size = 12;
    auto array_ptr = ros_message->sat_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_code_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_code_indicator;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_pseudorange_mod1lightms_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_pseudorange_mod1lightms_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_phasenrange_l1_pseudorange_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_phasenrange_l1_pseudorange_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_locktime_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_locktime_indicator;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_integer_pseudorange_modulus_ambiguity_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l1_cnr_db_hz
  {
    size_t size = 12;
    auto array_ptr = ros_message->l1_cnr_db_hz;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l2_code_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_code_indicator;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l2_l1_pseudorange_difference_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_l1_pseudorange_difference_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l2_phaserange_l1_pseudorange_m
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_phaserange_l1_pseudorange_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l2_locktime_indicator
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_locktime_indicator;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: l2_cnr_db_hz
  {
    size_t size = 12;
    auto array_ptr = ros_message->l2_cnr_db_hz;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: msg_counter
  {
    cdr >> ros_message->msg_counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__RTCM1004(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCM1004__ros_msg_type * ros_message = static_cast<const _RTCM1004__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name msg_number
  {
    size_t item_size = sizeof(ros_message->msg_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_station_id
  {
    size_t item_size = sizeof(ros_message->ref_station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_epoch_time_ms
  {
    size_t item_size = sizeof(ros_message->gps_epoch_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_gnss_synchronous
  {
    size_t item_size = sizeof(ros_message->flag_gnss_synchronous);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name no_gps_sat_signal_processed
  {
    size_t item_size = sizeof(ros_message->no_gps_sat_signal_processed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name divergency_free_smoothing_indicator
  {
    size_t item_size = sizeof(ros_message->divergency_free_smoothing_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name smoothing_interval
  {
    size_t item_size = sizeof(ros_message->smoothing_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sat_id
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->sat_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_code_indicator
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_code_indicator;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_pseudorange_mod1lightms_m
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_pseudorange_mod1lightms_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_phasenrange_l1_pseudorange_m
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_phasenrange_l1_pseudorange_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_locktime_indicator
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_locktime_indicator;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_integer_pseudorange_modulus_ambiguity_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1_cnr_db_hz
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l1_cnr_db_hz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_code_indicator
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l2_code_indicator;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_l1_pseudorange_difference_m
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l2_l1_pseudorange_difference_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_phaserange_l1_pseudorange_m
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l2_phaserange_l1_pseudorange_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_locktime_indicator
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l2_locktime_indicator;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_cnr_db_hz
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->l2_cnr_db_hz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg_counter
  {
    size_t item_size = sizeof(ros_message->msg_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RTCM1004__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__RTCM1004(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__RTCM1004(
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
  // member: msg_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ref_station_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gps_epoch_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag_gnss_synchronous
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: no_gps_sat_signal_processed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: divergency_free_smoothing_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: smoothing_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sat_id
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l1_code_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l1_pseudorange_mod1lightms_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l1_phasenrange_l1_pseudorange_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l1_locktime_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l1_cnr_db_hz
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l2_code_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l2_l1_pseudorange_difference_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l2_phaserange_l1_pseudorange_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l2_locktime_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l2_cnr_db_hz
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msg_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__RTCM1004;
    is_plain =
      (
      offsetof(DataType, msg_counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RTCM1004__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__RTCM1004(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RTCM1004 = {
  "irt_nav_msgs::msg",
  "RTCM1004",
  _RTCM1004__cdr_serialize,
  _RTCM1004__cdr_deserialize,
  _RTCM1004__get_serialized_size,
  _RTCM1004__max_serialized_size
};

static rosidl_message_type_support_t _RTCM1004__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCM1004,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, RTCM1004)() {
  return &_RTCM1004__type_support;
}

#if defined(__cplusplus)
}
#endif
