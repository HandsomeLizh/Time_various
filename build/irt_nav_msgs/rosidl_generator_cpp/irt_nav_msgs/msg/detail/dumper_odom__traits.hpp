// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/dumper_odom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DumperOdom & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: wheelspeed_count_fl
  {
    out << "wheelspeed_count_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_fl, out);
    out << ", ";
  }

  // member: wheelspeed_count_fr
  {
    out << "wheelspeed_count_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_fr, out);
    out << ", ";
  }

  // member: wheelspeed_count_rl
  {
    out << "wheelspeed_count_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_rl, out);
    out << ", ";
  }

  // member: wheelspeed_count_rr
  {
    out << "wheelspeed_count_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_rr, out);
    out << ", ";
  }

  // member: bin_position
  {
    out << "bin_position: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_position, out);
    out << ", ";
  }

  // member: bin_tilt
  {
    out << "bin_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_tilt, out);
    out << ", ";
  }

  // member: boost
  {
    out << "boost: ";
    rosidl_generator_traits::value_to_yaml(msg.boost, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: direction_value
  {
    out << "direction_value: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_value, out);
    out << ", ";
  }

  // member: engine_speed
  {
    out << "engine_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed, out);
    out << ", ";
  }

  // member: fuel
  {
    out << "fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel, out);
    out << ", ";
  }

  // member: handbreak
  {
    out << "handbreak: ";
    rosidl_generator_traits::value_to_yaml(msg.handbreak, out);
    out << ", ";
  }

  // member: horn
  {
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << ", ";
  }

  // member: steering_rate
  {
    out << "steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_rate, out);
    out << ", ";
  }

  // member: steering_switch
  {
    out << "steering_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_switch, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DumperOdom & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: wheelspeed_count_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_count_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_fl, out);
    out << "\n";
  }

  // member: wheelspeed_count_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_count_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_fr, out);
    out << "\n";
  }

  // member: wheelspeed_count_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_count_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_rl, out);
    out << "\n";
  }

  // member: wheelspeed_count_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_count_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_count_rr, out);
    out << "\n";
  }

  // member: bin_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_position: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_position, out);
    out << "\n";
  }

  // member: bin_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_tilt, out);
    out << "\n";
  }

  // member: boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boost: ";
    rosidl_generator_traits::value_to_yaml(msg.boost, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: direction_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_value: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_value, out);
    out << "\n";
  }

  // member: engine_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed, out);
    out << "\n";
  }

  // member: fuel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel, out);
    out << "\n";
  }

  // member: handbreak
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handbreak: ";
    rosidl_generator_traits::value_to_yaml(msg.handbreak, out);
    out << "\n";
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_rate, out);
    out << "\n";
  }

  // member: steering_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_switch, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DumperOdom & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::DumperOdom & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::DumperOdom & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::DumperOdom>()
{
  return "irt_nav_msgs::msg::DumperOdom";
}

template<>
inline const char * name<irt_nav_msgs::msg::DumperOdom>()
{
  return "irt_nav_msgs/msg/DumperOdom";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::DumperOdom>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::DumperOdom>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::DumperOdom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__TRAITS_HPP_
