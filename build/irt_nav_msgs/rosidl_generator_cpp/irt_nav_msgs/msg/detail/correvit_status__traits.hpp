// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/correvit_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CorrevitStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angle_vel_correction
  {
    out << "angle_vel_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_vel_correction, out);
    out << ", ";
  }

  // member: angle_switch_off
  {
    out << "angle_switch_off: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_switch_off, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: direction_head
  {
    out << "direction_head: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head, out);
    out << ", ";
  }

  // member: direction_head_valid
  {
    out << "direction_head_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head_valid, out);
    out << ", ";
  }

  // member: direction_motion
  {
    out << "direction_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_motion, out);
    out << ", ";
  }

  // member: direction_mounting
  {
    out << "direction_mounting: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_mounting, out);
    out << ", ";
  }

  // member: filter_off_on
  {
    out << "filter_off_on: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_off_on, out);
    out << ", ";
  }

  // member: filter_setting
  {
    out << "filter_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_setting, out);
    out << ", ";
  }

  // member: head_status
  {
    out << "head_status: ";
    rosidl_generator_traits::value_to_yaml(msg.head_status, out);
    out << ", ";
  }

  // member: lamp_current
  {
    out << "lamp_current: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current, out);
    out << ", ";
  }

  // member: lamp_current_control
  {
    out << "lamp_current_control: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current_control, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: temperature_ok
  {
    out << "temperature_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CorrevitStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angle_vel_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_vel_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_vel_correction, out);
    out << "\n";
  }

  // member: angle_switch_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_switch_off: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_switch_off, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: direction_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_head: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head, out);
    out << "\n";
  }

  // member: direction_head_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_head_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head_valid, out);
    out << "\n";
  }

  // member: direction_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_motion, out);
    out << "\n";
  }

  // member: direction_mounting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_mounting: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_mounting, out);
    out << "\n";
  }

  // member: filter_off_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_off_on: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_off_on, out);
    out << "\n";
  }

  // member: filter_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_setting, out);
    out << "\n";
  }

  // member: head_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_status: ";
    rosidl_generator_traits::value_to_yaml(msg.head_status, out);
    out << "\n";
  }

  // member: lamp_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamp_current: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current, out);
    out << "\n";
  }

  // member: lamp_current_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamp_current_control: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current_control, out);
    out << "\n";
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: temperature_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CorrevitStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irt_nav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irt_nav_msgs::msg::CorrevitStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::CorrevitStatus & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::CorrevitStatus>()
{
  return "irt_nav_msgs::msg::CorrevitStatus";
}

template<>
inline const char * name<irt_nav_msgs::msg::CorrevitStatus>()
{
  return "irt_nav_msgs/msg/CorrevitStatus";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::CorrevitStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::CorrevitStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::CorrevitStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__TRAITS_HPP_
