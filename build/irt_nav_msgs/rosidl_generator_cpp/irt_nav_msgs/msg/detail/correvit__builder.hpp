// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/Correvit.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/correvit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Correvit_vel_correvit
{
public:
  explicit Init_Correvit_vel_correvit(::irt_nav_msgs::msg::Correvit & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::Correvit vel_correvit(::irt_nav_msgs::msg::Correvit::_vel_correvit_type arg)
  {
    msg_.vel_correvit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::Correvit msg_;
};

class Init_Correvit_vel_y_correvit
{
public:
  explicit Init_Correvit_vel_y_correvit(::irt_nav_msgs::msg::Correvit & msg)
  : msg_(msg)
  {}
  Init_Correvit_vel_correvit vel_y_correvit(::irt_nav_msgs::msg::Correvit::_vel_y_correvit_type arg)
  {
    msg_.vel_y_correvit = std::move(arg);
    return Init_Correvit_vel_correvit(msg_);
  }

private:
  ::irt_nav_msgs::msg::Correvit msg_;
};

class Init_Correvit_vel_x_correvit
{
public:
  explicit Init_Correvit_vel_x_correvit(::irt_nav_msgs::msg::Correvit & msg)
  : msg_(msg)
  {}
  Init_Correvit_vel_y_correvit vel_x_correvit(::irt_nav_msgs::msg::Correvit::_vel_x_correvit_type arg)
  {
    msg_.vel_x_correvit = std::move(arg);
    return Init_Correvit_vel_y_correvit(msg_);
  }

private:
  ::irt_nav_msgs::msg::Correvit msg_;
};

class Init_Correvit_angle_correvit
{
public:
  explicit Init_Correvit_angle_correvit(::irt_nav_msgs::msg::Correvit & msg)
  : msg_(msg)
  {}
  Init_Correvit_vel_x_correvit angle_correvit(::irt_nav_msgs::msg::Correvit::_angle_correvit_type arg)
  {
    msg_.angle_correvit = std::move(arg);
    return Init_Correvit_vel_x_correvit(msg_);
  }

private:
  ::irt_nav_msgs::msg::Correvit msg_;
};

class Init_Correvit_header
{
public:
  Init_Correvit_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Correvit_angle_correvit header(::irt_nav_msgs::msg::Correvit::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Correvit_angle_correvit(msg_);
  }

private:
  ::irt_nav_msgs::msg::Correvit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::Correvit>()
{
  return irt_nav_msgs::msg::builder::Init_Correvit_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__BUILDER_HPP_
