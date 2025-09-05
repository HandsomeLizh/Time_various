// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__struct.h"
#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__functions.h"
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


using _ElapsedTimeFGO__ros_msg_type = irt_nav_msgs__msg__ElapsedTimeFGO;

static bool _ElapsedTimeFGO__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ElapsedTimeFGO__ros_msg_type * ros_message = static_cast<const _ElapsedTimeFGO__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ts_start_construction
  {
    cdr << ros_message->ts_start_construction;
  }

  // Field name: ts_start_optimization
  {
    cdr << ros_message->ts_start_optimization;
  }

  // Field name: duration_construction
  {
    cdr << ros_message->duration_construction;
  }

  // Field name: duration_optimization
  {
    cdr << ros_message->duration_optimization;
  }

  // Field name: num_new_factors
  {
    cdr << ros_message->num_new_factors;
  }

  return true;
}

static bool _ElapsedTimeFGO__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ElapsedTimeFGO__ros_msg_type * ros_message = static_cast<_ElapsedTimeFGO__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ts_start_construction
  {
    cdr >> ros_message->ts_start_construction;
  }

  // Field name: ts_start_optimization
  {
    cdr >> ros_message->ts_start_optimization;
  }

  // Field name: duration_construction
  {
    cdr >> ros_message->duration_construction;
  }

  // Field name: duration_optimization
  {
    cdr >> ros_message->duration_optimization;
  }

  // Field name: num_new_factors
  {
    cdr >> ros_message->num_new_factors;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__ElapsedTimeFGO(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ElapsedTimeFGO__ros_msg_type * ros_message = static_cast<const _ElapsedTimeFGO__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ts_start_construction
  {
    size_t item_size = sizeof(ros_message->ts_start_construction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ts_start_optimization
  {
    size_t item_size = sizeof(ros_message->ts_start_optimization);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration_construction
  {
    size_t item_size = sizeof(ros_message->duration_construction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration_optimization
  {
    size_t item_size = sizeof(ros_message->duration_optimization);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_new_factors
  {
    size_t item_size = sizeof(ros_message->num_new_factors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ElapsedTimeFGO__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__ElapsedTimeFGO(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__ElapsedTimeFGO(
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
  // member: ts_start_construction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ts_start_optimization
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration_construction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration_optimization
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_new_factors
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
    using DataType = irt_nav_msgs__msg__ElapsedTimeFGO;
    is_plain =
      (
      offsetof(DataType, num_new_factors) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ElapsedTimeFGO__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__ElapsedTimeFGO(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ElapsedTimeFGO = {
  "irt_nav_msgs::msg",
  "ElapsedTimeFGO",
  _ElapsedTimeFGO__cdr_serialize,
  _ElapsedTimeFGO__cdr_deserialize,
  _ElapsedTimeFGO__get_serialized_size,
  _ElapsedTimeFGO__max_serialized_size
};

static rosidl_message_type_support_t _ElapsedTimeFGO__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ElapsedTimeFGO,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, ElapsedTimeFGO)() {
  return &_ElapsedTimeFGO__type_support;
}

#if defined(__cplusplus)
}
#endif
