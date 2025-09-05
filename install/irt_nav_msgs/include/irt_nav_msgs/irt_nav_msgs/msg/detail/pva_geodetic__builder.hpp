// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PVAGeodetic_do_not_use_this
{
public:
  explicit Init_PVAGeodetic_do_not_use_this(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::PVAGeodetic do_not_use_this(::irt_nav_msgs::msg::PVAGeodetic::_do_not_use_this_type arg)
  {
    msg_.do_not_use_this = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_diff_age
{
public:
  explicit Init_PVAGeodetic_diff_age(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_do_not_use_this diff_age(::irt_nav_msgs::msg::PVAGeodetic::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_PVAGeodetic_do_not_use_this(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_sol_age
{
public:
  explicit Init_PVAGeodetic_sol_age(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_diff_age sol_age(::irt_nav_msgs::msg::PVAGeodetic::_sol_age_type arg)
  {
    msg_.sol_age = std::move(arg);
    return Init_PVAGeodetic_diff_age(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_ppp_info
{
public:
  explicit Init_PVAGeodetic_ppp_info(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_sol_age ppp_info(::irt_nav_msgs::msg::PVAGeodetic::_ppp_info_type arg)
  {
    msg_.ppp_info = std::move(arg);
    return Init_PVAGeodetic_sol_age(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_nr_bases
{
public:
  explicit Init_PVAGeodetic_nr_bases(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_ppp_info nr_bases(::irt_nav_msgs::msg::PVAGeodetic::_nr_bases_type arg)
  {
    msg_.nr_bases = std::move(arg);
    return Init_PVAGeodetic_ppp_info(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_alert_flag
{
public:
  explicit Init_PVAGeodetic_alert_flag(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_nr_bases alert_flag(::irt_nav_msgs::msg::PVAGeodetic::_alert_flag_type arg)
  {
    msg_.alert_flag = std::move(arg);
    return Init_PVAGeodetic_nr_bases(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_signal_info
{
public:
  explicit Init_PVAGeodetic_signal_info(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_alert_flag signal_info(::irt_nav_msgs::msg::PVAGeodetic::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return Init_PVAGeodetic_alert_flag(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_mean_corr_age
{
public:
  explicit Init_PVAGeodetic_mean_corr_age(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_signal_info mean_corr_age(::irt_nav_msgs::msg::PVAGeodetic::_mean_corr_age_type arg)
  {
    msg_.mean_corr_age = std::move(arg);
    return Init_PVAGeodetic_signal_info(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_reference_id
{
public:
  explicit Init_PVAGeodetic_reference_id(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_mean_corr_age reference_id(::irt_nav_msgs::msg::PVAGeodetic::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_PVAGeodetic_mean_corr_age(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_wa_corr_info
{
public:
  explicit Init_PVAGeodetic_wa_corr_info(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_reference_id wa_corr_info(::irt_nav_msgs::msg::PVAGeodetic::_wa_corr_info_type arg)
  {
    msg_.wa_corr_info = std::move(arg);
    return Init_PVAGeodetic_reference_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_nrsv_used_multi
{
public:
  explicit Init_PVAGeodetic_nrsv_used_multi(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_wa_corr_info nrsv_used_multi(::irt_nav_msgs::msg::PVAGeodetic::_nrsv_used_multi_type arg)
  {
    msg_.nrsv_used_multi = std::move(arg);
    return Init_PVAGeodetic_wa_corr_info(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_nrsv_used_with_l1
{
public:
  explicit Init_PVAGeodetic_nrsv_used_with_l1(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_nrsv_used_multi nrsv_used_with_l1(::irt_nav_msgs::msg::PVAGeodetic::_nrsv_used_with_l1_type arg)
  {
    msg_.nrsv_used_with_l1 = std::move(arg);
    return Init_PVAGeodetic_nrsv_used_multi(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_nrsv_used
{
public:
  explicit Init_PVAGeodetic_nrsv_used(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_nrsv_used_with_l1 nrsv_used(::irt_nav_msgs::msg::PVAGeodetic::_nrsv_used_type arg)
  {
    msg_.nrsv_used = std::move(arg);
    return Init_PVAGeodetic_nrsv_used_with_l1(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_nrsv
{
public:
  explicit Init_PVAGeodetic_nrsv(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_nrsv_used nrsv(::irt_nav_msgs::msg::PVAGeodetic::_nrsv_type arg)
  {
    msg_.nrsv = std::move(arg);
    return Init_PVAGeodetic_nrsv_used(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_datum
{
public:
  explicit Init_PVAGeodetic_datum(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_nrsv datum(::irt_nav_msgs::msg::PVAGeodetic::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_PVAGeodetic_nrsv(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_time_system
{
public:
  explicit Init_PVAGeodetic_time_system(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_datum time_system(::irt_nav_msgs::msg::PVAGeodetic::_time_system_type arg)
  {
    msg_.time_system = std::move(arg);
    return Init_PVAGeodetic_datum(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_rx_clk_drift_var
{
public:
  explicit Init_PVAGeodetic_rx_clk_drift_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_time_system rx_clk_drift_var(::irt_nav_msgs::msg::PVAGeodetic::_rx_clk_drift_var_type arg)
  {
    msg_.rx_clk_drift_var = std::move(arg);
    return Init_PVAGeodetic_time_system(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_rx_clk_drift
{
public:
  explicit Init_PVAGeodetic_rx_clk_drift(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_rx_clk_drift_var rx_clk_drift(::irt_nav_msgs::msg::PVAGeodetic::_rx_clk_drift_type arg)
  {
    msg_.rx_clk_drift = std::move(arg);
    return Init_PVAGeodetic_rx_clk_drift_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_rx_clk_bias_var
{
public:
  explicit Init_PVAGeodetic_rx_clk_bias_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_rx_clk_drift rx_clk_bias_var(::irt_nav_msgs::msg::PVAGeodetic::_rx_clk_bias_var_type arg)
  {
    msg_.rx_clk_bias_var = std::move(arg);
    return Init_PVAGeodetic_rx_clk_drift(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_rx_clk_bias
{
public:
  explicit Init_PVAGeodetic_rx_clk_bias(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_rx_clk_bias_var rx_clk_bias(::irt_nav_msgs::msg::PVAGeodetic::_rx_clk_bias_type arg)
  {
    msg_.rx_clk_bias = std::move(arg);
    return Init_PVAGeodetic_rx_clk_bias_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_pitch_roll_var
{
public:
  explicit Init_PVAGeodetic_pitch_roll_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_rx_clk_bias pitch_roll_var(::irt_nav_msgs::msg::PVAGeodetic::_pitch_roll_var_type arg)
  {
    msg_.pitch_roll_var = std::move(arg);
    return Init_PVAGeodetic_rx_clk_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_pitch_roll
{
public:
  explicit Init_PVAGeodetic_pitch_roll(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_pitch_roll_var pitch_roll(::irt_nav_msgs::msg::PVAGeodetic::_pitch_roll_type arg)
  {
    msg_.pitch_roll = std::move(arg);
    return Init_PVAGeodetic_pitch_roll_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_yaw_var
{
public:
  explicit Init_PVAGeodetic_yaw_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_pitch_roll yaw_var(::irt_nav_msgs::msg::PVAGeodetic::_yaw_var_type arg)
  {
    msg_.yaw_var = std::move(arg);
    return Init_PVAGeodetic_pitch_roll(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_yaw
{
public:
  explicit Init_PVAGeodetic_yaw(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_yaw_var yaw(::irt_nav_msgs::msg::PVAGeodetic::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PVAGeodetic_yaw_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_cog
{
public:
  explicit Init_PVAGeodetic_cog(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_yaw cog(::irt_nav_msgs::msg::PVAGeodetic::_cog_type arg)
  {
    msg_.cog = std::move(arg);
    return Init_PVAGeodetic_yaw(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_trk_gnd
{
public:
  explicit Init_PVAGeodetic_trk_gnd(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_cog trk_gnd(::irt_nav_msgs::msg::PVAGeodetic::_trk_gnd_type arg)
  {
    msg_.trk_gnd = std::move(arg);
    return Init_PVAGeodetic_cog(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_vu
{
public:
  explicit Init_PVAGeodetic_vu(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_trk_gnd vu(::irt_nav_msgs::msg::PVAGeodetic::_vu_type arg)
  {
    msg_.vu = std::move(arg);
    return Init_PVAGeodetic_trk_gnd(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_ve
{
public:
  explicit Init_PVAGeodetic_ve(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_vu ve(::irt_nav_msgs::msg::PVAGeodetic::_ve_type arg)
  {
    msg_.ve = std::move(arg);
    return Init_PVAGeodetic_vu(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_vn
{
public:
  explicit Init_PVAGeodetic_vn(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_ve vn(::irt_nav_msgs::msg::PVAGeodetic::_vn_type arg)
  {
    msg_.vn = std::move(arg);
    return Init_PVAGeodetic_ve(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_undulation
{
public:
  explicit Init_PVAGeodetic_undulation(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_vn undulation(::irt_nav_msgs::msg::PVAGeodetic::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_PVAGeodetic_vn(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_h_geo_var
{
public:
  explicit Init_PVAGeodetic_h_geo_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_undulation h_geo_var(::irt_nav_msgs::msg::PVAGeodetic::_h_geo_var_type arg)
  {
    msg_.h_geo_var = std::move(arg);
    return Init_PVAGeodetic_undulation(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_h_geo
{
public:
  explicit Init_PVAGeodetic_h_geo(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_h_geo_var h_geo(::irt_nav_msgs::msg::PVAGeodetic::_h_geo_type arg)
  {
    msg_.h_geo = std::move(arg);
    return Init_PVAGeodetic_h_geo_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_lambda_geo_var
{
public:
  explicit Init_PVAGeodetic_lambda_geo_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_h_geo lambda_geo_var(::irt_nav_msgs::msg::PVAGeodetic::_lambda_geo_var_type arg)
  {
    msg_.lambda_geo_var = std::move(arg);
    return Init_PVAGeodetic_h_geo(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_lambda_geo
{
public:
  explicit Init_PVAGeodetic_lambda_geo(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_lambda_geo_var lambda_geo(::irt_nav_msgs::msg::PVAGeodetic::_lambda_geo_type arg)
  {
    msg_.lambda_geo = std::move(arg);
    return Init_PVAGeodetic_lambda_geo_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_phi_geo_var
{
public:
  explicit Init_PVAGeodetic_phi_geo_var(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_lambda_geo phi_geo_var(::irt_nav_msgs::msg::PVAGeodetic::_phi_geo_var_type arg)
  {
    msg_.phi_geo_var = std::move(arg);
    return Init_PVAGeodetic_lambda_geo(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_phi_geo
{
public:
  explicit Init_PVAGeodetic_phi_geo(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_phi_geo_var phi_geo(::irt_nav_msgs::msg::PVAGeodetic::_phi_geo_type arg)
  {
    msg_.phi_geo = std::move(arg);
    return Init_PVAGeodetic_phi_geo_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_error
{
public:
  explicit Init_PVAGeodetic_error(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_phi_geo error(::irt_nav_msgs::msg::PVAGeodetic::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PVAGeodetic_phi_geo(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_mode
{
public:
  explicit Init_PVAGeodetic_mode(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_error mode(::irt_nav_msgs::msg::PVAGeodetic::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PVAGeodetic_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_wnc
{
public:
  explicit Init_PVAGeodetic_wnc(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_mode wnc(::irt_nav_msgs::msg::PVAGeodetic::_wnc_type arg)
  {
    msg_.wnc = std::move(arg);
    return Init_PVAGeodetic_mode(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_tow
{
public:
  explicit Init_PVAGeodetic_tow(::irt_nav_msgs::msg::PVAGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVAGeodetic_wnc tow(::irt_nav_msgs::msg::PVAGeodetic::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_PVAGeodetic_wnc(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

class Init_PVAGeodetic_header
{
public:
  Init_PVAGeodetic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PVAGeodetic_tow header(::irt_nav_msgs::msg::PVAGeodetic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PVAGeodetic_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVAGeodetic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::PVAGeodetic>()
{
  return irt_nav_msgs::msg::builder::Init_PVAGeodetic_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__BUILDER_HPP_
