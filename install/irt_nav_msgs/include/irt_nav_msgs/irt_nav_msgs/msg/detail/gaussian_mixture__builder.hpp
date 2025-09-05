// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GaussianMixture.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gaussian_mixture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GaussianMixture_gaussian
{
public:
  explicit Init_GaussianMixture_gaussian(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GaussianMixture gaussian(::irt_nav_msgs::msg::GaussianMixture::_gaussian_type arg)
  {
    msg_.gaussian = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_residuals
{
public:
  explicit Init_GaussianMixture_residuals(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_gaussian residuals(::irt_nav_msgs::msg::GaussianMixture::_residuals_type arg)
  {
    msg_.residuals = std::move(arg);
    return Init_GaussianMixture_gaussian(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_dim
{
public:
  explicit Init_GaussianMixture_dim(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_residuals dim(::irt_nav_msgs::msg::GaussianMixture::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_GaussianMixture_residuals(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_runtime
{
public:
  explicit Init_GaussianMixture_runtime(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_dim runtime(::irt_nav_msgs::msg::GaussianMixture::_runtime_type arg)
  {
    msg_.runtime = std::move(arg);
    return Init_GaussianMixture_dim(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_environment
{
public:
  explicit Init_GaussianMixture_environment(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_runtime environment(::irt_nav_msgs::msg::GaussianMixture::_environment_type arg)
  {
    msg_.environment = std::move(arg);
    return Init_GaussianMixture_runtime(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_factor
{
public:
  explicit Init_GaussianMixture_factor(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_environment factor(::irt_nav_msgs::msg::GaussianMixture::_factor_type arg)
  {
    msg_.factor = std::move(arg);
    return Init_GaussianMixture_environment(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_sat
{
public:
  explicit Init_GaussianMixture_sat(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_factor sat(::irt_nav_msgs::msg::GaussianMixture::_sat_type arg)
  {
    msg_.sat = std::move(arg);
    return Init_GaussianMixture_factor(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_tow
{
public:
  explicit Init_GaussianMixture_tow(::irt_nav_msgs::msg::GaussianMixture & msg)
  : msg_(msg)
  {}
  Init_GaussianMixture_sat tow(::irt_nav_msgs::msg::GaussianMixture::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_GaussianMixture_sat(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

class Init_GaussianMixture_header
{
public:
  Init_GaussianMixture_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaussianMixture_tow header(::irt_nav_msgs::msg::GaussianMixture::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GaussianMixture_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::GaussianMixture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GaussianMixture>()
{
  return irt_nav_msgs::msg::builder::Init_GaussianMixture_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__BUILDER_HPP_
