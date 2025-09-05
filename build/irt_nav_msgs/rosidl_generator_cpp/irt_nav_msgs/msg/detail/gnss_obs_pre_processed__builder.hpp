// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSObsPreProcessed_has_rtk
{
public:
  explicit Init_GNSSObsPreProcessed_has_rtk(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GNSSObsPreProcessed has_rtk(::irt_nav_msgs::msg::GNSSObsPreProcessed::_has_rtk_type arg)
  {
    msg_.has_rtk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_has_rtcm_dd
{
public:
  explicit Init_GNSSObsPreProcessed_has_rtcm_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_has_rtk has_rtcm_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed::_has_rtcm_dd_type arg)
  {
    msg_.has_rtcm_dd = std::move(arg);
    return Init_GNSSObsPreProcessed_has_rtk(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_has_dualantenna_dd
{
public:
  explicit Init_GNSSObsPreProcessed_has_dualantenna_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_has_rtcm_dd has_dualantenna_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed::_has_dualantenna_dd_type arg)
  {
    msg_.has_dualantenna_dd = std::move(arg);
    return Init_GNSSObsPreProcessed_has_rtcm_dd(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_has_dualantenna
{
public:
  explicit Init_GNSSObsPreProcessed_has_dualantenna(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_has_dualantenna_dd has_dualantenna(::irt_nav_msgs::msg::GNSSObsPreProcessed::_has_dualantenna_type arg)
  {
    msg_.has_dualantenna = std::move(arg);
    return Init_GNSSObsPreProcessed_has_dualantenna_dd(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_has_time_dd
{
public:
  explicit Init_GNSSObsPreProcessed_has_time_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_has_dualantenna has_time_dd(::irt_nav_msgs::msg::GNSSObsPreProcessed::_has_time_dd_type arg)
  {
    msg_.has_time_dd = std::move(arg);
    return Init_GNSSObsPreProcessed_has_dualantenna(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_faulty_prn_aux
{
public:
  explicit Init_GNSSObsPreProcessed_faulty_prn_aux(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_has_time_dd faulty_prn_aux(::irt_nav_msgs::msg::GNSSObsPreProcessed::_faulty_prn_aux_type arg)
  {
    msg_.faulty_prn_aux = std::move(arg);
    return Init_GNSSObsPreProcessed_has_time_dd(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_faulty_prn_main
{
public:
  explicit Init_GNSSObsPreProcessed_faulty_prn_main(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_faulty_prn_aux faulty_prn_main(::irt_nav_msgs::msg::GNSSObsPreProcessed::_faulty_prn_main_type arg)
  {
    msg_.faulty_prn_main = std::move(arg);
    return Init_GNSSObsPreProcessed_faulty_prn_aux(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_gnss_corrections
{
public:
  explicit Init_GNSSObsPreProcessed_gnss_corrections(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_faulty_prn_main gnss_corrections(::irt_nav_msgs::msg::GNSSObsPreProcessed::_gnss_corrections_type arg)
  {
    msg_.gnss_corrections = std::move(arg);
    return Init_GNSSObsPreProcessed_faulty_prn_main(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_dd_gnss_obs_rtcm
{
public:
  explicit Init_GNSSObsPreProcessed_dd_gnss_obs_rtcm(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_gnss_corrections dd_gnss_obs_rtcm(::irt_nav_msgs::msg::GNSSObsPreProcessed::_dd_gnss_obs_rtcm_type arg)
  {
    msg_.dd_gnss_obs_rtcm = std::move(arg);
    return Init_GNSSObsPreProcessed_gnss_corrections(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_dd_gnss_obs_time
{
public:
  explicit Init_GNSSObsPreProcessed_dd_gnss_obs_time(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_dd_gnss_obs_rtcm dd_gnss_obs_time(::irt_nav_msgs::msg::GNSSObsPreProcessed::_dd_gnss_obs_time_type arg)
  {
    msg_.dd_gnss_obs_time = std::move(arg);
    return Init_GNSSObsPreProcessed_dd_gnss_obs_rtcm(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_dd_gnss_obs_dualantenna
{
public:
  explicit Init_GNSSObsPreProcessed_dd_gnss_obs_dualantenna(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_dd_gnss_obs_time dd_gnss_obs_dualantenna(::irt_nav_msgs::msg::GNSSObsPreProcessed::_dd_gnss_obs_dualantenna_type arg)
  {
    msg_.dd_gnss_obs_dualantenna = std::move(arg);
    return Init_GNSSObsPreProcessed_dd_gnss_obs_time(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_gnss_obs_ant_aux
{
public:
  explicit Init_GNSSObsPreProcessed_gnss_obs_ant_aux(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_dd_gnss_obs_dualantenna gnss_obs_ant_aux(::irt_nav_msgs::msg::GNSSObsPreProcessed::_gnss_obs_ant_aux_type arg)
  {
    msg_.gnss_obs_ant_aux = std::move(arg);
    return Init_GNSSObsPreProcessed_dd_gnss_obs_dualantenna(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_gnss_obs_ant_main
{
public:
  explicit Init_GNSSObsPreProcessed_gnss_obs_ant_main(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_gnss_obs_ant_aux gnss_obs_ant_main(::irt_nav_msgs::msg::GNSSObsPreProcessed::_gnss_obs_ant_main_type arg)
  {
    msg_.gnss_obs_ant_main = std::move(arg);
    return Init_GNSSObsPreProcessed_gnss_obs_ant_aux(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_is_ggto_valid
{
public:
  explicit Init_GNSSObsPreProcessed_is_ggto_valid(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_gnss_obs_ant_main is_ggto_valid(::irt_nav_msgs::msg::GNSSObsPreProcessed::_is_ggto_valid_type arg)
  {
    msg_.is_ggto_valid = std::move(arg);
    return Init_GNSSObsPreProcessed_gnss_obs_ant_main(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_time_offset_gal_gps
{
public:
  explicit Init_GNSSObsPreProcessed_time_offset_gal_gps(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_is_ggto_valid time_offset_gal_gps(::irt_nav_msgs::msg::GNSSObsPreProcessed::_time_offset_gal_gps_type arg)
  {
    msg_.time_offset_gal_gps = std::move(arg);
    return Init_GNSSObsPreProcessed_is_ggto_valid(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_counter
{
public:
  explicit Init_GNSSObsPreProcessed_counter(::irt_nav_msgs::msg::GNSSObsPreProcessed & msg)
  : msg_(msg)
  {}
  Init_GNSSObsPreProcessed_time_offset_gal_gps counter(::irt_nav_msgs::msg::GNSSObsPreProcessed::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_GNSSObsPreProcessed_time_offset_gal_gps(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

class Init_GNSSObsPreProcessed_header
{
public:
  Init_GNSSObsPreProcessed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSObsPreProcessed_counter header(::irt_nav_msgs::msg::GNSSObsPreProcessed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GNSSObsPreProcessed_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSObsPreProcessed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GNSSObsPreProcessed>()
{
  return irt_nav_msgs::msg::builder::Init_GNSSObsPreProcessed_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__BUILDER_HPP_
