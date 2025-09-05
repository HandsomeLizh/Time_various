// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/s_fusion__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/s_fusion__struct.h"
#include "irt_nav_msgs/msg/detail/s_fusion__functions.h"
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

#include "irt_nav_msgs/msg/detail/pva_geodetic__functions.h"  // pva_geodetic
#include "rosidl_runtime_c/primitives_sequence.h"  // cov, state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cov, state
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, PVAGeodetic)();
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


using _SFusion__ros_msg_type = irt_nav_msgs__msg__SFusion;

static bool _SFusion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFusion__ros_msg_type * ros_message = static_cast<const _SFusion__ros_msg_type *>(untyped_ros_message);
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

  // Field name: simulation_time
  {
    cdr << ros_message->simulation_time;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: filter_tow
  {
    cdr << ros_message->filter_tow;
  }

  // Field name: pps_counter
  {
    cdr << ros_message->pps_counter;
  }

  // Field name: state
  {
    size_t size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov
  {
    size_t size = ros_message->cov.size;
    auto array_ptr = ros_message->cov.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: num_used_stat_ant1
  {
    cdr << ros_message->num_used_stat_ant1;
  }

  // Field name: num_used_stat_ant2
  {
    cdr << ros_message->num_used_stat_ant2;
  }

  // Field name: rtcm_counter
  {
    cdr << ros_message->rtcm_counter;
  }

  // Field name: filter_inited_success
  {
    cdr << (ros_message->filter_inited_success ? true : false);
  }

  // Field name: filter_inited
  {
    cdr << (ros_message->filter_inited ? true : false);
  }

  // Field name: pva_geodetic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, PVAGeodetic
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pva_geodetic, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SFusion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFusion__ros_msg_type * ros_message = static_cast<_SFusion__ros_msg_type *>(untyped_ros_message);
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

  // Field name: simulation_time
  {
    cdr >> ros_message->simulation_time;
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: filter_tow
  {
    cdr >> ros_message->filter_tow;
  }

  // Field name: pps_counter
  {
    cdr >> ros_message->pps_counter;
  }

  // Field name: state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->state.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->state);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->state, size)) {
      fprintf(stderr, "failed to create array for field 'state'");
      return false;
    }
    auto array_ptr = ros_message->state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cov.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cov);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cov, size)) {
      fprintf(stderr, "failed to create array for field 'cov'");
      return false;
    }
    auto array_ptr = ros_message->cov.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: num_used_stat_ant1
  {
    cdr >> ros_message->num_used_stat_ant1;
  }

  // Field name: num_used_stat_ant2
  {
    cdr >> ros_message->num_used_stat_ant2;
  }

  // Field name: rtcm_counter
  {
    cdr >> ros_message->rtcm_counter;
  }

  // Field name: filter_inited_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->filter_inited_success = tmp ? true : false;
  }

  // Field name: filter_inited
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->filter_inited = tmp ? true : false;
  }

  // Field name: pva_geodetic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, PVAGeodetic
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pva_geodetic))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__SFusion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFusion__ros_msg_type * ros_message = static_cast<const _SFusion__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name simulation_time
  {
    size_t item_size = sizeof(ros_message->simulation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_tow
  {
    size_t item_size = sizeof(ros_message->filter_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pps_counter
  {
    size_t item_size = sizeof(ros_message->pps_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t array_size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov
  {
    size_t array_size = ros_message->cov.size;
    auto array_ptr = ros_message->cov.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_used_stat_ant1
  {
    size_t item_size = sizeof(ros_message->num_used_stat_ant1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_used_stat_ant2
  {
    size_t item_size = sizeof(ros_message->num_used_stat_ant2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_counter
  {
    size_t item_size = sizeof(ros_message->rtcm_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_inited_success
  {
    size_t item_size = sizeof(ros_message->filter_inited_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_inited
  {
    size_t item_size = sizeof(ros_message->filter_inited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pva_geodetic

  current_alignment += get_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
    &(ros_message->pva_geodetic), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SFusion__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__SFusion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__SFusion(
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
  // member: simulation_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: filter_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pps_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cov
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_used_stat_ant1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: num_used_stat_ant2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rtcm_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: filter_inited_success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: filter_inited
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pva_geodetic
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__SFusion;
    is_plain =
      (
      offsetof(DataType, pva_geodetic) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFusion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__SFusion(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFusion = {
  "irt_nav_msgs::msg",
  "SFusion",
  _SFusion__cdr_serialize,
  _SFusion__cdr_deserialize,
  _SFusion__get_serialized_size,
  _SFusion__max_serialized_size
};

static rosidl_message_type_support_t _SFusion__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFusion,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, SFusion)() {
  return &_SFusion__type_support;
}

#if defined(__cplusplus)
}
#endif
