// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/odom_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'odom_anchor_ecef_pos'
// Member 'odom_anchor_ecef_to_enu_rpy'
// Member 'odom_local_pos'
// Member 'odom_local_rpy'
// Member 'odom_ecef_pos'
// Member 'odom_ecef_rpy'
// Member 'sensor_local_pos_from'
// Member 'sensor_local_rpy_from'
// Member 'sensor_enu_pos_from'
// Member 'sensor_enu_rpy_from'
// Member 'sensor_ecef_pos_from'
// Member 'sensor_ecef_rpy_from'
// Member 'sensor_local_pos_to'
// Member 'sensor_local_rpy_to'
// Member 'sensor_enu_pos_to'
// Member 'sensor_enu_rpy_to'
// Member 'sensor_ecef_pos_to'
// Member 'sensor_ecef_rpy_to'
// Member 'sensor_local_pos_to_optimized'
// Member 'sensor_local_rpy_to_optimized'
// Member 'sensor_enu_pos_to_optimized'
// Member 'sensor_enu_rpy_to_optimized'
// Member 'sensor_ecef_pos_to_optimized'
// Member 'sensor_ecef_rpy_to_optimized'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OdomInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: key_current
  {
    out << "key_current: ";
    rosidl_generator_traits::value_to_yaml(msg.key_current, out);
    out << ", ";
  }

  // member: key_previous
  {
    out << "key_previous: ";
    rosidl_generator_traits::value_to_yaml(msg.key_previous, out);
    out << ", ";
  }

  // member: odom_anchor_ecef_pos
  {
    out << "odom_anchor_ecef_pos: ";
    to_flow_style_yaml(msg.odom_anchor_ecef_pos, out);
    out << ", ";
  }

  // member: odom_anchor_ecef_to_enu_rpy
  {
    out << "odom_anchor_ecef_to_enu_rpy: ";
    to_flow_style_yaml(msg.odom_anchor_ecef_to_enu_rpy, out);
    out << ", ";
  }

  // member: odom_anchor_yaw_offset
  {
    out << "odom_anchor_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_anchor_yaw_offset, out);
    out << ", ";
  }

  // member: associated_state_timestamp_i
  {
    out << "associated_state_timestamp_i: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_state_timestamp_i, out);
    out << ", ";
  }

  // member: associated_state_timestamp_j
  {
    out << "associated_state_timestamp_j: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_state_timestamp_j, out);
    out << ", ";
  }

  // member: duration_to_i
  {
    out << "duration_to_i: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_to_i, out);
    out << ", ";
  }

  // member: associated_with_i
  {
    out << "associated_with_i: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_with_i, out);
    out << ", ";
  }

  // member: associated_with_j
  {
    out << "associated_with_j: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_with_j, out);
    out << ", ";
  }

  // member: odom_local_pos
  {
    out << "odom_local_pos: ";
    to_flow_style_yaml(msg.odom_local_pos, out);
    out << ", ";
  }

  // member: odom_local_rpy
  {
    out << "odom_local_rpy: ";
    to_flow_style_yaml(msg.odom_local_rpy, out);
    out << ", ";
  }

  // member: odom_ecef_pos
  {
    out << "odom_ecef_pos: ";
    to_flow_style_yaml(msg.odom_ecef_pos, out);
    out << ", ";
  }

  // member: odom_ecef_rpy
  {
    out << "odom_ecef_rpy: ";
    to_flow_style_yaml(msg.odom_ecef_rpy, out);
    out << ", ";
  }

  // member: sensor_local_pos_from
  {
    out << "sensor_local_pos_from: ";
    to_flow_style_yaml(msg.sensor_local_pos_from, out);
    out << ", ";
  }

  // member: sensor_local_rpy_from
  {
    out << "sensor_local_rpy_from: ";
    to_flow_style_yaml(msg.sensor_local_rpy_from, out);
    out << ", ";
  }

  // member: sensor_enu_pos_from
  {
    out << "sensor_enu_pos_from: ";
    to_flow_style_yaml(msg.sensor_enu_pos_from, out);
    out << ", ";
  }

  // member: sensor_enu_rpy_from
  {
    out << "sensor_enu_rpy_from: ";
    to_flow_style_yaml(msg.sensor_enu_rpy_from, out);
    out << ", ";
  }

  // member: sensor_ecef_pos_from
  {
    out << "sensor_ecef_pos_from: ";
    to_flow_style_yaml(msg.sensor_ecef_pos_from, out);
    out << ", ";
  }

  // member: sensor_ecef_rpy_from
  {
    out << "sensor_ecef_rpy_from: ";
    to_flow_style_yaml(msg.sensor_ecef_rpy_from, out);
    out << ", ";
  }

  // member: sensor_local_pos_to
  {
    out << "sensor_local_pos_to: ";
    to_flow_style_yaml(msg.sensor_local_pos_to, out);
    out << ", ";
  }

  // member: sensor_local_rpy_to
  {
    out << "sensor_local_rpy_to: ";
    to_flow_style_yaml(msg.sensor_local_rpy_to, out);
    out << ", ";
  }

  // member: sensor_enu_pos_to
  {
    out << "sensor_enu_pos_to: ";
    to_flow_style_yaml(msg.sensor_enu_pos_to, out);
    out << ", ";
  }

  // member: sensor_enu_rpy_to
  {
    out << "sensor_enu_rpy_to: ";
    to_flow_style_yaml(msg.sensor_enu_rpy_to, out);
    out << ", ";
  }

  // member: sensor_ecef_pos_to
  {
    out << "sensor_ecef_pos_to: ";
    to_flow_style_yaml(msg.sensor_ecef_pos_to, out);
    out << ", ";
  }

  // member: sensor_ecef_rpy_to
  {
    out << "sensor_ecef_rpy_to: ";
    to_flow_style_yaml(msg.sensor_ecef_rpy_to, out);
    out << ", ";
  }

  // member: sensor_local_pos_to_optimized
  {
    out << "sensor_local_pos_to_optimized: ";
    to_flow_style_yaml(msg.sensor_local_pos_to_optimized, out);
    out << ", ";
  }

  // member: sensor_local_rpy_to_optimized
  {
    out << "sensor_local_rpy_to_optimized: ";
    to_flow_style_yaml(msg.sensor_local_rpy_to_optimized, out);
    out << ", ";
  }

  // member: sensor_enu_pos_to_optimized
  {
    out << "sensor_enu_pos_to_optimized: ";
    to_flow_style_yaml(msg.sensor_enu_pos_to_optimized, out);
    out << ", ";
  }

  // member: sensor_enu_rpy_to_optimized
  {
    out << "sensor_enu_rpy_to_optimized: ";
    to_flow_style_yaml(msg.sensor_enu_rpy_to_optimized, out);
    out << ", ";
  }

  // member: sensor_ecef_pos_to_optimized
  {
    out << "sensor_ecef_pos_to_optimized: ";
    to_flow_style_yaml(msg.sensor_ecef_pos_to_optimized, out);
    out << ", ";
  }

  // member: sensor_ecef_rpy_to_optimized
  {
    out << "sensor_ecef_rpy_to_optimized: ";
    to_flow_style_yaml(msg.sensor_ecef_rpy_to_optimized, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OdomInfo & msg,
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

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: key_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_current: ";
    rosidl_generator_traits::value_to_yaml(msg.key_current, out);
    out << "\n";
  }

  // member: key_previous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_previous: ";
    rosidl_generator_traits::value_to_yaml(msg.key_previous, out);
    out << "\n";
  }

  // member: odom_anchor_ecef_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_anchor_ecef_pos:\n";
    to_block_style_yaml(msg.odom_anchor_ecef_pos, out, indentation + 2);
  }

  // member: odom_anchor_ecef_to_enu_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_anchor_ecef_to_enu_rpy:\n";
    to_block_style_yaml(msg.odom_anchor_ecef_to_enu_rpy, out, indentation + 2);
  }

  // member: odom_anchor_yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_anchor_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_anchor_yaw_offset, out);
    out << "\n";
  }

  // member: associated_state_timestamp_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_state_timestamp_i: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_state_timestamp_i, out);
    out << "\n";
  }

  // member: associated_state_timestamp_j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_state_timestamp_j: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_state_timestamp_j, out);
    out << "\n";
  }

  // member: duration_to_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_to_i: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_to_i, out);
    out << "\n";
  }

  // member: associated_with_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_with_i: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_with_i, out);
    out << "\n";
  }

  // member: associated_with_j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_with_j: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_with_j, out);
    out << "\n";
  }

  // member: odom_local_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_local_pos:\n";
    to_block_style_yaml(msg.odom_local_pos, out, indentation + 2);
  }

  // member: odom_local_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_local_rpy:\n";
    to_block_style_yaml(msg.odom_local_rpy, out, indentation + 2);
  }

  // member: odom_ecef_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_ecef_pos:\n";
    to_block_style_yaml(msg.odom_ecef_pos, out, indentation + 2);
  }

  // member: odom_ecef_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_ecef_rpy:\n";
    to_block_style_yaml(msg.odom_ecef_rpy, out, indentation + 2);
  }

  // member: sensor_local_pos_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_pos_from:\n";
    to_block_style_yaml(msg.sensor_local_pos_from, out, indentation + 2);
  }

  // member: sensor_local_rpy_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_rpy_from:\n";
    to_block_style_yaml(msg.sensor_local_rpy_from, out, indentation + 2);
  }

  // member: sensor_enu_pos_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_pos_from:\n";
    to_block_style_yaml(msg.sensor_enu_pos_from, out, indentation + 2);
  }

  // member: sensor_enu_rpy_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_rpy_from:\n";
    to_block_style_yaml(msg.sensor_enu_rpy_from, out, indentation + 2);
  }

  // member: sensor_ecef_pos_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_pos_from:\n";
    to_block_style_yaml(msg.sensor_ecef_pos_from, out, indentation + 2);
  }

  // member: sensor_ecef_rpy_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_rpy_from:\n";
    to_block_style_yaml(msg.sensor_ecef_rpy_from, out, indentation + 2);
  }

  // member: sensor_local_pos_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_pos_to:\n";
    to_block_style_yaml(msg.sensor_local_pos_to, out, indentation + 2);
  }

  // member: sensor_local_rpy_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_rpy_to:\n";
    to_block_style_yaml(msg.sensor_local_rpy_to, out, indentation + 2);
  }

  // member: sensor_enu_pos_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_pos_to:\n";
    to_block_style_yaml(msg.sensor_enu_pos_to, out, indentation + 2);
  }

  // member: sensor_enu_rpy_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_rpy_to:\n";
    to_block_style_yaml(msg.sensor_enu_rpy_to, out, indentation + 2);
  }

  // member: sensor_ecef_pos_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_pos_to:\n";
    to_block_style_yaml(msg.sensor_ecef_pos_to, out, indentation + 2);
  }

  // member: sensor_ecef_rpy_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_rpy_to:\n";
    to_block_style_yaml(msg.sensor_ecef_rpy_to, out, indentation + 2);
  }

  // member: sensor_local_pos_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_pos_to_optimized:\n";
    to_block_style_yaml(msg.sensor_local_pos_to_optimized, out, indentation + 2);
  }

  // member: sensor_local_rpy_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_local_rpy_to_optimized:\n";
    to_block_style_yaml(msg.sensor_local_rpy_to_optimized, out, indentation + 2);
  }

  // member: sensor_enu_pos_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_pos_to_optimized:\n";
    to_block_style_yaml(msg.sensor_enu_pos_to_optimized, out, indentation + 2);
  }

  // member: sensor_enu_rpy_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_enu_rpy_to_optimized:\n";
    to_block_style_yaml(msg.sensor_enu_rpy_to_optimized, out, indentation + 2);
  }

  // member: sensor_ecef_pos_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_pos_to_optimized:\n";
    to_block_style_yaml(msg.sensor_ecef_pos_to_optimized, out, indentation + 2);
  }

  // member: sensor_ecef_rpy_to_optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_ecef_rpy_to_optimized:\n";
    to_block_style_yaml(msg.sensor_ecef_rpy_to_optimized, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OdomInfo & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::OdomInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::OdomInfo & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::OdomInfo>()
{
  return "irt_nav_msgs::msg::OdomInfo";
}

template<>
inline const char * name<irt_nav_msgs::msg::OdomInfo>()
{
  return "irt_nav_msgs/msg/OdomInfo";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::OdomInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::OdomInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::OdomInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_
