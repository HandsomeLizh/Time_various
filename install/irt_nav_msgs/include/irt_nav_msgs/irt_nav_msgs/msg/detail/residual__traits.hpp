// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/Residual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/residual__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Residual & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
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

  // member: outlier
  {
    out << "outlier: ";
    rosidl_generator_traits::value_to_yaml(msg.outlier, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Residual & msg,
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

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
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

  // member: outlier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outlier: ";
    rosidl_generator_traits::value_to_yaml(msg.outlier, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Residual & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::Residual & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::Residual & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::Residual>()
{
  return "irt_nav_msgs::msg::Residual";
}

template<>
inline const char * name<irt_nav_msgs::msg::Residual>()
{
  return "irt_nav_msgs/msg/Residual";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::Residual>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::Residual>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::Residual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__TRAITS_HPP_
