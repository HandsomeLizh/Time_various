// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/Residuals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/residuals__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'residuals_ant_main'
// Member 'residuals_ant_aux'
#include "irt_nav_msgs/msg/detail/residual__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Residuals & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: residuals_ant_main
  {
    if (msg.residuals_ant_main.size() == 0) {
      out << "residuals_ant_main: []";
    } else {
      out << "residuals_ant_main: [";
      size_t pending_items = msg.residuals_ant_main.size();
      for (auto item : msg.residuals_ant_main) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: residuals_ant_aux
  {
    if (msg.residuals_ant_aux.size() == 0) {
      out << "residuals_ant_aux: []";
    } else {
      out << "residuals_ant_aux: [";
      size_t pending_items = msg.residuals_ant_aux.size();
      for (auto item : msg.residuals_ant_aux) {
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
  const Residuals & msg,
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

  // member: residuals_ant_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residuals_ant_main.size() == 0) {
      out << "residuals_ant_main: []\n";
    } else {
      out << "residuals_ant_main:\n";
      for (auto item : msg.residuals_ant_main) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: residuals_ant_aux
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residuals_ant_aux.size() == 0) {
      out << "residuals_ant_aux: []\n";
    } else {
      out << "residuals_ant_aux:\n";
      for (auto item : msg.residuals_ant_aux) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Residuals & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::Residuals & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::Residuals & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::Residuals>()
{
  return "irt_nav_msgs::msg::Residuals";
}

template<>
inline const char * name<irt_nav_msgs::msg::Residuals>()
{
  return "irt_nav_msgs/msg/Residuals";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::Residuals>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::Residuals>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::Residuals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__TRAITS_HPP_
