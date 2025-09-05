// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'gnss_obs_ant_main'
// Member 'gnss_obs_ant_aux'
// Member 'dd_gnss_obs_dualantenna'
// Member 'dd_gnss_obs_time'
// Member 'dd_gnss_obs_rtcm'
#include "irt_nav_msgs/msg/detail/gnss_obs__traits.hpp"
// Member 'gnss_corrections'
#include "irt_nav_msgs/msg/detail/gnss_correction__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GNSSObsPreProcessed & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: time_offset_gal_gps
  {
    out << "time_offset_gal_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_gal_gps, out);
    out << ", ";
  }

  // member: is_ggto_valid
  {
    out << "is_ggto_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ggto_valid, out);
    out << ", ";
  }

  // member: gnss_obs_ant_main
  {
    out << "gnss_obs_ant_main: ";
    to_flow_style_yaml(msg.gnss_obs_ant_main, out);
    out << ", ";
  }

  // member: gnss_obs_ant_aux
  {
    out << "gnss_obs_ant_aux: ";
    to_flow_style_yaml(msg.gnss_obs_ant_aux, out);
    out << ", ";
  }

  // member: dd_gnss_obs_dualantenna
  {
    out << "dd_gnss_obs_dualantenna: ";
    to_flow_style_yaml(msg.dd_gnss_obs_dualantenna, out);
    out << ", ";
  }

  // member: dd_gnss_obs_time
  {
    out << "dd_gnss_obs_time: ";
    to_flow_style_yaml(msg.dd_gnss_obs_time, out);
    out << ", ";
  }

  // member: dd_gnss_obs_rtcm
  {
    out << "dd_gnss_obs_rtcm: ";
    to_flow_style_yaml(msg.dd_gnss_obs_rtcm, out);
    out << ", ";
  }

  // member: gnss_corrections
  {
    if (msg.gnss_corrections.size() == 0) {
      out << "gnss_corrections: []";
    } else {
      out << "gnss_corrections: [";
      size_t pending_items = msg.gnss_corrections.size();
      for (auto item : msg.gnss_corrections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: faulty_prn_main
  {
    if (msg.faulty_prn_main.size() == 0) {
      out << "faulty_prn_main: []";
    } else {
      out << "faulty_prn_main: [";
      size_t pending_items = msg.faulty_prn_main.size();
      for (auto item : msg.faulty_prn_main) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: faulty_prn_aux
  {
    if (msg.faulty_prn_aux.size() == 0) {
      out << "faulty_prn_aux: []";
    } else {
      out << "faulty_prn_aux: [";
      size_t pending_items = msg.faulty_prn_aux.size();
      for (auto item : msg.faulty_prn_aux) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_time_dd
  {
    out << "has_time_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_time_dd, out);
    out << ", ";
  }

  // member: has_dualantenna
  {
    out << "has_dualantenna: ";
    rosidl_generator_traits::value_to_yaml(msg.has_dualantenna, out);
    out << ", ";
  }

  // member: has_dualantenna_dd
  {
    out << "has_dualantenna_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_dualantenna_dd, out);
    out << ", ";
  }

  // member: has_rtcm_dd
  {
    out << "has_rtcm_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_rtcm_dd, out);
    out << ", ";
  }

  // member: has_rtk
  {
    out << "has_rtk: ";
    rosidl_generator_traits::value_to_yaml(msg.has_rtk, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GNSSObsPreProcessed & msg,
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

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: time_offset_gal_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset_gal_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_gal_gps, out);
    out << "\n";
  }

  // member: is_ggto_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ggto_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ggto_valid, out);
    out << "\n";
  }

  // member: gnss_obs_ant_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_obs_ant_main:\n";
    to_block_style_yaml(msg.gnss_obs_ant_main, out, indentation + 2);
  }

  // member: gnss_obs_ant_aux
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_obs_ant_aux:\n";
    to_block_style_yaml(msg.gnss_obs_ant_aux, out, indentation + 2);
  }

  // member: dd_gnss_obs_dualantenna
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dd_gnss_obs_dualantenna:\n";
    to_block_style_yaml(msg.dd_gnss_obs_dualantenna, out, indentation + 2);
  }

  // member: dd_gnss_obs_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dd_gnss_obs_time:\n";
    to_block_style_yaml(msg.dd_gnss_obs_time, out, indentation + 2);
  }

  // member: dd_gnss_obs_rtcm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dd_gnss_obs_rtcm:\n";
    to_block_style_yaml(msg.dd_gnss_obs_rtcm, out, indentation + 2);
  }

  // member: gnss_corrections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gnss_corrections.size() == 0) {
      out << "gnss_corrections: []\n";
    } else {
      out << "gnss_corrections:\n";
      for (auto item : msg.gnss_corrections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: faulty_prn_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faulty_prn_main.size() == 0) {
      out << "faulty_prn_main: []\n";
    } else {
      out << "faulty_prn_main:\n";
      for (auto item : msg.faulty_prn_main) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: faulty_prn_aux
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faulty_prn_aux.size() == 0) {
      out << "faulty_prn_aux: []\n";
    } else {
      out << "faulty_prn_aux:\n";
      for (auto item : msg.faulty_prn_aux) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: has_time_dd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_time_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_time_dd, out);
    out << "\n";
  }

  // member: has_dualantenna
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_dualantenna: ";
    rosidl_generator_traits::value_to_yaml(msg.has_dualantenna, out);
    out << "\n";
  }

  // member: has_dualantenna_dd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_dualantenna_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_dualantenna_dd, out);
    out << "\n";
  }

  // member: has_rtcm_dd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_rtcm_dd: ";
    rosidl_generator_traits::value_to_yaml(msg.has_rtcm_dd, out);
    out << "\n";
  }

  // member: has_rtk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_rtk: ";
    rosidl_generator_traits::value_to_yaml(msg.has_rtk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GNSSObsPreProcessed & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::GNSSObsPreProcessed & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::GNSSObsPreProcessed>()
{
  return "irt_nav_msgs::msg::GNSSObsPreProcessed";
}

template<>
inline const char * name<irt_nav_msgs::msg::GNSSObsPreProcessed>()
{
  return "irt_nav_msgs/msg/GNSSObsPreProcessed";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::GNSSObsPreProcessed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::GNSSObsPreProcessed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::GNSSObsPreProcessed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__TRAITS_HPP_
