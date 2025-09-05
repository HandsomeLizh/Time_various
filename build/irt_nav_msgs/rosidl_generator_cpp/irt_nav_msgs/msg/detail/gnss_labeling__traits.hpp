// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/gnss_labeling__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ant_main_labels'
// Member 'ant_aux_labels'
#include "irt_nav_msgs/msg/detail/sat_label__traits.hpp"
// Member 'ant_pos'
// Member 'ant_vel'
// Member 'gt_pos'
// Member 'gt_vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GNSSLabeling & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: related_state_timestamp_nanosec
  {
    out << "related_state_timestamp_nanosec: ";
    rosidl_generator_traits::value_to_yaml(msg.related_state_timestamp_nanosec, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: time_receive
  {
    out << "time_receive: ";
    rosidl_generator_traits::value_to_yaml(msg.time_receive, out);
    out << ", ";
  }

  // member: solution_type
  {
    out << "solution_type: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_type, out);
    out << ", ";
  }

  // member: ant_main_labels
  {
    if (msg.ant_main_labels.size() == 0) {
      out << "ant_main_labels: []";
    } else {
      out << "ant_main_labels: [";
      size_t pending_items = msg.ant_main_labels.size();
      for (auto item : msg.ant_main_labels) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ant_aux_labels
  {
    if (msg.ant_aux_labels.size() == 0) {
      out << "ant_aux_labels: []";
    } else {
      out << "ant_aux_labels: [";
      size_t pending_items = msg.ant_aux_labels.size();
      for (auto item : msg.ant_aux_labels) {
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

  // member: gt_available
  {
    out << "gt_available: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_available, out);
    out << ", ";
  }

  // member: ant_pos
  {
    out << "ant_pos: ";
    to_flow_style_yaml(msg.ant_pos, out);
    out << ", ";
  }

  // member: ant_vel
  {
    out << "ant_vel: ";
    to_flow_style_yaml(msg.ant_vel, out);
    out << ", ";
  }

  // member: gt_pos
  {
    out << "gt_pos: ";
    to_flow_style_yaml(msg.gt_pos, out);
    out << ", ";
  }

  // member: gt_vel
  {
    out << "gt_vel: ";
    to_flow_style_yaml(msg.gt_vel, out);
    out << ", ";
  }

  // member: clock_bias
  {
    out << "clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_bias, out);
    out << ", ";
  }

  // member: clock_drift
  {
    out << "clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_drift, out);
    out << ", ";
  }

  // member: gt_clock_bias
  {
    out << "gt_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_clock_bias, out);
    out << ", ";
  }

  // member: gt_clock_drift
  {
    out << "gt_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_clock_drift, out);
    out << ", ";
  }

  // member: environment
  {
    out << "environment: ";
    rosidl_generator_traits::value_to_yaml(msg.environment, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GNSSLabeling & msg,
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

  // member: related_state_timestamp_nanosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "related_state_timestamp_nanosec: ";
    rosidl_generator_traits::value_to_yaml(msg.related_state_timestamp_nanosec, out);
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

  // member: time_receive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_receive: ";
    rosidl_generator_traits::value_to_yaml(msg.time_receive, out);
    out << "\n";
  }

  // member: solution_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_type: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_type, out);
    out << "\n";
  }

  // member: ant_main_labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_main_labels.size() == 0) {
      out << "ant_main_labels: []\n";
    } else {
      out << "ant_main_labels:\n";
      for (auto item : msg.ant_main_labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ant_aux_labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_aux_labels.size() == 0) {
      out << "ant_aux_labels: []\n";
    } else {
      out << "ant_aux_labels:\n";
      for (auto item : msg.ant_aux_labels) {
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

  // member: gt_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gt_available: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_available, out);
    out << "\n";
  }

  // member: ant_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_pos:\n";
    to_block_style_yaml(msg.ant_pos, out, indentation + 2);
  }

  // member: ant_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_vel:\n";
    to_block_style_yaml(msg.ant_vel, out, indentation + 2);
  }

  // member: gt_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gt_pos:\n";
    to_block_style_yaml(msg.gt_pos, out, indentation + 2);
  }

  // member: gt_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gt_vel:\n";
    to_block_style_yaml(msg.gt_vel, out, indentation + 2);
  }

  // member: clock_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_bias, out);
    out << "\n";
  }

  // member: clock_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_drift, out);
    out << "\n";
  }

  // member: gt_clock_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gt_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_clock_bias, out);
    out << "\n";
  }

  // member: gt_clock_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gt_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.gt_clock_drift, out);
    out << "\n";
  }

  // member: environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "environment: ";
    rosidl_generator_traits::value_to_yaml(msg.environment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GNSSLabeling & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::GNSSLabeling & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::GNSSLabeling & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::GNSSLabeling>()
{
  return "irt_nav_msgs::msg::GNSSLabeling";
}

template<>
inline const char * name<irt_nav_msgs::msg::GNSSLabeling>()
{
  return "irt_nav_msgs/msg/GNSSLabeling";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::GNSSLabeling>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::GNSSLabeling>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::GNSSLabeling>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__TRAITS_HPP_
