// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice

#ifndef BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__TRAITS_HPP_
#define BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boreas_msgs/msg/detail/sensor_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace boreas_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gps_timestamp
  {
    out << "gps_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_timestamp, out);
    out << ", ";
  }

  // member: pos_easting
  {
    out << "pos_easting: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_easting, out);
    out << ", ";
  }

  // member: pos_northing
  {
    out << "pos_northing: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_northing, out);
    out << ", ";
  }

  // member: pos_altitude
  {
    out << "pos_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_altitude, out);
    out << ", ";
  }

  // member: vel_north
  {
    out << "vel_north: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_north, out);
    out << ", ";
  }

  // member: vel_east
  {
    out << "vel_east: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_east, out);
    out << ", ";
  }

  // member: vel_up
  {
    out << "vel_up: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_up, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: ang_vel_x
  {
    out << "ang_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_x, out);
    out << ", ";
  }

  // member: ang_vel_y
  {
    out << "ang_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_y, out);
    out << ", ";
  }

  // member: ang_vel_z
  {
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorPose & msg,
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

  // member: gps_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_timestamp, out);
    out << "\n";
  }

  // member: pos_easting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_easting: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_easting, out);
    out << "\n";
  }

  // member: pos_northing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_northing: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_northing, out);
    out << "\n";
  }

  // member: pos_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_altitude, out);
    out << "\n";
  }

  // member: vel_north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_north: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_north, out);
    out << "\n";
  }

  // member: vel_east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_east: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_east, out);
    out << "\n";
  }

  // member: vel_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_up: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_up, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: ang_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_x, out);
    out << "\n";
  }

  // member: ang_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_y, out);
    out << "\n";
  }

  // member: ang_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorPose & msg, bool use_flow_style = false)
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

}  // namespace boreas_msgs

namespace rosidl_generator_traits
{

[[deprecated("use boreas_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boreas_msgs::msg::SensorPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  boreas_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boreas_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const boreas_msgs::msg::SensorPose & msg)
{
  return boreas_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boreas_msgs::msg::SensorPose>()
{
  return "boreas_msgs::msg::SensorPose";
}

template<>
inline const char * name<boreas_msgs::msg::SensorPose>()
{
  return "boreas_msgs/msg/SensorPose";
}

template<>
struct has_fixed_size<boreas_msgs::msg::SensorPose>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<boreas_msgs::msg::SensorPose>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<boreas_msgs::msg::SensorPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__TRAITS_HPP_
