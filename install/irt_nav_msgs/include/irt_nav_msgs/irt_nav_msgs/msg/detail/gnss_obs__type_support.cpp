// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/gnss_obs__struct.hpp"
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

void GNSSObs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::GNSSObs(_init);
}

void GNSSObs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::GNSSObs *>(message_memory);
  typed_message->~GNSSObs();
}

size_t size_function__GNSSObs__satelite_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__satelite_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__satelite_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__satelite_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__GNSSObs__satelite_pos(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__satelite_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__GNSSObs__satelite_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__satelite_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__satelite_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__satelite_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__satelite_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__satelite_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__GNSSObs__satelite_vec(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__satelite_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__GNSSObs__satelite_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__satelite_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__prn(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__prn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__prn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__GNSSObs__prn(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__GNSSObs__prn(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__prn(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__svid_carrier_used(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__svid_carrier_used(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__svid_carrier_used(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__svid_carrier_used(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__GNSSObs__svid_carrier_used(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__svid_carrier_used(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__GNSSObs__svid_carrier_used(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__svid_carrier_used(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__pseudorange(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__pseudorange(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__pseudorange(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__pseudorange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__pseudorange(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__pseudorange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__pseudorange(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__pseudorange(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__pseudorange_raw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__pseudorange_raw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__pseudorange_raw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__pseudorange_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__pseudorange_raw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__pseudorange_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__pseudorange_raw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__pseudorange_raw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__pseudorange_satclk_corrected(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__pseudorange_satclk_corrected(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__pseudorange_satclk_corrected(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__pseudorange_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__pseudorange_satclk_corrected(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__pseudorange_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__pseudorange_satclk_corrected(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__pseudorange_satclk_corrected(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__deltarange(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__deltarange(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__deltarange(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__deltarange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__deltarange(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__deltarange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__deltarange(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__deltarange(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__deltarange_raw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__deltarange_raw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__deltarange_raw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__deltarange_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__deltarange_raw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__deltarange_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__deltarange_raw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__deltarange_raw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__deltarange_satclk_corrected(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__deltarange_satclk_corrected(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__deltarange_satclk_corrected(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__deltarange_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__deltarange_satclk_corrected(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__deltarange_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__deltarange_satclk_corrected(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__deltarange_satclk_corrected(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__pseudorange_var(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__pseudorange_var(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__pseudorange_var(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__pseudorange_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__pseudorange_var(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__pseudorange_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__pseudorange_var(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__pseudorange_var(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__pseudorange_var_measured(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__pseudorange_var_measured(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__pseudorange_var_measured(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__pseudorange_var_measured(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__pseudorange_var_measured(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__pseudorange_var_measured(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__pseudorange_var_measured(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__pseudorange_var_measured(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__deltarange_var(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__deltarange_var(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__deltarange_var(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__deltarange_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__deltarange_var(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__deltarange_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__deltarange_var(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__deltarange_var(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__carrierphase(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__carrierphase(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__carrierphase(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__carrierphase(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__carrierphase(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__carrierphase(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__carrierphase(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__carrierphase(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__carrierphase_raw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__carrierphase_raw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__carrierphase_raw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__carrierphase_raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__carrierphase_raw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__carrierphase_raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__carrierphase_raw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__carrierphase_raw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__carrierphase_satclk_corrected(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__carrierphase_satclk_corrected(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__carrierphase_satclk_corrected(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__carrierphase_satclk_corrected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__carrierphase_satclk_corrected(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__carrierphase_satclk_corrected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__carrierphase_satclk_corrected(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__carrierphase_satclk_corrected(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__carrierphase_var_measured(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__carrierphase_var_measured(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__carrierphase_var_measured(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__carrierphase_var_measured(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__carrierphase_var_measured(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__carrierphase_var_measured(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__carrierphase_var_measured(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__carrierphase_var_measured(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__elevation_angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__elevation_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__elevation_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__elevation_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__elevation_angle(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__elevation_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__elevation_angle(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__elevation_angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__azimuth_angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__azimuth_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__azimuth_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__azimuth_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__azimuth_angle(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__azimuth_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__azimuth_angle(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__azimuth_angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__locktime(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__locktime(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__locktime(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__locktime(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__locktime(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__locktime(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__locktime(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__locktime(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObs__cn0(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObs__cn0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObs__cn0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObs__cn0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GNSSObs__cn0(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GNSSObs__cn0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GNSSObs__cn0(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GNSSObs__cn0(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GNSSObs_message_member_array[30] = {
  {
    "time_receive",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, time_receive),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "integrity_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, integrity_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd_idx_sync_ref",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, dd_idx_sync_ref),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd_idx_sync_user",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, dd_idx_sync_user),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "satelite_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, satelite_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__satelite_pos,  // size() function pointer
    get_const_function__GNSSObs__satelite_pos,  // get_const(index) function pointer
    get_function__GNSSObs__satelite_pos,  // get(index) function pointer
    fetch_function__GNSSObs__satelite_pos,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__satelite_pos,  // assign(index, value) function pointer
    resize_function__GNSSObs__satelite_pos  // resize(index) function pointer
  },
  {
    "satelite_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, satelite_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__satelite_vec,  // size() function pointer
    get_const_function__GNSSObs__satelite_vec,  // get_const(index) function pointer
    get_function__GNSSObs__satelite_vec,  // get(index) function pointer
    fetch_function__GNSSObs__satelite_vec,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__satelite_vec,  // assign(index, value) function pointer
    resize_function__GNSSObs__satelite_vec  // resize(index) function pointer
  },
  {
    "base_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, base_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, prn),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__prn,  // size() function pointer
    get_const_function__GNSSObs__prn,  // get_const(index) function pointer
    get_function__GNSSObs__prn,  // get(index) function pointer
    fetch_function__GNSSObs__prn,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__prn,  // assign(index, value) function pointer
    resize_function__GNSSObs__prn  // resize(index) function pointer
  },
  {
    "svid_carrier_used",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, svid_carrier_used),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__svid_carrier_used,  // size() function pointer
    get_const_function__GNSSObs__svid_carrier_used,  // get_const(index) function pointer
    get_function__GNSSObs__svid_carrier_used,  // get(index) function pointer
    fetch_function__GNSSObs__svid_carrier_used,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__svid_carrier_used,  // assign(index, value) function pointer
    resize_function__GNSSObs__svid_carrier_used  // resize(index) function pointer
  },
  {
    "pseudorange",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, pseudorange),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__pseudorange,  // size() function pointer
    get_const_function__GNSSObs__pseudorange,  // get_const(index) function pointer
    get_function__GNSSObs__pseudorange,  // get(index) function pointer
    fetch_function__GNSSObs__pseudorange,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__pseudorange,  // assign(index, value) function pointer
    resize_function__GNSSObs__pseudorange  // resize(index) function pointer
  },
  {
    "pseudorange_raw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, pseudorange_raw),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__pseudorange_raw,  // size() function pointer
    get_const_function__GNSSObs__pseudorange_raw,  // get_const(index) function pointer
    get_function__GNSSObs__pseudorange_raw,  // get(index) function pointer
    fetch_function__GNSSObs__pseudorange_raw,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__pseudorange_raw,  // assign(index, value) function pointer
    resize_function__GNSSObs__pseudorange_raw  // resize(index) function pointer
  },
  {
    "pseudorange_satclk_corrected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, pseudorange_satclk_corrected),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__pseudorange_satclk_corrected,  // size() function pointer
    get_const_function__GNSSObs__pseudorange_satclk_corrected,  // get_const(index) function pointer
    get_function__GNSSObs__pseudorange_satclk_corrected,  // get(index) function pointer
    fetch_function__GNSSObs__pseudorange_satclk_corrected,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__pseudorange_satclk_corrected,  // assign(index, value) function pointer
    resize_function__GNSSObs__pseudorange_satclk_corrected  // resize(index) function pointer
  },
  {
    "deltarange",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, deltarange),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__deltarange,  // size() function pointer
    get_const_function__GNSSObs__deltarange,  // get_const(index) function pointer
    get_function__GNSSObs__deltarange,  // get(index) function pointer
    fetch_function__GNSSObs__deltarange,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__deltarange,  // assign(index, value) function pointer
    resize_function__GNSSObs__deltarange  // resize(index) function pointer
  },
  {
    "deltarange_raw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, deltarange_raw),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__deltarange_raw,  // size() function pointer
    get_const_function__GNSSObs__deltarange_raw,  // get_const(index) function pointer
    get_function__GNSSObs__deltarange_raw,  // get(index) function pointer
    fetch_function__GNSSObs__deltarange_raw,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__deltarange_raw,  // assign(index, value) function pointer
    resize_function__GNSSObs__deltarange_raw  // resize(index) function pointer
  },
  {
    "deltarange_satclk_corrected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, deltarange_satclk_corrected),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__deltarange_satclk_corrected,  // size() function pointer
    get_const_function__GNSSObs__deltarange_satclk_corrected,  // get_const(index) function pointer
    get_function__GNSSObs__deltarange_satclk_corrected,  // get(index) function pointer
    fetch_function__GNSSObs__deltarange_satclk_corrected,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__deltarange_satclk_corrected,  // assign(index, value) function pointer
    resize_function__GNSSObs__deltarange_satclk_corrected  // resize(index) function pointer
  },
  {
    "pseudorange_var",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, pseudorange_var),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__pseudorange_var,  // size() function pointer
    get_const_function__GNSSObs__pseudorange_var,  // get_const(index) function pointer
    get_function__GNSSObs__pseudorange_var,  // get(index) function pointer
    fetch_function__GNSSObs__pseudorange_var,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__pseudorange_var,  // assign(index, value) function pointer
    resize_function__GNSSObs__pseudorange_var  // resize(index) function pointer
  },
  {
    "pseudorange_var_measured",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, pseudorange_var_measured),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__pseudorange_var_measured,  // size() function pointer
    get_const_function__GNSSObs__pseudorange_var_measured,  // get_const(index) function pointer
    get_function__GNSSObs__pseudorange_var_measured,  // get(index) function pointer
    fetch_function__GNSSObs__pseudorange_var_measured,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__pseudorange_var_measured,  // assign(index, value) function pointer
    resize_function__GNSSObs__pseudorange_var_measured  // resize(index) function pointer
  },
  {
    "deltarange_var",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, deltarange_var),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__deltarange_var,  // size() function pointer
    get_const_function__GNSSObs__deltarange_var,  // get_const(index) function pointer
    get_function__GNSSObs__deltarange_var,  // get(index) function pointer
    fetch_function__GNSSObs__deltarange_var,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__deltarange_var,  // assign(index, value) function pointer
    resize_function__GNSSObs__deltarange_var  // resize(index) function pointer
  },
  {
    "carrierphase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, carrierphase),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__carrierphase,  // size() function pointer
    get_const_function__GNSSObs__carrierphase,  // get_const(index) function pointer
    get_function__GNSSObs__carrierphase,  // get(index) function pointer
    fetch_function__GNSSObs__carrierphase,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__carrierphase,  // assign(index, value) function pointer
    resize_function__GNSSObs__carrierphase  // resize(index) function pointer
  },
  {
    "carrierphase_raw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, carrierphase_raw),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__carrierphase_raw,  // size() function pointer
    get_const_function__GNSSObs__carrierphase_raw,  // get_const(index) function pointer
    get_function__GNSSObs__carrierphase_raw,  // get(index) function pointer
    fetch_function__GNSSObs__carrierphase_raw,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__carrierphase_raw,  // assign(index, value) function pointer
    resize_function__GNSSObs__carrierphase_raw  // resize(index) function pointer
  },
  {
    "carrierphase_satclk_corrected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, carrierphase_satclk_corrected),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__carrierphase_satclk_corrected,  // size() function pointer
    get_const_function__GNSSObs__carrierphase_satclk_corrected,  // get_const(index) function pointer
    get_function__GNSSObs__carrierphase_satclk_corrected,  // get(index) function pointer
    fetch_function__GNSSObs__carrierphase_satclk_corrected,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__carrierphase_satclk_corrected,  // assign(index, value) function pointer
    resize_function__GNSSObs__carrierphase_satclk_corrected  // resize(index) function pointer
  },
  {
    "carrierphase_var_measured",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, carrierphase_var_measured),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__carrierphase_var_measured,  // size() function pointer
    get_const_function__GNSSObs__carrierphase_var_measured,  // get_const(index) function pointer
    get_function__GNSSObs__carrierphase_var_measured,  // get(index) function pointer
    fetch_function__GNSSObs__carrierphase_var_measured,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__carrierphase_var_measured,  // assign(index, value) function pointer
    resize_function__GNSSObs__carrierphase_var_measured  // resize(index) function pointer
  },
  {
    "elevation_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, elevation_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__elevation_angle,  // size() function pointer
    get_const_function__GNSSObs__elevation_angle,  // get_const(index) function pointer
    get_function__GNSSObs__elevation_angle,  // get(index) function pointer
    fetch_function__GNSSObs__elevation_angle,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__elevation_angle,  // assign(index, value) function pointer
    resize_function__GNSSObs__elevation_angle  // resize(index) function pointer
  },
  {
    "azimuth_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, azimuth_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__azimuth_angle,  // size() function pointer
    get_const_function__GNSSObs__azimuth_angle,  // get_const(index) function pointer
    get_function__GNSSObs__azimuth_angle,  // get(index) function pointer
    fetch_function__GNSSObs__azimuth_angle,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__azimuth_angle,  // assign(index, value) function pointer
    resize_function__GNSSObs__azimuth_angle  // resize(index) function pointer
  },
  {
    "locktime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, locktime),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__locktime,  // size() function pointer
    get_const_function__GNSSObs__locktime,  // get_const(index) function pointer
    get_function__GNSSObs__locktime,  // get(index) function pointer
    fetch_function__GNSSObs__locktime,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__locktime,  // assign(index, value) function pointer
    resize_function__GNSSObs__locktime  // resize(index) function pointer
  },
  {
    "cn0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, cn0),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObs__cn0,  // size() function pointer
    get_const_function__GNSSObs__cn0,  // get_const(index) function pointer
    get_function__GNSSObs__cn0,  // get(index) function pointer
    fetch_function__GNSSObs__cn0,  // fetch(index, &value) function pointer
    assign_function__GNSSObs__cn0,  // assign(index, value) function pointer
    resize_function__GNSSObs__cn0  // resize(index) function pointer
  },
  {
    "ref_sat_svid_gps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, ref_sat_svid_gps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_sat_svid_gal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, ref_sat_svid_gal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gps_corrected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, gps_corrected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gal_corrected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObs, gal_corrected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GNSSObs_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "GNSSObs",  // message name
  30,  // number of fields
  sizeof(irt_nav_msgs::msg::GNSSObs),
  GNSSObs_message_member_array,  // message members
  GNSSObs_init_function,  // function to initialize message memory (memory has to be allocated)
  GNSSObs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GNSSObs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GNSSObs_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSObs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, GNSSObs)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSObs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
