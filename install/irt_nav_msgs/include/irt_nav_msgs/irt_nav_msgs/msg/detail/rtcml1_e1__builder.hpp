// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/RTCML1E1.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/rtcml1_e1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCML1E1_reference_station_id
{
public:
  explicit Init_RTCML1E1_reference_station_id(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::RTCML1E1 reference_station_id(::irt_nav_msgs::msg::RTCML1E1::_reference_station_id_type arg)
  {
    msg_.reference_station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_lli
{
public:
  explicit Init_RTCML1E1_lli(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_reference_station_id lli(::irt_nav_msgs::msg::RTCML1E1::_lli_type arg)
  {
    msg_.lli = std::move(arg);
    return Init_RTCML1E1_reference_station_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_locktime
{
public:
  explicit Init_RTCML1E1_locktime(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_lli locktime(::irt_nav_msgs::msg::RTCML1E1::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_RTCML1E1_lli(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_cn0
{
public:
  explicit Init_RTCML1E1_cn0(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_locktime cn0(::irt_nav_msgs::msg::RTCML1E1::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_RTCML1E1_locktime(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_carrier
{
public:
  explicit Init_RTCML1E1_carrier(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_cn0 carrier(::irt_nav_msgs::msg::RTCML1E1::_carrier_type arg)
  {
    msg_.carrier = std::move(arg);
    return Init_RTCML1E1_cn0(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_type
{
public:
  explicit Init_RTCML1E1_type(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_carrier type(::irt_nav_msgs::msg::RTCML1E1::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RTCML1E1_carrier(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_pseudorange
{
public:
  explicit Init_RTCML1E1_pseudorange(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_type pseudorange(::irt_nav_msgs::msg::RTCML1E1::_pseudorange_type arg)
  {
    msg_.pseudorange = std::move(arg);
    return Init_RTCML1E1_type(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_svid
{
public:
  explicit Init_RTCML1E1_svid(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_pseudorange svid(::irt_nav_msgs::msg::RTCML1E1::_svid_type arg)
  {
    msg_.svid = std::move(arg);
    return Init_RTCML1E1_pseudorange(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_base
{
public:
  explicit Init_RTCML1E1_base(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_svid base(::irt_nav_msgs::msg::RTCML1E1::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_RTCML1E1_svid(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_tow
{
public:
  explicit Init_RTCML1E1_tow(::irt_nav_msgs::msg::RTCML1E1 & msg)
  : msg_(msg)
  {}
  Init_RTCML1E1_base tow(::irt_nav_msgs::msg::RTCML1E1::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_RTCML1E1_base(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

class Init_RTCML1E1_header
{
public:
  Init_RTCML1E1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCML1E1_tow header(::irt_nav_msgs::msg::RTCML1E1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RTCML1E1_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCML1E1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::RTCML1E1>()
{
  return irt_nav_msgs::msg::builder::Init_RTCML1E1_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__BUILDER_HPP_
