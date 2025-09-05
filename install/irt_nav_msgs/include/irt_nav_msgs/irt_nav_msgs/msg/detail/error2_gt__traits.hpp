// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/error2_gt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Error2GT & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ref_tow_before
  {
    out << "ref_tow_before: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_tow_before, out);
    out << ", ";
  }

  // member: ref_tow_after
  {
    out << "ref_tow_after: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_tow_after, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: pos_1d_error_ned
  {
    out << "pos_1d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_1d_error_ned, out);
    out << ", ";
  }

  // member: pos_2d_error_ned
  {
    out << "pos_2d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_ned, out);
    out << ", ";
  }

  // member: pos_3d_error_ned
  {
    out << "pos_3d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_ned, out);
    out << ", ";
  }

  // member: pos_1d_error_body
  {
    out << "pos_1d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_1d_error_body, out);
    out << ", ";
  }

  // member: pos_2d_error_body
  {
    out << "pos_2d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_body, out);
    out << ", ";
  }

  // member: pos_3d_error_body
  {
    out << "pos_3d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_body, out);
    out << ", ";
  }

  // member: pos_2d_error_geographic
  {
    out << "pos_2d_error_geographic: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_geographic, out);
    out << ", ";
  }

  // member: pos_3d_error_geographic
  {
    out << "pos_3d_error_geographic: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_geographic, out);
    out << ", ";
  }

  // member: pos_2d_error_ecef
  {
    out << "pos_2d_error_ecef: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_ecef, out);
    out << ", ";
  }

  // member: pos_3d_error_ecef
  {
    out << "pos_3d_error_ecef: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_ecef, out);
    out << ", ";
  }

  // member: vel_2d_error
  {
    out << "vel_2d_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_2d_error, out);
    out << ", ";
  }

  // member: vel_3d_error
  {
    out << "vel_3d_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_3d_error, out);
    out << ", ";
  }

  // member: pose_std_ecef
  {
    if (msg.pose_std_ecef.size() == 0) {
      out << "pose_std_ecef: []";
    } else {
      out << "pose_std_ecef: [";
      size_t pending_items = msg.pose_std_ecef.size();
      for (auto item : msg.pose_std_ecef) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_std_ned
  {
    if (msg.pose_std_ned.size() == 0) {
      out << "pose_std_ned: []";
    } else {
      out << "pose_std_ned: [";
      size_t pending_items = msg.pose_std_ned.size();
      for (auto item : msg.pose_std_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_std_ecef
  {
    if (msg.vel_std_ecef.size() == 0) {
      out << "vel_std_ecef: []";
    } else {
      out << "vel_std_ecef: [";
      size_t pending_items = msg.vel_std_ecef.size();
      for (auto item : msg.vel_std_ecef) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_std_ned
  {
    if (msg.vel_std_ned.size() == 0) {
      out << "vel_std_ned: []";
    } else {
      out << "vel_std_ned: [";
      size_t pending_items = msg.vel_std_ned.size();
      for (auto item : msg.vel_std_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_llh
  {
    if (msg.ref_llh.size() == 0) {
      out << "ref_llh: []";
    } else {
      out << "ref_llh: [";
      size_t pending_items = msg.ref_llh.size();
      for (auto item : msg.ref_llh) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_llh_std
  {
    if (msg.ref_llh_std.size() == 0) {
      out << "ref_llh_std: []";
    } else {
      out << "ref_llh_std: [";
      size_t pending_items = msg.ref_llh_std.size();
      for (auto item : msg.ref_llh_std) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_error
  {
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: ref_yaw
  {
    out << "ref_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw, out);
    out << ", ";
  }

  // member: ref_yaw_std
  {
    out << "ref_yaw_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw_std, out);
    out << ", ";
  }

  // member: ref_pitch_roll
  {
    out << "ref_pitch_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_pitch_roll, out);
    out << ", ";
  }

  // member: ref_pitch_roll_std
  {
    out << "ref_pitch_roll_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_pitch_roll_std, out);
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

  // member: cbd_std
  {
    if (msg.cbd_std.size() == 0) {
      out << "cbd_std: []";
    } else {
      out << "cbd_std: [";
      size_t pending_items = msg.cbd_std.size();
      for (auto item : msg.cbd_std) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_cbd
  {
    if (msg.ref_cbd.size() == 0) {
      out << "ref_cbd: []";
    } else {
      out << "ref_cbd: [";
      size_t pending_items = msg.ref_cbd.size();
      for (auto item : msg.ref_cbd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_bias
  {
    if (msg.acc_bias.size() == 0) {
      out << "acc_bias: []";
    } else {
      out << "acc_bias: [";
      size_t pending_items = msg.acc_bias.size();
      for (auto item : msg.acc_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_bias
  {
    if (msg.gyro_bias.size() == 0) {
      out << "gyro_bias: []";
    } else {
      out << "gyro_bias: [";
      size_t pending_items = msg.gyro_bias.size();
      for (auto item : msg.gyro_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_bias_std
  {
    if (msg.acc_bias_std.size() == 0) {
      out << "acc_bias_std: []";
    } else {
      out << "acc_bias_std: [";
      size_t pending_items = msg.acc_bias_std.size();
      for (auto item : msg.acc_bias_std) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_bias_std
  {
    if (msg.gyro_bias_std.size() == 0) {
      out << "gyro_bias_std: []";
    } else {
      out << "gyro_bias_std: [";
      size_t pending_items = msg.gyro_bias_std.size();
      for (auto item : msg.gyro_bias_std) {
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

  // member: omega_body
  {
    if (msg.omega_body.size() == 0) {
      out << "omega_body: []";
    } else {
      out << "omega_body: [";
      size_t pending_items = msg.omega_body.size();
      for (auto item : msg.omega_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: omega_body_std
  {
    if (msg.omega_body_std.size() == 0) {
      out << "omega_body_std: []";
    } else {
      out << "omega_body_std: [";
      size_t pending_items = msg.omega_body_std.size();
      for (auto item : msg.omega_body_std) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_vel
  {
    if (msg.ref_vel.size() == 0) {
      out << "ref_vel: []";
    } else {
      out << "ref_vel: [";
      size_t pending_items = msg.ref_vel.size();
      for (auto item : msg.ref_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_vel_std
  {
    if (msg.ref_vel_std.size() == 0) {
      out << "ref_vel_std: []";
    } else {
      out << "ref_vel_std: [";
      size_t pending_items = msg.ref_vel_std.size();
      for (auto item : msg.ref_vel_std) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_mode
  {
    out << "ref_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_mode, out);
    out << ", ";
  }

  // member: ref_error
  {
    out << "ref_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Error2GT & msg,
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

  // member: ref_tow_before
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_tow_before: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_tow_before, out);
    out << "\n";
  }

  // member: ref_tow_after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_tow_after: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_tow_after, out);
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

  // member: pos_1d_error_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_1d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_1d_error_ned, out);
    out << "\n";
  }

  // member: pos_2d_error_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_2d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_ned, out);
    out << "\n";
  }

  // member: pos_3d_error_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_3d_error_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_ned, out);
    out << "\n";
  }

  // member: pos_1d_error_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_1d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_1d_error_body, out);
    out << "\n";
  }

  // member: pos_2d_error_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_2d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_body, out);
    out << "\n";
  }

  // member: pos_3d_error_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_3d_error_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_body, out);
    out << "\n";
  }

  // member: pos_2d_error_geographic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_2d_error_geographic: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_geographic, out);
    out << "\n";
  }

  // member: pos_3d_error_geographic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_3d_error_geographic: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_geographic, out);
    out << "\n";
  }

  // member: pos_2d_error_ecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_2d_error_ecef: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_2d_error_ecef, out);
    out << "\n";
  }

  // member: pos_3d_error_ecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_3d_error_ecef: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_3d_error_ecef, out);
    out << "\n";
  }

  // member: vel_2d_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_2d_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_2d_error, out);
    out << "\n";
  }

  // member: vel_3d_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_3d_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_3d_error, out);
    out << "\n";
  }

  // member: pose_std_ecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_std_ecef.size() == 0) {
      out << "pose_std_ecef: []\n";
    } else {
      out << "pose_std_ecef:\n";
      for (auto item : msg.pose_std_ecef) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_std_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_std_ned.size() == 0) {
      out << "pose_std_ned: []\n";
    } else {
      out << "pose_std_ned:\n";
      for (auto item : msg.pose_std_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_std_ecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_std_ecef.size() == 0) {
      out << "vel_std_ecef: []\n";
    } else {
      out << "vel_std_ecef:\n";
      for (auto item : msg.vel_std_ecef) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_std_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_std_ned.size() == 0) {
      out << "vel_std_ned: []\n";
    } else {
      out << "vel_std_ned:\n";
      for (auto item : msg.vel_std_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_llh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_llh.size() == 0) {
      out << "ref_llh: []\n";
    } else {
      out << "ref_llh:\n";
      for (auto item : msg.ref_llh) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_llh_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_llh_std.size() == 0) {
      out << "ref_llh_std: []\n";
    } else {
      out << "ref_llh_std:\n";
      for (auto item : msg.ref_llh_std) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: ref_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw, out);
    out << "\n";
  }

  // member: ref_yaw_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_yaw_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw_std, out);
    out << "\n";
  }

  // member: ref_pitch_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_pitch_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_pitch_roll, out);
    out << "\n";
  }

  // member: ref_pitch_roll_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_pitch_roll_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_pitch_roll_std, out);
    out << "\n";
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

  // member: cbd_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cbd_std.size() == 0) {
      out << "cbd_std: []\n";
    } else {
      out << "cbd_std:\n";
      for (auto item : msg.cbd_std) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_cbd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_cbd.size() == 0) {
      out << "ref_cbd: []\n";
    } else {
      out << "ref_cbd:\n";
      for (auto item : msg.ref_cbd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_bias.size() == 0) {
      out << "acc_bias: []\n";
    } else {
      out << "acc_bias:\n";
      for (auto item : msg.acc_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_bias.size() == 0) {
      out << "gyro_bias: []\n";
    } else {
      out << "gyro_bias:\n";
      for (auto item : msg.gyro_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_bias_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_bias_std.size() == 0) {
      out << "acc_bias_std: []\n";
    } else {
      out << "acc_bias_std:\n";
      for (auto item : msg.acc_bias_std) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_bias_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_bias_std.size() == 0) {
      out << "gyro_bias_std: []\n";
    } else {
      out << "gyro_bias_std:\n";
      for (auto item : msg.gyro_bias_std) {
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

  // member: omega_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.omega_body.size() == 0) {
      out << "omega_body: []\n";
    } else {
      out << "omega_body:\n";
      for (auto item : msg.omega_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: omega_body_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.omega_body_std.size() == 0) {
      out << "omega_body_std: []\n";
    } else {
      out << "omega_body_std:\n";
      for (auto item : msg.omega_body_std) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_vel.size() == 0) {
      out << "ref_vel: []\n";
    } else {
      out << "ref_vel:\n";
      for (auto item : msg.ref_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_vel_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_vel_std.size() == 0) {
      out << "ref_vel_std: []\n";
    } else {
      out << "ref_vel_std:\n";
      for (auto item : msg.ref_vel_std) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_mode, out);
    out << "\n";
  }

  // member: ref_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Error2GT & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::Error2GT & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::Error2GT & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::Error2GT>()
{
  return "irt_nav_msgs::msg::Error2GT";
}

template<>
inline const char * name<irt_nav_msgs::msg::Error2GT>()
{
  return "irt_nav_msgs/msg/Error2GT";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::Error2GT>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::Error2GT>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::Error2GT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__TRAITS_HPP_
