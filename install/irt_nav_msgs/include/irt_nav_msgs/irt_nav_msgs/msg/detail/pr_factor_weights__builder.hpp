// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/pr_factor_weights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PRFactorWeights_cardinality
{
public:
  explicit Init_PRFactorWeights_cardinality(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::PRFactorWeights cardinality(::irt_nav_msgs::msg::PRFactorWeights::_cardinality_type arg)
  {
    msg_.cardinality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_weight
{
public:
  explicit Init_PRFactorWeights_weight(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  Init_PRFactorWeights_cardinality weight(::irt_nav_msgs::msg::PRFactorWeights::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_PRFactorWeights_cardinality(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_sat
{
public:
  explicit Init_PRFactorWeights_sat(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  Init_PRFactorWeights_weight sat(::irt_nav_msgs::msg::PRFactorWeights::_sat_type arg)
  {
    msg_.sat = std::move(arg);
    return Init_PRFactorWeights_weight(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_variance
{
public:
  explicit Init_PRFactorWeights_variance(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  Init_PRFactorWeights_sat variance(::irt_nav_msgs::msg::PRFactorWeights::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_PRFactorWeights_sat(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_median
{
public:
  explicit Init_PRFactorWeights_median(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  Init_PRFactorWeights_variance median(::irt_nav_msgs::msg::PRFactorWeights::_median_type arg)
  {
    msg_.median = std::move(arg);
    return Init_PRFactorWeights_variance(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_mean
{
public:
  explicit Init_PRFactorWeights_mean(::irt_nav_msgs::msg::PRFactorWeights & msg)
  : msg_(msg)
  {}
  Init_PRFactorWeights_median mean(::irt_nav_msgs::msg::PRFactorWeights::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_PRFactorWeights_median(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

class Init_PRFactorWeights_header
{
public:
  Init_PRFactorWeights_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PRFactorWeights_mean header(::irt_nav_msgs::msg::PRFactorWeights::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PRFactorWeights_mean(msg_);
  }

private:
  ::irt_nav_msgs::msg::PRFactorWeights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::PRFactorWeights>()
{
  return irt_nav_msgs::msg::builder::Init_PRFactorWeights_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__BUILDER_HPP_
