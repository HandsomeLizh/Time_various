// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/dumper_odom__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/dumper_odom__struct.h"
#include "irt_nav_msgs/msg/detail/dumper_odom__functions.h"
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


using _DumperOdom__ros_msg_type = irt_nav_msgs__msg__DumperOdom;

static bool _DumperOdom__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DumperOdom__ros_msg_type * ros_message = static_cast<const _DumperOdom__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: wheelspeed_count_fl
  {
    cdr << ros_message->wheelspeed_count_fl;
  }

  // Field name: wheelspeed_count_fr
  {
    cdr << ros_message->wheelspeed_count_fr;
  }

  // Field name: wheelspeed_count_rl
  {
    cdr << ros_message->wheelspeed_count_rl;
  }

  // Field name: wheelspeed_count_rr
  {
    cdr << ros_message->wheelspeed_count_rr;
  }

  // Field name: bin_position
  {
    cdr << ros_message->bin_position;
  }

  // Field name: bin_tilt
  {
    cdr << ros_message->bin_tilt;
  }

  // Field name: boost
  {
    cdr << ros_message->boost;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: direction_value
  {
    cdr << ros_message->direction_value;
  }

  // Field name: engine_speed
  {
    cdr << ros_message->engine_speed;
  }

  // Field name: fuel
  {
    cdr << ros_message->fuel;
  }

  // Field name: handbreak
  {
    cdr << ros_message->handbreak;
  }

  // Field name: horn
  {
    cdr << ros_message->horn;
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  // Field name: steering_rate
  {
    cdr << ros_message->steering_rate;
  }

  // Field name: steering_switch
  {
    cdr << ros_message->steering_switch;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  return true;
}

static bool _DumperOdom__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DumperOdom__ros_msg_type * ros_message = static_cast<_DumperOdom__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: wheelspeed_count_fl
  {
    cdr >> ros_message->wheelspeed_count_fl;
  }

  // Field name: wheelspeed_count_fr
  {
    cdr >> ros_message->wheelspeed_count_fr;
  }

  // Field name: wheelspeed_count_rl
  {
    cdr >> ros_message->wheelspeed_count_rl;
  }

  // Field name: wheelspeed_count_rr
  {
    cdr >> ros_message->wheelspeed_count_rr;
  }

  // Field name: bin_position
  {
    cdr >> ros_message->bin_position;
  }

  // Field name: bin_tilt
  {
    cdr >> ros_message->bin_tilt;
  }

  // Field name: boost
  {
    cdr >> ros_message->boost;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: direction_value
  {
    cdr >> ros_message->direction_value;
  }

  // Field name: engine_speed
  {
    cdr >> ros_message->engine_speed;
  }

  // Field name: fuel
  {
    cdr >> ros_message->fuel;
  }

  // Field name: handbreak
  {
    cdr >> ros_message->handbreak;
  }

  // Field name: horn
  {
    cdr >> ros_message->horn;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  // Field name: steering_rate
  {
    cdr >> ros_message->steering_rate;
  }

  // Field name: steering_switch
  {
    cdr >> ros_message->steering_switch;
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__DumperOdom(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DumperOdom__ros_msg_type * ros_message = static_cast<const _DumperOdom__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_count_fl
  {
    size_t item_size = sizeof(ros_message->wheelspeed_count_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_count_fr
  {
    size_t item_size = sizeof(ros_message->wheelspeed_count_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_count_rl
  {
    size_t item_size = sizeof(ros_message->wheelspeed_count_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_count_rr
  {
    size_t item_size = sizeof(ros_message->wheelspeed_count_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bin_position
  {
    size_t item_size = sizeof(ros_message->bin_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bin_tilt
  {
    size_t item_size = sizeof(ros_message->bin_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boost
  {
    size_t item_size = sizeof(ros_message->boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction_value
  {
    size_t item_size = sizeof(ros_message->direction_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_speed
  {
    size_t item_size = sizeof(ros_message->engine_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel
  {
    size_t item_size = sizeof(ros_message->fuel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name handbreak
  {
    size_t item_size = sizeof(ros_message->handbreak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn
  {
    size_t item_size = sizeof(ros_message->horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_rate
  {
    size_t item_size = sizeof(ros_message->steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_switch
  {
    size_t item_size = sizeof(ros_message->steering_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DumperOdom__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__DumperOdom(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__DumperOdom(
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
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelspeed_count_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelspeed_count_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelspeed_count_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelspeed_count_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bin_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bin_tilt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: direction_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: engine_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fuel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: handbreak
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle
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
    using DataType = irt_nav_msgs__msg__DumperOdom;
    is_plain =
      (
      offsetof(DataType, throttle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DumperOdom__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__DumperOdom(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DumperOdom = {
  "irt_nav_msgs::msg",
  "DumperOdom",
  _DumperOdom__cdr_serialize,
  _DumperOdom__cdr_deserialize,
  _DumperOdom__get_serialized_size,
  _DumperOdom__max_serialized_size
};

static rosidl_message_type_support_t _DumperOdom__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DumperOdom,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, DumperOdom)() {
  return &_DumperOdom__type_support;
}

#if defined(__cplusplus)
}
#endif
