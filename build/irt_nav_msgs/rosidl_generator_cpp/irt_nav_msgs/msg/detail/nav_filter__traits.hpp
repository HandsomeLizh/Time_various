// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/nav_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavFilter & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: filter_enabled
  {
    out << "filter_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_enabled, out);
    out << ", ";
  }

  // member: gnss_obs_delay
  {
    out << "gnss_obs_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_obs_delay, out);
    out << ", ";
  }

  // member: state_ekf
  {
    if (msg.state_ekf.size() == 0) {
      out << "state_ekf: []";
    } else {
      out << "state_ekf: [";
      size_t pending_items = msg.state_ekf.size();
      for (auto item : msg.state_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: var_ekf
  {
    if (msg.var_ekf.size() == 0) {
      out << "var_ekf: []";
    } else {
      out << "var_ekf: [";
      size_t pending_items = msg.var_ekf.size();
      for (auto item : msg.var_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_normed_ekf
  {
    out << "vel_normed_ekf: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_normed_ekf, out);
    out << ", ";
  }

  // member: euler_ekf
  {
    if (msg.euler_ekf.size() == 0) {
      out << "euler_ekf: []";
    } else {
      out << "euler_ekf: [";
      size_t pending_items = msg.euler_ekf.size();
      for (auto item : msg.euler_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: update_exit_ekf
  {
    out << "update_exit_ekf: ";
    rosidl_generator_traits::value_to_yaml(msg.update_exit_ekf, out);
    out << ", ";
  }

  // member: ant_ecef_ekf
  {
    if (msg.ant_ecef_ekf.size() == 0) {
      out << "ant_ecef_ekf: []";
    } else {
      out << "ant_ecef_ekf: [";
      size_t pending_items = msg.ant_ecef_ekf.size();
      for (auto item : msg.ant_ecef_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ant_llh_ekf
  {
    if (msg.ant_llh_ekf.size() == 0) {
      out << "ant_llh_ekf: []";
    } else {
      out << "ant_llh_ekf: [";
      size_t pending_items = msg.ant_llh_ekf.size();
      for (auto item : msg.ant_llh_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ant_vel_ekf
  {
    if (msg.ant_vel_ekf.size() == 0) {
      out << "ant_vel_ekf: []";
    } else {
      out << "ant_vel_ekf: [";
      size_t pending_items = msg.ant_vel_ekf.size();
      for (auto item : msg.ant_vel_ekf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_ukf
  {
    if (msg.state_ukf.size() == 0) {
      out << "state_ukf: []";
    } else {
      out << "state_ukf: [";
      size_t pending_items = msg.state_ukf.size();
      for (auto item : msg.state_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: var_ukf
  {
    if (msg.var_ukf.size() == 0) {
      out << "var_ukf: []";
    } else {
      out << "var_ukf: [";
      size_t pending_items = msg.var_ukf.size();
      for (auto item : msg.var_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_normed_ukf
  {
    out << "vel_normed_ukf: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_normed_ukf, out);
    out << ", ";
  }

  // member: euler_ukf
  {
    if (msg.euler_ukf.size() == 0) {
      out << "euler_ukf: []";
    } else {
      out << "euler_ukf: [";
      size_t pending_items = msg.euler_ukf.size();
      for (auto item : msg.euler_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: update_exit_ukf
  {
    out << "update_exit_ukf: ";
    rosidl_generator_traits::value_to_yaml(msg.update_exit_ukf, out);
    out << ", ";
  }

  // member: ant_ecef_ukf
  {
    if (msg.ant_ecef_ukf.size() == 0) {
      out << "ant_ecef_ukf: []";
    } else {
      out << "ant_ecef_ukf: [";
      size_t pending_items = msg.ant_ecef_ukf.size();
      for (auto item : msg.ant_ecef_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ant_llh_ukf
  {
    if (msg.ant_llh_ukf.size() == 0) {
      out << "ant_llh_ukf: []";
    } else {
      out << "ant_llh_ukf: [";
      size_t pending_items = msg.ant_llh_ukf.size();
      for (auto item : msg.ant_llh_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ant_vel_ukf
  {
    if (msg.ant_vel_ukf.size() == 0) {
      out << "ant_vel_ukf: []";
    } else {
      out << "ant_vel_ukf: [";
      size_t pending_items = msg.ant_vel_ukf.size();
      for (auto item : msg.ant_vel_ukf) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: filter_time
  {
    out << "filter_time: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavFilter & msg,
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

  // member: filter_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_enabled, out);
    out << "\n";
  }

  // member: gnss_obs_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_obs_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_obs_delay, out);
    out << "\n";
  }

  // member: state_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_ekf.size() == 0) {
      out << "state_ekf: []\n";
    } else {
      out << "state_ekf:\n";
      for (auto item : msg.state_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_ekf.size() == 0) {
      out << "var_ekf: []\n";
    } else {
      out << "var_ekf:\n";
      for (auto item : msg.var_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_normed_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_normed_ekf: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_normed_ekf, out);
    out << "\n";
  }

  // member: euler_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.euler_ekf.size() == 0) {
      out << "euler_ekf: []\n";
    } else {
      out << "euler_ekf:\n";
      for (auto item : msg.euler_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: update_exit_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_exit_ekf: ";
    rosidl_generator_traits::value_to_yaml(msg.update_exit_ekf, out);
    out << "\n";
  }

  // member: ant_ecef_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_ecef_ekf.size() == 0) {
      out << "ant_ecef_ekf: []\n";
    } else {
      out << "ant_ecef_ekf:\n";
      for (auto item : msg.ant_ecef_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ant_llh_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_llh_ekf.size() == 0) {
      out << "ant_llh_ekf: []\n";
    } else {
      out << "ant_llh_ekf:\n";
      for (auto item : msg.ant_llh_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ant_vel_ekf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_vel_ekf.size() == 0) {
      out << "ant_vel_ekf: []\n";
    } else {
      out << "ant_vel_ekf:\n";
      for (auto item : msg.ant_vel_ekf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_ukf.size() == 0) {
      out << "state_ukf: []\n";
    } else {
      out << "state_ukf:\n";
      for (auto item : msg.state_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_ukf.size() == 0) {
      out << "var_ukf: []\n";
    } else {
      out << "var_ukf:\n";
      for (auto item : msg.var_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_normed_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_normed_ukf: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_normed_ukf, out);
    out << "\n";
  }

  // member: euler_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.euler_ukf.size() == 0) {
      out << "euler_ukf: []\n";
    } else {
      out << "euler_ukf:\n";
      for (auto item : msg.euler_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: update_exit_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_exit_ukf: ";
    rosidl_generator_traits::value_to_yaml(msg.update_exit_ukf, out);
    out << "\n";
  }

  // member: ant_ecef_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_ecef_ukf.size() == 0) {
      out << "ant_ecef_ukf: []\n";
    } else {
      out << "ant_ecef_ukf:\n";
      for (auto item : msg.ant_ecef_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ant_llh_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_llh_ukf.size() == 0) {
      out << "ant_llh_ukf: []\n";
    } else {
      out << "ant_llh_ukf:\n";
      for (auto item : msg.ant_llh_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ant_vel_ukf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ant_vel_ukf.size() == 0) {
      out << "ant_vel_ukf: []\n";
    } else {
      out << "ant_vel_ukf:\n";
      for (auto item : msg.ant_vel_ukf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: filter_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_time: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavFilter & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::NavFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::NavFilter & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::NavFilter>()
{
  return "irt_nav_msgs::msg::NavFilter";
}

template<>
inline const char * name<irt_nav_msgs::msg::NavFilter>()
{
  return "irt_nav_msgs/msg/NavFilter";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::NavFilter>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::NavFilter>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::NavFilter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__TRAITS_HPP_
