// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/fgo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'vel'
// Member 'acc'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FGOState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    to_flow_style_yaml(msg.acc, out);
    out << ", ";
  }

  // member: pose_var
  {
    if (msg.pose_var.size() == 0) {
      out << "pose_var: []";
    } else {
      out << "pose_var: [";
      size_t pending_items = msg.pose_var.size();
      for (auto item : msg.pose_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_var
  {
    if (msg.vel_var.size() == 0) {
      out << "vel_var: []";
    } else {
      out << "vel_var: [";
      size_t pending_items = msg.vel_var.size();
      for (auto item : msg.vel_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_var
  {
    if (msg.acc_var.size() == 0) {
      out << "acc_var: []";
    } else {
      out << "acc_var: [";
      size_t pending_items = msg.acc_var.size();
      for (auto item : msg.acc_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: imu_bias
  {
    if (msg.imu_bias.size() == 0) {
      out << "imu_bias: []";
    } else {
      out << "imu_bias: [";
      size_t pending_items = msg.imu_bias.size();
      for (auto item : msg.imu_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_bias_var
  {
    if (msg.imu_bias_var.size() == 0) {
      out << "imu_bias_var: []";
    } else {
      out << "imu_bias_var: [";
      size_t pending_items = msg.imu_bias_var.size();
      for (auto item : msg.imu_bias_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cbd
  {
    if (msg.cbd.size() == 0) {
      out << "cbd: []";
    } else {
      out << "cbd: [";
      size_t pending_items = msg.cbd.size();
      for (auto item : msg.cbd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cbd_var
  {
    if (msg.cbd_var.size() == 0) {
      out << "cbd_var: []";
    } else {
      out << "cbd_var: [";
      size_t pending_items = msg.cbd_var.size();
      for (auto item : msg.cbd_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: amb
  {
    if (msg.amb.size() == 0) {
      out << "amb: []";
    } else {
      out << "amb: [";
      size_t pending_items = msg.amb.size();
      for (auto item : msg.amb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: amb_var
  {
    if (msg.amb_var.size() == 0) {
      out << "amb_var: []";
    } else {
      out << "amb_var: [";
      size_t pending_items = msg.amb_var.size();
      for (auto item : msg.amb_var) {
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
  const FGOState & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc:\n";
    to_block_style_yaml(msg.acc, out, indentation + 2);
  }

  // member: pose_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_var.size() == 0) {
      out << "pose_var: []\n";
    } else {
      out << "pose_var:\n";
      for (auto item : msg.pose_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_var.size() == 0) {
      out << "vel_var: []\n";
    } else {
      out << "vel_var:\n";
      for (auto item : msg.vel_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_var.size() == 0) {
      out << "acc_var: []\n";
    } else {
      out << "acc_var:\n";
      for (auto item : msg.acc_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: imu_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_bias.size() == 0) {
      out << "imu_bias: []\n";
    } else {
      out << "imu_bias:\n";
      for (auto item : msg.imu_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_bias_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_bias_var.size() == 0) {
      out << "imu_bias_var: []\n";
    } else {
      out << "imu_bias_var:\n";
      for (auto item : msg.imu_bias_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cbd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cbd.size() == 0) {
      out << "cbd: []\n";
    } else {
      out << "cbd:\n";
      for (auto item : msg.cbd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cbd_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cbd_var.size() == 0) {
      out << "cbd_var: []\n";
    } else {
      out << "cbd_var:\n";
      for (auto item : msg.cbd_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: amb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.amb.size() == 0) {
      out << "amb: []\n";
    } else {
      out << "amb:\n";
      for (auto item : msg.amb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: amb_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.amb_var.size() == 0) {
      out << "amb_var: []\n";
    } else {
      out << "amb_var:\n";
      for (auto item : msg.amb_var) {
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

inline std::string to_yaml(const FGOState & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::FGOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::FGOState & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::FGOState>()
{
  return "irt_nav_msgs::msg::FGOState";
}

template<>
inline const char * name<irt_nav_msgs::msg::FGOState>()
{
  return "irt_nav_msgs/msg/FGOState";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::FGOState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::FGOState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::FGOState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__TRAITS_HPP_
