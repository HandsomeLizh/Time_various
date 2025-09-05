// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SimulationTime.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/simulation_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SimulationTime_sim_time
{
public:
  explicit Init_SimulationTime_sim_time(::irt_nav_msgs::msg::SimulationTime & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SimulationTime sim_time(::irt_nav_msgs::msg::SimulationTime::_sim_time_type arg)
  {
    msg_.sim_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SimulationTime msg_;
};

class Init_SimulationTime_header
{
public:
  Init_SimulationTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulationTime_sim_time header(::irt_nav_msgs::msg::SimulationTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SimulationTime_sim_time(msg_);
  }

private:
  ::irt_nav_msgs::msg::SimulationTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SimulationTime>()
{
  return irt_nav_msgs::msg::builder::Init_SimulationTime_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SIMULATION_TIME__BUILDER_HPP_
