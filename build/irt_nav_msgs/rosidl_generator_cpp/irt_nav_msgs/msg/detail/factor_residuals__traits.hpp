// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/factor_residuals__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'residuals'
#include "irt_nav_msgs/msg/detail/factor_residual__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FactorResiduals & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: residuals
  {
    if (msg.residuals.size() == 0) {
      out << "residuals: []";
    } else {
      out << "residuals: [";
      size_t pending_items = msg.residuals.size();
      for (auto item : msg.residuals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FactorResiduals & msg,
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

  // member: residuals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residuals.size() == 0) {
      out << "residuals: []\n";
    } else {
      out << "residuals:\n";
      for (auto item : msg.residuals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FactorResiduals & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::FactorResiduals & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::FactorResiduals & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::FactorResiduals>()
{
  return "irt_nav_msgs::msg::FactorResiduals";
}

template<>
inline const char * name<irt_nav_msgs::msg::FactorResiduals>()
{
  return "irt_nav_msgs/msg/FactorResiduals";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::FactorResiduals>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::FactorResiduals>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::FactorResiduals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__TRAITS_HPP_
