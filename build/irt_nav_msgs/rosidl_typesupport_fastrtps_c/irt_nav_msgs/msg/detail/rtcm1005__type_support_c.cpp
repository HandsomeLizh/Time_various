// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcm1005__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/rtcm1005__struct.h"
#include "irt_nav_msgs/msg/detail/rtcm1005__functions.h"
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


using _RTCM1005__ros_msg_type = irt_nav_msgs__msg__RTCM1005;

static bool _RTCM1005__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCM1005__ros_msg_type * ros_message = static_cast<const _RTCM1005__ros_msg_type *>(untyped_ros_message);
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

  // Field name: reserved_itrf_realization_year
  {
    cdr << ros_message->reserved_itrf_realization_year;
  }

  // Field name: gps_indicator
  {
    cdr << ros_message->gps_indicator;
  }

  // Field name: glo_indicator
  {
    cdr << ros_message->glo_indicator;
  }

  // Field name: galileo_indicator
  {
    cdr << ros_message->galileo_indicator;
  }

  // Field name: reference_station_indicator
  {
    cdr << ros_message->reference_station_indicator;
  }

  // Field name: antenna_reference_point_ecef_x_m
  {
    cdr << ros_message->antenna_reference_point_ecef_x_m;
  }

  // Field name: antenna_reference_point_ecef_y_m
  {
    cdr << ros_message->antenna_reference_point_ecef_y_m;
  }

  // Field name: antenna_reference_point_ecef_z_m
  {
    cdr << ros_message->antenna_reference_point_ecef_z_m;
  }

  // Field name: signle_receiver_oscillator_indicator
  {
    cdr << ros_message->signle_receiver_oscillator_indicator;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: reserved2
  {
    cdr << ros_message->reserved2;
  }

  // Field name: msg_counter
  {
    cdr << ros_message->msg_counter;
  }

  return true;
}

static bool _RTCM1005__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCM1005__ros_msg_type * ros_message = static_cast<_RTCM1005__ros_msg_type *>(untyped_ros_message);
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

  // Field name: reserved_itrf_realization_year
  {
    cdr >> ros_message->reserved_itrf_realization_year;
  }

  // Field name: gps_indicator
  {
    cdr >> ros_message->gps_indicator;
  }

  // Field name: glo_indicator
  {
    cdr >> ros_message->glo_indicator;
  }

  // Field name: galileo_indicator
  {
    cdr >> ros_message->galileo_indicator;
  }

  // Field name: reference_station_indicator
  {
    cdr >> ros_message->reference_station_indicator;
  }

  // Field name: antenna_reference_point_ecef_x_m
  {
    cdr >> ros_message->antenna_reference_point_ecef_x_m;
  }

  // Field name: antenna_reference_point_ecef_y_m
  {
    cdr >> ros_message->antenna_reference_point_ecef_y_m;
  }

  // Field name: antenna_reference_point_ecef_z_m
  {
    cdr >> ros_message->antenna_reference_point_ecef_z_m;
  }

  // Field name: signle_receiver_oscillator_indicator
  {
    cdr >> ros_message->signle_receiver_oscillator_indicator;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: reserved2
  {
    cdr >> ros_message->reserved2;
  }

  // Field name: msg_counter
  {
    cdr >> ros_message->msg_counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__RTCM1005(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCM1005__ros_msg_type * ros_message = static_cast<const _RTCM1005__ros_msg_type *>(untyped_ros_message);
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
  // field.name reserved_itrf_realization_year
  {
    size_t item_size = sizeof(ros_message->reserved_itrf_realization_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_indicator
  {
    size_t item_size = sizeof(ros_message->gps_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_indicator
  {
    size_t item_size = sizeof(ros_message->glo_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name galileo_indicator
  {
    size_t item_size = sizeof(ros_message->galileo_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_station_indicator
  {
    size_t item_size = sizeof(ros_message->reference_station_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_reference_point_ecef_x_m
  {
    size_t item_size = sizeof(ros_message->antenna_reference_point_ecef_x_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_reference_point_ecef_y_m
  {
    size_t item_size = sizeof(ros_message->antenna_reference_point_ecef_y_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_reference_point_ecef_z_m
  {
    size_t item_size = sizeof(ros_message->antenna_reference_point_ecef_z_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signle_receiver_oscillator_indicator
  {
    size_t item_size = sizeof(ros_message->signle_receiver_oscillator_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved2
  {
    size_t item_size = sizeof(ros_message->reserved2);
    current_alignment += item_size +
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

static uint32_t _RTCM1005__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__RTCM1005(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__RTCM1005(
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
  // member: reserved_itrf_realization_year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: galileo_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_station_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: antenna_reference_point_ecef_x_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: antenna_reference_point_ecef_y_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: antenna_reference_point_ecef_z_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: signle_receiver_oscillator_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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
    using DataType = irt_nav_msgs__msg__RTCM1005;
    is_plain =
      (
      offsetof(DataType, msg_counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RTCM1005__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__RTCM1005(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RTCM1005 = {
  "irt_nav_msgs::msg",
  "RTCM1005",
  _RTCM1005__cdr_serialize,
  _RTCM1005__cdr_deserialize,
  _RTCM1005__get_serialized_size,
  _RTCM1005__max_serialized_size
};

static rosidl_message_type_support_t _RTCM1005__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCM1005,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, RTCM1005)() {
  return &_RTCM1005__type_support;
}

#if defined(__cplusplus)
}
#endif
