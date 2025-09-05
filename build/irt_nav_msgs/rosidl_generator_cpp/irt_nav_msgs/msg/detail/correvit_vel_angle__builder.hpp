// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/CorrevitVelAngle.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/correvit_vel_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_CorrevitVelAngle_vel_y
{
public:
  explicit Init_CorrevitVelAngle_vel_y(::irt_nav_msgs::msg::CorrevitVelAngle & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::CorrevitVelAngle vel_y(::irt_nav_msgs::msg::CorrevitVelAngle::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitVelAngle msg_;
};

class Init_CorrevitVelAngle_vel_x
{
public:
  explicit Init_CorrevitVelAngle_vel_x(::irt_nav_msgs::msg::CorrevitVelAngle & msg)
  : msg_(msg)
  {}
  Init_CorrevitVelAngle_vel_y vel_x(::irt_nav_msgs::msg::CorrevitVelAngle::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_CorrevitVelAngle_vel_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitVelAngle msg_;
};

class Init_CorrevitVelAngle_vel
{
public:
  explicit Init_CorrevitVelAngle_vel(::irt_nav_msgs::msg::CorrevitVelAngle & msg)
  : msg_(msg)
  {}
  Init_CorrevitVelAngle_vel_x vel(::irt_nav_msgs::msg::CorrevitVelAngle::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_CorrevitVelAngle_vel_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitVelAngle msg_;
};

class Init_CorrevitVelAngle_angle
{
public:
  explicit Init_CorrevitVelAngle_angle(::irt_nav_msgs::msg::CorrevitVelAngle & msg)
  : msg_(msg)
  {}
  Init_CorrevitVelAngle_vel angle(::irt_nav_msgs::msg::CorrevitVelAngle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_CorrevitVelAngle_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitVelAngle msg_;
};

class Init_CorrevitVelAngle_header
{
public:
  Init_CorrevitVelAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CorrevitVelAngle_angle header(::irt_nav_msgs::msg::CorrevitVelAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CorrevitVelAngle_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitVelAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::CorrevitVelAngle>()
{
  return irt_nav_msgs::msg::builder::Init_CorrevitVelAngle_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_VEL_ANGLE__BUILDER_HPP_
