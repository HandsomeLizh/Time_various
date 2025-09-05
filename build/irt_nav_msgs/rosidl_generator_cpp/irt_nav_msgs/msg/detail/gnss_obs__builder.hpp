// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gnss_obs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSObs_gal_corrected
{
public:
  explicit Init_GNSSObs_gal_corrected(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GNSSObs gal_corrected(::irt_nav_msgs::msg::GNSSObs::_gal_corrected_type arg)
  {
    msg_.gal_corrected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_gps_corrected
{
public:
  explicit Init_GNSSObs_gps_corrected(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_gal_corrected gps_corrected(::irt_nav_msgs::msg::GNSSObs::_gps_corrected_type arg)
  {
    msg_.gps_corrected = std::move(arg);
    return Init_GNSSObs_gal_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_ref_sat_svid_gal
{
public:
  explicit Init_GNSSObs_ref_sat_svid_gal(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_gps_corrected ref_sat_svid_gal(::irt_nav_msgs::msg::GNSSObs::_ref_sat_svid_gal_type arg)
  {
    msg_.ref_sat_svid_gal = std::move(arg);
    return Init_GNSSObs_gps_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_ref_sat_svid_gps
{
public:
  explicit Init_GNSSObs_ref_sat_svid_gps(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_ref_sat_svid_gal ref_sat_svid_gps(::irt_nav_msgs::msg::GNSSObs::_ref_sat_svid_gps_type arg)
  {
    msg_.ref_sat_svid_gps = std::move(arg);
    return Init_GNSSObs_ref_sat_svid_gal(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_cn0
{
public:
  explicit Init_GNSSObs_cn0(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_ref_sat_svid_gps cn0(::irt_nav_msgs::msg::GNSSObs::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_GNSSObs_ref_sat_svid_gps(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_locktime
{
public:
  explicit Init_GNSSObs_locktime(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_cn0 locktime(::irt_nav_msgs::msg::GNSSObs::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_GNSSObs_cn0(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_azimuth_angle
{
public:
  explicit Init_GNSSObs_azimuth_angle(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_locktime azimuth_angle(::irt_nav_msgs::msg::GNSSObs::_azimuth_angle_type arg)
  {
    msg_.azimuth_angle = std::move(arg);
    return Init_GNSSObs_locktime(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_elevation_angle
{
public:
  explicit Init_GNSSObs_elevation_angle(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_azimuth_angle elevation_angle(::irt_nav_msgs::msg::GNSSObs::_elevation_angle_type arg)
  {
    msg_.elevation_angle = std::move(arg);
    return Init_GNSSObs_azimuth_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_carrierphase_var_measured
{
public:
  explicit Init_GNSSObs_carrierphase_var_measured(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_elevation_angle carrierphase_var_measured(::irt_nav_msgs::msg::GNSSObs::_carrierphase_var_measured_type arg)
  {
    msg_.carrierphase_var_measured = std::move(arg);
    return Init_GNSSObs_elevation_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_carrierphase_satclk_corrected
{
public:
  explicit Init_GNSSObs_carrierphase_satclk_corrected(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_carrierphase_var_measured carrierphase_satclk_corrected(::irt_nav_msgs::msg::GNSSObs::_carrierphase_satclk_corrected_type arg)
  {
    msg_.carrierphase_satclk_corrected = std::move(arg);
    return Init_GNSSObs_carrierphase_var_measured(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_carrierphase_raw
{
public:
  explicit Init_GNSSObs_carrierphase_raw(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_carrierphase_satclk_corrected carrierphase_raw(::irt_nav_msgs::msg::GNSSObs::_carrierphase_raw_type arg)
  {
    msg_.carrierphase_raw = std::move(arg);
    return Init_GNSSObs_carrierphase_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_carrierphase
{
public:
  explicit Init_GNSSObs_carrierphase(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_carrierphase_raw carrierphase(::irt_nav_msgs::msg::GNSSObs::_carrierphase_type arg)
  {
    msg_.carrierphase = std::move(arg);
    return Init_GNSSObs_carrierphase_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_deltarange_var
{
public:
  explicit Init_GNSSObs_deltarange_var(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_carrierphase deltarange_var(::irt_nav_msgs::msg::GNSSObs::_deltarange_var_type arg)
  {
    msg_.deltarange_var = std::move(arg);
    return Init_GNSSObs_carrierphase(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_pseudorange_var_measured
{
public:
  explicit Init_GNSSObs_pseudorange_var_measured(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_deltarange_var pseudorange_var_measured(::irt_nav_msgs::msg::GNSSObs::_pseudorange_var_measured_type arg)
  {
    msg_.pseudorange_var_measured = std::move(arg);
    return Init_GNSSObs_deltarange_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_pseudorange_var
{
public:
  explicit Init_GNSSObs_pseudorange_var(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_pseudorange_var_measured pseudorange_var(::irt_nav_msgs::msg::GNSSObs::_pseudorange_var_type arg)
  {
    msg_.pseudorange_var = std::move(arg);
    return Init_GNSSObs_pseudorange_var_measured(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_deltarange_satclk_corrected
{
public:
  explicit Init_GNSSObs_deltarange_satclk_corrected(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_pseudorange_var deltarange_satclk_corrected(::irt_nav_msgs::msg::GNSSObs::_deltarange_satclk_corrected_type arg)
  {
    msg_.deltarange_satclk_corrected = std::move(arg);
    return Init_GNSSObs_pseudorange_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_deltarange_raw
{
public:
  explicit Init_GNSSObs_deltarange_raw(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_deltarange_satclk_corrected deltarange_raw(::irt_nav_msgs::msg::GNSSObs::_deltarange_raw_type arg)
  {
    msg_.deltarange_raw = std::move(arg);
    return Init_GNSSObs_deltarange_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_deltarange
{
public:
  explicit Init_GNSSObs_deltarange(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_deltarange_raw deltarange(::irt_nav_msgs::msg::GNSSObs::_deltarange_type arg)
  {
    msg_.deltarange = std::move(arg);
    return Init_GNSSObs_deltarange_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_pseudorange_satclk_corrected
{
public:
  explicit Init_GNSSObs_pseudorange_satclk_corrected(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_deltarange pseudorange_satclk_corrected(::irt_nav_msgs::msg::GNSSObs::_pseudorange_satclk_corrected_type arg)
  {
    msg_.pseudorange_satclk_corrected = std::move(arg);
    return Init_GNSSObs_deltarange(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_pseudorange_raw
{
public:
  explicit Init_GNSSObs_pseudorange_raw(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_pseudorange_satclk_corrected pseudorange_raw(::irt_nav_msgs::msg::GNSSObs::_pseudorange_raw_type arg)
  {
    msg_.pseudorange_raw = std::move(arg);
    return Init_GNSSObs_pseudorange_satclk_corrected(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_pseudorange
{
public:
  explicit Init_GNSSObs_pseudorange(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_pseudorange_raw pseudorange(::irt_nav_msgs::msg::GNSSObs::_pseudorange_type arg)
  {
    msg_.pseudorange = std::move(arg);
    return Init_GNSSObs_pseudorange_raw(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_svid_carrier_used
{
public:
  explicit Init_GNSSObs_svid_carrier_used(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_pseudorange svid_carrier_used(::irt_nav_msgs::msg::GNSSObs::_svid_carrier_used_type arg)
  {
    msg_.svid_carrier_used = std::move(arg);
    return Init_GNSSObs_pseudorange(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_prn
{
public:
  explicit Init_GNSSObs_prn(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_svid_carrier_used prn(::irt_nav_msgs::msg::GNSSObs::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_GNSSObs_svid_carrier_used(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_base_pos
{
public:
  explicit Init_GNSSObs_base_pos(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_prn base_pos(::irt_nav_msgs::msg::GNSSObs::_base_pos_type arg)
  {
    msg_.base_pos = std::move(arg);
    return Init_GNSSObs_prn(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_satelite_vec
{
public:
  explicit Init_GNSSObs_satelite_vec(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_base_pos satelite_vec(::irt_nav_msgs::msg::GNSSObs::_satelite_vec_type arg)
  {
    msg_.satelite_vec = std::move(arg);
    return Init_GNSSObs_base_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_satelite_pos
{
public:
  explicit Init_GNSSObs_satelite_pos(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_satelite_vec satelite_pos(::irt_nav_msgs::msg::GNSSObs::_satelite_pos_type arg)
  {
    msg_.satelite_pos = std::move(arg);
    return Init_GNSSObs_satelite_vec(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_dd_idx_sync_user
{
public:
  explicit Init_GNSSObs_dd_idx_sync_user(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_satelite_pos dd_idx_sync_user(::irt_nav_msgs::msg::GNSSObs::_dd_idx_sync_user_type arg)
  {
    msg_.dd_idx_sync_user = std::move(arg);
    return Init_GNSSObs_satelite_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_dd_idx_sync_ref
{
public:
  explicit Init_GNSSObs_dd_idx_sync_ref(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_dd_idx_sync_user dd_idx_sync_ref(::irt_nav_msgs::msg::GNSSObs::_dd_idx_sync_ref_type arg)
  {
    msg_.dd_idx_sync_ref = std::move(arg);
    return Init_GNSSObs_dd_idx_sync_user(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_integrity_flag
{
public:
  explicit Init_GNSSObs_integrity_flag(::irt_nav_msgs::msg::GNSSObs & msg)
  : msg_(msg)
  {}
  Init_GNSSObs_dd_idx_sync_ref integrity_flag(::irt_nav_msgs::msg::GNSSObs::_integrity_flag_type arg)
  {
    msg_.integrity_flag = std::move(arg);
    return Init_GNSSObs_dd_idx_sync_ref(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

class Init_GNSSObs_time_receive
{
public:
  Init_GNSSObs_time_receive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSObs_integrity_flag time_receive(::irt_nav_msgs::msg::GNSSObs::_time_receive_type arg)
  {
    msg_.time_receive = std::move(arg);
    return Init_GNSSObs_integrity_flag(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GNSSObs>()
{
  return irt_nav_msgs::msg::builder::Init_GNSSObs_time_receive();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__BUILDER_HPP_
