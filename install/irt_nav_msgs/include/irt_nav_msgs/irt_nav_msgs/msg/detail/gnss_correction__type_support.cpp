// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GNSSCorrection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/gnss_correction__struct.hpp"
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

void GNSSCorrection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::GNSSCorrection(_init);
}

void GNSSCorrection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::GNSSCorrection *>(message_memory);
  typed_message->~GNSSCorrection();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GNSSCorrection_message_member_array[2] = {
  {
    "prn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSCorrection, prn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "psr_correction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::GNSSCorrection, psr_correction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GNSSCorrection_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "GNSSCorrection",  // message name
  2,  // number of fields
  sizeof(irt_nav_msgs::msg::GNSSCorrection),
  GNSSCorrection_message_member_array,  // message members
  GNSSCorrection_init_function,  // function to initialize message memory (memory has to be allocated)
  GNSSCorrection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GNSSCorrection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GNSSCorrection_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::GNSSCorrection>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSCorrection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, GNSSCorrection)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::GNSSCorrection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
