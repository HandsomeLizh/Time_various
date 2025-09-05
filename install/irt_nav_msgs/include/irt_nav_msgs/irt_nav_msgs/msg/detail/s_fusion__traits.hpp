// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/s_fusion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pva_geodetic'
#include "irt_nav_msgs/msg/detail/pva_geodetic__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFusion & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: simulation_time
  {
    out << "simulation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.simulation_time, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: filter_tow
  {
    out << "filter_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_tow, out);
    out << ", ";
  }

  // member: pps_counter
  {
    out << "pps_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.pps_counter, out);
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov
  {
    if (msg.cov.size() == 0) {
      out << "cov: []";
    } else {
      out << "cov: [";
      size_t pending_items = msg.cov.size();
      for (auto item : msg.cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: num_used_stat_ant1
  {
    out << "num_used_stat_ant1: ";
    rosidl_generator_traits::value_to_yaml(msg.num_used_stat_ant1, out);
    out << ", ";
  }

  // member: num_used_stat_ant2
  {
    out << "num_used_stat_ant2: ";
    rosidl_generator_traits::value_to_yaml(msg.num_used_stat_ant2, out);
    out << ", ";
  }

  // member: rtcm_counter
  {
    out << "rtcm_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_counter, out);
    out << ", ";
  }

  // member: filter_inited_success
  {
    out << "filter_inited_success: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_inited_success, out);
    out << ", ";
  }

  // member: filter_inited
  {
    out << "filter_inited: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_inited, out);
    out << ", ";
  }

  // member: pva_geodetic
  {
    out << "pva_geodetic: ";
    to_flow_style_yaml(msg.pva_geodetic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFusion & msg,
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

  // member: simulation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "simulation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.simulation_time, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
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

  // member: filter_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_tow, out);
    out << "\n";
  }

  // member: pps_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pps_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.pps_counter, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov.size() == 0) {
      out << "cov: []\n";
    } else {
      out << "cov:\n";
      for (auto item : msg.cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_used_stat_ant1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_used_stat_ant1: ";
    rosidl_generator_traits::value_to_yaml(msg.num_used_stat_ant1, out);
    out << "\n";
  }

  // member: num_used_stat_ant2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_used_stat_ant2: ";
    rosidl_generator_traits::value_to_yaml(msg.num_used_stat_ant2, out);
    out << "\n";
  }

  // member: rtcm_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_counter, out);
    out << "\n";
  }

  // member: filter_inited_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_inited_success: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_inited_success, out);
    out << "\n";
  }

  // member: filter_inited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_inited: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_inited, out);
    out << "\n";
  }

  // member: pva_geodetic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pva_geodetic:\n";
    to_block_style_yaml(msg.pva_geodetic, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFusion & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::SFusion & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::SFusion & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::SFusion>()
{
  return "irt_nav_msgs::msg::SFusion";
}

template<>
inline const char * name<irt_nav_msgs::msg::SFusion>()
{
  return "irt_nav_msgs/msg/SFusion";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::SFusion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::SFusion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::SFusion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__TRAITS_HPP_
