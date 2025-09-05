// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PVAGeodetic & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: wnc
  {
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: phi_geo
  {
    out << "phi_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_geo, out);
    out << ", ";
  }

  // member: phi_geo_var
  {
    out << "phi_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_geo_var, out);
    out << ", ";
  }

  // member: lambda_geo
  {
    out << "lambda_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_geo, out);
    out << ", ";
  }

  // member: lambda_geo_var
  {
    out << "lambda_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_geo_var, out);
    out << ", ";
  }

  // member: h_geo
  {
    out << "h_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.h_geo, out);
    out << ", ";
  }

  // member: h_geo_var
  {
    out << "h_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.h_geo_var, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: vn
  {
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << ", ";
  }

  // member: ve
  {
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << ", ";
  }

  // member: vu
  {
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << ", ";
  }

  // member: trk_gnd
  {
    out << "trk_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.trk_gnd, out);
    out << ", ";
  }

  // member: cog
  {
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: yaw_var
  {
    out << "yaw_var: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_var, out);
    out << ", ";
  }

  // member: pitch_roll
  {
    out << "pitch_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll, out);
    out << ", ";
  }

  // member: pitch_roll_var
  {
    out << "pitch_roll_var: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll_var, out);
    out << ", ";
  }

  // member: rx_clk_bias
  {
    out << "rx_clk_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias, out);
    out << ", ";
  }

  // member: rx_clk_bias_var
  {
    out << "rx_clk_bias_var: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias_var, out);
    out << ", ";
  }

  // member: rx_clk_drift
  {
    out << "rx_clk_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift, out);
    out << ", ";
  }

  // member: rx_clk_drift_var
  {
    out << "rx_clk_drift_var: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift_var, out);
    out << ", ";
  }

  // member: time_system
  {
    out << "time_system: ";
    rosidl_generator_traits::value_to_yaml(msg.time_system, out);
    out << ", ";
  }

  // member: datum
  {
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << ", ";
  }

  // member: nrsv
  {
    out << "nrsv: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv, out);
    out << ", ";
  }

  // member: nrsv_used
  {
    out << "nrsv_used: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used, out);
    out << ", ";
  }

  // member: nrsv_used_with_l1
  {
    out << "nrsv_used_with_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used_with_l1, out);
    out << ", ";
  }

  // member: nrsv_used_multi
  {
    out << "nrsv_used_multi: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used_multi, out);
    out << ", ";
  }

  // member: wa_corr_info
  {
    out << "wa_corr_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wa_corr_info, out);
    out << ", ";
  }

  // member: reference_id
  {
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << ", ";
  }

  // member: mean_corr_age
  {
    out << "mean_corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_corr_age, out);
    out << ", ";
  }

  // member: signal_info
  {
    out << "signal_info: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_info, out);
    out << ", ";
  }

  // member: alert_flag
  {
    out << "alert_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_flag, out);
    out << ", ";
  }

  // member: nr_bases
  {
    out << "nr_bases: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_bases, out);
    out << ", ";
  }

  // member: ppp_info
  {
    out << "ppp_info: ";
    rosidl_generator_traits::value_to_yaml(msg.ppp_info, out);
    out << ", ";
  }

  // member: sol_age
  {
    out << "sol_age: ";
    rosidl_generator_traits::value_to_yaml(msg.sol_age, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: do_not_use_this
  {
    out << "do_not_use_this: ";
    rosidl_generator_traits::value_to_yaml(msg.do_not_use_this, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PVAGeodetic & msg,
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

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: wnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: phi_geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_geo, out);
    out << "\n";
  }

  // member: phi_geo_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_geo_var, out);
    out << "\n";
  }

  // member: lambda_geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_geo, out);
    out << "\n";
  }

  // member: lambda_geo_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_geo_var, out);
    out << "\n";
  }

  // member: h_geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.h_geo, out);
    out << "\n";
  }

  // member: h_geo_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_geo_var: ";
    rosidl_generator_traits::value_to_yaml(msg.h_geo_var, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << "\n";
  }

  // member: ve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << "\n";
  }

  // member: vu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << "\n";
  }

  // member: trk_gnd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trk_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.trk_gnd, out);
    out << "\n";
  }

  // member: cog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
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

  // member: yaw_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_var: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_var, out);
    out << "\n";
  }

  // member: pitch_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll, out);
    out << "\n";
  }

  // member: pitch_roll_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_roll_var: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll_var, out);
    out << "\n";
  }

  // member: rx_clk_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias, out);
    out << "\n";
  }

  // member: rx_clk_bias_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_bias_var: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias_var, out);
    out << "\n";
  }

  // member: rx_clk_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift, out);
    out << "\n";
  }

  // member: rx_clk_drift_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_drift_var: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift_var, out);
    out << "\n";
  }

  // member: time_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_system: ";
    rosidl_generator_traits::value_to_yaml(msg.time_system, out);
    out << "\n";
  }

  // member: datum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << "\n";
  }

  // member: nrsv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nrsv: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv, out);
    out << "\n";
  }

  // member: nrsv_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nrsv_used: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used, out);
    out << "\n";
  }

  // member: nrsv_used_with_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nrsv_used_with_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used_with_l1, out);
    out << "\n";
  }

  // member: nrsv_used_multi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nrsv_used_multi: ";
    rosidl_generator_traits::value_to_yaml(msg.nrsv_used_multi, out);
    out << "\n";
  }

  // member: wa_corr_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wa_corr_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wa_corr_info, out);
    out << "\n";
  }

  // member: reference_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << "\n";
  }

  // member: mean_corr_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_corr_age, out);
    out << "\n";
  }

  // member: signal_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_info: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_info, out);
    out << "\n";
  }

  // member: alert_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_flag, out);
    out << "\n";
  }

  // member: nr_bases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr_bases: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_bases, out);
    out << "\n";
  }

  // member: ppp_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ppp_info: ";
    rosidl_generator_traits::value_to_yaml(msg.ppp_info, out);
    out << "\n";
  }

  // member: sol_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol_age: ";
    rosidl_generator_traits::value_to_yaml(msg.sol_age, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: do_not_use_this
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_not_use_this: ";
    rosidl_generator_traits::value_to_yaml(msg.do_not_use_this, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PVAGeodetic & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::PVAGeodetic & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::PVAGeodetic & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::PVAGeodetic>()
{
  return "irt_nav_msgs::msg::PVAGeodetic";
}

template<>
inline const char * name<irt_nav_msgs::msg::PVAGeodetic>()
{
  return "irt_nav_msgs/msg/PVAGeodetic";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::PVAGeodetic>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::PVAGeodetic>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::PVAGeodetic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__TRAITS_HPP_
