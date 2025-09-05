// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/factor_residuals__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_FactorResiduals_residuals
{
public:
  explicit Init_FactorResiduals_residuals(::irt_nav_msgs::msg::FactorResiduals & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::FactorResiduals residuals(::irt_nav_msgs::msg::FactorResiduals::_residuals_type arg)
  {
    msg_.residuals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResiduals msg_;
};

class Init_FactorResiduals_header
{
public:
  Init_FactorResiduals_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FactorResiduals_residuals header(::irt_nav_msgs::msg::FactorResiduals::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FactorResiduals_residuals(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResiduals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::FactorResiduals>()
{
  return irt_nav_msgs::msg::builder::Init_FactorResiduals_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__BUILDER_HPP_
