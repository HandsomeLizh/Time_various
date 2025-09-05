// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_ElapsedTimeFGO_num_new_factors
{
public:
  explicit Init_ElapsedTimeFGO_num_new_factors(::irt_nav_msgs::msg::ElapsedTimeFGO & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::ElapsedTimeFGO num_new_factors(::irt_nav_msgs::msg::ElapsedTimeFGO::_num_new_factors_type arg)
  {
    msg_.num_new_factors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

class Init_ElapsedTimeFGO_duration_optimization
{
public:
  explicit Init_ElapsedTimeFGO_duration_optimization(::irt_nav_msgs::msg::ElapsedTimeFGO & msg)
  : msg_(msg)
  {}
  Init_ElapsedTimeFGO_num_new_factors duration_optimization(::irt_nav_msgs::msg::ElapsedTimeFGO::_duration_optimization_type arg)
  {
    msg_.duration_optimization = std::move(arg);
    return Init_ElapsedTimeFGO_num_new_factors(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

class Init_ElapsedTimeFGO_duration_construction
{
public:
  explicit Init_ElapsedTimeFGO_duration_construction(::irt_nav_msgs::msg::ElapsedTimeFGO & msg)
  : msg_(msg)
  {}
  Init_ElapsedTimeFGO_duration_optimization duration_construction(::irt_nav_msgs::msg::ElapsedTimeFGO::_duration_construction_type arg)
  {
    msg_.duration_construction = std::move(arg);
    return Init_ElapsedTimeFGO_duration_optimization(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

class Init_ElapsedTimeFGO_ts_start_optimization
{
public:
  explicit Init_ElapsedTimeFGO_ts_start_optimization(::irt_nav_msgs::msg::ElapsedTimeFGO & msg)
  : msg_(msg)
  {}
  Init_ElapsedTimeFGO_duration_construction ts_start_optimization(::irt_nav_msgs::msg::ElapsedTimeFGO::_ts_start_optimization_type arg)
  {
    msg_.ts_start_optimization = std::move(arg);
    return Init_ElapsedTimeFGO_duration_construction(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

class Init_ElapsedTimeFGO_ts_start_construction
{
public:
  explicit Init_ElapsedTimeFGO_ts_start_construction(::irt_nav_msgs::msg::ElapsedTimeFGO & msg)
  : msg_(msg)
  {}
  Init_ElapsedTimeFGO_ts_start_optimization ts_start_construction(::irt_nav_msgs::msg::ElapsedTimeFGO::_ts_start_construction_type arg)
  {
    msg_.ts_start_construction = std::move(arg);
    return Init_ElapsedTimeFGO_ts_start_optimization(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

class Init_ElapsedTimeFGO_header
{
public:
  Init_ElapsedTimeFGO_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElapsedTimeFGO_ts_start_construction header(::irt_nav_msgs::msg::ElapsedTimeFGO::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ElapsedTimeFGO_ts_start_construction(msg_);
  }

private:
  ::irt_nav_msgs::msg::ElapsedTimeFGO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::ElapsedTimeFGO>()
{
  return irt_nav_msgs::msg::builder::Init_ElapsedTimeFGO_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__BUILDER_HPP_
