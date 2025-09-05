// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/GNSSCorrection.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/gnss_correction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GNSSCorrection & msg,
  std::ostream & out)
{
  out << "{";
  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: psr_correction
  {
    out << "psr_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_correction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GNSSCorrection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: psr_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_correction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GNSSCorrection & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::GNSSCorrection & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::GNSSCorrection & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::GNSSCorrection>()
{
  return "irt_nav_msgs::msg::GNSSCorrection";
}

template<>
inline const char * name<irt_nav_msgs::msg::GNSSCorrection>()
{
  return "irt_nav_msgs/msg/GNSSCorrection";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::GNSSCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::GNSSCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irt_nav_msgs::msg::GNSSCorrection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__TRAITS_HPP_
