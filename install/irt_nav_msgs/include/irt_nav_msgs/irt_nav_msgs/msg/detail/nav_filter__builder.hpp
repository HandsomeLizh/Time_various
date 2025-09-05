// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/nav_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_NavFilter_filter_time
{
public:
  explicit Init_NavFilter_filter_time(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::NavFilter filter_time(::irt_nav_msgs::msg::NavFilter::_filter_time_type arg)
  {
    msg_.filter_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_vel_ukf
{
public:
  explicit Init_NavFilter_ant_vel_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_filter_time ant_vel_ukf(::irt_nav_msgs::msg::NavFilter::_ant_vel_ukf_type arg)
  {
    msg_.ant_vel_ukf = std::move(arg);
    return Init_NavFilter_filter_time(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_llh_ukf
{
public:
  explicit Init_NavFilter_ant_llh_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_vel_ukf ant_llh_ukf(::irt_nav_msgs::msg::NavFilter::_ant_llh_ukf_type arg)
  {
    msg_.ant_llh_ukf = std::move(arg);
    return Init_NavFilter_ant_vel_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_ecef_ukf
{
public:
  explicit Init_NavFilter_ant_ecef_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_llh_ukf ant_ecef_ukf(::irt_nav_msgs::msg::NavFilter::_ant_ecef_ukf_type arg)
  {
    msg_.ant_ecef_ukf = std::move(arg);
    return Init_NavFilter_ant_llh_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_update_exit_ukf
{
public:
  explicit Init_NavFilter_update_exit_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_ecef_ukf update_exit_ukf(::irt_nav_msgs::msg::NavFilter::_update_exit_ukf_type arg)
  {
    msg_.update_exit_ukf = std::move(arg);
    return Init_NavFilter_ant_ecef_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_euler_ukf
{
public:
  explicit Init_NavFilter_euler_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_update_exit_ukf euler_ukf(::irt_nav_msgs::msg::NavFilter::_euler_ukf_type arg)
  {
    msg_.euler_ukf = std::move(arg);
    return Init_NavFilter_update_exit_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_vel_normed_ukf
{
public:
  explicit Init_NavFilter_vel_normed_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_euler_ukf vel_normed_ukf(::irt_nav_msgs::msg::NavFilter::_vel_normed_ukf_type arg)
  {
    msg_.vel_normed_ukf = std::move(arg);
    return Init_NavFilter_euler_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_var_ukf
{
public:
  explicit Init_NavFilter_var_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_vel_normed_ukf var_ukf(::irt_nav_msgs::msg::NavFilter::_var_ukf_type arg)
  {
    msg_.var_ukf = std::move(arg);
    return Init_NavFilter_vel_normed_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_state_ukf
{
public:
  explicit Init_NavFilter_state_ukf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_var_ukf state_ukf(::irt_nav_msgs::msg::NavFilter::_state_ukf_type arg)
  {
    msg_.state_ukf = std::move(arg);
    return Init_NavFilter_var_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_vel_ekf
{
public:
  explicit Init_NavFilter_ant_vel_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_state_ukf ant_vel_ekf(::irt_nav_msgs::msg::NavFilter::_ant_vel_ekf_type arg)
  {
    msg_.ant_vel_ekf = std::move(arg);
    return Init_NavFilter_state_ukf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_llh_ekf
{
public:
  explicit Init_NavFilter_ant_llh_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_vel_ekf ant_llh_ekf(::irt_nav_msgs::msg::NavFilter::_ant_llh_ekf_type arg)
  {
    msg_.ant_llh_ekf = std::move(arg);
    return Init_NavFilter_ant_vel_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_ant_ecef_ekf
{
public:
  explicit Init_NavFilter_ant_ecef_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_llh_ekf ant_ecef_ekf(::irt_nav_msgs::msg::NavFilter::_ant_ecef_ekf_type arg)
  {
    msg_.ant_ecef_ekf = std::move(arg);
    return Init_NavFilter_ant_llh_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_update_exit_ekf
{
public:
  explicit Init_NavFilter_update_exit_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_ant_ecef_ekf update_exit_ekf(::irt_nav_msgs::msg::NavFilter::_update_exit_ekf_type arg)
  {
    msg_.update_exit_ekf = std::move(arg);
    return Init_NavFilter_ant_ecef_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_euler_ekf
{
public:
  explicit Init_NavFilter_euler_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_update_exit_ekf euler_ekf(::irt_nav_msgs::msg::NavFilter::_euler_ekf_type arg)
  {
    msg_.euler_ekf = std::move(arg);
    return Init_NavFilter_update_exit_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_vel_normed_ekf
{
public:
  explicit Init_NavFilter_vel_normed_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_euler_ekf vel_normed_ekf(::irt_nav_msgs::msg::NavFilter::_vel_normed_ekf_type arg)
  {
    msg_.vel_normed_ekf = std::move(arg);
    return Init_NavFilter_euler_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_var_ekf
{
public:
  explicit Init_NavFilter_var_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_vel_normed_ekf var_ekf(::irt_nav_msgs::msg::NavFilter::_var_ekf_type arg)
  {
    msg_.var_ekf = std::move(arg);
    return Init_NavFilter_vel_normed_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_state_ekf
{
public:
  explicit Init_NavFilter_state_ekf(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_var_ekf state_ekf(::irt_nav_msgs::msg::NavFilter::_state_ekf_type arg)
  {
    msg_.state_ekf = std::move(arg);
    return Init_NavFilter_var_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_gnss_obs_delay
{
public:
  explicit Init_NavFilter_gnss_obs_delay(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_state_ekf gnss_obs_delay(::irt_nav_msgs::msg::NavFilter::_gnss_obs_delay_type arg)
  {
    msg_.gnss_obs_delay = std::move(arg);
    return Init_NavFilter_state_ekf(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_filter_enabled
{
public:
  explicit Init_NavFilter_filter_enabled(::irt_nav_msgs::msg::NavFilter & msg)
  : msg_(msg)
  {}
  Init_NavFilter_gnss_obs_delay filter_enabled(::irt_nav_msgs::msg::NavFilter::_filter_enabled_type arg)
  {
    msg_.filter_enabled = std::move(arg);
    return Init_NavFilter_gnss_obs_delay(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

class Init_NavFilter_header
{
public:
  Init_NavFilter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavFilter_filter_enabled header(::irt_nav_msgs::msg::NavFilter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavFilter_filter_enabled(msg_);
  }

private:
  ::irt_nav_msgs::msg::NavFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::NavFilter>()
{
  return irt_nav_msgs::msg::builder::Init_NavFilter_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__BUILDER_HPP_
