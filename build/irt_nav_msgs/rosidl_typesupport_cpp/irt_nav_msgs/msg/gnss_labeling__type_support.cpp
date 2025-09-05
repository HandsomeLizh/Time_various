// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "irt_nav_msgs/msg/detail/gnss_labeling__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace irt_nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _GNSSLabeling_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GNSSLabeling_type_support_ids_t;

static const _GNSSLabeling_type_support_ids_t _GNSSLabeling_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GNSSLabeling_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GNSSLabeling_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GNSSLabeling_type_support_symbol_names_t _GNSSLabeling_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, GNSSLabeling)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irt_nav_msgs, msg, GNSSLabeling)),
  }
};

typedef struct _GNSSLabeling_type_support_data_t
{
  void * data[2];
} _GNSSLabeling_type_support_data_t;

static _GNSSLabeling_type_support_data_t _GNSSLabeling_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GNSSLabeling_message_typesupport_map = {
  2,
  "irt_nav_msgs",
  &_GNSSLabeling_message_typesupport_ids.typesupport_identifier[0],
  &_GNSSLabeling_message_typesupport_symbol_names.symbol_name[0],
  &_GNSSLabeling_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GNSSLabeling_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GNSSLabeling_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irt_nav_msgs::msg::GNSSLabeling>()
{
  return &::irt_nav_msgs::msg::rosidl_typesupport_cpp::GNSSLabeling_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, irt_nav_msgs, msg, GNSSLabeling)() {
  return get_message_type_support_handle<irt_nav_msgs::msg::GNSSLabeling>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
