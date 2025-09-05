// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/factor_residual__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_FactorResidual_samples
{
public:
  explicit Init_FactorResidual_samples(::irt_nav_msgs::msg::FactorResidual & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::FactorResidual samples(::irt_nav_msgs::msg::FactorResidual::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResidual msg_;
};

class Init_FactorResidual_related_keys
{
public:
  explicit Init_FactorResidual_related_keys(::irt_nav_msgs::msg::FactorResidual & msg)
  : msg_(msg)
  {}
  Init_FactorResidual_samples related_keys(::irt_nav_msgs::msg::FactorResidual::_related_keys_type arg)
  {
    msg_.related_keys = std::move(arg);
    return Init_FactorResidual_samples(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResidual msg_;
};

class Init_FactorResidual_current_state_key
{
public:
  explicit Init_FactorResidual_current_state_key(::irt_nav_msgs::msg::FactorResidual & msg)
  : msg_(msg)
  {}
  Init_FactorResidual_related_keys current_state_key(::irt_nav_msgs::msg::FactorResidual::_current_state_key_type arg)
  {
    msg_.current_state_key = std::move(arg);
    return Init_FactorResidual_related_keys(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResidual msg_;
};

class Init_FactorResidual_factor_name
{
public:
  Init_FactorResidual_factor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FactorResidual_current_state_key factor_name(::irt_nav_msgs::msg::FactorResidual::_factor_name_type arg)
  {
    msg_.factor_name = std::move(arg);
    return Init_FactorResidual_current_state_key(msg_);
  }

private:
  ::irt_nav_msgs::msg::FactorResidual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::FactorResidual>()
{
  return irt_nav_msgs::msg::builder::Init_FactorResidual_factor_name();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__BUILDER_HPP_
