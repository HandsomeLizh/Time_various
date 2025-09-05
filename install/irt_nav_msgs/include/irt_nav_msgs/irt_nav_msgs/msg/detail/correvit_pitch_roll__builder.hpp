// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/CorrevitPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/correvit_pitch_roll__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_CorrevitPitchRoll_timestamp
{
public:
  explicit Init_CorrevitPitchRoll_timestamp(::irt_nav_msgs::msg::CorrevitPitchRoll & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::CorrevitPitchRoll timestamp(::irt_nav_msgs::msg::CorrevitPitchRoll::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitPitchRoll msg_;
};

class Init_CorrevitPitchRoll_roll
{
public:
  explicit Init_CorrevitPitchRoll_roll(::irt_nav_msgs::msg::CorrevitPitchRoll & msg)
  : msg_(msg)
  {}
  Init_CorrevitPitchRoll_timestamp roll(::irt_nav_msgs::msg::CorrevitPitchRoll::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_CorrevitPitchRoll_timestamp(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitPitchRoll msg_;
};

class Init_CorrevitPitchRoll_radius
{
public:
  explicit Init_CorrevitPitchRoll_radius(::irt_nav_msgs::msg::CorrevitPitchRoll & msg)
  : msg_(msg)
  {}
  Init_CorrevitPitchRoll_roll radius(::irt_nav_msgs::msg::CorrevitPitchRoll::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_CorrevitPitchRoll_roll(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitPitchRoll msg_;
};

class Init_CorrevitPitchRoll_pitch
{
public:
  explicit Init_CorrevitPitchRoll_pitch(::irt_nav_msgs::msg::CorrevitPitchRoll & msg)
  : msg_(msg)
  {}
  Init_CorrevitPitchRoll_radius pitch(::irt_nav_msgs::msg::CorrevitPitchRoll::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_CorrevitPitchRoll_radius(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitPitchRoll msg_;
};

class Init_CorrevitPitchRoll_header
{
public:
  Init_CorrevitPitchRoll_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CorrevitPitchRoll_pitch header(::irt_nav_msgs::msg::CorrevitPitchRoll::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CorrevitPitchRoll_pitch(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitPitchRoll msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::CorrevitPitchRoll>()
{
  return irt_nav_msgs::msg::builder::Init_CorrevitPitchRoll_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__BUILDER_HPP_
