// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irt_nav_msgs/msg/detail/factor_residuals__struct.hpp"
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

void FactorResiduals_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irt_nav_msgs::msg::FactorResiduals(_init);
}

void FactorResiduals_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irt_nav_msgs::msg::FactorResiduals *>(message_memory);
  typed_message->~FactorResiduals();
}

size_t size_function__FactorResiduals__residuals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<irt_nav_msgs::msg::FactorResidual> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FactorResiduals__residuals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<irt_nav_msgs::msg::FactorResidual> *>(untyped_member);
  return &member[index];
}

void * get_function__FactorResiduals__residuals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<irt_nav_msgs::msg::FactorResidual> *>(untyped_member);
  return &member[index];
}

void fetch_function__FactorResiduals__residuals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const irt_nav_msgs::msg::FactorResidual *>(
    get_const_function__FactorResiduals__residuals(untyped_member, index));
  auto & value = *reinterpret_cast<irt_nav_msgs::msg::FactorResidual *>(untyped_value);
  value = item;
}

void assign_function__FactorResiduals__residuals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<irt_nav_msgs::msg::FactorResidual *>(
    get_function__FactorResiduals__residuals(untyped_member, index));
  const auto & value = *reinterpret_cast<const irt_nav_msgs::msg::FactorResidual *>(untyped_value);
  item = value;
}

void resize_function__FactorResiduals__residuals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<irt_nav_msgs::msg::FactorResidual> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FactorResiduals_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::FactorResiduals, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "residuals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irt_nav_msgs::msg::FactorResidual>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs::msg::FactorResiduals, residuals),  // bytes offset in struct
    nullptr,  // default value
    size_function__FactorResiduals__residuals,  // size() function pointer
    get_const_function__FactorResiduals__residuals,  // get_const(index) function pointer
    get_function__FactorResiduals__residuals,  // get(index) function pointer
    fetch_function__FactorResiduals__residuals,  // fetch(index, &value) function pointer
    assign_function__FactorResiduals__residuals,  // assign(index, value) function pointer
    resize_function__FactorResiduals__residuals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FactorResiduals_message_members = {
  "irt_nav_msgs::msg",  // message namespace
  "FactorResiduals",  // message name
  2,  // number of fields
  sizeof(irt_nav_msgs::msg::FactorResiduals),
  FactorResiduals_message_member_array,  // message members
  FactorResiduals_init_function,  // function to initialize message memory (memory has to be allocated)
  FactorResiduals_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FactorResiduals_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FactorResiduals_message_members,
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
get_message_type_support_handle<irt_nav_msgs::msg::FactorResiduals>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::FactorResiduals_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, FactorResiduals)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_introspection_cpp::FactorResiduals_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
