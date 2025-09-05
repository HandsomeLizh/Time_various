// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/factor_residual__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'samples'
#include "irt_nav_msgs/msg/detail/residual_sample__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FactorResidual & msg,
  std::ostream & out)
{
  out << "{";
  // member: factor_name
  {
    out << "factor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.factor_name, out);
    out << ", ";
  }

  // member: current_state_key
  {
    out << "current_state_key: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state_key, out);
    out << ", ";
  }

  // member: related_keys
  {
    if (msg.related_keys.size() == 0) {
      out << "related_keys: []";
    } else {
      out << "related_keys: [";
      size_t pending_items = msg.related_keys.size();
      for (auto item : msg.related_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: samples
  {
    if (msg.samples.size() == 0) {
      out << "samples: []";
    } else {
      out << "samples: [";
      size_t pending_items = msg.samples.size();
      for (auto item : msg.samples) {
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
  const FactorResidual & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: factor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.factor_name, out);
    out << "\n";
  }

  // member: current_state_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state_key: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state_key, out);
    out << "\n";
  }

  // member: related_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.related_keys.size() == 0) {
      out << "related_keys: []\n";
    } else {
      out << "related_keys:\n";
      for (auto item : msg.related_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.samples.size() == 0) {
      out << "samples: []\n";
    } else {
      out << "samples:\n";
      for (auto item : msg.samples) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FactorResidual & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::FactorResidual & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::FactorResidual & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::FactorResidual>()
{
  return "irt_nav_msgs::msg::FactorResidual";
}

template<>
inline const char * name<irt_nav_msgs::msg::FactorResidual>()
{
  return "irt_nav_msgs/msg/FactorResidual";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::FactorResidual>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::FactorResidual>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::FactorResidual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__TRAITS_HPP_
