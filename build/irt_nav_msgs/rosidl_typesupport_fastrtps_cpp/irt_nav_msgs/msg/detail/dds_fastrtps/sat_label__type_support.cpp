// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/sat_label__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/sat_label__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Vector3 already declared above

namespace irt_nav_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const irt_nav_msgs::msg::GaussianComponent &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  irt_nav_msgs::msg::GaussianComponent &);
size_t get_serialized_size(
  const irt_nav_msgs::msg::GaussianComponent &,
  size_t current_alignment);
size_t
max_serialized_size_GaussianComponent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace irt_nav_msgs


namespace irt_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_serialize(
  const irt_nav_msgs::msg::SatLabel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: integrity_flag
  cdr << ros_message.integrity_flag;
  // Member: prn
  cdr << ros_message.prn;
  // Member: sat_pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sat_pos,
    cdr);
  // Member: sat_vel
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sat_vel,
    cdr);
  // Member: psr
  cdr << ros_message.psr;
  // Member: psr_raw
  cdr << ros_message.psr_raw;
  // Member: psr_satclk_corrected
  cdr << ros_message.psr_satclk_corrected;
  // Member: psr_dev_measured
  cdr << ros_message.psr_dev_measured;
  // Member: psr_dev_preproc
  cdr << ros_message.psr_dev_preproc;
  // Member: dr
  cdr << ros_message.dr;
  // Member: dr_raw
  cdr << ros_message.dr_raw;
  // Member: dr_satclk_corrected
  cdr << ros_message.dr_satclk_corrected;
  // Member: dr_dev_preproc
  cdr << ros_message.dr_dev_preproc;
  // Member: cp
  cdr << ros_message.cp;
  // Member: cp_raw
  cdr << ros_message.cp_raw;
  // Member: cp_satclk_corrected
  cdr << ros_message.cp_satclk_corrected;
  // Member: cp_dev_measured
  cdr << ros_message.cp_dev_measured;
  // Member: locktime
  cdr << ros_message.locktime;
  // Member: psr_correction
  cdr << ros_message.psr_correction;
  // Member: cn0
  cdr << ros_message.cn0;
  // Member: cycle_slip
  cdr << (ros_message.cycle_slip ? true : false);
  // Member: psr_residual
  cdr << ros_message.psr_residual;
  // Member: dr_residual
  cdr << ros_message.dr_residual;
  // Member: cp_residual
  cdr << ros_message.cp_residual;
  // Member: elevation_angle
  cdr << ros_message.elevation_angle;
  // Member: azimuth_angle
  cdr << ros_message.azimuth_angle;
  // Member: cmc
  cdr << ros_message.cmc;
  // Member: drc
  cdr << ros_message.drc;
  // Member: factor
  cdr << ros_message.factor;
  // Member: dim
  cdr << ros_message.dim;
  // Member: residuals
  {
    cdr << ros_message.residuals;
  }
  // Member: gaussian
  {
    size_t size = ros_message.gaussian.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.gaussian[i],
        cdr);
    }
  }
  // Member: weight
  cdr << ros_message.weight;
  // Member: data
  {
    cdr << ros_message.data;
  }
  // Member: label
  cdr << ros_message.label;
  // Member: label_dev
  cdr << ros_message.label_dev;
  // Member: msg
  cdr << ros_message.msg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::SatLabel & ros_message)
{
  // Member: integrity_flag
  cdr >> ros_message.integrity_flag;

  // Member: prn
  cdr >> ros_message.prn;

  // Member: sat_pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sat_pos);

  // Member: sat_vel
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sat_vel);

  // Member: psr
  cdr >> ros_message.psr;

  // Member: psr_raw
  cdr >> ros_message.psr_raw;

  // Member: psr_satclk_corrected
  cdr >> ros_message.psr_satclk_corrected;

  // Member: psr_dev_measured
  cdr >> ros_message.psr_dev_measured;

  // Member: psr_dev_preproc
  cdr >> ros_message.psr_dev_preproc;

  // Member: dr
  cdr >> ros_message.dr;

  // Member: dr_raw
  cdr >> ros_message.dr_raw;

  // Member: dr_satclk_corrected
  cdr >> ros_message.dr_satclk_corrected;

  // Member: dr_dev_preproc
  cdr >> ros_message.dr_dev_preproc;

  // Member: cp
  cdr >> ros_message.cp;

  // Member: cp_raw
  cdr >> ros_message.cp_raw;

  // Member: cp_satclk_corrected
  cdr >> ros_message.cp_satclk_corrected;

  // Member: cp_dev_measured
  cdr >> ros_message.cp_dev_measured;

  // Member: locktime
  cdr >> ros_message.locktime;

  // Member: psr_correction
  cdr >> ros_message.psr_correction;

  // Member: cn0
  cdr >> ros_message.cn0;

  // Member: cycle_slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cycle_slip = tmp ? true : false;
  }

  // Member: psr_residual
  cdr >> ros_message.psr_residual;

  // Member: dr_residual
  cdr >> ros_message.dr_residual;

  // Member: cp_residual
  cdr >> ros_message.cp_residual;

  // Member: elevation_angle
  cdr >> ros_message.elevation_angle;

  // Member: azimuth_angle
  cdr >> ros_message.azimuth_angle;

  // Member: cmc
  cdr >> ros_message.cmc;

  // Member: drc
  cdr >> ros_message.drc;

  // Member: factor
  cdr >> ros_message.factor;

  // Member: dim
  cdr >> ros_message.dim;

  // Member: residuals
  {
    cdr >> ros_message.residuals;
  }

  // Member: gaussian
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.gaussian.resize(size);
    for (size_t i = 0; i < size; i++) {
      irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.gaussian[i]);
    }
  }

  // Member: weight
  cdr >> ros_message.weight;

  // Member: data
  {
    cdr >> ros_message.data;
  }

  // Member: label
  cdr >> ros_message.label;

  // Member: label_dev
  cdr >> ros_message.label_dev;

  // Member: msg
  cdr >> ros_message.msg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::SatLabel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: integrity_flag
  {
    size_t item_size = sizeof(ros_message.integrity_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prn
  {
    size_t item_size = sizeof(ros_message.prn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sat_pos

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sat_pos, current_alignment);
  // Member: sat_vel

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sat_vel, current_alignment);
  // Member: psr
  {
    size_t item_size = sizeof(ros_message.psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_raw
  {
    size_t item_size = sizeof(ros_message.psr_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_satclk_corrected
  {
    size_t item_size = sizeof(ros_message.psr_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_dev_measured
  {
    size_t item_size = sizeof(ros_message.psr_dev_measured);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_dev_preproc
  {
    size_t item_size = sizeof(ros_message.psr_dev_preproc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dr
  {
    size_t item_size = sizeof(ros_message.dr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dr_raw
  {
    size_t item_size = sizeof(ros_message.dr_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dr_satclk_corrected
  {
    size_t item_size = sizeof(ros_message.dr_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dr_dev_preproc
  {
    size_t item_size = sizeof(ros_message.dr_dev_preproc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cp
  {
    size_t item_size = sizeof(ros_message.cp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cp_raw
  {
    size_t item_size = sizeof(ros_message.cp_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cp_satclk_corrected
  {
    size_t item_size = sizeof(ros_message.cp_satclk_corrected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cp_dev_measured
  {
    size_t item_size = sizeof(ros_message.cp_dev_measured);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: locktime
  {
    size_t item_size = sizeof(ros_message.locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_correction
  {
    size_t item_size = sizeof(ros_message.psr_correction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cn0
  {
    size_t item_size = sizeof(ros_message.cn0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cycle_slip
  {
    size_t item_size = sizeof(ros_message.cycle_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psr_residual
  {
    size_t item_size = sizeof(ros_message.psr_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dr_residual
  {
    size_t item_size = sizeof(ros_message.dr_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cp_residual
  {
    size_t item_size = sizeof(ros_message.cp_residual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elevation_angle
  {
    size_t item_size = sizeof(ros_message.elevation_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azimuth_angle
  {
    size_t item_size = sizeof(ros_message.azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmc
  {
    size_t item_size = sizeof(ros_message.cmc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drc
  {
    size_t item_size = sizeof(ros_message.drc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factor
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.factor.size() + 1);
  // Member: dim
  {
    size_t item_size = sizeof(ros_message.dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: residuals
  {
    size_t array_size = ros_message.residuals.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.residuals[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gaussian
  {
    size_t array_size = ros_message.gaussian.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.gaussian[index], current_alignment);
    }
  }
  // Member: weight
  {
    size_t item_size = sizeof(ros_message.weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: label
  {
    size_t item_size = sizeof(ros_message.label);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: label_dev
  {
    size_t item_size = sizeof(ros_message.label_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.msg.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_SatLabel(
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


  // Member: integrity_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sat_pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sat_vel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: psr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_dev_measured
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_dev_preproc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dr_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dr_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dr_dev_preproc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cp_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cp_satclk_corrected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cp_dev_measured
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: locktime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_correction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cn0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cycle_slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psr_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dr_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cp_residual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elevation_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: azimuth_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cmc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: drc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: factor
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

  // Member: dim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: residuals
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

  // Member: gaussian
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
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GaussianComponent(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: weight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: data
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

  // Member: label
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: label_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: msg
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
    using DataType = irt_nav_msgs::msg::SatLabel;
    is_plain =
      (
      offsetof(DataType, msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SatLabel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::SatLabel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SatLabel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::SatLabel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SatLabel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::SatLabel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SatLabel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SatLabel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SatLabel__callbacks = {
  "irt_nav_msgs::msg",
  "SatLabel",
  _SatLabel__cdr_serialize,
  _SatLabel__cdr_deserialize,
  _SatLabel__get_serialized_size,
  _SatLabel__max_serialized_size
};

static rosidl_message_type_support_t _SatLabel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SatLabel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<irt_nav_msgs::msg::SatLabel>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_SatLabel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, SatLabel)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_SatLabel__handle;
}

#ifdef __cplusplus
}
#endif
