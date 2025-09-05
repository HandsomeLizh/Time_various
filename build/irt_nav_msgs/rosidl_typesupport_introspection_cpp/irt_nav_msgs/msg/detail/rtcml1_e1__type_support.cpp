// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/RTCML1E1.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/rtcml1_e1__struct.hpp"
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

void RTCML1E1_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::RTCML1E1(_init);
}

void RTCML1E1_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::RTCML1E1 *>(message_memory);
  typed_message->~RTCML1E1();
}

size_t size_function__RTCML1E1__base(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__RTCML1E1__base(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__base(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__base(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCML1E1__base(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__base(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCML1E1__base(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__svid(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__svid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__svid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__svid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCML1E1__svid(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__svid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCML1E1__svid(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__pseudorange(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__pseudorange(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__pseudorange(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__pseudorange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCML1E1__pseudorange(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__pseudorange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCML1E1__pseudorange(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__type(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCML1E1__type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCML1E1__type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__carrier(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__carrier(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__carrier(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__carrier(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCML1E1__carrier(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__carrier(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCML1E1__carrier(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__cn0(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__cn0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__cn0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__cn0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCML1E1__cn0(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__cn0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCML1E1__cn0(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__locktime(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__locktime(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__locktime(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__locktime(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__RTCML1E1__locktime(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__locktime(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__RTCML1E1__locktime(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCML1E1__lli(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCML1E1__lli(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCML1E1__lli(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCML1E1__lli(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__RTCML1E1__lli(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__RTCML1E1__lli(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__RTCML1E1__lli(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RTCML1E1_message_member_array[11] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, tow),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, base),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__base,  // size() function pointer
    get_const_function__RTCML1E1__base,  // get_const(index) function pointer
    get_function__RTCML1E1__base,  // get(index) function pointer
    fetch_function__RTCML1E1__base,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__base,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "svid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, svid),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__svid,  // size() function pointer
    get_const_function__RTCML1E1__svid,  // get_const(index) function pointer
    get_function__RTCML1E1__svid,  // get(index) function pointer
    fetch_function__RTCML1E1__svid,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__svid,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pseudorange",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, pseudorange),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__pseudorange,  // size() function pointer
    get_const_function__RTCML1E1__pseudorange,  // get_const(index) function pointer
    get_function__RTCML1E1__pseudorange,  // get(index) function pointer
    fetch_function__RTCML1E1__pseudorange,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__pseudorange,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, type),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__type,  // size() function pointer
    get_const_function__RTCML1E1__type,  // get_const(index) function pointer
    get_function__RTCML1E1__type,  // get(index) function pointer
    fetch_function__RTCML1E1__type,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__type,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "carrier",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, carrier),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__carrier,  // size() function pointer
    get_const_function__RTCML1E1__carrier,  // get_const(index) function pointer
    get_function__RTCML1E1__carrier,  // get(index) function pointer
    fetch_function__RTCML1E1__carrier,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__carrier,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cn0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, cn0),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__cn0,  // size() function pointer
    get_const_function__RTCML1E1__cn0,  // get_const(index) function pointer
    get_function__RTCML1E1__cn0,  // get(index) function pointer
    fetch_function__RTCML1E1__cn0,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__cn0,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "locktime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, locktime),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__locktime,  // size() function pointer
    get_const_function__RTCML1E1__locktime,  // get_const(index) function pointer
    get_function__RTCML1E1__locktime,  // get(index) function pointer
    fetch_function__RTCML1E1__locktime,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__locktime,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lli",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, lli),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCML1E1__lli,  // size() function pointer
    get_const_function__RTCML1E1__lli,  // get_const(index) function pointer
    get_function__RTCML1E1__lli,  // get(index) function pointer
    fetch_function__RTCML1E1__lli,  // fetch(index, &value) function pointer
    assign_function__RTCML1E1__lli,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_station_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCML1E1, reference_station_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RTCML1E1_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "RTCML1E1",  // message name
  11,  // number of fields
  sizeof(irt_nav_msgs::msg::RTCML1E1),
  RTCML1E1_message_member_array,  // message members
  RTCML1E1_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCML1E1_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RTCML1E1_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RTCML1E1_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::RTCML1E1>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCML1E1_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, RTCML1E1)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCML1E1_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
