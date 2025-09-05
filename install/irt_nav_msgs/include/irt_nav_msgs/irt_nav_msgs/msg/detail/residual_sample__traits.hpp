// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/residual_sample__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResidualSample & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: whitened_error
  {
    if (msg.whitened_error.size() == 0) {
      out << "whitened_error: []";
    } else {
      out << "whitened_error: [";
      size_t pending_items = msg.whitened_error.size();
      for (auto item : msg.whitened_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unwhitened_error
  {
    if (msg.unwhitened_error.size() == 0) {
      out << "unwhitened_error: []";
    } else {
      out << "unwhitened_error: [";
      size_t pending_items = msg.unwhitened_error.size();
      for (auto item : msg.unwhitened_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: loss_error
  {
    out << "loss_error: ";
    rosidl_generator_traits::value_to_yaml(msg.loss_error, out);
    out << ", ";
  }

  // member: noise_model_weight
  {
    out << "noise_model_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_model_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResidualSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: whitened_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.whitened_error.size() == 0) {
      out << "whitened_error: []\n";
    } else {
      out << "whitened_error:\n";
      for (auto item : msg.whitened_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unwhitened_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unwhitened_error.size() == 0) {
      out << "unwhitened_error: []\n";
    } else {
      out << "unwhitened_error:\n";
      for (auto item : msg.unwhitened_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: loss_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loss_error: ";
    rosidl_generator_traits::value_to_yaml(msg.loss_error, out);
    out << "\n";
  }

  // member: noise_model_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_model_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_model_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResidualSample & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::ResidualSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::ResidualSample & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::ResidualSample>()
{
  return "irt_nav_msgs::msg::ResidualSample";
}

template<>
inline const char * name<irt_nav_msgs::msg::ResidualSample>()
{
  return "irt_nav_msgs/msg/ResidualSample";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::ResidualSample>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::ResidualSample>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::ResidualSample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__TRAITS_HPP_
