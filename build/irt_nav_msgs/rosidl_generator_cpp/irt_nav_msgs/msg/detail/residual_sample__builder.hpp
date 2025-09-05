// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/residual_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_ResidualSample_noise_model_weight
{
public:
  explicit Init_ResidualSample_noise_model_weight(::irt_nav_msgs::msg::ResidualSample & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::ResidualSample noise_model_weight(::irt_nav_msgs::msg::ResidualSample::_noise_model_weight_type arg)
  {
    msg_.noise_model_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

class Init_ResidualSample_loss_error
{
public:
  explicit Init_ResidualSample_loss_error(::irt_nav_msgs::msg::ResidualSample & msg)
  : msg_(msg)
  {}
  Init_ResidualSample_noise_model_weight loss_error(::irt_nav_msgs::msg::ResidualSample::_loss_error_type arg)
  {
    msg_.loss_error = std::move(arg);
    return Init_ResidualSample_noise_model_weight(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

class Init_ResidualSample_unwhitened_error
{
public:
  explicit Init_ResidualSample_unwhitened_error(::irt_nav_msgs::msg::ResidualSample & msg)
  : msg_(msg)
  {}
  Init_ResidualSample_loss_error unwhitened_error(::irt_nav_msgs::msg::ResidualSample::_unwhitened_error_type arg)
  {
    msg_.unwhitened_error = std::move(arg);
    return Init_ResidualSample_loss_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

class Init_ResidualSample_whitened_error
{
public:
  explicit Init_ResidualSample_whitened_error(::irt_nav_msgs::msg::ResidualSample & msg)
  : msg_(msg)
  {}
  Init_ResidualSample_unwhitened_error whitened_error(::irt_nav_msgs::msg::ResidualSample::_whitened_error_type arg)
  {
    msg_.whitened_error = std::move(arg);
    return Init_ResidualSample_unwhitened_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

class Init_ResidualSample_type
{
public:
  explicit Init_ResidualSample_type(::irt_nav_msgs::msg::ResidualSample & msg)
  : msg_(msg)
  {}
  Init_ResidualSample_whitened_error type(::irt_nav_msgs::msg::ResidualSample::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ResidualSample_whitened_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

class Init_ResidualSample_id
{
public:
  Init_ResidualSample_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResidualSample_type id(::irt_nav_msgs::msg::ResidualSample::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ResidualSample_type(msg_);
  }

private:
  ::irt_nav_msgs::msg::ResidualSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::ResidualSample>()
{
  return irt_nav_msgs::msg::builder::Init_ResidualSample_id();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__BUILDER_HPP_
