// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/rtcmv3__struct.hpp"
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

void RTCMV3_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::RTCMV3(_init);
}

void RTCMV3_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::RTCMV3 *>(message_memory);
  typed_message->~RTCMV3();
}

size_t size_function__RTCMV3__base(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__RTCMV3__base(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__base(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__base(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCMV3__base(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__base(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCMV3__base(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__svid(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__RTCMV3__svid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__svid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__svid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCMV3__svid(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__svid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCMV3__svid(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__pseudorange(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__pseudorange(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__pseudorange(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__pseudorange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCMV3__pseudorange(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__pseudorange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCMV3__pseudorange(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__type(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCMV3__type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCMV3__type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__carrier(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__carrier(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__carrier(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__carrier(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCMV3__carrier(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__carrier(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCMV3__carrier(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__cn0(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__cn0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__cn0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__cn0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCMV3__cn0(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__cn0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCMV3__cn0(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__locktime(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__locktime(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__locktime(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__locktime(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__RTCMV3__locktime(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__locktime(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__RTCMV3__locktime(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCMV3__lli(const void * untyped_member)
{
  (void)untyped_member;
  return 200;
}

const void * get_const_function__RTCMV3__lli(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 200> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCMV3__lli(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 200> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCMV3__lli(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__RTCMV3__lli(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__RTCMV3__lli(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__RTCMV3__lli(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RTCMV3_message_member_array[11] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, header),  // bytes offset in struct
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
    offsetof(irt_nav_msgs::msg::RTCMV3, tow),  // bytes offset in struct
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
    offsetof(irt_nav_msgs::msg::RTCMV3, base),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__base,  // size() function pointer
    get_const_function__RTCMV3__base,  // get_const(index) function pointer
    get_function__RTCMV3__base,  // get(index) function pointer
    fetch_function__RTCMV3__base,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__base,  // assign(index, value) function pointer
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
    offsetof(irt_nav_msgs::msg::RTCMV3, svid),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__svid,  // size() function pointer
    get_const_function__RTCMV3__svid,  // get_const(index) function pointer
    get_function__RTCMV3__svid,  // get(index) function pointer
    fetch_function__RTCMV3__svid,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__svid,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pseudorange",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, pseudorange),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__pseudorange,  // size() function pointer
    get_const_function__RTCMV3__pseudorange,  // get_const(index) function pointer
    get_function__RTCMV3__pseudorange,  // get(index) function pointer
    fetch_function__RTCMV3__pseudorange,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__pseudorange,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, type),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__type,  // size() function pointer
    get_const_function__RTCMV3__type,  // get_const(index) function pointer
    get_function__RTCMV3__type,  // get(index) function pointer
    fetch_function__RTCMV3__type,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__type,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "carrier",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, carrier),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__carrier,  // size() function pointer
    get_const_function__RTCMV3__carrier,  // get_const(index) function pointer
    get_function__RTCMV3__carrier,  // get(index) function pointer
    fetch_function__RTCMV3__carrier,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__carrier,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cn0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, cn0),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__cn0,  // size() function pointer
    get_const_function__RTCMV3__cn0,  // get_const(index) function pointer
    get_function__RTCMV3__cn0,  // get(index) function pointer
    fetch_function__RTCMV3__cn0,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__cn0,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "locktime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, locktime),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__locktime,  // size() function pointer
    get_const_function__RTCMV3__locktime,  // get_const(index) function pointer
    get_function__RTCMV3__locktime,  // get(index) function pointer
    fetch_function__RTCMV3__locktime,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__locktime,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lli",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    200,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCMV3, lli),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCMV3__lli,  // size() function pointer
    get_const_function__RTCMV3__lli,  // get_const(index) function pointer
    get_function__RTCMV3__lli,  // get(index) function pointer
    fetch_function__RTCMV3__lli,  // fetch(index, &value) function pointer
    assign_function__RTCMV3__lli,  // assign(index, value) function pointer
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
    offsetof(irt_nav_msgs::msg::RTCMV3, reference_station_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RTCMV3_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "RTCMV3",  // message name
  11,  // number of fields
  sizeof(irt_nav_msgs::msg::RTCMV3),
  RTCMV3_message_member_array,  // message members
  RTCMV3_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCMV3_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RTCMV3_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RTCMV3_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::RTCMV3>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCMV3_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, RTCMV3)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCMV3_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
