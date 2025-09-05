// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/rtcm1004__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCM1004 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: msg_number
  {
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << ", ";
  }

  // member: ref_station_id
  {
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << ", ";
  }

  // member: gps_epoch_time_ms
  {
    out << "gps_epoch_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_epoch_time_ms, out);
    out << ", ";
  }

  // member: flag_gnss_synchronous
  {
    out << "flag_gnss_synchronous: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_gnss_synchronous, out);
    out << ", ";
  }

  // member: no_gps_sat_signal_processed
  {
    out << "no_gps_sat_signal_processed: ";
    rosidl_generator_traits::value_to_yaml(msg.no_gps_sat_signal_processed, out);
    out << ", ";
  }

  // member: divergency_free_smoothing_indicator
  {
    out << "divergency_free_smoothing_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.divergency_free_smoothing_indicator, out);
    out << ", ";
  }

  // member: smoothing_interval
  {
    out << "smoothing_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.smoothing_interval, out);
    out << ", ";
  }

  // member: sat_id
  {
    if (msg.sat_id.size() == 0) {
      out << "sat_id: []";
    } else {
      out << "sat_id: [";
      size_t pending_items = msg.sat_id.size();
      for (auto item : msg.sat_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_code_indicator
  {
    if (msg.l1_code_indicator.size() == 0) {
      out << "l1_code_indicator: []";
    } else {
      out << "l1_code_indicator: [";
      size_t pending_items = msg.l1_code_indicator.size();
      for (auto item : msg.l1_code_indicator) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_pseudorange_mod1lightms_m
  {
    if (msg.l1_pseudorange_mod1lightms_m.size() == 0) {
      out << "l1_pseudorange_mod1lightms_m: []";
    } else {
      out << "l1_pseudorange_mod1lightms_m: [";
      size_t pending_items = msg.l1_pseudorange_mod1lightms_m.size();
      for (auto item : msg.l1_pseudorange_mod1lightms_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_phasenrange_l1_pseudorange_m
  {
    if (msg.l1_phasenrange_l1_pseudorange_m.size() == 0) {
      out << "l1_phasenrange_l1_pseudorange_m: []";
    } else {
      out << "l1_phasenrange_l1_pseudorange_m: [";
      size_t pending_items = msg.l1_phasenrange_l1_pseudorange_m.size();
      for (auto item : msg.l1_phasenrange_l1_pseudorange_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_locktime_indicator
  {
    if (msg.l1_locktime_indicator.size() == 0) {
      out << "l1_locktime_indicator: []";
    } else {
      out << "l1_locktime_indicator: [";
      size_t pending_items = msg.l1_locktime_indicator.size();
      for (auto item : msg.l1_locktime_indicator) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    if (msg.l1_integer_pseudorange_modulus_ambiguity_m.size() == 0) {
      out << "l1_integer_pseudorange_modulus_ambiguity_m: []";
    } else {
      out << "l1_integer_pseudorange_modulus_ambiguity_m: [";
      size_t pending_items = msg.l1_integer_pseudorange_modulus_ambiguity_m.size();
      for (auto item : msg.l1_integer_pseudorange_modulus_ambiguity_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l1_cnr_db_hz
  {
    if (msg.l1_cnr_db_hz.size() == 0) {
      out << "l1_cnr_db_hz: []";
    } else {
      out << "l1_cnr_db_hz: [";
      size_t pending_items = msg.l1_cnr_db_hz.size();
      for (auto item : msg.l1_cnr_db_hz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l2_code_indicator
  {
    if (msg.l2_code_indicator.size() == 0) {
      out << "l2_code_indicator: []";
    } else {
      out << "l2_code_indicator: [";
      size_t pending_items = msg.l2_code_indicator.size();
      for (auto item : msg.l2_code_indicator) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l2_l1_pseudorange_difference_m
  {
    if (msg.l2_l1_pseudorange_difference_m.size() == 0) {
      out << "l2_l1_pseudorange_difference_m: []";
    } else {
      out << "l2_l1_pseudorange_difference_m: [";
      size_t pending_items = msg.l2_l1_pseudorange_difference_m.size();
      for (auto item : msg.l2_l1_pseudorange_difference_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l2_phaserange_l1_pseudorange_m
  {
    if (msg.l2_phaserange_l1_pseudorange_m.size() == 0) {
      out << "l2_phaserange_l1_pseudorange_m: []";
    } else {
      out << "l2_phaserange_l1_pseudorange_m: [";
      size_t pending_items = msg.l2_phaserange_l1_pseudorange_m.size();
      for (auto item : msg.l2_phaserange_l1_pseudorange_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l2_locktime_indicator
  {
    if (msg.l2_locktime_indicator.size() == 0) {
      out << "l2_locktime_indicator: []";
    } else {
      out << "l2_locktime_indicator: [";
      size_t pending_items = msg.l2_locktime_indicator.size();
      for (auto item : msg.l2_locktime_indicator) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l2_cnr_db_hz
  {
    if (msg.l2_cnr_db_hz.size() == 0) {
      out << "l2_cnr_db_hz: []";
    } else {
      out << "l2_cnr_db_hz: [";
      size_t pending_items = msg.l2_cnr_db_hz.size();
      for (auto item : msg.l2_cnr_db_hz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: msg_counter
  {
    out << "msg_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RTCM1004 & msg,
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

  // member: msg_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << "\n";
  }

  // member: ref_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << "\n";
  }

  // member: gps_epoch_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_epoch_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_epoch_time_ms, out);
    out << "\n";
  }

  // member: flag_gnss_synchronous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_gnss_synchronous: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_gnss_synchronous, out);
    out << "\n";
  }

  // member: no_gps_sat_signal_processed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "no_gps_sat_signal_processed: ";
    rosidl_generator_traits::value_to_yaml(msg.no_gps_sat_signal_processed, out);
    out << "\n";
  }

  // member: divergency_free_smoothing_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "divergency_free_smoothing_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.divergency_free_smoothing_indicator, out);
    out << "\n";
  }

  // member: smoothing_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smoothing_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.smoothing_interval, out);
    out << "\n";
  }

  // member: sat_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sat_id.size() == 0) {
      out << "sat_id: []\n";
    } else {
      out << "sat_id:\n";
      for (auto item : msg.sat_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_code_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_code_indicator.size() == 0) {
      out << "l1_code_indicator: []\n";
    } else {
      out << "l1_code_indicator:\n";
      for (auto item : msg.l1_code_indicator) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_pseudorange_mod1lightms_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_pseudorange_mod1lightms_m.size() == 0) {
      out << "l1_pseudorange_mod1lightms_m: []\n";
    } else {
      out << "l1_pseudorange_mod1lightms_m:\n";
      for (auto item : msg.l1_pseudorange_mod1lightms_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_phasenrange_l1_pseudorange_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_phasenrange_l1_pseudorange_m.size() == 0) {
      out << "l1_phasenrange_l1_pseudorange_m: []\n";
    } else {
      out << "l1_phasenrange_l1_pseudorange_m:\n";
      for (auto item : msg.l1_phasenrange_l1_pseudorange_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_locktime_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_locktime_indicator.size() == 0) {
      out << "l1_locktime_indicator: []\n";
    } else {
      out << "l1_locktime_indicator:\n";
      for (auto item : msg.l1_locktime_indicator) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_integer_pseudorange_modulus_ambiguity_m.size() == 0) {
      out << "l1_integer_pseudorange_modulus_ambiguity_m: []\n";
    } else {
      out << "l1_integer_pseudorange_modulus_ambiguity_m:\n";
      for (auto item : msg.l1_integer_pseudorange_modulus_ambiguity_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l1_cnr_db_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l1_cnr_db_hz.size() == 0) {
      out << "l1_cnr_db_hz: []\n";
    } else {
      out << "l1_cnr_db_hz:\n";
      for (auto item : msg.l1_cnr_db_hz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l2_code_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l2_code_indicator.size() == 0) {
      out << "l2_code_indicator: []\n";
    } else {
      out << "l2_code_indicator:\n";
      for (auto item : msg.l2_code_indicator) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l2_l1_pseudorange_difference_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l2_l1_pseudorange_difference_m.size() == 0) {
      out << "l2_l1_pseudorange_difference_m: []\n";
    } else {
      out << "l2_l1_pseudorange_difference_m:\n";
      for (auto item : msg.l2_l1_pseudorange_difference_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l2_phaserange_l1_pseudorange_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l2_phaserange_l1_pseudorange_m.size() == 0) {
      out << "l2_phaserange_l1_pseudorange_m: []\n";
    } else {
      out << "l2_phaserange_l1_pseudorange_m:\n";
      for (auto item : msg.l2_phaserange_l1_pseudorange_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l2_locktime_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l2_locktime_indicator.size() == 0) {
      out << "l2_locktime_indicator: []\n";
    } else {
      out << "l2_locktime_indicator:\n";
      for (auto item : msg.l2_locktime_indicator) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l2_cnr_db_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l2_cnr_db_hz.size() == 0) {
      out << "l2_cnr_db_hz: []\n";
    } else {
      out << "l2_cnr_db_hz:\n";
      for (auto item : msg.l2_cnr_db_hz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: msg_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTCM1004 & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::RTCM1004 & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::RTCM1004 & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::RTCM1004>()
{
  return "irt_nav_msgs::msg::RTCM1004";
}

template<>
inline const char * name<irt_nav_msgs::msg::RTCM1004>()
{
  return "irt_nav_msgs/msg/RTCM1004";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::RTCM1004>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::RTCM1004>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::RTCM1004>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__TRAITS_HPP_
