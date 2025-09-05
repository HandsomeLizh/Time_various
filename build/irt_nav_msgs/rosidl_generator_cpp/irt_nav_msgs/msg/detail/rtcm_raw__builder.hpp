// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/RTCMRaw.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/rtcm_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCMRaw_data
{
public:
  explicit Init_RTCMRaw_data(::irt_nav_msgs::msg::RTCMRaw & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::RTCMRaw data(::irt_nav_msgs::msg::RTCMRaw::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMRaw msg_;
};

class Init_RTCMRaw_header
{
public:
  Init_RTCMRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCMRaw_data header(::irt_nav_msgs::msg::RTCMRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RTCMRaw_data(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::RTCMRaw>()
{
  return irt_nav_msgs::msg::builder::Init_RTCMRaw_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM_RAW__BUILDER_HPP_
