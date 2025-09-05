// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/PPS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PPS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/pps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PPS_pps_counter
{
public:
  explicit Init_PPS_pps_counter(::irt_nav_msgs::msg::PPS & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::PPS pps_counter(::irt_nav_msgs::msg::PPS::_pps_counter_type arg)
  {
    msg_.pps_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::PPS msg_;
};

class Init_PPS_header
{
public:
  Init_PPS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PPS_pps_counter header(::irt_nav_msgs::msg::PPS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PPS_pps_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::PPS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::PPS>()
{
  return irt_nav_msgs::msg::builder::Init_PPS_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PPS__BUILDER_HPP_
