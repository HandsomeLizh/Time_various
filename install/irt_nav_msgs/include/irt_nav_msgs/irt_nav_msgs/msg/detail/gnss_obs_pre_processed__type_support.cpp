// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.hpp"
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

void GNSSObsPreProcessed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::GNSSObsPreProcessed(_init);
}

void GNSSObsPreProcessed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::GNSSObsPreProcessed *>(message_memory);
  typed_message->~GNSSObsPreProcessed();
}

size_t size_function__GNSSObsPreProcessed__gnss_corrections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<irt_nav_msgs::msg::GNSSCorrection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObsPreProcessed__gnss_corrections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<irt_nav_msgs::msg::GNSSCorrection> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObsPreProcessed__gnss_corrections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<irt_nav_msgs::msg::GNSSCorrection> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObsPreProcessed__gnss_corrections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const irt_nav_msgs::msg::GNSSCorrection *>(
    get_const_function__GNSSObsPreProcessed__gnss_corrections(untyped_member, index));
  auto & value = *reinterpret_cast<irt_nav_msgs::msg::GNSSCorrection *>(untyped_value);
  value = item;
}

void assign_function__GNSSObsPreProcessed__gnss_corrections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<irt_nav_msgs::msg::GNSSCorrection *>(
    get_function__GNSSObsPreProcessed__gnss_corrections(untyped_member, index));
  const auto & value = *reinterpret_cast<const irt_nav_msgs::msg::GNSSCorrection *>(untyped_value);
  item = value;
}

void resize_function__GNSSObsPreProcessed__gnss_corrections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<irt_nav_msgs::msg::GNSSCorrection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObsPreProcessed__faulty_prn_main(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObsPreProcessed__faulty_prn_main(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObsPreProcessed__faulty_prn_main(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObsPreProcessed__faulty_prn_main(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__GNSSObsPreProcessed__faulty_prn_main(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__GNSSObsPreProcessed__faulty_prn_main(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__GNSSObsPreProcessed__faulty_prn_main(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__GNSSObsPreProcessed__faulty_prn_main(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GNSSObsPreProcessed__faulty_prn_aux(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GNSSObsPreProcessed__faulty_prn_aux(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GNSSObsPreProcessed__faulty_prn_aux(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GNSSObsPreProcessed__faulty_prn_aux(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__GNSSObsPreProcessed__faulty_prn_aux(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__GNSSObsPreProcessed__faulty_prn_aux(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__GNSSObsPreProcessed__faulty_prn_aux(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__GNSSObsPreProcessed__faulty_prn_aux(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GNSSObsPreProcessed_message_member_array[17] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_offset_gal_gps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, time_offset_gal_gps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_ggto_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, is_ggto_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gnss_obs_ant_main",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, gnss_obs_ant_main),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gnss_obs_ant_aux",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, gnss_obs_ant_aux),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_dualantenna",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, dd_gnss_obs_dualantenna),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, dd_gnss_obs_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd_gnss_obs_rtcm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSObs>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, dd_gnss_obs_rtcm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gnss_corrections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::GNSSCorrection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, gnss_corrections),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObsPreProcessed__gnss_corrections,  // size() function pointer
    get_const_function__GNSSObsPreProcessed__gnss_corrections,  // get_const(index) function pointer
    get_function__GNSSObsPreProcessed__gnss_corrections,  // get(index) function pointer
    fetch_function__GNSSObsPreProcessed__gnss_corrections,  // fetch(index, &value) function pointer
    assign_function__GNSSObsPreProcessed__gnss_corrections,  // assign(index, value) function pointer
    resize_function__GNSSObsPreProcessed__gnss_corrections  // resize(index) function pointer
  },
  {
    "faulty_prn_main",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, faulty_prn_main),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObsPreProcessed__faulty_prn_main,  // size() function pointer
    get_const_function__GNSSObsPreProcessed__faulty_prn_main,  // get_const(index) function pointer
    get_function__GNSSObsPreProcessed__faulty_prn_main,  // get(index) function pointer
    fetch_function__GNSSObsPreProcessed__faulty_prn_main,  // fetch(index, &value) function pointer
    assign_function__GNSSObsPreProcessed__faulty_prn_main,  // assign(index, value) function pointer
    resize_function__GNSSObsPreProcessed__faulty_prn_main  // resize(index) function pointer
  },
  {
    "faulty_prn_aux",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, faulty_prn_aux),  // bytes offset in struct
    nullptr,  // default value
    size_function__GNSSObsPreProcessed__faulty_prn_aux,  // size() function pointer
    get_const_function__GNSSObsPreProcessed__faulty_prn_aux,  // get_const(index) function pointer
    get_function__GNSSObsPreProcessed__faulty_prn_aux,  // get(index) function pointer
    fetch_function__GNSSObsPreProcessed__faulty_prn_aux,  // fetch(index, &value) function pointer
    assign_function__GNSSObsPreProcessed__faulty_prn_aux,  // assign(index, value) function pointer
    resize_function__GNSSObsPreProcessed__faulty_prn_aux  // resize(index) function pointer
  },
  {
    "has_time_dd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, has_time_dd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_dualantenna",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, has_dualantenna),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_dualantenna_dd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, has_dualantenna_dd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_rtcm_dd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, has_rtcm_dd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_rtk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSObsPreProcessed, has_rtk),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GNSSObsPreProcessed_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "GNSSObsPreProcessed",  // message name
  17,  // number of fields
  sizeof(irt_nav_msgs::msg::GNSSObsPreProcessed),
  GNSSObsPreProcessed_message_member_array,  // message members
  GNSSObsPreProcessed_init_function,  // function to initialize message memory (memory has to be allocated)
  GNSSObsPreProcessed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GNSSObsPreProcessed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GNSSObsPreProcessed_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::GNSSObsPreProcessed>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSObsPreProcessed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, GNSSObsPreProcessed)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSObsPreProcessed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
