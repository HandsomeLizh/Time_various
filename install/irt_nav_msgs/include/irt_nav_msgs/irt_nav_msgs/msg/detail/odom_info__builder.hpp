// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/odom_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_OdomInfo_sensor_ecef_rpy_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_ecef_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::OdomInfo sensor_ecef_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_rpy_to_optimized_type arg)
  {
    msg_.sensor_ecef_rpy_to_optimized = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_ecef_pos_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_ecef_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_rpy_to_optimized sensor_ecef_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_pos_to_optimized_type arg)
  {
    msg_.sensor_ecef_pos_to_optimized = std::move(arg);
    return Init_OdomInfo_sensor_ecef_rpy_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_rpy_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_enu_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_pos_to_optimized sensor_enu_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_rpy_to_optimized_type arg)
  {
    msg_.sensor_enu_rpy_to_optimized = std::move(arg);
    return Init_OdomInfo_sensor_ecef_pos_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_pos_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_enu_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_rpy_to_optimized sensor_enu_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_pos_to_optimized_type arg)
  {
    msg_.sensor_enu_pos_to_optimized = std::move(arg);
    return Init_OdomInfo_sensor_enu_rpy_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_rpy_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_local_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_pos_to_optimized sensor_local_rpy_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_local_rpy_to_optimized_type arg)
  {
    msg_.sensor_local_rpy_to_optimized = std::move(arg);
    return Init_OdomInfo_sensor_enu_pos_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_pos_to_optimized
{
public:
  explicit Init_OdomInfo_sensor_local_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_rpy_to_optimized sensor_local_pos_to_optimized(::irt_nav_msgs::msg::OdomInfo::_sensor_local_pos_to_optimized_type arg)
  {
    msg_.sensor_local_pos_to_optimized = std::move(arg);
    return Init_OdomInfo_sensor_local_rpy_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_ecef_rpy_to
{
public:
  explicit Init_OdomInfo_sensor_ecef_rpy_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_pos_to_optimized sensor_ecef_rpy_to(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_rpy_to_type arg)
  {
    msg_.sensor_ecef_rpy_to = std::move(arg);
    return Init_OdomInfo_sensor_local_pos_to_optimized(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_ecef_pos_to
{
public:
  explicit Init_OdomInfo_sensor_ecef_pos_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_rpy_to sensor_ecef_pos_to(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_pos_to_type arg)
  {
    msg_.sensor_ecef_pos_to = std::move(arg);
    return Init_OdomInfo_sensor_ecef_rpy_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_rpy_to
{
public:
  explicit Init_OdomInfo_sensor_enu_rpy_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_pos_to sensor_enu_rpy_to(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_rpy_to_type arg)
  {
    msg_.sensor_enu_rpy_to = std::move(arg);
    return Init_OdomInfo_sensor_ecef_pos_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_pos_to
{
public:
  explicit Init_OdomInfo_sensor_enu_pos_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_rpy_to sensor_enu_pos_to(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_pos_to_type arg)
  {
    msg_.sensor_enu_pos_to = std::move(arg);
    return Init_OdomInfo_sensor_enu_rpy_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_rpy_to
{
public:
  explicit Init_OdomInfo_sensor_local_rpy_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_pos_to sensor_local_rpy_to(::irt_nav_msgs::msg::OdomInfo::_sensor_local_rpy_to_type arg)
  {
    msg_.sensor_local_rpy_to = std::move(arg);
    return Init_OdomInfo_sensor_enu_pos_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_pos_to
{
public:
  explicit Init_OdomInfo_sensor_local_pos_to(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_rpy_to sensor_local_pos_to(::irt_nav_msgs::msg::OdomInfo::_sensor_local_pos_to_type arg)
  {
    msg_.sensor_local_pos_to = std::move(arg);
    return Init_OdomInfo_sensor_local_rpy_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_ecef_rpy_from
{
public:
  explicit Init_OdomInfo_sensor_ecef_rpy_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_pos_to sensor_ecef_rpy_from(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_rpy_from_type arg)
  {
    msg_.sensor_ecef_rpy_from = std::move(arg);
    return Init_OdomInfo_sensor_local_pos_to(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_ecef_pos_from
{
public:
  explicit Init_OdomInfo_sensor_ecef_pos_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_rpy_from sensor_ecef_pos_from(::irt_nav_msgs::msg::OdomInfo::_sensor_ecef_pos_from_type arg)
  {
    msg_.sensor_ecef_pos_from = std::move(arg);
    return Init_OdomInfo_sensor_ecef_rpy_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_rpy_from
{
public:
  explicit Init_OdomInfo_sensor_enu_rpy_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_ecef_pos_from sensor_enu_rpy_from(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_rpy_from_type arg)
  {
    msg_.sensor_enu_rpy_from = std::move(arg);
    return Init_OdomInfo_sensor_ecef_pos_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_enu_pos_from
{
public:
  explicit Init_OdomInfo_sensor_enu_pos_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_rpy_from sensor_enu_pos_from(::irt_nav_msgs::msg::OdomInfo::_sensor_enu_pos_from_type arg)
  {
    msg_.sensor_enu_pos_from = std::move(arg);
    return Init_OdomInfo_sensor_enu_rpy_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_rpy_from
{
public:
  explicit Init_OdomInfo_sensor_local_rpy_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_enu_pos_from sensor_local_rpy_from(::irt_nav_msgs::msg::OdomInfo::_sensor_local_rpy_from_type arg)
  {
    msg_.sensor_local_rpy_from = std::move(arg);
    return Init_OdomInfo_sensor_enu_pos_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_sensor_local_pos_from
{
public:
  explicit Init_OdomInfo_sensor_local_pos_from(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_rpy_from sensor_local_pos_from(::irt_nav_msgs::msg::OdomInfo::_sensor_local_pos_from_type arg)
  {
    msg_.sensor_local_pos_from = std::move(arg);
    return Init_OdomInfo_sensor_local_rpy_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_ecef_rpy
{
public:
  explicit Init_OdomInfo_odom_ecef_rpy(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_sensor_local_pos_from odom_ecef_rpy(::irt_nav_msgs::msg::OdomInfo::_odom_ecef_rpy_type arg)
  {
    msg_.odom_ecef_rpy = std::move(arg);
    return Init_OdomInfo_sensor_local_pos_from(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_ecef_pos
{
public:
  explicit Init_OdomInfo_odom_ecef_pos(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_ecef_rpy odom_ecef_pos(::irt_nav_msgs::msg::OdomInfo::_odom_ecef_pos_type arg)
  {
    msg_.odom_ecef_pos = std::move(arg);
    return Init_OdomInfo_odom_ecef_rpy(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_local_rpy
{
public:
  explicit Init_OdomInfo_odom_local_rpy(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_ecef_pos odom_local_rpy(::irt_nav_msgs::msg::OdomInfo::_odom_local_rpy_type arg)
  {
    msg_.odom_local_rpy = std::move(arg);
    return Init_OdomInfo_odom_ecef_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_local_pos
{
public:
  explicit Init_OdomInfo_odom_local_pos(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_local_rpy odom_local_pos(::irt_nav_msgs::msg::OdomInfo::_odom_local_pos_type arg)
  {
    msg_.odom_local_pos = std::move(arg);
    return Init_OdomInfo_odom_local_rpy(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_associated_with_j
{
public:
  explicit Init_OdomInfo_associated_with_j(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_local_pos associated_with_j(::irt_nav_msgs::msg::OdomInfo::_associated_with_j_type arg)
  {
    msg_.associated_with_j = std::move(arg);
    return Init_OdomInfo_odom_local_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_associated_with_i
{
public:
  explicit Init_OdomInfo_associated_with_i(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_associated_with_j associated_with_i(::irt_nav_msgs::msg::OdomInfo::_associated_with_i_type arg)
  {
    msg_.associated_with_i = std::move(arg);
    return Init_OdomInfo_associated_with_j(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_duration_to_i
{
public:
  explicit Init_OdomInfo_duration_to_i(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_associated_with_i duration_to_i(::irt_nav_msgs::msg::OdomInfo::_duration_to_i_type arg)
  {
    msg_.duration_to_i = std::move(arg);
    return Init_OdomInfo_associated_with_i(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_associated_state_timestamp_j
{
public:
  explicit Init_OdomInfo_associated_state_timestamp_j(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_duration_to_i associated_state_timestamp_j(::irt_nav_msgs::msg::OdomInfo::_associated_state_timestamp_j_type arg)
  {
    msg_.associated_state_timestamp_j = std::move(arg);
    return Init_OdomInfo_duration_to_i(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_associated_state_timestamp_i
{
public:
  explicit Init_OdomInfo_associated_state_timestamp_i(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_associated_state_timestamp_j associated_state_timestamp_i(::irt_nav_msgs::msg::OdomInfo::_associated_state_timestamp_i_type arg)
  {
    msg_.associated_state_timestamp_i = std::move(arg);
    return Init_OdomInfo_associated_state_timestamp_j(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_anchor_yaw_offset
{
public:
  explicit Init_OdomInfo_odom_anchor_yaw_offset(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_associated_state_timestamp_i odom_anchor_yaw_offset(::irt_nav_msgs::msg::OdomInfo::_odom_anchor_yaw_offset_type arg)
  {
    msg_.odom_anchor_yaw_offset = std::move(arg);
    return Init_OdomInfo_associated_state_timestamp_i(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_anchor_ecef_to_enu_rpy
{
public:
  explicit Init_OdomInfo_odom_anchor_ecef_to_enu_rpy(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_anchor_yaw_offset odom_anchor_ecef_to_enu_rpy(::irt_nav_msgs::msg::OdomInfo::_odom_anchor_ecef_to_enu_rpy_type arg)
  {
    msg_.odom_anchor_ecef_to_enu_rpy = std::move(arg);
    return Init_OdomInfo_odom_anchor_yaw_offset(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_odom_anchor_ecef_pos
{
public:
  explicit Init_OdomInfo_odom_anchor_ecef_pos(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_anchor_ecef_to_enu_rpy odom_anchor_ecef_pos(::irt_nav_msgs::msg::OdomInfo::_odom_anchor_ecef_pos_type arg)
  {
    msg_.odom_anchor_ecef_pos = std::move(arg);
    return Init_OdomInfo_odom_anchor_ecef_to_enu_rpy(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_key_previous
{
public:
  explicit Init_OdomInfo_key_previous(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_odom_anchor_ecef_pos key_previous(::irt_nav_msgs::msg::OdomInfo::_key_previous_type arg)
  {
    msg_.key_previous = std::move(arg);
    return Init_OdomInfo_odom_anchor_ecef_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_key_current
{
public:
  explicit Init_OdomInfo_key_current(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_key_previous key_current(::irt_nav_msgs::msg::OdomInfo::_key_current_type arg)
  {
    msg_.key_current = std::move(arg);
    return Init_OdomInfo_key_previous(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_counter
{
public:
  explicit Init_OdomInfo_counter(::irt_nav_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_key_current counter(::irt_nav_msgs::msg::OdomInfo::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OdomInfo_key_current(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_header
{
public:
  Init_OdomInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdomInfo_counter header(::irt_nav_msgs::msg::OdomInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OdomInfo_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::OdomInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::OdomInfo>()
{
  return irt_nav_msgs::msg::builder::Init_OdomInfo_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_
