// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/nav_filter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/nav_filter__struct.h"
#include "irt_nav_msgs/msg/detail/nav_filter__functions.h"
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


using _NavFilter__ros_msg_type = irt_nav_msgs__msg__NavFilter;

static bool _NavFilter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavFilter__ros_msg_type * ros_message = static_cast<const _NavFilter__ros_msg_type *>(untyped_ros_message);
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

  // Field name: filter_enabled
  {
    cdr << (ros_message->filter_enabled ? true : false);
  }

  // Field name: gnss_obs_delay
  {
    cdr << ros_message->gnss_obs_delay;
  }

  // Field name: state_ekf
  {
    size_t size = 18;
    auto array_ptr = ros_message->state_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: var_ekf
  {
    size_t size = 17;
    auto array_ptr = ros_message->var_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_normed_ekf
  {
    cdr << ros_message->vel_normed_ekf;
  }

  // Field name: euler_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: update_exit_ekf
  {
    cdr << (ros_message->update_exit_ekf ? true : false);
  }

  // Field name: ant_ecef_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_ecef_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ant_llh_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_llh_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ant_vel_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_vel_ekf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: state_ukf
  {
    size_t size = 18;
    auto array_ptr = ros_message->state_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: var_ukf
  {
    size_t size = 17;
    auto array_ptr = ros_message->var_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_normed_ukf
  {
    cdr << ros_message->vel_normed_ukf;
  }

  // Field name: euler_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: update_exit_ukf
  {
    cdr << (ros_message->update_exit_ukf ? true : false);
  }

  // Field name: ant_ecef_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_ecef_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ant_llh_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_llh_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ant_vel_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_vel_ukf;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: filter_time
  {
    cdr << ros_message->filter_time;
  }

  return true;
}

static bool _NavFilter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavFilter__ros_msg_type * ros_message = static_cast<_NavFilter__ros_msg_type *>(untyped_ros_message);
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

  // Field name: filter_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->filter_enabled = tmp ? true : false;
  }

  // Field name: gnss_obs_delay
  {
    cdr >> ros_message->gnss_obs_delay;
  }

  // Field name: state_ekf
  {
    size_t size = 18;
    auto array_ptr = ros_message->state_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: var_ekf
  {
    size_t size = 17;
    auto array_ptr = ros_message->var_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_normed_ekf
  {
    cdr >> ros_message->vel_normed_ekf;
  }

  // Field name: euler_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: update_exit_ekf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->update_exit_ekf = tmp ? true : false;
  }

  // Field name: ant_ecef_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_ecef_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ant_llh_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_llh_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ant_vel_ekf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_vel_ekf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: state_ukf
  {
    size_t size = 18;
    auto array_ptr = ros_message->state_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: var_ukf
  {
    size_t size = 17;
    auto array_ptr = ros_message->var_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_normed_ukf
  {
    cdr >> ros_message->vel_normed_ukf;
  }

  // Field name: euler_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: update_exit_ukf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->update_exit_ukf = tmp ? true : false;
  }

  // Field name: ant_ecef_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_ecef_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ant_llh_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_llh_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ant_vel_ukf
  {
    size_t size = 3;
    auto array_ptr = ros_message->ant_vel_ukf;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: filter_time
  {
    cdr >> ros_message->filter_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__NavFilter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavFilter__ros_msg_type * ros_message = static_cast<const _NavFilter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name filter_enabled
  {
    size_t item_size = sizeof(ros_message->filter_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_obs_delay
  {
    size_t item_size = sizeof(ros_message->gnss_obs_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_ekf
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->state_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name var_ekf
  {
    size_t array_size = 17;
    auto array_ptr = ros_message->var_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_normed_ekf
  {
    size_t item_size = sizeof(ros_message->vel_normed_ekf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name euler_ekf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name update_exit_ekf
  {
    size_t item_size = sizeof(ros_message->update_exit_ekf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_ecef_ekf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_ecef_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_llh_ekf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_llh_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_vel_ekf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_vel_ekf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_ukf
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->state_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name var_ukf
  {
    size_t array_size = 17;
    auto array_ptr = ros_message->var_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_normed_ukf
  {
    size_t item_size = sizeof(ros_message->vel_normed_ukf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name euler_ukf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name update_exit_ukf
  {
    size_t item_size = sizeof(ros_message->update_exit_ukf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_ecef_ukf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_ecef_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_llh_ukf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_llh_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ant_vel_ukf
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ant_vel_ukf;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_time
  {
    size_t item_size = sizeof(ros_message->filter_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavFilter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__NavFilter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__NavFilter(
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
  // member: filter_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_obs_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state_ekf
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: var_ekf
  {
    size_t array_size = 17;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_normed_ekf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: euler_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: update_exit_ekf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ant_ecef_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ant_llh_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ant_vel_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state_ukf
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: var_ukf
  {
    size_t array_size = 17;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_normed_ukf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: euler_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: update_exit_ukf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ant_ecef_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ant_llh_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ant_vel_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: filter_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__NavFilter;
    is_plain =
      (
      offsetof(DataType, filter_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NavFilter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__NavFilter(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavFilter = {
  "irt_nav_msgs::msg",
  "NavFilter",
  _NavFilter__cdr_serialize,
  _NavFilter__cdr_deserialize,
  _NavFilter__get_serialized_size,
  _NavFilter__max_serialized_size
};

static rosidl_message_type_support_t _NavFilter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavFilter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, NavFilter)() {
  return &_NavFilter__type_support;
}

#if defined(__cplusplus)
}
#endif
