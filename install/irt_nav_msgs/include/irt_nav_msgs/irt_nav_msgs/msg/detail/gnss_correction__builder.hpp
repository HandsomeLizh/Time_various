// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GNSSCorrection.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gnss_correction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSCorrection_psr_correction
{
public:
  explicit Init_GNSSCorrection_psr_correction(::irt_nav_msgs::msg::GNSSCorrection & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GNSSCorrection psr_correction(::irt_nav_msgs::msg::GNSSCorrection::_psr_correction_type arg)
  {
    msg_.psr_correction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSCorrection msg_;
};

class Init_GNSSCorrection_prn
{
public:
  Init_GNSSCorrection_prn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSCorrection_psr_correction prn(::irt_nav_msgs::msg::GNSSCorrection::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_GNSSCorrection_psr_correction(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSCorrection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GNSSCorrection>()
{
  return irt_nav_msgs::msg::builder::Init_GNSSCorrection_prn();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__BUILDER_HPP_
