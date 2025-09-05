// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/PVTLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVTLS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PVTLS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/pvtls__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PVTLS_ls_ant_aux
{
public:
  explicit Init_PVTLS_ls_ant_aux(::irt_nav_msgs::msg::PVTLS & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::PVTLS ls_ant_aux(::irt_nav_msgs::msg::PVTLS::_ls_ant_aux_type arg)
  {
    msg_.ls_ant_aux = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVTLS msg_;
};

class Init_PVTLS_ls_ant_main
{
public:
  explicit Init_PVTLS_ls_ant_main(::irt_nav_msgs::msg::PVTLS & msg)
  : msg_(msg)
  {}
  Init_PVTLS_ls_ant_aux ls_ant_main(::irt_nav_msgs::msg::PVTLS::_ls_ant_main_type arg)
  {
    msg_.ls_ant_main = std::move(arg);
    return Init_PVTLS_ls_ant_aux(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVTLS msg_;
};

class Init_PVTLS_header
{
public:
  Init_PVTLS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PVTLS_ls_ant_main header(::irt_nav_msgs::msg::PVTLS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PVTLS_ls_ant_main(msg_);
  }

private:
  ::irt_nav_msgs::msg::PVTLS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::PVTLS>()
{
  return irt_nav_msgs::msg::builder::Init_PVTLS_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVTLS__BUILDER_HPP_
