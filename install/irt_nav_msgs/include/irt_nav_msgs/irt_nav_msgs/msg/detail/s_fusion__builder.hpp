// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/s_fusion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SFusion_pva_geodetic
{
public:
  explicit Init_SFusion_pva_geodetic(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SFusion pva_geodetic(::irt_nav_msgs::msg::SFusion::_pva_geodetic_type arg)
  {
    msg_.pva_geodetic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_filter_inited
{
public:
  explicit Init_SFusion_filter_inited(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_pva_geodetic filter_inited(::irt_nav_msgs::msg::SFusion::_filter_inited_type arg)
  {
    msg_.filter_inited = std::move(arg);
    return Init_SFusion_pva_geodetic(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_filter_inited_success
{
public:
  explicit Init_SFusion_filter_inited_success(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_filter_inited filter_inited_success(::irt_nav_msgs::msg::SFusion::_filter_inited_success_type arg)
  {
    msg_.filter_inited_success = std::move(arg);
    return Init_SFusion_filter_inited(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_rtcm_counter
{
public:
  explicit Init_SFusion_rtcm_counter(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_filter_inited_success rtcm_counter(::irt_nav_msgs::msg::SFusion::_rtcm_counter_type arg)
  {
    msg_.rtcm_counter = std::move(arg);
    return Init_SFusion_filter_inited_success(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_num_used_stat_ant2
{
public:
  explicit Init_SFusion_num_used_stat_ant2(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_rtcm_counter num_used_stat_ant2(::irt_nav_msgs::msg::SFusion::_num_used_stat_ant2_type arg)
  {
    msg_.num_used_stat_ant2 = std::move(arg);
    return Init_SFusion_rtcm_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_num_used_stat_ant1
{
public:
  explicit Init_SFusion_num_used_stat_ant1(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_num_used_stat_ant2 num_used_stat_ant1(::irt_nav_msgs::msg::SFusion::_num_used_stat_ant1_type arg)
  {
    msg_.num_used_stat_ant1 = std::move(arg);
    return Init_SFusion_num_used_stat_ant2(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_cov
{
public:
  explicit Init_SFusion_cov(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_num_used_stat_ant1 cov(::irt_nav_msgs::msg::SFusion::_cov_type arg)
  {
    msg_.cov = std::move(arg);
    return Init_SFusion_num_used_stat_ant1(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_state
{
public:
  explicit Init_SFusion_state(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_cov state(::irt_nav_msgs::msg::SFusion::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SFusion_cov(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_pps_counter
{
public:
  explicit Init_SFusion_pps_counter(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_state pps_counter(::irt_nav_msgs::msg::SFusion::_pps_counter_type arg)
  {
    msg_.pps_counter = std::move(arg);
    return Init_SFusion_state(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_filter_tow
{
public:
  explicit Init_SFusion_filter_tow(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_pps_counter filter_tow(::irt_nav_msgs::msg::SFusion::_filter_tow_type arg)
  {
    msg_.filter_tow = std::move(arg);
    return Init_SFusion_pps_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_tow
{
public:
  explicit Init_SFusion_tow(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_filter_tow tow(::irt_nav_msgs::msg::SFusion::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_SFusion_filter_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_counter
{
public:
  explicit Init_SFusion_counter(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_tow counter(::irt_nav_msgs::msg::SFusion::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_SFusion_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_simulation_time
{
public:
  explicit Init_SFusion_simulation_time(::irt_nav_msgs::msg::SFusion & msg)
  : msg_(msg)
  {}
  Init_SFusion_counter simulation_time(::irt_nav_msgs::msg::SFusion::_simulation_time_type arg)
  {
    msg_.simulation_time = std::move(arg);
    return Init_SFusion_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

class Init_SFusion_header
{
public:
  Init_SFusion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFusion_simulation_time header(::irt_nav_msgs::msg::SFusion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SFusion_simulation_time(msg_);
  }

private:
  ::irt_nav_msgs::msg::SFusion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SFusion>()
{
  return irt_nav_msgs::msg::builder::Init_SFusion_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__BUILDER_HPP_
