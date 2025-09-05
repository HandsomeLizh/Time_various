// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/HybridStatistics.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/hybrid_statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_HybridStatistics_converged
{
public:
  explicit Init_HybridStatistics_converged(::irt_nav_msgs::msg::HybridStatistics & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::HybridStatistics converged(::irt_nav_msgs::msg::HybridStatistics::_converged_type arg)
  {
    msg_.converged = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::HybridStatistics msg_;
};

class Init_HybridStatistics_duration
{
public:
  explicit Init_HybridStatistics_duration(::irt_nav_msgs::msg::HybridStatistics & msg)
  : msg_(msg)
  {}
  Init_HybridStatistics_converged duration(::irt_nav_msgs::msg::HybridStatistics::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_HybridStatistics_converged(msg_);
  }

private:
  ::irt_nav_msgs::msg::HybridStatistics msg_;
};

class Init_HybridStatistics_iterations
{
public:
  explicit Init_HybridStatistics_iterations(::irt_nav_msgs::msg::HybridStatistics & msg)
  : msg_(msg)
  {}
  Init_HybridStatistics_duration iterations(::irt_nav_msgs::msg::HybridStatistics::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_HybridStatistics_duration(msg_);
  }

private:
  ::irt_nav_msgs::msg::HybridStatistics msg_;
};

class Init_HybridStatistics_header
{
public:
  Init_HybridStatistics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HybridStatistics_iterations header(::irt_nav_msgs::msg::HybridStatistics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HybridStatistics_iterations(msg_);
  }

private:
  ::irt_nav_msgs::msg::HybridStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::HybridStatistics>()
{
  return irt_nav_msgs::msg::builder::Init_HybridStatistics_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__BUILDER_HPP_
