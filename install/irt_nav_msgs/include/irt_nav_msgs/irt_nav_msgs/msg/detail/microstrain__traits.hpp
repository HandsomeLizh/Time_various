// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/microstrain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Microstrain & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_timestamp
  {
    out << "sensor_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_timestamp, out);
    out << ", ";
  }

  // member: data_ok
  {
    out << "data_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.data_ok, out);
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: mag_x
  {
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << ", ";
  }

  // member: mag_y
  {
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << ", ";
  }

  // member: mag_z
  {
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << ", ";
  }

  // member: amb
  {
    out << "amb: ";
    rosidl_generator_traits::value_to_yaml(msg.amb, out);
    out << ", ";
  }

  // member: deltatheta_x
  {
    out << "deltatheta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_x, out);
    out << ", ";
  }

  // member: deltatheta_y
  {
    out << "deltatheta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_y, out);
    out << ", ";
  }

  // member: deltatheta_z
  {
    out << "deltatheta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_z, out);
    out << ", ";
  }

  // member: deltavel_x
  {
    out << "deltavel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_x, out);
    out << ", ";
  }

  // member: deltavel_y
  {
    out << "deltavel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_y, out);
    out << ", ";
  }

  // member: deltavel_z
  {
    out << "deltavel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_z, out);
    out << ", ";
  }

  // member: freq_acc
  {
    out << "freq_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_acc, out);
    out << ", ";
  }

  // member: freq_gyro
  {
    out << "freq_gyro: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_gyro, out);
    out << ", ";
  }

  // member: freq_mag
  {
    out << "freq_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_mag, out);
    out << ", ";
  }

  // member: freq_amb
  {
    out << "freq_amb: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_amb, out);
    out << ", ";
  }

  // member: freq_d_theta
  {
    out << "freq_d_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_d_theta, out);
    out << ", ";
  }

  // member: freq_d_vel
  {
    out << "freq_d_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_d_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Microstrain & msg,
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

  // member: sensor_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_timestamp, out);
    out << "\n";
  }

  // member: data_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.data_ok, out);
    out << "\n";
  }

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << "\n";
  }

  // member: mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << "\n";
  }

  // member: mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << "\n";
  }

  // member: amb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amb: ";
    rosidl_generator_traits::value_to_yaml(msg.amb, out);
    out << "\n";
  }

  // member: deltatheta_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltatheta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_x, out);
    out << "\n";
  }

  // member: deltatheta_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltatheta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_y, out);
    out << "\n";
  }

  // member: deltatheta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltatheta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.deltatheta_z, out);
    out << "\n";
  }

  // member: deltavel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltavel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_x, out);
    out << "\n";
  }

  // member: deltavel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltavel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_y, out);
    out << "\n";
  }

  // member: deltavel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltavel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.deltavel_z, out);
    out << "\n";
  }

  // member: freq_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_acc, out);
    out << "\n";
  }

  // member: freq_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_gyro: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_gyro, out);
    out << "\n";
  }

  // member: freq_mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_mag, out);
    out << "\n";
  }

  // member: freq_amb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_amb: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_amb, out);
    out << "\n";
  }

  // member: freq_d_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_d_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_d_theta, out);
    out << "\n";
  }

  // member: freq_d_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_d_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_d_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Microstrain & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::Microstrain & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::Microstrain & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::Microstrain>()
{
  return "irt_nav_msgs::msg::Microstrain";
}

template<>
inline const char * name<irt_nav_msgs::msg::Microstrain>()
{
  return "irt_nav_msgs/msg/Microstrain";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::Microstrain>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::Microstrain>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::Microstrain>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__TRAITS_HPP_
