// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'gnss_obs_ant_main'
// Member 'gnss_obs_ant_aux'
// Member 'dd_gnss_obs_dualantenna'
// Member 'dd_gnss_obs_time'
// Member 'dd_gnss_obs_rtcm'
#include "irt_nav_msgs/msg/detail/gnss_obs__struct.hpp"
// Member 'gnss_corrections'
#include "irt_nav_msgs/msg/detail/gnss_correction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GNSSObsPreProcessed __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GNSSObsPreProcessed __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSObsPreProcessed_
{
  using Type = GNSSObsPreProcessed_<ContainerAllocator>;

  explicit GNSSObsPreProcessed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gnss_obs_ant_main(_init),
    gnss_obs_ant_aux(_init),
    dd_gnss_obs_dualantenna(_init),
    dd_gnss_obs_time(_init),
    dd_gnss_obs_rtcm(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ul;
      this->time_offset_gal_gps = 0.0;
      this->is_ggto_valid = false;
      this->has_time_dd = false;
      this->has_dualantenna = false;
      this->has_dualantenna_dd = false;
      this->has_rtcm_dd = false;
      this->has_rtk = false;
    }
  }

  explicit GNSSObsPreProcessed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gnss_obs_ant_main(_alloc, _init),
    gnss_obs_ant_aux(_alloc, _init),
    dd_gnss_obs_dualantenna(_alloc, _init),
    dd_gnss_obs_time(_alloc, _init),
    dd_gnss_obs_rtcm(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ul;
      this->time_offset_gal_gps = 0.0;
      this->is_ggto_valid = false;
      this->has_time_dd = false;
      this->has_dualantenna = false;
      this->has_dualantenna_dd = false;
      this->has_rtcm_dd = false;
      this->has_rtk = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _counter_type =
    uint32_t;
  _counter_type counter;
  using _time_offset_gal_gps_type =
    double;
  _time_offset_gal_gps_type time_offset_gal_gps;
  using _is_ggto_valid_type =
    bool;
  _is_ggto_valid_type is_ggto_valid;
  using _gnss_obs_ant_main_type =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>;
  _gnss_obs_ant_main_type gnss_obs_ant_main;
  using _gnss_obs_ant_aux_type =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>;
  _gnss_obs_ant_aux_type gnss_obs_ant_aux;
  using _dd_gnss_obs_dualantenna_type =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>;
  _dd_gnss_obs_dualantenna_type dd_gnss_obs_dualantenna;
  using _dd_gnss_obs_time_type =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>;
  _dd_gnss_obs_time_type dd_gnss_obs_time;
  using _dd_gnss_obs_rtcm_type =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>;
  _dd_gnss_obs_rtcm_type dd_gnss_obs_rtcm;
  using _gnss_corrections_type =
    std::vector<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>>;
  _gnss_corrections_type gnss_corrections;
  using _faulty_prn_main_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _faulty_prn_main_type faulty_prn_main;
  using _faulty_prn_aux_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _faulty_prn_aux_type faulty_prn_aux;
  using _has_time_dd_type =
    bool;
  _has_time_dd_type has_time_dd;
  using _has_dualantenna_type =
    bool;
  _has_dualantenna_type has_dualantenna;
  using _has_dualantenna_dd_type =
    bool;
  _has_dualantenna_dd_type has_dualantenna_dd;
  using _has_rtcm_dd_type =
    bool;
  _has_rtcm_dd_type has_rtcm_dd;
  using _has_rtk_type =
    bool;
  _has_rtk_type has_rtk;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__counter(
    const uint32_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__time_offset_gal_gps(
    const double & _arg)
  {
    this->time_offset_gal_gps = _arg;
    return *this;
  }
  Type & set__is_ggto_valid(
    const bool & _arg)
  {
    this->is_ggto_valid = _arg;
    return *this;
  }
  Type & set__gnss_obs_ant_main(
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> & _arg)
  {
    this->gnss_obs_ant_main = _arg;
    return *this;
  }
  Type & set__gnss_obs_ant_aux(
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> & _arg)
  {
    this->gnss_obs_ant_aux = _arg;
    return *this;
  }
  Type & set__dd_gnss_obs_dualantenna(
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> & _arg)
  {
    this->dd_gnss_obs_dualantenna = _arg;
    return *this;
  }
  Type & set__dd_gnss_obs_time(
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> & _arg)
  {
    this->dd_gnss_obs_time = _arg;
    return *this;
  }
  Type & set__dd_gnss_obs_rtcm(
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> & _arg)
  {
    this->dd_gnss_obs_rtcm = _arg;
    return *this;
  }
  Type & set__gnss_corrections(
    const std::vector<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>> & _arg)
  {
    this->gnss_corrections = _arg;
    return *this;
  }
  Type & set__faulty_prn_main(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->faulty_prn_main = _arg;
    return *this;
  }
  Type & set__faulty_prn_aux(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->faulty_prn_aux = _arg;
    return *this;
  }
  Type & set__has_time_dd(
    const bool & _arg)
  {
    this->has_time_dd = _arg;
    return *this;
  }
  Type & set__has_dualantenna(
    const bool & _arg)
  {
    this->has_dualantenna = _arg;
    return *this;
  }
  Type & set__has_dualantenna_dd(
    const bool & _arg)
  {
    this->has_dualantenna_dd = _arg;
    return *this;
  }
  Type & set__has_rtcm_dd(
    const bool & _arg)
  {
    this->has_rtcm_dd = _arg;
    return *this;
  }
  Type & set__has_rtk(
    const bool & _arg)
  {
    this->has_rtk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSObsPreProcessed
    std::shared_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSObsPreProcessed
    std::shared_ptr<irt_nav_msgs::msg::GNSSObsPreProcessed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSObsPreProcessed_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->time_offset_gal_gps != other.time_offset_gal_gps) {
      return false;
    }
    if (this->is_ggto_valid != other.is_ggto_valid) {
      return false;
    }
    if (this->gnss_obs_ant_main != other.gnss_obs_ant_main) {
      return false;
    }
    if (this->gnss_obs_ant_aux != other.gnss_obs_ant_aux) {
      return false;
    }
    if (this->dd_gnss_obs_dualantenna != other.dd_gnss_obs_dualantenna) {
      return false;
    }
    if (this->dd_gnss_obs_time != other.dd_gnss_obs_time) {
      return false;
    }
    if (this->dd_gnss_obs_rtcm != other.dd_gnss_obs_rtcm) {
      return false;
    }
    if (this->gnss_corrections != other.gnss_corrections) {
      return false;
    }
    if (this->faulty_prn_main != other.faulty_prn_main) {
      return false;
    }
    if (this->faulty_prn_aux != other.faulty_prn_aux) {
      return false;
    }
    if (this->has_time_dd != other.has_time_dd) {
      return false;
    }
    if (this->has_dualantenna != other.has_dualantenna) {
      return false;
    }
    if (this->has_dualantenna_dd != other.has_dualantenna_dd) {
      return false;
    }
    if (this->has_rtcm_dd != other.has_rtcm_dd) {
      return false;
    }
    if (this->has_rtk != other.has_rtk) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSObsPreProcessed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSObsPreProcessed_

// alias to use template instance with default allocator
using GNSSObsPreProcessed =
  irt_nav_msgs::msg::GNSSObsPreProcessed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__STRUCT_HPP_
