// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/nav_filter__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irt_nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NavFilter_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::NavFilter(_init);
}

void NavFilter_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::NavFilter *>(message_memory);
  typed_message->~NavFilter();
}

size_t size_function__NavFilter__state_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__NavFilter__state_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__state_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__state_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__state_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__state_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__state_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__var_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * get_const_function__NavFilter__var_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 17> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__var_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 17> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__var_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__var_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__var_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__var_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__euler_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__euler_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__euler_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__euler_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__euler_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__euler_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__euler_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_ecef_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_ecef_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_ecef_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_ecef_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_ecef_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_ecef_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_ecef_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_llh_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_llh_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_llh_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_llh_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_llh_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_llh_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_llh_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_vel_ekf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_vel_ekf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_vel_ekf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_vel_ekf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_vel_ekf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_vel_ekf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_vel_ekf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__state_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__NavFilter__state_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__state_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__state_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__state_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__state_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__state_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__var_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * get_const_function__NavFilter__var_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 17> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__var_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 17> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__var_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__var_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__var_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__var_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__euler_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__euler_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__euler_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__euler_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__euler_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__euler_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__euler_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_ecef_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_ecef_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_ecef_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_ecef_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_ecef_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_ecef_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_ecef_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_llh_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_llh_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_llh_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_llh_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_llh_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_llh_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_llh_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__NavFilter__ant_vel_ukf(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__NavFilter__ant_vel_ukf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__NavFilter__ant_vel_ukf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavFilter__ant_vel_ukf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavFilter__ant_vel_ukf(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavFilter__ant_vel_ukf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavFilter__ant_vel_ukf(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavFilter_message_member_array[20] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "filter_enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, filter_enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gnss_obs_delay",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, gnss_obs_delay),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, state_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__state_ekf,  // size() function pointer
    get_const_function__NavFilter__state_ekf,  // get_const(index) function pointer
    get_function__NavFilter__state_ekf,  // get(index) function pointer
    fetch_function__NavFilter__state_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__state_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "var_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, var_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__var_ekf,  // size() function pointer
    get_const_function__NavFilter__var_ekf,  // get_const(index) function pointer
    get_function__NavFilter__var_ekf,  // get(index) function pointer
    fetch_function__NavFilter__var_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__var_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_normed_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, vel_normed_ekf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "euler_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, euler_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__euler_ekf,  // size() function pointer
    get_const_function__NavFilter__euler_ekf,  // get_const(index) function pointer
    get_function__NavFilter__euler_ekf,  // get(index) function pointer
    fetch_function__NavFilter__euler_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__euler_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "update_exit_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, update_exit_ekf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_ecef_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_ecef_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_ecef_ekf,  // size() function pointer
    get_const_function__NavFilter__ant_ecef_ekf,  // get_const(index) function pointer
    get_function__NavFilter__ant_ecef_ekf,  // get(index) function pointer
    fetch_function__NavFilter__ant_ecef_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_ecef_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_llh_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_llh_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_llh_ekf,  // size() function pointer
    get_const_function__NavFilter__ant_llh_ekf,  // get_const(index) function pointer
    get_function__NavFilter__ant_llh_ekf,  // get(index) function pointer
    fetch_function__NavFilter__ant_llh_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_llh_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_vel_ekf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_vel_ekf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_vel_ekf,  // size() function pointer
    get_const_function__NavFilter__ant_vel_ekf,  // get_const(index) function pointer
    get_function__NavFilter__ant_vel_ekf,  // get(index) function pointer
    fetch_function__NavFilter__ant_vel_ekf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_vel_ekf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, state_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__state_ukf,  // size() function pointer
    get_const_function__NavFilter__state_ukf,  // get_const(index) function pointer
    get_function__NavFilter__state_ukf,  // get(index) function pointer
    fetch_function__NavFilter__state_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__state_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "var_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, var_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__var_ukf,  // size() function pointer
    get_const_function__NavFilter__var_ukf,  // get_const(index) function pointer
    get_function__NavFilter__var_ukf,  // get(index) function pointer
    fetch_function__NavFilter__var_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__var_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_normed_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, vel_normed_ukf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "euler_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, euler_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__euler_ukf,  // size() function pointer
    get_const_function__NavFilter__euler_ukf,  // get_const(index) function pointer
    get_function__NavFilter__euler_ukf,  // get(index) function pointer
    fetch_function__NavFilter__euler_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__euler_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "update_exit_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, update_exit_ukf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_ecef_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_ecef_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_ecef_ukf,  // size() function pointer
    get_const_function__NavFilter__ant_ecef_ukf,  // get_const(index) function pointer
    get_function__NavFilter__ant_ecef_ukf,  // get(index) function pointer
    fetch_function__NavFilter__ant_ecef_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_ecef_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_llh_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_llh_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_llh_ukf,  // size() function pointer
    get_const_function__NavFilter__ant_llh_ukf,  // get_const(index) function pointer
    get_function__NavFilter__ant_llh_ukf,  // get(index) function pointer
    fetch_function__NavFilter__ant_llh_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_llh_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_vel_ukf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, ant_vel_ukf),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavFilter__ant_vel_ukf,  // size() function pointer
    get_const_function__NavFilter__ant_vel_ukf,  // get_const(index) function pointer
    get_function__NavFilter__ant_vel_ukf,  // get(index) function pointer
    fetch_function__NavFilter__ant_vel_ukf,  // fetch(index, &value) function pointer
    assign_function__NavFilter__ant_vel_ukf,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "filter_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::NavFilter, filter_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavFilter_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "NavFilter",  // message name
  20,  // number of fields
  sizeof(irt_nav_msgs::msg::NavFilter),
  NavFilter_message_member_array,  // message members
  NavFilter_init_function,  // function to initialize message memory (memory has to be allocated)
  NavFilter_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavFilter_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavFilter_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace irt_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irt_nav_msgs::msg::NavFilter>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::NavFilter_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, NavFilter)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::NavFilter_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
