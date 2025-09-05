// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/sol_ls__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SolLS_available
{
public:
  explicit Init_SolLS_available(::irt_nav_msgs::msg::SolLS & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SolLS available(::irt_nav_msgs::msg::SolLS::_available_type arg)
  {
    msg_.available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

class Init_SolLS_dop
{
public:
  explicit Init_SolLS_dop(::irt_nav_msgs::msg::SolLS & msg)
  : msg_(msg)
  {}
  Init_SolLS_available dop(::irt_nav_msgs::msg::SolLS::_dop_type arg)
  {
    msg_.dop = std::move(arg);
    return Init_SolLS_available(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

class Init_SolLS_receiver_clock_drift
{
public:
  explicit Init_SolLS_receiver_clock_drift(::irt_nav_msgs::msg::SolLS & msg)
  : msg_(msg)
  {}
  Init_SolLS_dop receiver_clock_drift(::irt_nav_msgs::msg::SolLS::_receiver_clock_drift_type arg)
  {
    msg_.receiver_clock_drift = std::move(arg);
    return Init_SolLS_dop(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

class Init_SolLS_receiver_clock_bias
{
public:
  explicit Init_SolLS_receiver_clock_bias(::irt_nav_msgs::msg::SolLS & msg)
  : msg_(msg)
  {}
  Init_SolLS_receiver_clock_drift receiver_clock_bias(::irt_nav_msgs::msg::SolLS::_receiver_clock_bias_type arg)
  {
    msg_.receiver_clock_bias = std::move(arg);
    return Init_SolLS_receiver_clock_drift(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

class Init_SolLS_vel_ned
{
public:
  explicit Init_SolLS_vel_ned(::irt_nav_msgs::msg::SolLS & msg)
  : msg_(msg)
  {}
  Init_SolLS_receiver_clock_bias vel_ned(::irt_nav_msgs::msg::SolLS::_vel_ned_type arg)
  {
    msg_.vel_ned = std::move(arg);
    return Init_SolLS_receiver_clock_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

class Init_SolLS_llh
{
public:
  Init_SolLS_llh()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolLS_vel_ned llh(::irt_nav_msgs::msg::SolLS::_llh_type arg)
  {
    msg_.llh = std::move(arg);
    return Init_SolLS_vel_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::SolLS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SolLS>()
{
  return irt_nav_msgs::msg::builder::Init_SolLS_llh();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__BUILDER_HPP_
