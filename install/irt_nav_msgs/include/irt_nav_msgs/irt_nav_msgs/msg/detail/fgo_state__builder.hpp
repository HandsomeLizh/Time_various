// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/fgo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_FGOState_amb_var
{
public:
  explicit Init_FGOState_amb_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::FGOState amb_var(::irt_nav_msgs::msg::FGOState::_amb_var_type arg)
  {
    msg_.amb_var = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_amb
{
public:
  explicit Init_FGOState_amb(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_amb_var amb(::irt_nav_msgs::msg::FGOState::_amb_type arg)
  {
    msg_.amb = std::move(arg);
    return Init_FGOState_amb_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_cbd_var
{
public:
  explicit Init_FGOState_cbd_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_amb cbd_var(::irt_nav_msgs::msg::FGOState::_cbd_var_type arg)
  {
    msg_.cbd_var = std::move(arg);
    return Init_FGOState_amb(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_cbd
{
public:
  explicit Init_FGOState_cbd(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_cbd_var cbd(::irt_nav_msgs::msg::FGOState::_cbd_type arg)
  {
    msg_.cbd = std::move(arg);
    return Init_FGOState_cbd_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_imu_bias_var
{
public:
  explicit Init_FGOState_imu_bias_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_cbd imu_bias_var(::irt_nav_msgs::msg::FGOState::_imu_bias_var_type arg)
  {
    msg_.imu_bias_var = std::move(arg);
    return Init_FGOState_cbd(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_imu_bias
{
public:
  explicit Init_FGOState_imu_bias(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_imu_bias_var imu_bias(::irt_nav_msgs::msg::FGOState::_imu_bias_type arg)
  {
    msg_.imu_bias = std::move(arg);
    return Init_FGOState_imu_bias_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_heading
{
public:
  explicit Init_FGOState_heading(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_imu_bias heading(::irt_nav_msgs::msg::FGOState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_FGOState_imu_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_acc_var
{
public:
  explicit Init_FGOState_acc_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_heading acc_var(::irt_nav_msgs::msg::FGOState::_acc_var_type arg)
  {
    msg_.acc_var = std::move(arg);
    return Init_FGOState_heading(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_vel_var
{
public:
  explicit Init_FGOState_vel_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_acc_var vel_var(::irt_nav_msgs::msg::FGOState::_vel_var_type arg)
  {
    msg_.vel_var = std::move(arg);
    return Init_FGOState_acc_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_pose_var
{
public:
  explicit Init_FGOState_pose_var(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_vel_var pose_var(::irt_nav_msgs::msg::FGOState::_pose_var_type arg)
  {
    msg_.pose_var = std::move(arg);
    return Init_FGOState_vel_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_acc
{
public:
  explicit Init_FGOState_acc(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_pose_var acc(::irt_nav_msgs::msg::FGOState::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_FGOState_pose_var(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_vel
{
public:
  explicit Init_FGOState_vel(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_acc vel(::irt_nav_msgs::msg::FGOState::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_FGOState_acc(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_pose
{
public:
  explicit Init_FGOState_pose(::irt_nav_msgs::msg::FGOState & msg)
  : msg_(msg)
  {}
  Init_FGOState_vel pose(::irt_nav_msgs::msg::FGOState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_FGOState_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

class Init_FGOState_header
{
public:
  Init_FGOState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FGOState_pose header(::irt_nav_msgs::msg::FGOState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FGOState_pose(msg_);
  }

private:
  ::irt_nav_msgs::msg::FGOState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::FGOState>()
{
  return irt_nav_msgs::msg::builder::Init_FGOState_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__BUILDER_HPP_
