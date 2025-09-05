// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gaussian_component__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GaussianComponent_covariance
{
public:
  explicit Init_GaussianComponent_covariance(::irt_nav_msgs::msg::GaussianComponent & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GaussianComponent covariance(::irt_nav_msgs::msg::GaussianComponent::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianComponent msg_;
};

class Init_GaussianComponent_mean
{
public:
  explicit Init_GaussianComponent_mean(::irt_nav_msgs::msg::GaussianComponent & msg)
  : msg_(msg)
  {}
  Init_GaussianComponent_covariance mean(::irt_nav_msgs::msg::GaussianComponent::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_GaussianComponent_covariance(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianComponent msg_;
};

class Init_GaussianComponent_weight
{
public:
  Init_GaussianComponent_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaussianComponent_mean weight(::irt_nav_msgs::msg::GaussianComponent::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_GaussianComponent_mean(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianComponent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GaussianComponent>()
{
  return irt_nav_msgs::msg::builder::Init_GaussianComponent_weight();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__BUILDER_HPP_
