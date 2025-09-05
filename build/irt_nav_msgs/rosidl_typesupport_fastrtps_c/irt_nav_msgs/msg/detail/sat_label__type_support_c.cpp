// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/sat_label__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/sat_label__struct.h"
#include "irt_nav_msgs/msg/detail/sat_label__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // sat_pos, sat_vel
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"  // gaussian
#include "rosidl_runtime_c/primitives_sequence.h"  // data, residuals
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data, residuals
#include "rosidl_runtime_c/string.h"  // factor, msg
#include "rosidl_runtime_c/string_functions.h"  // factor, msg

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();
size_t get_serialized_size_irt_nav_msgs__msg__GaussianComponent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_irt_nav_msgs__msg__GaussianComponent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GaussianComponent)();


using _SatLabel__ros_msg_type = irt_nav_msgs__msg__SatLabel;

static bool _SatLabel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SatLabel__ros_msg_type * ros_message = static_cast<const _SatLabel__ros_msg_type *>(untyped_ros_message);
  // Field name: integrity_flag
  {
    cdr << ros_message->integrity_flag;
  }

  // Field name: prn
  {
    cdr << ros_message->prn;
  }

  // Field name: sat_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sat_pos, cdr))
    {
      return false;
    }
  }

  // Field name: sat_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sat_vel, cdr))
    {
      return false;
    }
  }

  // Field name: psr
  {
    cdr << ros_message->psr;
  }

  // Field name: psr_raw
  {
    cdr << ros_message->psr_raw;
  }

  // Field name: psr_satclk_corrected
  {
    cdr << ros_message->psr_satclk_corrected;
  }

  // Field name: psr_dev_measured
  {
    cdr << ros_message->psr_dev_measured;
  }

  // Field name: psr_dev_preproc
  {
    cdr << ros_message->psr_dev_preproc;
  }

  // Field name: dr
  {
    cdr << ros_message->dr;
  }

  // Field name: dr_raw
  {
    cdr << ros_message->dr_raw;
  }

  // Field name: dr_satclk_corrected
  {
    cdr << ros_message->dr_satclk_corrected;
  }

  // Field name: dr_dev_preproc
  {
    cdr << ros_message->dr_dev_preproc;
  }

  // Field name: cp
  {
    cdr << ros_message->cp;
  }

  // Field name: cp_raw
  {
    cdr << ros_message->cp_raw;
  }

  // Field name: cp_satclk_corrected
  {
    cdr << ros_message->cp_satclk_corrected;
  }

  // Field name: cp_dev_measured
  {
    cdr << ros_message->cp_dev_measured;
  }

  // Field name: locktime
  {
    cdr << ros_message->locktime;
  }

  // Field name: psr_correction
  {
    cdr << ros_message->psr_correction;
  }

  // Field name: cn0
  {
    cdr << ros_message->cn0;
  }

  // Field name: cycle_slip
  {
    cdr << (ros_message->cycle_slip ? true : false);
  }

  // Field name: psr_residual
  {
    cdr << ros_message->psr_residual;
  }

  // Field name: dr_residual
  {
    cdr << ros_message->dr_residual;
  }

  // Field name: cp_residual
  {
    cdr << ros_message->cp_residual;
  }

  // Field name: elevation_angle
  {
    cdr << ros_message->elevation_angle;
  }

  // Field name: azimuth_angle
  {
    cdr << ros_message->azimuth_angle;
  }

  // Field name: cmc
  {
    cdr << ros_message->cmc;
  }

  // Field name: drc
  {
    cdr << ros_message->drc;
  }

  // Field name: factor
  {
    const rosidl_runtime_c__String * str = &ros_message->factor;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: dim
  {
    cdr << ros_message->dim;
  }

  // Field name: residuals
  {
    size_t size = ros_message->residuals.size;
    auto array_ptr = ros_message->residuals.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gaussian
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GaussianComponent
      )()->data);
    size_t size = ros_message->gaussian.size;
    auto array_ptr = ros_message->gaussian.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: label
  {
    cdr << ros_message->label;
  }

  // Field name: label_dev
  {
    cdr << ros_message->label_dev;
  }

  // Field name: msg
  {
    const rosidl_runtime_c__String * str = &ros_message->msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SatLabel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SatLabel__ros_msg_type * ros_message = static_cast<_SatLabel__ros_msg_type *>(untyped_ros_message);
  // Field name: integrity_flag
  {
    cdr >> ros_message->integrity_flag;
  }

  // Field name: prn
  {
    cdr >> ros_message->prn;
  }

  // Field name: sat_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sat_pos))
    {
      return false;
    }
  }

  // Field name: sat_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sat_vel))
    {
      return false;
    }
  }

  // Field name: psr
  {
    cdr >> ros_message->psr;
  }

  // Field name: psr_raw
  {
    cdr >> ros_message->psr_raw;
  }

  // Field name: psr_satclk_corrected
  {
    cdr >> ros_message->psr_satclk_corrected;
  }

  // Field name: psr_dev_measured
  {
    cdr >> ros_message->psr_dev_measured;
  }

  // Field name: psr_dev_preproc
  {
    cdr >> ros_message->psr_dev_preproc;
  }

  // Field name: dr
  {
    cdr >> ros_message->dr;
  }

  // Field name: dr_raw
  {
    cdr >> ros_message->dr_raw;
  }

  // Field name: dr_satclk_corrected
  {
    cdr >> ros_message->dr_satclk_corrected;
  }

  // Field name: dr_dev_preproc
  {
    cdr >> ros_message->dr_dev_preproc;
  }

  // Field name: cp
  {
    cdr >> ros_message->cp;
  }

  // Field name: cp_raw
  {
    cdr >> ros_message->cp_raw;
  }

  // Field name: cp_satclk_corrected
  {
    cdr >> ros_message->cp_satclk_corrected;
  }

  // Field name: cp_dev_measured
  {
    cdr >> ros_message->cp_dev_measured;
  }

  // Field name: locktime
  {
    cdr >> ros_message->locktime;
  }

  // Field name: psr_correction
  {
    cdr >> ros_message->psr_correction;
  }

  // Field name: cn0
  {
    cdr >> ros_message->cn0;
  }

  // Field name: cycle_slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cycle_slip = tmp ? true : false;
  }

  // Field name: psr_residual
  {
    cdr >> ros_message->psr_residual;
  }

  // Field name: dr_residual
  {
    cdr >> ros_message->dr_residual;
  }

  // Field name: cp_residual
  {
    cdr >> ros_message->cp_residual;
  }

  // Field name: elevation_angle
  {
    cdr >> ros_message->elevation_angle;
  }

  // Field name: azimuth_angle
  {
    cdr >> ros_message->azimuth_angle;
  }

  // Field name: cmc
  {
    cdr >> ros_message->cmc;
  }

  // Field name: drc
  {
    cdr >> ros_message->drc;
  }

  // Field name: factor
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->factor.data) {
      rosidl_runtime_c__String__init(&ros_message->factor);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->factor,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'factor'\n");
      return false;
    }
  }

  // Field name: dim
  {
    cdr >> ros_message->dim;
  }

  // Field name: residuals
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->residuals.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->residuals);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->residuals, size)) {
      fprintf(stderr, "failed to create array for field 'residuals'");
      return false;
    }
    auto array_ptr = ros_message->residuals.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gaussian
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GaussianComponent
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gaussian.data) {
      irt_nav_msgs__msg__GaussianComponent__Sequence__fini(&ros_message->gaussian);
    }
    if (!irt_nav_msgs__msg__GaussianComponent__Sequence__init(&ros_message->gaussian, size)) {
      fprintf(stderr, "failed to create array for field 'gaussian'");
      return false;
    }
    auto array_ptr = ros_message->gaussian.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: label
  {
    cdr >> ros_message->label;
  }

  // Field name: label_dev
  {
    cdr >> ros_message->label_dev;
  }

  // Field name: msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msg.data) {
      rosidl_runtime_c__String__init(&ros_message->msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msg'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__SatLabel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SatLabel__ros_msg_type * ros_message = static_cast<const _SatLabel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name integrity_flag
  {
    size_t item_size = sizeof(ros_message->integrity_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prn
  {
    size_t item_size = sizeof(ros_message->prn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sat_pos

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->sat_pos), current_alignment);
  // field.name sat_vel

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->sat_vel), current_alignment);
  // field.name psr
  {
    size_t item_size = sizeof(ros_message->psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_raw
  {
    size_t item_size = sizeof(ros_message->psr_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_satclk_corrected
  {
    size_t item_size = sizeof(ros_message->psr_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_dev_measured
  {
    size_t item_size = sizeof(ros_message->psr_dev_measured);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_dev_preproc
  {
    size_t item_size = sizeof(ros_message->psr_dev_preproc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr
  {
    size_t item_size = sizeof(ros_message->dr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr_raw
  {
    size_t item_size = sizeof(ros_message->dr_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr_satclk_corrected
  {
    size_t item_size = sizeof(ros_message->dr_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr_dev_preproc
  {
    size_t item_size = sizeof(ros_message->dr_dev_preproc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cp
  {
    size_t item_size = sizeof(ros_message->cp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cp_raw
  {
    size_t item_size = sizeof(ros_message->cp_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cp_satclk_corrected
  {
    size_t item_size = sizeof(ros_message->cp_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cp_dev_measured
  {
    size_t item_size = sizeof(ros_message->cp_dev_measured);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locktime
  {
    size_t item_size = sizeof(ros_message->locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_correction
  {
    size_t item_size = sizeof(ros_message->psr_correction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cn0
  {
    size_t item_size = sizeof(ros_message->cn0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_slip
  {
    size_t item_size = sizeof(ros_message->cycle_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psr_residual
  {
    size_t item_size = sizeof(ros_message->psr_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr_residual
  {
    size_t item_size = sizeof(ros_message->dr_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cp_residual
  {
    size_t item_size = sizeof(ros_message->cp_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation_angle
  {
    size_t item_size = sizeof(ros_message->elevation_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth_angle
  {
    size_t item_size = sizeof(ros_message->azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmc
  {
    size_t item_size = sizeof(ros_message->cmc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drc
  {
    size_t item_size = sizeof(ros_message->drc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factor
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->factor.size + 1);
  // field.name dim
  {
    size_t item_size = sizeof(ros_message->dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name residuals
  {
    size_t array_size = ros_message->residuals.size;
    auto array_ptr = ros_message->residuals.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gaussian
  {
    size_t array_size = ros_message->gaussian.size;
    auto array_ptr = ros_message->gaussian.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_irt_nav_msgs__msg__GaussianComponent(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name label
  {
    size_t item_size = sizeof(ros_message->label);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name label_dev
  {
    size_t item_size = sizeof(ros_message->label_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SatLabel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__SatLabel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__SatLabel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: integrity_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sat_pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sat_vel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: psr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psr_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psr_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psr_dev_measured
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psr_dev_preproc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dr_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dr_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dr_dev_preproc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cp_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cp_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cp_dev_measured
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: locktime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psr_correction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cn0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cycle_slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psr_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dr_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cp_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elevation_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: azimuth_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cmc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: drc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: factor
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: dim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: residuals
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gaussian
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_irt_nav_msgs__msg__GaussianComponent(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: weight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: label
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: label_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__SatLabel;
    is_plain =
      (
      offsetof(DataType, msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SatLabel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__SatLabel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SatLabel = {
  "irt_nav_msgs::msg",
  "SatLabel",
  _SatLabel__cdr_serialize,
  _SatLabel__cdr_deserialize,
  _SatLabel__get_serialized_size,
  _SatLabel__max_serialized_size
};

static rosidl_message_type_support_t _SatLabel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SatLabel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, SatLabel)() {
  return &_SatLabel__type_support;
}

#if defined(__cplusplus)
}
#endif
