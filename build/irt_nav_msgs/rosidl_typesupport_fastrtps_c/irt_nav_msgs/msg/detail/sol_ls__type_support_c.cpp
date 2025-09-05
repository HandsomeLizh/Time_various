// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/sol_ls__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/sol_ls__struct.h"
#include "irt_nav_msgs/msg/detail/sol_ls__functions.h"
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


// forward declare type support functions


using _SolLS__ros_msg_type = irt_nav_msgs__msg__SolLS;

static bool _SolLS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolLS__ros_msg_type * ros_message = static_cast<const _SolLS__ros_msg_type *>(untyped_ros_message);
  // Field name: llh
  {
    size_t size = 3;
    auto array_ptr = ros_message->llh;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_ned
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_ned;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: receiver_clock_bias
  {
    cdr << ros_message->receiver_clock_bias;
  }

  // Field name: receiver_clock_drift
  {
    cdr << ros_message->receiver_clock_drift;
  }

  // Field name: dop
  {
    size_t size = 2;
    auto array_ptr = ros_message->dop;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: available
  {
    cdr << (ros_message->available ? true : false);
  }

  return true;
}

static bool _SolLS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolLS__ros_msg_type * ros_message = static_cast<_SolLS__ros_msg_type *>(untyped_ros_message);
  // Field name: llh
  {
    size_t size = 3;
    auto array_ptr = ros_message->llh;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_ned
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_ned;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: receiver_clock_bias
  {
    cdr >> ros_message->receiver_clock_bias;
  }

  // Field name: receiver_clock_drift
  {
    cdr >> ros_message->receiver_clock_drift;
  }

  // Field name: dop
  {
    size_t size = 2;
    auto array_ptr = ros_message->dop;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__SolLS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolLS__ros_msg_type * ros_message = static_cast<const _SolLS__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name llh
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->llh;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ned
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vel_ned;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name receiver_clock_bias
  {
    size_t item_size = sizeof(ros_message->receiver_clock_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name receiver_clock_drift
  {
    size_t item_size = sizeof(ros_message->receiver_clock_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dop
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->dop;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name available
  {
    size_t item_size = sizeof(ros_message->available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolLS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__SolLS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__SolLS(
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

  // member: llh
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_ned
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: receiver_clock_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: receiver_clock_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dop
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: available
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
    using DataType = irt_nav_msgs__msg__SolLS;
    is_plain =
      (
      offsetof(DataType, available) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SolLS__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__SolLS(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolLS = {
  "irt_nav_msgs::msg",
  "SolLS",
  _SolLS__cdr_serialize,
  _SolLS__cdr_deserialize,
  _SolLS__get_serialized_size,
  _SolLS__max_serialized_size
};

static rosidl_message_type_support_t _SolLS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolLS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, SolLS)() {
  return &_SolLS__type_support;
}

#if defined(__cplusplus)
}
#endif
