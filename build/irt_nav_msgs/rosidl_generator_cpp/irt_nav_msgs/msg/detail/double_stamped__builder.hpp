// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/DoubleStamped.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__DOUBLE_STAMPED__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__DOUBLE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/double_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_DoubleStamped_data
{
public:
  explicit Init_DoubleStamped_data(::irt_nav_msgs::msg::DoubleStamped & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::DoubleStamped data(::irt_nav_msgs::msg::DoubleStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::DoubleStamped msg_;
};

class Init_DoubleStamped_header
{
public:
  Init_DoubleStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoubleStamped_data header(::irt_nav_msgs::msg::DoubleStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DoubleStamped_data(msg_);
  }

private:
  ::irt_nav_msgs::msg::DoubleStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::DoubleStamped>()
{
  return irt_nav_msgs::msg::builder::Init_DoubleStamped_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__DOUBLE_STAMPED__BUILDER_HPP_
