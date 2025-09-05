// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/sol_ls__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolLS & msg,
  std::ostream & out)
{
  out << "{";
  // member: llh
  {
    if (msg.llh.size() == 0) {
      out << "llh: []";
    } else {
      out << "llh: [";
      size_t pending_items = msg.llh.size();
      for (auto item : msg.llh) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_ned
  {
    if (msg.vel_ned.size() == 0) {
      out << "vel_ned: []";
    } else {
      out << "vel_ned: [";
      size_t pending_items = msg.vel_ned.size();
      for (auto item : msg.vel_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: receiver_clock_bias
  {
    out << "receiver_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_clock_bias, out);
    out << ", ";
  }

  // member: receiver_clock_drift
  {
    out << "receiver_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_clock_drift, out);
    out << ", ";
  }

  // member: dop
  {
    if (msg.dop.size() == 0) {
      out << "dop: []";
    } else {
      out << "dop: [";
      size_t pending_items = msg.dop.size();
      for (auto item : msg.dop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolLS & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: llh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.llh.size() == 0) {
      out << "llh: []\n";
    } else {
      out << "llh:\n";
      for (auto item : msg.llh) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_ned.size() == 0) {
      out << "vel_ned: []\n";
    } else {
      out << "vel_ned:\n";
      for (auto item : msg.vel_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: receiver_clock_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_clock_bias, out);
    out << "\n";
  }

  // member: receiver_clock_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_clock_drift, out);
    out << "\n";
  }

  // member: dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dop.size() == 0) {
      out << "dop: []\n";
    } else {
      out << "dop:\n";
      for (auto item : msg.dop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolLS & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::SolLS & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::SolLS & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::SolLS>()
{
  return "irt_nav_msgs::msg::SolLS";
}

template<>
inline const char * name<irt_nav_msgs::msg::SolLS>()
{
  return "irt_nav_msgs/msg/SolLS";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::SolLS>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::SolLS>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irt_nav_msgs::msg::SolLS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__TRAITS_HPP_
