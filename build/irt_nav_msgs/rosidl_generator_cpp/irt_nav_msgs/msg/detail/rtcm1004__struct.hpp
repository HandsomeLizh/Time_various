// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__RTCM1004 __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__RTCM1004 __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCM1004_
{
  using Type = RTCM1004_<ContainerAllocator>;

  explicit RTCM1004_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_number = 0;
      this->ref_station_id = 0;
      this->gps_epoch_time_ms = 0ul;
      this->flag_gnss_synchronous = 0;
      this->no_gps_sat_signal_processed = 0;
      this->divergency_free_smoothing_indicator = 0;
      this->smoothing_interval = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->sat_id.begin(), this->sat_id.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l1_code_indicator.begin(), this->l1_code_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_pseudorange_mod1lightms_m.begin(), this->l1_pseudorange_mod1lightms_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_phasenrange_l1_pseudorange_m.begin(), this->l1_phasenrange_l1_pseudorange_m.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l1_locktime_indicator.begin(), this->l1_locktime_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_integer_pseudorange_modulus_ambiguity_m.begin(), this->l1_integer_pseudorange_modulus_ambiguity_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_cnr_db_hz.begin(), this->l1_cnr_db_hz.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l2_code_indicator.begin(), this->l2_code_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_l1_pseudorange_difference_m.begin(), this->l2_l1_pseudorange_difference_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_phaserange_l1_pseudorange_m.begin(), this->l2_phaserange_l1_pseudorange_m.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l2_locktime_indicator.begin(), this->l2_locktime_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_cnr_db_hz.begin(), this->l2_cnr_db_hz.end(), 0.0);
      this->msg_counter = 0ul;
    }
  }

  explicit RTCM1004_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sat_id(_alloc),
    l1_code_indicator(_alloc),
    l1_pseudorange_mod1lightms_m(_alloc),
    l1_phasenrange_l1_pseudorange_m(_alloc),
    l1_locktime_indicator(_alloc),
    l1_integer_pseudorange_modulus_ambiguity_m(_alloc),
    l1_cnr_db_hz(_alloc),
    l2_code_indicator(_alloc),
    l2_l1_pseudorange_difference_m(_alloc),
    l2_phaserange_l1_pseudorange_m(_alloc),
    l2_locktime_indicator(_alloc),
    l2_cnr_db_hz(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_number = 0;
      this->ref_station_id = 0;
      this->gps_epoch_time_ms = 0ul;
      this->flag_gnss_synchronous = 0;
      this->no_gps_sat_signal_processed = 0;
      this->divergency_free_smoothing_indicator = 0;
      this->smoothing_interval = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->sat_id.begin(), this->sat_id.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l1_code_indicator.begin(), this->l1_code_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_pseudorange_mod1lightms_m.begin(), this->l1_pseudorange_mod1lightms_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_phasenrange_l1_pseudorange_m.begin(), this->l1_phasenrange_l1_pseudorange_m.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l1_locktime_indicator.begin(), this->l1_locktime_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_integer_pseudorange_modulus_ambiguity_m.begin(), this->l1_integer_pseudorange_modulus_ambiguity_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l1_cnr_db_hz.begin(), this->l1_cnr_db_hz.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l2_code_indicator.begin(), this->l2_code_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_l1_pseudorange_difference_m.begin(), this->l2_l1_pseudorange_difference_m.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_phaserange_l1_pseudorange_m.begin(), this->l2_phaserange_l1_pseudorange_m.end(), 0.0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->l2_locktime_indicator.begin(), this->l2_locktime_indicator.end(), 0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->l2_cnr_db_hz.begin(), this->l2_cnr_db_hz.end(), 0.0);
      this->msg_counter = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _msg_number_type =
    uint16_t;
  _msg_number_type msg_number;
  using _ref_station_id_type =
    uint16_t;
  _ref_station_id_type ref_station_id;
  using _gps_epoch_time_ms_type =
    uint32_t;
  _gps_epoch_time_ms_type gps_epoch_time_ms;
  using _flag_gnss_synchronous_type =
    uint8_t;
  _flag_gnss_synchronous_type flag_gnss_synchronous;
  using _no_gps_sat_signal_processed_type =
    uint8_t;
  _no_gps_sat_signal_processed_type no_gps_sat_signal_processed;
  using _divergency_free_smoothing_indicator_type =
    uint8_t;
  _divergency_free_smoothing_indicator_type divergency_free_smoothing_indicator;
  using _smoothing_interval_type =
    uint8_t;
  _smoothing_interval_type smoothing_interval;
  using _sat_id_type =
    std::array<uint8_t, 12>;
  _sat_id_type sat_id;
  using _l1_code_indicator_type =
    std::array<uint8_t, 12>;
  _l1_code_indicator_type l1_code_indicator;
  using _l1_pseudorange_mod1lightms_m_type =
    std::array<double, 12>;
  _l1_pseudorange_mod1lightms_m_type l1_pseudorange_mod1lightms_m;
  using _l1_phasenrange_l1_pseudorange_m_type =
    std::array<double, 12>;
  _l1_phasenrange_l1_pseudorange_m_type l1_phasenrange_l1_pseudorange_m;
  using _l1_locktime_indicator_type =
    std::array<uint8_t, 12>;
  _l1_locktime_indicator_type l1_locktime_indicator;
  using _l1_integer_pseudorange_modulus_ambiguity_m_type =
    std::array<double, 12>;
  _l1_integer_pseudorange_modulus_ambiguity_m_type l1_integer_pseudorange_modulus_ambiguity_m;
  using _l1_cnr_db_hz_type =
    std::array<double, 12>;
  _l1_cnr_db_hz_type l1_cnr_db_hz;
  using _l2_code_indicator_type =
    std::array<uint8_t, 12>;
  _l2_code_indicator_type l2_code_indicator;
  using _l2_l1_pseudorange_difference_m_type =
    std::array<double, 12>;
  _l2_l1_pseudorange_difference_m_type l2_l1_pseudorange_difference_m;
  using _l2_phaserange_l1_pseudorange_m_type =
    std::array<double, 12>;
  _l2_phaserange_l1_pseudorange_m_type l2_phaserange_l1_pseudorange_m;
  using _l2_locktime_indicator_type =
    std::array<uint8_t, 12>;
  _l2_locktime_indicator_type l2_locktime_indicator;
  using _l2_cnr_db_hz_type =
    std::array<double, 12>;
  _l2_cnr_db_hz_type l2_cnr_db_hz;
  using _msg_counter_type =
    uint32_t;
  _msg_counter_type msg_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__msg_number(
    const uint16_t & _arg)
  {
    this->msg_number = _arg;
    return *this;
  }
  Type & set__ref_station_id(
    const uint16_t & _arg)
  {
    this->ref_station_id = _arg;
    return *this;
  }
  Type & set__gps_epoch_time_ms(
    const uint32_t & _arg)
  {
    this->gps_epoch_time_ms = _arg;
    return *this;
  }
  Type & set__flag_gnss_synchronous(
    const uint8_t & _arg)
  {
    this->flag_gnss_synchronous = _arg;
    return *this;
  }
  Type & set__no_gps_sat_signal_processed(
    const uint8_t & _arg)
  {
    this->no_gps_sat_signal_processed = _arg;
    return *this;
  }
  Type & set__divergency_free_smoothing_indicator(
    const uint8_t & _arg)
  {
    this->divergency_free_smoothing_indicator = _arg;
    return *this;
  }
  Type & set__smoothing_interval(
    const uint8_t & _arg)
  {
    this->smoothing_interval = _arg;
    return *this;
  }
  Type & set__sat_id(
    const std::array<uint8_t, 12> & _arg)
  {
    this->sat_id = _arg;
    return *this;
  }
  Type & set__l1_code_indicator(
    const std::array<uint8_t, 12> & _arg)
  {
    this->l1_code_indicator = _arg;
    return *this;
  }
  Type & set__l1_pseudorange_mod1lightms_m(
    const std::array<double, 12> & _arg)
  {
    this->l1_pseudorange_mod1lightms_m = _arg;
    return *this;
  }
  Type & set__l1_phasenrange_l1_pseudorange_m(
    const std::array<double, 12> & _arg)
  {
    this->l1_phasenrange_l1_pseudorange_m = _arg;
    return *this;
  }
  Type & set__l1_locktime_indicator(
    const std::array<uint8_t, 12> & _arg)
  {
    this->l1_locktime_indicator = _arg;
    return *this;
  }
  Type & set__l1_integer_pseudorange_modulus_ambiguity_m(
    const std::array<double, 12> & _arg)
  {
    this->l1_integer_pseudorange_modulus_ambiguity_m = _arg;
    return *this;
  }
  Type & set__l1_cnr_db_hz(
    const std::array<double, 12> & _arg)
  {
    this->l1_cnr_db_hz = _arg;
    return *this;
  }
  Type & set__l2_code_indicator(
    const std::array<uint8_t, 12> & _arg)
  {
    this->l2_code_indicator = _arg;
    return *this;
  }
  Type & set__l2_l1_pseudorange_difference_m(
    const std::array<double, 12> & _arg)
  {
    this->l2_l1_pseudorange_difference_m = _arg;
    return *this;
  }
  Type & set__l2_phaserange_l1_pseudorange_m(
    const std::array<double, 12> & _arg)
  {
    this->l2_phaserange_l1_pseudorange_m = _arg;
    return *this;
  }
  Type & set__l2_locktime_indicator(
    const std::array<uint8_t, 12> & _arg)
  {
    this->l2_locktime_indicator = _arg;
    return *this;
  }
  Type & set__l2_cnr_db_hz(
    const std::array<double, 12> & _arg)
  {
    this->l2_cnr_db_hz = _arg;
    return *this;
  }
  Type & set__msg_counter(
    const uint32_t & _arg)
  {
    this->msg_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__RTCM1004
    std::shared_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__RTCM1004
    std::shared_ptr<irt_nav_msgs::msg::RTCM1004_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCM1004_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->msg_number != other.msg_number) {
      return false;
    }
    if (this->ref_station_id != other.ref_station_id) {
      return false;
    }
    if (this->gps_epoch_time_ms != other.gps_epoch_time_ms) {
      return false;
    }
    if (this->flag_gnss_synchronous != other.flag_gnss_synchronous) {
      return false;
    }
    if (this->no_gps_sat_signal_processed != other.no_gps_sat_signal_processed) {
      return false;
    }
    if (this->divergency_free_smoothing_indicator != other.divergency_free_smoothing_indicator) {
      return false;
    }
    if (this->smoothing_interval != other.smoothing_interval) {
      return false;
    }
    if (this->sat_id != other.sat_id) {
      return false;
    }
    if (this->l1_code_indicator != other.l1_code_indicator) {
      return false;
    }
    if (this->l1_pseudorange_mod1lightms_m != other.l1_pseudorange_mod1lightms_m) {
      return false;
    }
    if (this->l1_phasenrange_l1_pseudorange_m != other.l1_phasenrange_l1_pseudorange_m) {
      return false;
    }
    if (this->l1_locktime_indicator != other.l1_locktime_indicator) {
      return false;
    }
    if (this->l1_integer_pseudorange_modulus_ambiguity_m != other.l1_integer_pseudorange_modulus_ambiguity_m) {
      return false;
    }
    if (this->l1_cnr_db_hz != other.l1_cnr_db_hz) {
      return false;
    }
    if (this->l2_code_indicator != other.l2_code_indicator) {
      return false;
    }
    if (this->l2_l1_pseudorange_difference_m != other.l2_l1_pseudorange_difference_m) {
      return false;
    }
    if (this->l2_phaserange_l1_pseudorange_m != other.l2_phaserange_l1_pseudorange_m) {
      return false;
    }
    if (this->l2_locktime_indicator != other.l2_locktime_indicator) {
      return false;
    }
    if (this->l2_cnr_db_hz != other.l2_cnr_db_hz) {
      return false;
    }
    if (this->msg_counter != other.msg_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCM1004_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCM1004_

// alias to use template instance with default allocator
using RTCM1004 =
  irt_nav_msgs::msg::RTCM1004_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__STRUCT_HPP_
