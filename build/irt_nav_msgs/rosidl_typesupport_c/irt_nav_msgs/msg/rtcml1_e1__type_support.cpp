// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/RTCML1E1.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "irt_nav_msgs/msg/detail/rtcml1_e1__struct.h"
#include "irt_nav_msgs/msg/detail/rtcml1_e1__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace irt_nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RTCML1E1_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RTCML1E1_type_support_ids_t;

static const _RTCML1E1_type_support_ids_t _RTCML1E1_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RTCML1E1_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RTCML1E1_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RTCML1E1_type_support_symbol_names_t _RTCML1E1_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, RTCML1E1)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, RTCML1E1)),
  }
};

typedef struct _RTCML1E1_type_support_data_t
{
  void * data[2];
} _RTCML1E1_type_support_data_t;

static _RTCML1E1_type_support_data_t _RTCML1E1_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RTCML1E1_message_typesupport_map = {
  2,
  "irt_nav_msgs",
  &_RTCML1E1_message_typesupport_ids.typesupport_identifier[0],
  &_RTCML1E1_message_typesupport_symbol_names.symbol_name[0],
  &_RTCML1E1_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RTCML1E1_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RTCML1E1_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace irt_nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, irt_nav_msgs, msg, RTCML1E1)() {
  return &::irt_nav_msgs::msg::rosidl_typesupport_c::RTCML1E1_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
