// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/correvit_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/correvit_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace irt_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_serialize(
  const irt_nav_msgs::msg::CorrevitStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: angle_vel_correction
  cdr << ros_message.angle_vel_correction;
  // Member: angle_switch_off
  cdr << ros_message.angle_switch_off;
  // Member: direction
  cdr << ros_message.direction;
  // Member: direction_head
  cdr << ros_message.direction_head;
  // Member: direction_head_valid
  cdr << ros_message.direction_head_valid;
  // Member: direction_motion
  cdr << ros_message.direction_motion;
  // Member: direction_mounting
  cdr << ros_message.direction_mounting;
  // Member: filter_off_on
  cdr << ros_message.filter_off_on;
  // Member: filter_setting
  cdr << ros_message.filter_setting;
  // Member: head_status
  cdr << ros_message.head_status;
  // Member: lamp_current
  cdr << ros_message.lamp_current;
  // Member: lamp_current_control
  cdr << ros_message.lamp_current_control;
  // Member: sensor_id
  cdr << ros_message.sensor_id;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: temperature_ok
  cdr << ros_message.temperature_ok;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::CorrevitStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: angle_vel_correction
  cdr >> ros_message.angle_vel_correction;

  // Member: angle_switch_off
  cdr >> ros_message.angle_switch_off;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: direction_head
  cdr >> ros_message.direction_head;

  // Member: direction_head_valid
  cdr >> ros_message.direction_head_valid;

  // Member: direction_motion
  cdr >> ros_message.direction_motion;

  // Member: direction_mounting
  cdr >> ros_message.direction_mounting;

  // Member: filter_off_on
  cdr >> ros_message.filter_off_on;

  // Member: filter_setting
  cdr >> ros_message.filter_setting;

  // Member: head_status
  cdr >> ros_message.head_status;

  // Member: lamp_current
  cdr >> ros_message.lamp_current;

  // Member: lamp_current_control
  cdr >> ros_message.lamp_current_control;

  // Member: sensor_id
  cdr >> ros_message.sensor_id;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: temperature_ok
  cdr >> ros_message.temperature_ok;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::CorrevitStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: angle_vel_correction
  {
    size_t item_size = sizeof(ros_message.angle_vel_correction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_switch_off
  {
    size_t item_size = sizeof(ros_message.angle_switch_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction_head
  {
    size_t item_size = sizeof(ros_message.direction_head);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction_head_valid
  {
    size_t item_size = sizeof(ros_message.direction_head_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction_motion
  {
    size_t item_size = sizeof(ros_message.direction_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction_mounting
  {
    size_t item_size = sizeof(ros_message.direction_mounting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_off_on
  {
    size_t item_size = sizeof(ros_message.filter_off_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_setting
  {
    size_t item_size = sizeof(ros_message.filter_setting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_status
  {
    size_t item_size = sizeof(ros_message.head_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lamp_current
  {
    size_t item_size = sizeof(ros_message.lamp_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lamp_current_control
  {
    size_t item_size = sizeof(ros_message.lamp_current_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_id
  {
    size_t item_size = sizeof(ros_message.sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_ok
  {
    size_t item_size = sizeof(ros_message.temperature_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_CorrevitStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angle_vel_correction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_switch_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction_head
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction_head_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction_mounting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: filter_off_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: filter_setting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: head_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lamp_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lamp_current_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sensor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature_ok
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
    using DataType = irt_nav_msgs::msg::CorrevitStatus;
    is_plain =
      (
      offsetof(DataType, temperature_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CorrevitStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::CorrevitStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CorrevitStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::CorrevitStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CorrevitStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::CorrevitStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CorrevitStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CorrevitStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CorrevitStatus__callbacks = {
  "irt_nav_msgs::msg",
  "CorrevitStatus",
  _CorrevitStatus__cdr_serialize,
  _CorrevitStatus__cdr_deserialize,
  _CorrevitStatus__get_serialized_size,
  _CorrevitStatus__max_serialized_size
};

static rosidl_message_type_support_t _CorrevitStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CorrevitStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<irt_nav_msgs::msg::CorrevitStatus>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_CorrevitStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, CorrevitStatus)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_CorrevitStatus__handle;
}

#ifdef __cplusplus
}
#endif
