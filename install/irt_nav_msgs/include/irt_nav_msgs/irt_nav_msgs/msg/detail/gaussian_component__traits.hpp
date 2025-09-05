// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/gaussian_component__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GaussianComponent & msg,
  std::ostream & out)
{
  out << "{";
  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << ", ";
  }

  // member: mean
  {
    if (msg.mean.size() == 0) {
      out << "mean: []";
    } else {
      out << "mean: [";
      size_t pending_items = msg.mean.size();
      for (auto item : msg.mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
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
  const GaussianComponent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }

  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mean.size() == 0) {
      out << "mean: []\n";
    } else {
      out << "mean:\n";
      for (auto item : msg.mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
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

inline std::string to_yaml(const GaussianComponent & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::GaussianComponent & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::GaussianComponent & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::GaussianComponent>()
{
  return "irt_nav_msgs::msg::GaussianComponent";
}

template<>
inline const char * name<irt_nav_msgs::msg::GaussianComponent>()
{
  return "irt_nav_msgs/msg/GaussianComponent";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::GaussianComponent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::GaussianComponent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::GaussianComponent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__TRAITS_HPP_
