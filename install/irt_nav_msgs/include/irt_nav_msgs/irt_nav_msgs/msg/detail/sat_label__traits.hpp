// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/sat_label__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sat_pos'
// Member 'sat_vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'gaussian'
#include "irt_nav_msgs/msg/detail/gaussian_component__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SatLabel & msg,
  std::ostream & out)
{
  out << "{";
  // member: integrity_flag
  {
    out << "integrity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_flag, out);
    out << ", ";
  }

  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: sat_pos
  {
    out << "sat_pos: ";
    to_flow_style_yaml(msg.sat_pos, out);
    out << ", ";
  }

  // member: sat_vel
  {
    out << "sat_vel: ";
    to_flow_style_yaml(msg.sat_vel, out);
    out << ", ";
  }

  // member: psr
  {
    out << "psr: ";
    rosidl_generator_traits::value_to_yaml(msg.psr, out);
    out << ", ";
  }

  // member: psr_raw
  {
    out << "psr_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_raw, out);
    out << ", ";
  }

  // member: psr_satclk_corrected
  {
    out << "psr_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_satclk_corrected, out);
    out << ", ";
  }

  // member: psr_dev_measured
  {
    out << "psr_dev_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_dev_measured, out);
    out << ", ";
  }

  // member: psr_dev_preproc
  {
    out << "psr_dev_preproc: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_dev_preproc, out);
    out << ", ";
  }

  // member: dr
  {
    out << "dr: ";
    rosidl_generator_traits::value_to_yaml(msg.dr, out);
    out << ", ";
  }

  // member: dr_raw
  {
    out << "dr_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_raw, out);
    out << ", ";
  }

  // member: dr_satclk_corrected
  {
    out << "dr_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_satclk_corrected, out);
    out << ", ";
  }

  // member: dr_dev_preproc
  {
    out << "dr_dev_preproc: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_dev_preproc, out);
    out << ", ";
  }

  // member: cp
  {
    out << "cp: ";
    rosidl_generator_traits::value_to_yaml(msg.cp, out);
    out << ", ";
  }

  // member: cp_raw
  {
    out << "cp_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_raw, out);
    out << ", ";
  }

  // member: cp_satclk_corrected
  {
    out << "cp_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_satclk_corrected, out);
    out << ", ";
  }

  // member: cp_dev_measured
  {
    out << "cp_dev_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_dev_measured, out);
    out << ", ";
  }

  // member: locktime
  {
    out << "locktime: ";
    rosidl_generator_traits::value_to_yaml(msg.locktime, out);
    out << ", ";
  }

  // member: psr_correction
  {
    out << "psr_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_correction, out);
    out << ", ";
  }

  // member: cn0
  {
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << ", ";
  }

  // member: cycle_slip
  {
    out << "cycle_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_slip, out);
    out << ", ";
  }

  // member: psr_residual
  {
    out << "psr_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_residual, out);
    out << ", ";
  }

  // member: dr_residual
  {
    out << "dr_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_residual, out);
    out << ", ";
  }

  // member: cp_residual
  {
    out << "cp_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_residual, out);
    out << ", ";
  }

  // member: elevation_angle
  {
    out << "elevation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation_angle, out);
    out << ", ";
  }

  // member: azimuth_angle
  {
    out << "azimuth_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth_angle, out);
    out << ", ";
  }

  // member: cmc
  {
    out << "cmc: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc, out);
    out << ", ";
  }

  // member: drc
  {
    out << "drc: ";
    rosidl_generator_traits::value_to_yaml(msg.drc, out);
    out << ", ";
  }

  // member: factor
  {
    out << "factor: ";
    rosidl_generator_traits::value_to_yaml(msg.factor, out);
    out << ", ";
  }

  // member: dim
  {
    out << "dim: ";
    rosidl_generator_traits::value_to_yaml(msg.dim, out);
    out << ", ";
  }

  // member: residuals
  {
    if (msg.residuals.size() == 0) {
      out << "residuals: []";
    } else {
      out << "residuals: [";
      size_t pending_items = msg.residuals.size();
      for (auto item : msg.residuals) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gaussian
  {
    if (msg.gaussian.size() == 0) {
      out << "gaussian: []";
    } else {
      out << "gaussian: [";
      size_t pending_items = msg.gaussian.size();
      for (auto item : msg.gaussian) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: label_dev
  {
    out << "label_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.label_dev, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatLabel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: integrity_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_flag, out);
    out << "\n";
  }

  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: sat_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sat_pos:\n";
    to_block_style_yaml(msg.sat_pos, out, indentation + 2);
  }

  // member: sat_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sat_vel:\n";
    to_block_style_yaml(msg.sat_vel, out, indentation + 2);
  }

  // member: psr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr: ";
    rosidl_generator_traits::value_to_yaml(msg.psr, out);
    out << "\n";
  }

  // member: psr_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_raw, out);
    out << "\n";
  }

  // member: psr_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_satclk_corrected, out);
    out << "\n";
  }

  // member: psr_dev_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_dev_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_dev_measured, out);
    out << "\n";
  }

  // member: psr_dev_preproc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_dev_preproc: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_dev_preproc, out);
    out << "\n";
  }

  // member: dr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr: ";
    rosidl_generator_traits::value_to_yaml(msg.dr, out);
    out << "\n";
  }

  // member: dr_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_raw, out);
    out << "\n";
  }

  // member: dr_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_satclk_corrected, out);
    out << "\n";
  }

  // member: dr_dev_preproc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr_dev_preproc: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_dev_preproc, out);
    out << "\n";
  }

  // member: cp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp: ";
    rosidl_generator_traits::value_to_yaml(msg.cp, out);
    out << "\n";
  }

  // member: cp_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_raw, out);
    out << "\n";
  }

  // member: cp_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp_satclk_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_satclk_corrected, out);
    out << "\n";
  }

  // member: cp_dev_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp_dev_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_dev_measured, out);
    out << "\n";
  }

  // member: locktime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locktime: ";
    rosidl_generator_traits::value_to_yaml(msg.locktime, out);
    out << "\n";
  }

  // member: psr_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_correction, out);
    out << "\n";
  }

  // member: cn0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << "\n";
  }

  // member: cycle_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_slip, out);
    out << "\n";
  }

  // member: psr_residual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_residual, out);
    out << "\n";
  }

  // member: dr_residual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_residual, out);
    out << "\n";
  }

  // member: cp_residual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp_residual: ";
    rosidl_generator_traits::value_to_yaml(msg.cp_residual, out);
    out << "\n";
  }

  // member: elevation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation_angle, out);
    out << "\n";
  }

  // member: azimuth_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth_angle, out);
    out << "\n";
  }

  // member: cmc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmc: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc, out);
    out << "\n";
  }

  // member: drc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drc: ";
    rosidl_generator_traits::value_to_yaml(msg.drc, out);
    out << "\n";
  }

  // member: factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factor: ";
    rosidl_generator_traits::value_to_yaml(msg.factor, out);
    out << "\n";
  }

  // member: dim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dim: ";
    rosidl_generator_traits::value_to_yaml(msg.dim, out);
    out << "\n";
  }

  // member: residuals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residuals.size() == 0) {
      out << "residuals: []\n";
    } else {
      out << "residuals:\n";
      for (auto item : msg.residuals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gaussian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gaussian.size() == 0) {
      out << "gaussian: []\n";
    } else {
      out << "gaussian:\n";
      for (auto item : msg.gaussian) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: label_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.label_dev, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SatLabel & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::SatLabel & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::SatLabel & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::SatLabel>()
{
  return "irt_nav_msgs::msg::SatLabel";
}

template<>
inline const char * name<irt_nav_msgs::msg::SatLabel>()
{
  return "irt_nav_msgs/msg/SatLabel";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::SatLabel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::SatLabel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::SatLabel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__TRAITS_HPP_
