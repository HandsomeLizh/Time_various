// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/rtcmv3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCMV3_reference_station_id
{
public:
  explicit Init_RTCMV3_reference_station_id(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::RTCMV3 reference_station_id(::irt_nav_msgs::msg::RTCMV3::_reference_station_id_type arg)
  {
    msg_.reference_station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_lli
{
public:
  explicit Init_RTCMV3_lli(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_reference_station_id lli(::irt_nav_msgs::msg::RTCMV3::_lli_type arg)
  {
    msg_.lli = std::move(arg);
    return Init_RTCMV3_reference_station_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_locktime
{
public:
  explicit Init_RTCMV3_locktime(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_lli locktime(::irt_nav_msgs::msg::RTCMV3::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_RTCMV3_lli(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_cn0
{
public:
  explicit Init_RTCMV3_cn0(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_locktime cn0(::irt_nav_msgs::msg::RTCMV3::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_RTCMV3_locktime(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_carrier
{
public:
  explicit Init_RTCMV3_carrier(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_cn0 carrier(::irt_nav_msgs::msg::RTCMV3::_carrier_type arg)
  {
    msg_.carrier = std::move(arg);
    return Init_RTCMV3_cn0(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_type
{
public:
  explicit Init_RTCMV3_type(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_carrier type(::irt_nav_msgs::msg::RTCMV3::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RTCMV3_carrier(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_pseudorange
{
public:
  explicit Init_RTCMV3_pseudorange(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_type pseudorange(::irt_nav_msgs::msg::RTCMV3::_pseudorange_type arg)
  {
    msg_.pseudorange = std::move(arg);
    return Init_RTCMV3_type(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_svid
{
public:
  explicit Init_RTCMV3_svid(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_pseudorange svid(::irt_nav_msgs::msg::RTCMV3::_svid_type arg)
  {
    msg_.svid = std::move(arg);
    return Init_RTCMV3_pseudorange(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_base
{
public:
  explicit Init_RTCMV3_base(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_svid base(::irt_nav_msgs::msg::RTCMV3::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_RTCMV3_svid(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_tow
{
public:
  explicit Init_RTCMV3_tow(::irt_nav_msgs::msg::RTCMV3 & msg)
  : msg_(msg)
  {}
  Init_RTCMV3_base tow(::irt_nav_msgs::msg::RTCMV3::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_RTCMV3_base(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

class Init_RTCMV3_header
{
public:
  Init_RTCMV3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCMV3_tow header(::irt_nav_msgs::msg::RTCMV3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RTCMV3_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCMV3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::RTCMV3>()
{
  return irt_nav_msgs::msg::builder::Init_RTCMV3_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__BUILDER_HPP_
