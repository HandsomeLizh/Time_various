// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcmv3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/rtcmv3__struct.h"
#include "irt_nav_msgs/msg/detail/rtcmv3__functions.h"
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


using _RTCMV3__ros_msg_type = irt_nav_msgs__msg__RTCMV3;

static bool _RTCMV3__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCMV3__ros_msg_type * ros_message = static_cast<const _RTCMV3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: base
  {
    size_t size = 3;
    auto array_ptr = ros_message->base;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: svid
  {
    size_t size = 40;
    auto array_ptr = ros_message->svid;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange
  {
    size_t size = 200;
    auto array_ptr = ros_message->pseudorange;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: type
  {
    size_t size = 200;
    auto array_ptr = ros_message->type;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: carrier
  {
    size_t size = 200;
    auto array_ptr = ros_message->carrier;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cn0
  {
    size_t size = 200;
    auto array_ptr = ros_message->cn0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: locktime
  {
    size_t size = 200;
    auto array_ptr = ros_message->locktime;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lli
  {
    size_t size = 200;
    auto array_ptr = ros_message->lli;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reference_station_id
  {
    cdr << ros_message->reference_station_id;
  }

  return true;
}

static bool _RTCMV3__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCMV3__ros_msg_type * ros_message = static_cast<_RTCMV3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: base
  {
    size_t size = 3;
    auto array_ptr = ros_message->base;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: svid
  {
    size_t size = 40;
    auto array_ptr = ros_message->svid;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange
  {
    size_t size = 200;
    auto array_ptr = ros_message->pseudorange;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: type
  {
    size_t size = 200;
    auto array_ptr = ros_message->type;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: carrier
  {
    size_t size = 200;
    auto array_ptr = ros_message->carrier;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cn0
  {
    size_t size = 200;
    auto array_ptr = ros_message->cn0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: locktime
  {
    size_t size = 200;
    auto array_ptr = ros_message->locktime;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lli
  {
    size_t size = 200;
    auto array_ptr = ros_message->lli;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reference_station_id
  {
    cdr >> ros_message->reference_station_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__RTCMV3(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCMV3__ros_msg_type * ros_message = static_cast<const _RTCMV3__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->base;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name svid
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->svid;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->pseudorange;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->type;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->carrier;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cn0
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->cn0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locktime
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->locktime;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lli
  {
    size_t array_size = 200;
    auto array_ptr = ros_message->lli;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_station_id
  {
    size_t item_size = sizeof(ros_message->reference_station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RTCMV3__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__RTCMV3(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__RTCMV3(
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
  // member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: base
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: svid
  {
    size_t array_size = 40;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pseudorange
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: type
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carrier
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cn0
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: locktime
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lli
  {
    size_t array_size = 200;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_station_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__RTCMV3;
    is_plain =
      (
      offsetof(DataType, reference_station_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RTCMV3__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__RTCMV3(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RTCMV3 = {
  "irt_nav_msgs::msg",
  "RTCMV3",
  _RTCMV3__cdr_serialize,
  _RTCMV3__cdr_deserialize,
  _RTCMV3__get_serialized_size,
  _RTCMV3__max_serialized_size
};

static rosidl_message_type_support_t _RTCMV3__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCMV3,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, RTCMV3)() {
  return &_RTCMV3__type_support;
}

#if defined(__cplusplus)
}
#endif
