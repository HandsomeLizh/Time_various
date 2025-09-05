// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/Residual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/residual__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Residual_data
{
public:
  explicit Init_Residual_data(::irt_nav_msgs::msg::Residual & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::Residual data(::irt_nav_msgs::msg::Residual::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

class Init_Residual_outlier
{
public:
  explicit Init_Residual_outlier(::irt_nav_msgs::msg::Residual & msg)
  : msg_(msg)
  {}
  Init_Residual_data outlier(::irt_nav_msgs::msg::Residual::_outlier_type arg)
  {
    msg_.outlier = std::move(arg);
    return Init_Residual_data(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

class Init_Residual_factor
{
public:
  explicit Init_Residual_factor(::irt_nav_msgs::msg::Residual & msg)
  : msg_(msg)
  {}
  Init_Residual_outlier factor(::irt_nav_msgs::msg::Residual::_factor_type arg)
  {
    msg_.factor = std::move(arg);
    return Init_Residual_outlier(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

class Init_Residual_sat
{
public:
  explicit Init_Residual_sat(::irt_nav_msgs::msg::Residual & msg)
  : msg_(msg)
  {}
  Init_Residual_factor sat(::irt_nav_msgs::msg::Residual::_sat_type arg)
  {
    msg_.sat = std::move(arg);
    return Init_Residual_factor(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

class Init_Residual_tow
{
public:
  explicit Init_Residual_tow(::irt_nav_msgs::msg::Residual & msg)
  : msg_(msg)
  {}
  Init_Residual_sat tow(::irt_nav_msgs::msg::Residual::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_Residual_sat(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

class Init_Residual_header
{
public:
  Init_Residual_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Residual_tow header(::irt_nav_msgs::msg::Residual::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Residual_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::Residual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::Residual>()
{
  return irt_nav_msgs::msg::builder::Init_Residual_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__BUILDER_HPP_
