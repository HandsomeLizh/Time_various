// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/nav_filter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/nav_filter__struct.hpp"

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
  const irt_nav_msgs::msg::NavFilter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: filter_enabled
  cdr << (ros_message.filter_enabled ? true : false);
  // Member: gnss_obs_delay
  cdr << ros_message.gnss_obs_delay;
  // Member: state_ekf
  {
    cdr << ros_message.state_ekf;
  }
  // Member: var_ekf
  {
    cdr << ros_message.var_ekf;
  }
  // Member: vel_normed_ekf
  cdr << ros_message.vel_normed_ekf;
  // Member: euler_ekf
  {
    cdr << ros_message.euler_ekf;
  }
  // Member: update_exit_ekf
  cdr << (ros_message.update_exit_ekf ? true : false);
  // Member: ant_ecef_ekf
  {
    cdr << ros_message.ant_ecef_ekf;
  }
  // Member: ant_llh_ekf
  {
    cdr << ros_message.ant_llh_ekf;
  }
  // Member: ant_vel_ekf
  {
    cdr << ros_message.ant_vel_ekf;
  }
  // Member: state_ukf
  {
    cdr << ros_message.state_ukf;
  }
  // Member: var_ukf
  {
    cdr << ros_message.var_ukf;
  }
  // Member: vel_normed_ukf
  cdr << ros_message.vel_normed_ukf;
  // Member: euler_ukf
  {
    cdr << ros_message.euler_ukf;
  }
  // Member: update_exit_ukf
  cdr << (ros_message.update_exit_ukf ? true : false);
  // Member: ant_ecef_ukf
  {
    cdr << ros_message.ant_ecef_ukf;
  }
  // Member: ant_llh_ukf
  {
    cdr << ros_message.ant_llh_ukf;
  }
  // Member: ant_vel_ukf
  {
    cdr << ros_message.ant_vel_ukf;
  }
  // Member: filter_time
  cdr << ros_message.filter_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::NavFilter & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: filter_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.filter_enabled = tmp ? true : false;
  }

  // Member: gnss_obs_delay
  cdr >> ros_message.gnss_obs_delay;

  // Member: state_ekf
  {
    cdr >> ros_message.state_ekf;
  }

  // Member: var_ekf
  {
    cdr >> ros_message.var_ekf;
  }

  // Member: vel_normed_ekf
  cdr >> ros_message.vel_normed_ekf;

  // Member: euler_ekf
  {
    cdr >> ros_message.euler_ekf;
  }

  // Member: update_exit_ekf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.update_exit_ekf = tmp ? true : false;
  }

  // Member: ant_ecef_ekf
  {
    cdr >> ros_message.ant_ecef_ekf;
  }

  // Member: ant_llh_ekf
  {
    cdr >> ros_message.ant_llh_ekf;
  }

  // Member: ant_vel_ekf
  {
    cdr >> ros_message.ant_vel_ekf;
  }

  // Member: state_ukf
  {
    cdr >> ros_message.state_ukf;
  }

  // Member: var_ukf
  {
    cdr >> ros_message.var_ukf;
  }

  // Member: vel_normed_ukf
  cdr >> ros_message.vel_normed_ukf;

  // Member: euler_ukf
  {
    cdr >> ros_message.euler_ukf;
  }

  // Member: update_exit_ukf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.update_exit_ukf = tmp ? true : false;
  }

  // Member: ant_ecef_ukf
  {
    cdr >> ros_message.ant_ecef_ukf;
  }

  // Member: ant_llh_ukf
  {
    cdr >> ros_message.ant_llh_ukf;
  }

  // Member: ant_vel_ukf
  {
    cdr >> ros_message.ant_vel_ukf;
  }

  // Member: filter_time
  cdr >> ros_message.filter_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::NavFilter & ros_message,
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
  // Member: filter_enabled
  {
    size_t item_size = sizeof(ros_message.filter_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_obs_delay
  {
    size_t item_size = sizeof(ros_message.gnss_obs_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_ekf
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.state_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: var_ekf
  {
    size_t array_size = 17;
    size_t item_size = sizeof(ros_message.var_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_normed_ekf
  {
    size_t item_size = sizeof(ros_message.vel_normed_ekf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: euler_ekf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.euler_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: update_exit_ekf
  {
    size_t item_size = sizeof(ros_message.update_exit_ekf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_ecef_ekf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_ecef_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_llh_ekf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_llh_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_vel_ekf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_vel_ekf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_ukf
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.state_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: var_ukf
  {
    size_t array_size = 17;
    size_t item_size = sizeof(ros_message.var_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_normed_ukf
  {
    size_t item_size = sizeof(ros_message.vel_normed_ukf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: euler_ukf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.euler_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: update_exit_ukf
  {
    size_t item_size = sizeof(ros_message.update_exit_ukf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_ecef_ukf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_ecef_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_llh_ukf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_llh_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ant_vel_ukf
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.ant_vel_ukf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_time
  {
    size_t item_size = sizeof(ros_message.filter_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_NavFilter(
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

  // Member: filter_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_obs_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state_ekf
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: var_ekf
  {
    size_t array_size = 17;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_normed_ekf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: euler_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: update_exit_ekf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ant_ecef_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ant_llh_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ant_vel_ekf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state_ukf
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: var_ukf
  {
    size_t array_size = 17;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_normed_ukf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: euler_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: update_exit_ukf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ant_ecef_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ant_llh_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ant_vel_ukf
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: filter_time
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
    using DataType = irt_nav_msgs::msg::NavFilter;
    is_plain =
      (
      offsetof(DataType, filter_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NavFilter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::NavFilter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavFilter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::NavFilter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavFilter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::NavFilter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavFilter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NavFilter(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NavFilter__callbacks = {
  "irt_nav_msgs::msg",
  "NavFilter",
  _NavFilter__cdr_serialize,
  _NavFilter__cdr_deserialize,
  _NavFilter__get_serialized_size,
  _NavFilter__max_serialized_size
};

static rosidl_message_type_support_t _NavFilter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavFilter__callbacks,
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
get_message_type_support_handle<irt_nav_msgs::msg::NavFilter>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_NavFilter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, NavFilter)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_NavFilter__handle;
}

#ifdef __cplusplus
}
#endif
