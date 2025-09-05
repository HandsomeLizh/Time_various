// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/rtcm1005__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCM1005 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: msg_number
  {
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << ", ";
  }

  // member: ref_station_id
  {
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << ", ";
  }

  // member: reserved_itrf_realization_year
  {
    out << "reserved_itrf_realization_year: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_itrf_realization_year, out);
    out << ", ";
  }

  // member: gps_indicator
  {
    out << "gps_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_indicator, out);
    out << ", ";
  }

  // member: glo_indicator
  {
    out << "glo_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_indicator, out);
    out << ", ";
  }

  // member: galileo_indicator
  {
    out << "galileo_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_indicator, out);
    out << ", ";
  }

  // member: reference_station_indicator
  {
    out << "reference_station_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_indicator, out);
    out << ", ";
  }

  // member: antenna_reference_point_ecef_x_m
  {
    out << "antenna_reference_point_ecef_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_x_m, out);
    out << ", ";
  }

  // member: antenna_reference_point_ecef_y_m
  {
    out << "antenna_reference_point_ecef_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_y_m, out);
    out << ", ";
  }

  // member: antenna_reference_point_ecef_z_m
  {
    out << "antenna_reference_point_ecef_z_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_z_m, out);
    out << ", ";
  }

  // member: signle_receiver_oscillator_indicator
  {
    out << "signle_receiver_oscillator_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.signle_receiver_oscillator_indicator, out);
    out << ", ";
  }

  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << ", ";
  }

  // member: reserved2
  {
    out << "reserved2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved2, out);
    out << ", ";
  }

  // member: msg_counter
  {
    out << "msg_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RTCM1005 & msg,
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

  // member: msg_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << "\n";
  }

  // member: ref_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << "\n";
  }

  // member: reserved_itrf_realization_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_itrf_realization_year: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_itrf_realization_year, out);
    out << "\n";
  }

  // member: gps_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_indicator, out);
    out << "\n";
  }

  // member: glo_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_indicator, out);
    out << "\n";
  }

  // member: galileo_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_indicator, out);
    out << "\n";
  }

  // member: reference_station_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_station_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_indicator, out);
    out << "\n";
  }

  // member: antenna_reference_point_ecef_x_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_reference_point_ecef_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_x_m, out);
    out << "\n";
  }

  // member: antenna_reference_point_ecef_y_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_reference_point_ecef_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_y_m, out);
    out << "\n";
  }

  // member: antenna_reference_point_ecef_z_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_reference_point_ecef_z_m: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_reference_point_ecef_z_m, out);
    out << "\n";
  }

  // member: signle_receiver_oscillator_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signle_receiver_oscillator_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.signle_receiver_oscillator_indicator, out);
    out << "\n";
  }

  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << "\n";
  }

  // member: reserved2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved2, out);
    out << "\n";
  }

  // member: msg_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTCM1005 & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::RTCM1005 & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::RTCM1005 & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::RTCM1005>()
{
  return "irt_nav_msgs::msg::RTCM1005";
}

template<>
inline const char * name<irt_nav_msgs::msg::RTCM1005>()
{
  return "irt_nav_msgs/msg/RTCM1005";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::RTCM1005>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::RTCM1005>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::RTCM1005>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__TRAITS_HPP_
