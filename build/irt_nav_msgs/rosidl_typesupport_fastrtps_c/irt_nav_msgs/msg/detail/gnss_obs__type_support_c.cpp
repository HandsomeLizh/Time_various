// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_obs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/gnss_obs__struct.h"
#include "irt_nav_msgs/msg/detail/gnss_obs__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // base_pos, satelite_pos, satelite_vec
#include "rosidl_runtime_c/primitives_sequence.h"  // azimuth_angle, carrierphase, carrierphase_raw, carrierphase_satclk_corrected, carrierphase_var_measured, cn0, deltarange, deltarange_raw, deltarange_satclk_corrected, deltarange_var, elevation_angle, locktime, prn, pseudorange, pseudorange_raw, pseudorange_satclk_corrected, pseudorange_var, pseudorange_var_measured, svid_carrier_used
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // azimuth_angle, carrierphase, carrierphase_raw, carrierphase_satclk_corrected, carrierphase_var_measured, cn0, deltarange, deltarange_raw, deltarange_satclk_corrected, deltarange_var, elevation_angle, locktime, prn, pseudorange, pseudorange_raw, pseudorange_satclk_corrected, pseudorange_var, pseudorange_var_measured, svid_carrier_used

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


using _GNSSObs__ros_msg_type = irt_nav_msgs__msg__GNSSObs;

static bool _GNSSObs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GNSSObs__ros_msg_type * ros_message = static_cast<const _GNSSObs__ros_msg_type *>(untyped_ros_message);
  // Field name: time_receive
  {
    cdr << ros_message->time_receive;
  }

  // Field name: integrity_flag
  {
    cdr << ros_message->integrity_flag;
  }

  // Field name: dd_idx_sync_ref
  {
    cdr << ros_message->dd_idx_sync_ref;
  }

  // Field name: dd_idx_sync_user
  {
    cdr << ros_message->dd_idx_sync_user;
  }

  // Field name: satelite_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    size_t size = ros_message->satelite_pos.size;
    auto array_ptr = ros_message->satelite_pos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: satelite_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    size_t size = ros_message->satelite_vec.size;
    auto array_ptr = ros_message->satelite_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: base_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->base_pos, cdr))
    {
      return false;
    }
  }

  // Field name: prn
  {
    size_t size = ros_message->prn.size;
    auto array_ptr = ros_message->prn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: svid_carrier_used
  {
    size_t size = ros_message->svid_carrier_used.size;
    auto array_ptr = ros_message->svid_carrier_used.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange
  {
    size_t size = ros_message->pseudorange.size;
    auto array_ptr = ros_message->pseudorange.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange_raw
  {
    size_t size = ros_message->pseudorange_raw.size;
    auto array_ptr = ros_message->pseudorange_raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange_satclk_corrected
  {
    size_t size = ros_message->pseudorange_satclk_corrected.size;
    auto array_ptr = ros_message->pseudorange_satclk_corrected.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: deltarange
  {
    size_t size = ros_message->deltarange.size;
    auto array_ptr = ros_message->deltarange.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: deltarange_raw
  {
    size_t size = ros_message->deltarange_raw.size;
    auto array_ptr = ros_message->deltarange_raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: deltarange_satclk_corrected
  {
    size_t size = ros_message->deltarange_satclk_corrected.size;
    auto array_ptr = ros_message->deltarange_satclk_corrected.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange_var
  {
    size_t size = ros_message->pseudorange_var.size;
    auto array_ptr = ros_message->pseudorange_var.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pseudorange_var_measured
  {
    size_t size = ros_message->pseudorange_var_measured.size;
    auto array_ptr = ros_message->pseudorange_var_measured.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: deltarange_var
  {
    size_t size = ros_message->deltarange_var.size;
    auto array_ptr = ros_message->deltarange_var.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: carrierphase
  {
    size_t size = ros_message->carrierphase.size;
    auto array_ptr = ros_message->carrierphase.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: carrierphase_raw
  {
    size_t size = ros_message->carrierphase_raw.size;
    auto array_ptr = ros_message->carrierphase_raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: carrierphase_satclk_corrected
  {
    size_t size = ros_message->carrierphase_satclk_corrected.size;
    auto array_ptr = ros_message->carrierphase_satclk_corrected.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: carrierphase_var_measured
  {
    size_t size = ros_message->carrierphase_var_measured.size;
    auto array_ptr = ros_message->carrierphase_var_measured.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: elevation_angle
  {
    size_t size = ros_message->elevation_angle.size;
    auto array_ptr = ros_message->elevation_angle.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: azimuth_angle
  {
    size_t size = ros_message->azimuth_angle.size;
    auto array_ptr = ros_message->azimuth_angle.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: locktime
  {
    size_t size = ros_message->locktime.size;
    auto array_ptr = ros_message->locktime.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cn0
  {
    size_t size = ros_message->cn0.size;
    auto array_ptr = ros_message->cn0.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_sat_svid_gps
  {
    cdr << ros_message->ref_sat_svid_gps;
  }

  // Field name: ref_sat_svid_gal
  {
    cdr << ros_message->ref_sat_svid_gal;
  }

  // Field name: gps_corrected
  {
    cdr << (ros_message->gps_corrected ? true : false);
  }

  // Field name: gal_corrected
  {
    cdr << (ros_message->gal_corrected ? true : false);
  }

  return true;
}

static bool _GNSSObs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GNSSObs__ros_msg_type * ros_message = static_cast<_GNSSObs__ros_msg_type *>(untyped_ros_message);
  // Field name: time_receive
  {
    cdr >> ros_message->time_receive;
  }

  // Field name: integrity_flag
  {
    cdr >> ros_message->integrity_flag;
  }

  // Field name: dd_idx_sync_ref
  {
    cdr >> ros_message->dd_idx_sync_ref;
  }

  // Field name: dd_idx_sync_user
  {
    cdr >> ros_message->dd_idx_sync_user;
  }

  // Field name: satelite_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satelite_pos.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->satelite_pos);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->satelite_pos, size)) {
      fprintf(stderr, "failed to create array for field 'satelite_pos'");
      return false;
    }
    auto array_ptr = ros_message->satelite_pos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: satelite_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satelite_vec.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->satelite_vec);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->satelite_vec, size)) {
      fprintf(stderr, "failed to create array for field 'satelite_vec'");
      return false;
    }
    auto array_ptr = ros_message->satelite_vec.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: base_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->base_pos))
    {
      return false;
    }
  }

  // Field name: prn
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prn.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->prn);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->prn, size)) {
      fprintf(stderr, "failed to create array for field 'prn'");
      return false;
    }
    auto array_ptr = ros_message->prn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: svid_carrier_used
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->svid_carrier_used.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->svid_carrier_used);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->svid_carrier_used, size)) {
      fprintf(stderr, "failed to create array for field 'svid_carrier_used'");
      return false;
    }
    auto array_ptr = ros_message->svid_carrier_used.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pseudorange.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pseudorange);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pseudorange, size)) {
      fprintf(stderr, "failed to create array for field 'pseudorange'");
      return false;
    }
    auto array_ptr = ros_message->pseudorange.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange_raw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pseudorange_raw.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pseudorange_raw);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pseudorange_raw, size)) {
      fprintf(stderr, "failed to create array for field 'pseudorange_raw'");
      return false;
    }
    auto array_ptr = ros_message->pseudorange_raw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange_satclk_corrected
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pseudorange_satclk_corrected.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pseudorange_satclk_corrected);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pseudorange_satclk_corrected, size)) {
      fprintf(stderr, "failed to create array for field 'pseudorange_satclk_corrected'");
      return false;
    }
    auto array_ptr = ros_message->pseudorange_satclk_corrected.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: deltarange
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deltarange.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->deltarange);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->deltarange, size)) {
      fprintf(stderr, "failed to create array for field 'deltarange'");
      return false;
    }
    auto array_ptr = ros_message->deltarange.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: deltarange_raw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deltarange_raw.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->deltarange_raw);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->deltarange_raw, size)) {
      fprintf(stderr, "failed to create array for field 'deltarange_raw'");
      return false;
    }
    auto array_ptr = ros_message->deltarange_raw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: deltarange_satclk_corrected
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deltarange_satclk_corrected.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->deltarange_satclk_corrected);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->deltarange_satclk_corrected, size)) {
      fprintf(stderr, "failed to create array for field 'deltarange_satclk_corrected'");
      return false;
    }
    auto array_ptr = ros_message->deltarange_satclk_corrected.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange_var
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pseudorange_var.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pseudorange_var);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pseudorange_var, size)) {
      fprintf(stderr, "failed to create array for field 'pseudorange_var'");
      return false;
    }
    auto array_ptr = ros_message->pseudorange_var.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pseudorange_var_measured
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pseudorange_var_measured.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pseudorange_var_measured);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pseudorange_var_measured, size)) {
      fprintf(stderr, "failed to create array for field 'pseudorange_var_measured'");
      return false;
    }
    auto array_ptr = ros_message->pseudorange_var_measured.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: deltarange_var
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deltarange_var.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->deltarange_var);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->deltarange_var, size)) {
      fprintf(stderr, "failed to create array for field 'deltarange_var'");
      return false;
    }
    auto array_ptr = ros_message->deltarange_var.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: carrierphase
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->carrierphase.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->carrierphase);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->carrierphase, size)) {
      fprintf(stderr, "failed to create array for field 'carrierphase'");
      return false;
    }
    auto array_ptr = ros_message->carrierphase.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: carrierphase_raw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->carrierphase_raw.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->carrierphase_raw);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->carrierphase_raw, size)) {
      fprintf(stderr, "failed to create array for field 'carrierphase_raw'");
      return false;
    }
    auto array_ptr = ros_message->carrierphase_raw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: carrierphase_satclk_corrected
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->carrierphase_satclk_corrected.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->carrierphase_satclk_corrected);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->carrierphase_satclk_corrected, size)) {
      fprintf(stderr, "failed to create array for field 'carrierphase_satclk_corrected'");
      return false;
    }
    auto array_ptr = ros_message->carrierphase_satclk_corrected.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: carrierphase_var_measured
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->carrierphase_var_measured.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->carrierphase_var_measured);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->carrierphase_var_measured, size)) {
      fprintf(stderr, "failed to create array for field 'carrierphase_var_measured'");
      return false;
    }
    auto array_ptr = ros_message->carrierphase_var_measured.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: elevation_angle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->elevation_angle.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->elevation_angle);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->elevation_angle, size)) {
      fprintf(stderr, "failed to create array for field 'elevation_angle'");
      return false;
    }
    auto array_ptr = ros_message->elevation_angle.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: azimuth_angle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->azimuth_angle.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->azimuth_angle);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->azimuth_angle, size)) {
      fprintf(stderr, "failed to create array for field 'azimuth_angle'");
      return false;
    }
    auto array_ptr = ros_message->azimuth_angle.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: locktime
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->locktime.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->locktime);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->locktime, size)) {
      fprintf(stderr, "failed to create array for field 'locktime'");
      return false;
    }
    auto array_ptr = ros_message->locktime.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cn0
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cn0.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cn0);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cn0, size)) {
      fprintf(stderr, "failed to create array for field 'cn0'");
      return false;
    }
    auto array_ptr = ros_message->cn0.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_sat_svid_gps
  {
    cdr >> ros_message->ref_sat_svid_gps;
  }

  // Field name: ref_sat_svid_gal
  {
    cdr >> ros_message->ref_sat_svid_gal;
  }

  // Field name: gps_corrected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_corrected = tmp ? true : false;
  }

  // Field name: gal_corrected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gal_corrected = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__GNSSObs(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GNSSObs__ros_msg_type * ros_message = static_cast<const _GNSSObs__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_receive
  {
    size_t item_size = sizeof(ros_message->time_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integrity_flag
  {
    size_t item_size = sizeof(ros_message->integrity_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dd_idx_sync_ref
  {
    size_t item_size = sizeof(ros_message->dd_idx_sync_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dd_idx_sync_user
  {
    size_t item_size = sizeof(ros_message->dd_idx_sync_user);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satelite_pos
  {
    size_t array_size = ros_message->satelite_pos.size;
    auto array_ptr = ros_message->satelite_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name satelite_vec
  {
    size_t array_size = ros_message->satelite_vec.size;
    auto array_ptr = ros_message->satelite_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name base_pos

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->base_pos), current_alignment);
  // field.name prn
  {
    size_t array_size = ros_message->prn.size;
    auto array_ptr = ros_message->prn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name svid_carrier_used
  {
    size_t array_size = ros_message->svid_carrier_used.size;
    auto array_ptr = ros_message->svid_carrier_used.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange
  {
    size_t array_size = ros_message->pseudorange.size;
    auto array_ptr = ros_message->pseudorange.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange_raw
  {
    size_t array_size = ros_message->pseudorange_raw.size;
    auto array_ptr = ros_message->pseudorange_raw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange_satclk_corrected
  {
    size_t array_size = ros_message->pseudorange_satclk_corrected.size;
    auto array_ptr = ros_message->pseudorange_satclk_corrected.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltarange
  {
    size_t array_size = ros_message->deltarange.size;
    auto array_ptr = ros_message->deltarange.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltarange_raw
  {
    size_t array_size = ros_message->deltarange_raw.size;
    auto array_ptr = ros_message->deltarange_raw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltarange_satclk_corrected
  {
    size_t array_size = ros_message->deltarange_satclk_corrected.size;
    auto array_ptr = ros_message->deltarange_satclk_corrected.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange_var
  {
    size_t array_size = ros_message->pseudorange_var.size;
    auto array_ptr = ros_message->pseudorange_var.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pseudorange_var_measured
  {
    size_t array_size = ros_message->pseudorange_var_measured.size;
    auto array_ptr = ros_message->pseudorange_var_measured.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltarange_var
  {
    size_t array_size = ros_message->deltarange_var.size;
    auto array_ptr = ros_message->deltarange_var.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrierphase
  {
    size_t array_size = ros_message->carrierphase.size;
    auto array_ptr = ros_message->carrierphase.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrierphase_raw
  {
    size_t array_size = ros_message->carrierphase_raw.size;
    auto array_ptr = ros_message->carrierphase_raw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrierphase_satclk_corrected
  {
    size_t array_size = ros_message->carrierphase_satclk_corrected.size;
    auto array_ptr = ros_message->carrierphase_satclk_corrected.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrierphase_var_measured
  {
    size_t array_size = ros_message->carrierphase_var_measured.size;
    auto array_ptr = ros_message->carrierphase_var_measured.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation_angle
  {
    size_t array_size = ros_message->elevation_angle.size;
    auto array_ptr = ros_message->elevation_angle.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth_angle
  {
    size_t array_size = ros_message->azimuth_angle.size;
    auto array_ptr = ros_message->azimuth_angle.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locktime
  {
    size_t array_size = ros_message->locktime.size;
    auto array_ptr = ros_message->locktime.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cn0
  {
    size_t array_size = ros_message->cn0.size;
    auto array_ptr = ros_message->cn0.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_sat_svid_gps
  {
    size_t item_size = sizeof(ros_message->ref_sat_svid_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_sat_svid_gal
  {
    size_t item_size = sizeof(ros_message->ref_sat_svid_gal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_corrected
  {
    size_t item_size = sizeof(ros_message->gps_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gal_corrected
  {
    size_t item_size = sizeof(ros_message->gal_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GNSSObs__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__GNSSObs(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__GNSSObs(
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

  // member: time_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: integrity_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dd_idx_sync_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dd_idx_sync_user
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: satelite_pos
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
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: satelite_vec
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
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: base_pos
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
  // member: prn
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: svid_carrier_used
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pseudorange
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
  // member: pseudorange_raw
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
  // member: pseudorange_satclk_corrected
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
  // member: deltarange
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
  // member: deltarange_raw
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
  // member: deltarange_satclk_corrected
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
  // member: pseudorange_var
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
  // member: pseudorange_var_measured
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
  // member: deltarange_var
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
  // member: carrierphase
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
  // member: carrierphase_raw
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
  // member: carrierphase_satclk_corrected
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
  // member: carrierphase_var_measured
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
  // member: elevation_angle
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
  // member: azimuth_angle
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
  // member: locktime
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
  // member: cn0
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
  // member: ref_sat_svid_gps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_sat_svid_gal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gal_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__GNSSObs;
    is_plain =
      (
      offsetof(DataType, gal_corrected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GNSSObs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__GNSSObs(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GNSSObs = {
  "irt_nav_msgs::msg",
  "GNSSObs",
  _GNSSObs__cdr_serialize,
  _GNSSObs__cdr_deserialize,
  _GNSSObs__get_serialized_size,
  _GNSSObs__max_serialized_size
};

static rosidl_message_type_support_t _GNSSObs__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GNSSObs,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, GNSSObs)() {
  return &_GNSSObs__type_support;
}

#if defined(__cplusplus)
}
#endif
