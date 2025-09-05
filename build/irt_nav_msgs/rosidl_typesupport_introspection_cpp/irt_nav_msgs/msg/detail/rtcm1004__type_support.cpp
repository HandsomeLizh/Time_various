// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/rtcm1004__struct.hpp"
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

void RTCM1004_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::RTCM1004(_init);
}

void RTCM1004_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::RTCM1004 *>(message_memory);
  typed_message->~RTCM1004();
}

size_t size_function__RTCM1004__sat_id(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__sat_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__sat_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__sat_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCM1004__sat_id(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__sat_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCM1004__sat_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_code_indicator(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_code_indicator(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_code_indicator(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_code_indicator(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCM1004__l1_code_indicator(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_code_indicator(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCM1004__l1_code_indicator(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_pseudorange_mod1lightms_m(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_pseudorange_mod1lightms_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_pseudorange_mod1lightms_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_pseudorange_mod1lightms_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l1_pseudorange_mod1lightms_m(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_pseudorange_mod1lightms_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l1_pseudorange_mod1lightms_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l1_phasenrange_l1_pseudorange_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_locktime_indicator(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_locktime_indicator(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_locktime_indicator(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_locktime_indicator(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCM1004__l1_locktime_indicator(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_locktime_indicator(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCM1004__l1_locktime_indicator(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l1_cnr_db_hz(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l1_cnr_db_hz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l1_cnr_db_hz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l1_cnr_db_hz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l1_cnr_db_hz(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l1_cnr_db_hz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l1_cnr_db_hz(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l2_code_indicator(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l2_code_indicator(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l2_code_indicator(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l2_code_indicator(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCM1004__l2_code_indicator(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l2_code_indicator(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCM1004__l2_code_indicator(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l2_l1_pseudorange_difference_m(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l2_l1_pseudorange_difference_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l2_l1_pseudorange_difference_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l2_l1_pseudorange_difference_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l2_l1_pseudorange_difference_m(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l2_l1_pseudorange_difference_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l2_l1_pseudorange_difference_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l2_phaserange_l1_pseudorange_m(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l2_phaserange_l1_pseudorange_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l2_phaserange_l1_pseudorange_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l2_phaserange_l1_pseudorange_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l2_phaserange_l1_pseudorange_m(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l2_phaserange_l1_pseudorange_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l2_phaserange_l1_pseudorange_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l2_locktime_indicator(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l2_locktime_indicator(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l2_locktime_indicator(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l2_locktime_indicator(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RTCM1004__l2_locktime_indicator(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l2_locktime_indicator(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RTCM1004__l2_locktime_indicator(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__RTCM1004__l2_cnr_db_hz(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RTCM1004__l2_cnr_db_hz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RTCM1004__l2_cnr_db_hz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RTCM1004__l2_cnr_db_hz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RTCM1004__l2_cnr_db_hz(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RTCM1004__l2_cnr_db_hz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RTCM1004__l2_cnr_db_hz(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RTCM1004_message_member_array[21] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, msg_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_station_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, ref_station_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gps_epoch_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, gps_epoch_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flag_gnss_synchronous",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, flag_gnss_synchronous),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "no_gps_sat_signal_processed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, no_gps_sat_signal_processed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "divergency_free_smoothing_indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, divergency_free_smoothing_indicator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "smoothing_interval",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, smoothing_interval),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sat_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, sat_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__sat_id,  // size() function pointer
    get_const_function__RTCM1004__sat_id,  // get_const(index) function pointer
    get_function__RTCM1004__sat_id,  // get(index) function pointer
    fetch_function__RTCM1004__sat_id,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__sat_id,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_code_indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_code_indicator),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_code_indicator,  // size() function pointer
    get_const_function__RTCM1004__l1_code_indicator,  // get_const(index) function pointer
    get_function__RTCM1004__l1_code_indicator,  // get(index) function pointer
    fetch_function__RTCM1004__l1_code_indicator,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_code_indicator,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_pseudorange_mod1lightms_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_pseudorange_mod1lightms_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_pseudorange_mod1lightms_m,  // size() function pointer
    get_const_function__RTCM1004__l1_pseudorange_mod1lightms_m,  // get_const(index) function pointer
    get_function__RTCM1004__l1_pseudorange_mod1lightms_m,  // get(index) function pointer
    fetch_function__RTCM1004__l1_pseudorange_mod1lightms_m,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_pseudorange_mod1lightms_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_phasenrange_l1_pseudorange_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_phasenrange_l1_pseudorange_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_phasenrange_l1_pseudorange_m,  // size() function pointer
    get_const_function__RTCM1004__l1_phasenrange_l1_pseudorange_m,  // get_const(index) function pointer
    get_function__RTCM1004__l1_phasenrange_l1_pseudorange_m,  // get(index) function pointer
    fetch_function__RTCM1004__l1_phasenrange_l1_pseudorange_m,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_phasenrange_l1_pseudorange_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_locktime_indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_locktime_indicator),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_locktime_indicator,  // size() function pointer
    get_const_function__RTCM1004__l1_locktime_indicator,  // get_const(index) function pointer
    get_function__RTCM1004__l1_locktime_indicator,  // get(index) function pointer
    fetch_function__RTCM1004__l1_locktime_indicator,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_locktime_indicator,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_integer_pseudorange_modulus_ambiguity_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_integer_pseudorange_modulus_ambiguity_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m,  // size() function pointer
    get_const_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m,  // get_const(index) function pointer
    get_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m,  // get(index) function pointer
    fetch_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_integer_pseudorange_modulus_ambiguity_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l1_cnr_db_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l1_cnr_db_hz),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l1_cnr_db_hz,  // size() function pointer
    get_const_function__RTCM1004__l1_cnr_db_hz,  // get_const(index) function pointer
    get_function__RTCM1004__l1_cnr_db_hz,  // get(index) function pointer
    fetch_function__RTCM1004__l1_cnr_db_hz,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l1_cnr_db_hz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_code_indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l2_code_indicator),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l2_code_indicator,  // size() function pointer
    get_const_function__RTCM1004__l2_code_indicator,  // get_const(index) function pointer
    get_function__RTCM1004__l2_code_indicator,  // get(index) function pointer
    fetch_function__RTCM1004__l2_code_indicator,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l2_code_indicator,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_l1_pseudorange_difference_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l2_l1_pseudorange_difference_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l2_l1_pseudorange_difference_m,  // size() function pointer
    get_const_function__RTCM1004__l2_l1_pseudorange_difference_m,  // get_const(index) function pointer
    get_function__RTCM1004__l2_l1_pseudorange_difference_m,  // get(index) function pointer
    fetch_function__RTCM1004__l2_l1_pseudorange_difference_m,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l2_l1_pseudorange_difference_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_phaserange_l1_pseudorange_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l2_phaserange_l1_pseudorange_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l2_phaserange_l1_pseudorange_m,  // size() function pointer
    get_const_function__RTCM1004__l2_phaserange_l1_pseudorange_m,  // get_const(index) function pointer
    get_function__RTCM1004__l2_phaserange_l1_pseudorange_m,  // get(index) function pointer
    fetch_function__RTCM1004__l2_phaserange_l1_pseudorange_m,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l2_phaserange_l1_pseudorange_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_locktime_indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l2_locktime_indicator),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l2_locktime_indicator,  // size() function pointer
    get_const_function__RTCM1004__l2_locktime_indicator,  // get_const(index) function pointer
    get_function__RTCM1004__l2_locktime_indicator,  // get(index) function pointer
    fetch_function__RTCM1004__l2_locktime_indicator,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l2_locktime_indicator,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_cnr_db_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, l2_cnr_db_hz),  // bytes offset in struct
    nullptr,  // default value
    size_function__RTCM1004__l2_cnr_db_hz,  // size() function pointer
    get_const_function__RTCM1004__l2_cnr_db_hz,  // get_const(index) function pointer
    get_function__RTCM1004__l2_cnr_db_hz,  // get(index) function pointer
    fetch_function__RTCM1004__l2_cnr_db_hz,  // fetch(index, &value) function pointer
    assign_function__RTCM1004__l2_cnr_db_hz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::RTCM1004, msg_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RTCM1004_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "RTCM1004",  // message name
  21,  // number of fields
  sizeof(irt_nav_msgs::msg::RTCM1004),
  RTCM1004_message_member_array,  // message members
  RTCM1004_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCM1004_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RTCM1004_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RTCM1004_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::RTCM1004>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCM1004_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, RTCM1004)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::RTCM1004_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
