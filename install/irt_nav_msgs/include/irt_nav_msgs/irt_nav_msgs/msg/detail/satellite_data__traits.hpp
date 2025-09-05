// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/SatelliteData.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/satellite_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SatelliteData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sat
  {
    out << "sat: ";
    rosidl_generator_traits::value_to_yaml(msg.sat, out);
    out << ", ";
  }

  // member: factor
  {
    out << "factor: ";
    rosidl_generator_traits::value_to_yaml(msg.factor, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatelliteData & msg,
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

  // member: sat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sat: ";
    rosidl_generator_traits::value_to_yaml(msg.sat, out);
    out << "\n";
  }

  // member: factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factor: ";
    rosidl_generator_traits::value_to_yaml(msg.factor, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SatelliteData & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::SatelliteData & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::SatelliteData & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::SatelliteData>()
{
  return "irt_nav_msgs::msg::SatelliteData";
}

template<>
inline const char * name<irt_nav_msgs::msg::SatelliteData>()
{
  return "irt_nav_msgs/msg/SatelliteData";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::SatelliteData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::SatelliteData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::SatelliteData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__TRAITS_HPP_
