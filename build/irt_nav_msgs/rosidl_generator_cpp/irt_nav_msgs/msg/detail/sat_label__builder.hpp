// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/sat_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SatLabel_msg
{
public:
  explicit Init_SatLabel_msg(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SatLabel msg(::irt_nav_msgs::msg::SatLabel::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_label_dev
{
public:
  explicit Init_SatLabel_label_dev(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_msg label_dev(::irt_nav_msgs::msg::SatLabel::_label_dev_type arg)
  {
    msg_.label_dev = std::move(arg);
    return Init_SatLabel_msg(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_label
{
public:
  explicit Init_SatLabel_label(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_label_dev label(::irt_nav_msgs::msg::SatLabel::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_SatLabel_label_dev(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_data
{
public:
  explicit Init_SatLabel_data(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_label data(::irt_nav_msgs::msg::SatLabel::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SatLabel_label(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_weight
{
public:
  explicit Init_SatLabel_weight(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_data weight(::irt_nav_msgs::msg::SatLabel::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_SatLabel_data(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_gaussian
{
public:
  explicit Init_SatLabel_gaussian(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_weight gaussian(::irt_nav_msgs::msg::SatLabel::_gaussian_type arg)
  {
    msg_.gaussian = std::move(arg);
    return Init_SatLabel_weight(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_residuals
{
public:
  explicit Init_SatLabel_residuals(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_gaussian residuals(::irt_nav_msgs::msg::SatLabel::_residuals_type arg)
  {
    msg_.residuals = std::move(arg);
    return Init_SatLabel_gaussian(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dim
{
public:
  explicit Init_SatLabel_dim(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_residuals dim(::irt_nav_msgs::msg::SatLabel::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_SatLabel_residuals(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_factor
{
public:
  explicit Init_SatLabel_factor(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dim factor(::irt_nav_msgs::msg::SatLabel::_factor_type arg)
  {
    msg_.factor = std::move(arg);
    return Init_SatLabel_dim(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_drc
{
public:
  explicit Init_SatLabel_drc(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_factor drc(::irt_nav_msgs::msg::SatLabel::_drc_type arg)
  {
    msg_.drc = std::move(arg);
    return Init_SatLabel_factor(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cmc
{
public:
  explicit Init_SatLabel_cmc(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_drc cmc(::irt_nav_msgs::msg::SatLabel::_cmc_type arg)
  {
    msg_.cmc = std::move(arg);
    return Init_SatLabel_drc(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_azimuth_angle
{
public:
  explicit Init_SatLabel_azimuth_angle(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cmc azimuth_angle(::irt_nav_msgs::msg::SatLabel::_azimuth_angle_type arg)
  {
    msg_.azimuth_angle = std::move(arg);
    return Init_SatLabel_cmc(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_elevation_angle
{
public:
  explicit Init_SatLabel_elevation_angle(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_azimuth_angle elevation_angle(::irt_nav_msgs::msg::SatLabel::_elevation_angle_type arg)
  {
    msg_.elevation_angle = std::move(arg);
    return Init_SatLabel_azimuth_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cp_residual
{
public:
  explicit Init_SatLabel_cp_residual(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_elevation_angle cp_residual(::irt_nav_msgs::msg::SatLabel::_cp_residual_type arg)
  {
    msg_.cp_residual = std::move(arg);
    return Init_SatLabel_elevation_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dr_residual
{
public:
  explicit Init_SatLabel_dr_residual(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cp_residual dr_residual(::irt_nav_msgs::msg::SatLabel::_dr_residual_type arg)
  {
    msg_.dr_residual = std::move(arg);
    return Init_SatLabel_cp_residual(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_residual
{
public:
  explicit Init_SatLabel_psr_residual(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dr_residual psr_residual(::irt_nav_msgs::msg::SatLabel::_psr_residual_type arg)
  {
    msg_.psr_residual = std::move(arg);
    return Init_SatLabel_dr_residual(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cycle_slip
{
public:
  explicit Init_SatLabel_cycle_slip(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_residual cycle_slip(::irt_nav_msgs::msg::SatLabel::_cycle_slip_type arg)
  {
    msg_.cycle_slip = std::move(arg);
    return Init_SatLabel_psr_residual(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cn0
{
public:
  explicit Init_SatLabel_cn0(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cycle_slip cn0(::irt_nav_msgs::msg::SatLabel::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_SatLabel_cycle_slip(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_correction
{
public:
  explicit Init_SatLabel_psr_correction(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cn0 psr_correction(::irt_nav_msgs::msg::SatLabel::_psr_correction_type arg)
  {
    msg_.psr_correction = std::move(arg);
    return Init_SatLabel_cn0(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_locktime
{
public:
  explicit Init_SatLabel_locktime(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_correction locktime(::irt_nav_msgs::msg::SatLabel::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_SatLabel_psr_correction(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cp_dev_measured
{
public:
  explicit Init_SatLabel_cp_dev_measured(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_locktime cp_dev_measured(::irt_nav_msgs::msg::SatLabel::_cp_dev_measured_type arg)
  {
    msg_.cp_dev_measured = std::move(arg);
    return Init_SatLabel_locktime(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cp_satclk_corrected
{
public:
  explicit Init_SatLabel_cp_satclk_corrected(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cp_dev_measured cp_satclk_corrected(::irt_nav_msgs::msg::SatLabel::_cp_satclk_corrected_type arg)
  {
    msg_.cp_satclk_corrected = std::move(arg);
    return Init_SatLabel_cp_dev_measured(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cp_raw
{
public:
  explicit Init_SatLabel_cp_raw(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cp_satclk_corrected cp_raw(::irt_nav_msgs::msg::SatLabel::_cp_raw_type arg)
  {
    msg_.cp_raw = std::move(arg);
    return Init_SatLabel_cp_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_cp
{
public:
  explicit Init_SatLabel_cp(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cp_raw cp(::irt_nav_msgs::msg::SatLabel::_cp_type arg)
  {
    msg_.cp = std::move(arg);
    return Init_SatLabel_cp_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dr_dev_preproc
{
public:
  explicit Init_SatLabel_dr_dev_preproc(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_cp dr_dev_preproc(::irt_nav_msgs::msg::SatLabel::_dr_dev_preproc_type arg)
  {
    msg_.dr_dev_preproc = std::move(arg);
    return Init_SatLabel_cp(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dr_satclk_corrected
{
public:
  explicit Init_SatLabel_dr_satclk_corrected(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dr_dev_preproc dr_satclk_corrected(::irt_nav_msgs::msg::SatLabel::_dr_satclk_corrected_type arg)
  {
    msg_.dr_satclk_corrected = std::move(arg);
    return Init_SatLabel_dr_dev_preproc(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dr_raw
{
public:
  explicit Init_SatLabel_dr_raw(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dr_satclk_corrected dr_raw(::irt_nav_msgs::msg::SatLabel::_dr_raw_type arg)
  {
    msg_.dr_raw = std::move(arg);
    return Init_SatLabel_dr_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_dr
{
public:
  explicit Init_SatLabel_dr(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dr_raw dr(::irt_nav_msgs::msg::SatLabel::_dr_type arg)
  {
    msg_.dr = std::move(arg);
    return Init_SatLabel_dr_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_dev_preproc
{
public:
  explicit Init_SatLabel_psr_dev_preproc(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_dr psr_dev_preproc(::irt_nav_msgs::msg::SatLabel::_psr_dev_preproc_type arg)
  {
    msg_.psr_dev_preproc = std::move(arg);
    return Init_SatLabel_dr(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_dev_measured
{
public:
  explicit Init_SatLabel_psr_dev_measured(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_dev_preproc psr_dev_measured(::irt_nav_msgs::msg::SatLabel::_psr_dev_measured_type arg)
  {
    msg_.psr_dev_measured = std::move(arg);
    return Init_SatLabel_psr_dev_preproc(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_satclk_corrected
{
public:
  explicit Init_SatLabel_psr_satclk_corrected(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_dev_measured psr_satclk_corrected(::irt_nav_msgs::msg::SatLabel::_psr_satclk_corrected_type arg)
  {
    msg_.psr_satclk_corrected = std::move(arg);
    return Init_SatLabel_psr_dev_measured(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr_raw
{
public:
  explicit Init_SatLabel_psr_raw(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_satclk_corrected psr_raw(::irt_nav_msgs::msg::SatLabel::_psr_raw_type arg)
  {
    msg_.psr_raw = std::move(arg);
    return Init_SatLabel_psr_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_psr
{
public:
  explicit Init_SatLabel_psr(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr_raw psr(::irt_nav_msgs::msg::SatLabel::_psr_type arg)
  {
    msg_.psr = std::move(arg);
    return Init_SatLabel_psr_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_sat_vel
{
public:
  explicit Init_SatLabel_sat_vel(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_psr sat_vel(::irt_nav_msgs::msg::SatLabel::_sat_vel_type arg)
  {
    msg_.sat_vel = std::move(arg);
    return Init_SatLabel_psr(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_sat_pos
{
public:
  explicit Init_SatLabel_sat_pos(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_sat_vel sat_pos(::irt_nav_msgs::msg::SatLabel::_sat_pos_type arg)
  {
    msg_.sat_pos = std::move(arg);
    return Init_SatLabel_sat_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_prn
{
public:
  explicit Init_SatLabel_prn(::irt_nav_msgs::msg::SatLabel & msg)
  : msg_(msg)
  {}
  Init_SatLabel_sat_pos prn(::irt_nav_msgs::msg::SatLabel::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_SatLabel_sat_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

class Init_SatLabel_integrity_flag
{
public:
  Init_SatLabel_integrity_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SatLabel_prn integrity_flag(::irt_nav_msgs::msg::SatLabel::_integrity_flag_type arg)
  {
    msg_.integrity_flag = std::move(arg);
    return Init_SatLabel_prn(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatLabel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SatLabel>()
{
  return irt_nav_msgs::msg::builder::Init_SatLabel_integrity_flag();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__BUILDER_HPP_
