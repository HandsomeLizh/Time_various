// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irt_nav_msgs:msg/SensorProcessingReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irt_nav_msgs/msg/detail/sensor_processing_report__rosidl_typesupport_introspection_c.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irt_nav_msgs/msg/detail/sensor_processing_report__functions.h"
#include "irt_nav_msgs/msg/detail/sensor_processing_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_name`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `residual_information`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irt_nav_msgs__msg__SensorProcessingReport__init(message_memory);
}

void irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_fini_function(void * message_memory)
{
  irt_nav_msgs__msg__SensorProcessingReport__fini(message_memory);
}

size_t irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__size_function__SensorProcessingReport__residual_information(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_const_function__SensorProcessingReport__residual_information(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_function__SensorProcessingReport__residual_information(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__fetch_function__SensorProcessingReport__residual_information(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_const_function__SensorProcessingReport__residual_information(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__assign_function__SensorProcessingReport__residual_information(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_function__SensorProcessingReport__residual_information(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__resize_function__SensorProcessingReport__residual_information(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, sensor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ts_measurement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, ts_measurement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_measurements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, num_measurements),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, measurement_delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ts_start_processing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, ts_start_processing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_processing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, duration_processing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "observation_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, observation_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "residual_information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, residual_information),  // bytes offset in struct
    NULL,  // default value
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__size_function__SensorProcessingReport__residual_information,  // size() function pointer
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_const_function__SensorProcessingReport__residual_information,  // get_const(index) function pointer
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__get_function__SensorProcessingReport__residual_information,  // get(index) function pointer
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__fetch_function__SensorProcessingReport__residual_information,  // fetch(index, &value) function pointer
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__assign_function__SensorProcessingReport__residual_information,  // assign(index, value) function pointer
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__resize_function__SensorProcessingReport__residual_information  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irt_nav_msgs__msg__SensorProcessingReport, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_members = {
  "irt_nav_msgs__msg",  // message namespace
  "SensorProcessingReport",  // message name
  10,  // number of fields
  sizeof(irt_nav_msgs__msg__SensorProcessingReport),
  irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_member_array,  // message members
  irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_init_function,  // function to initialize message memory (memory has to be allocated)
  irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_type_support_handle = {
  0,
  &irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irt_nav_msgs, msg, SensorProcessingReport)() {
  irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_type_support_handle.typesupport_identifier) {
    irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irt_nav_msgs__msg__SensorProcessingReport__rosidl_typesupport_introspection_c__SensorProcessingReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
