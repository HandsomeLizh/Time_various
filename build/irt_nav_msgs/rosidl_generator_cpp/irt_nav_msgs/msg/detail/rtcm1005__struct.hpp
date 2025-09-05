// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__RTCM1005 __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__RTCM1005 __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCM1005_
{
  using Type = RTCM1005_<ContainerAllocator>;

  explicit RTCM1005_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_number = 0;
      this->ref_station_id = 0;
      this->reserved_itrf_realization_year = 0;
      this->gps_indicator = 0;
      this->glo_indicator = 0;
      this->galileo_indicator = 0;
      this->reference_station_indicator = 0;
      this->antenna_reference_point_ecef_x_m = 0.0;
      this->antenna_reference_point_ecef_y_m = 0.0;
      this->antenna_reference_point_ecef_z_m = 0.0;
      this->signle_receiver_oscillator_indicator = 0;
      this->reserved1 = 0;
      this->reserved2 = 0;
      this->msg_counter = 0ul;
    }
  }

  explicit RTCM1005_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_number = 0;
      this->ref_station_id = 0;
      this->reserved_itrf_realization_year = 0;
      this->gps_indicator = 0;
      this->glo_indicator = 0;
      this->galileo_indicator = 0;
      this->reference_station_indicator = 0;
      this->antenna_reference_point_ecef_x_m = 0.0;
      this->antenna_reference_point_ecef_y_m = 0.0;
      this->antenna_reference_point_ecef_z_m = 0.0;
      this->signle_receiver_oscillator_indicator = 0;
      this->reserved1 = 0;
      this->reserved2 = 0;
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
  using _reserved_itrf_realization_year_type =
    uint8_t;
  _reserved_itrf_realization_year_type reserved_itrf_realization_year;
  using _gps_indicator_type =
    uint8_t;
  _gps_indicator_type gps_indicator;
  using _glo_indicator_type =
    uint8_t;
  _glo_indicator_type glo_indicator;
  using _galileo_indicator_type =
    uint8_t;
  _galileo_indicator_type galileo_indicator;
  using _reference_station_indicator_type =
    uint8_t;
  _reference_station_indicator_type reference_station_indicator;
  using _antenna_reference_point_ecef_x_m_type =
    double;
  _antenna_reference_point_ecef_x_m_type antenna_reference_point_ecef_x_m;
  using _antenna_reference_point_ecef_y_m_type =
    double;
  _antenna_reference_point_ecef_y_m_type antenna_reference_point_ecef_y_m;
  using _antenna_reference_point_ecef_z_m_type =
    double;
  _antenna_reference_point_ecef_z_m_type antenna_reference_point_ecef_z_m;
  using _signle_receiver_oscillator_indicator_type =
    uint8_t;
  _signle_receiver_oscillator_indicator_type signle_receiver_oscillator_indicator;
  using _reserved1_type =
    uint8_t;
  _reserved1_type reserved1;
  using _reserved2_type =
    uint8_t;
  _reserved2_type reserved2;
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
  Type & set__reserved_itrf_realization_year(
    const uint8_t & _arg)
  {
    this->reserved_itrf_realization_year = _arg;
    return *this;
  }
  Type & set__gps_indicator(
    const uint8_t & _arg)
  {
    this->gps_indicator = _arg;
    return *this;
  }
  Type & set__glo_indicator(
    const uint8_t & _arg)
  {
    this->glo_indicator = _arg;
    return *this;
  }
  Type & set__galileo_indicator(
    const uint8_t & _arg)
  {
    this->galileo_indicator = _arg;
    return *this;
  }
  Type & set__reference_station_indicator(
    const uint8_t & _arg)
  {
    this->reference_station_indicator = _arg;
    return *this;
  }
  Type & set__antenna_reference_point_ecef_x_m(
    const double & _arg)
  {
    this->antenna_reference_point_ecef_x_m = _arg;
    return *this;
  }
  Type & set__antenna_reference_point_ecef_y_m(
    const double & _arg)
  {
    this->antenna_reference_point_ecef_y_m = _arg;
    return *this;
  }
  Type & set__antenna_reference_point_ecef_z_m(
    const double & _arg)
  {
    this->antenna_reference_point_ecef_z_m = _arg;
    return *this;
  }
  Type & set__signle_receiver_oscillator_indicator(
    const uint8_t & _arg)
  {
    this->signle_receiver_oscillator_indicator = _arg;
    return *this;
  }
  Type & set__reserved1(
    const uint8_t & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }
  Type & set__reserved2(
    const uint8_t & _arg)
  {
    this->reserved2 = _arg;
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
    irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__RTCM1005
    std::shared_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__RTCM1005
    std::shared_ptr<irt_nav_msgs::msg::RTCM1005_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCM1005_ & other) const
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
    if (this->reserved_itrf_realization_year != other.reserved_itrf_realization_year) {
      return false;
    }
    if (this->gps_indicator != other.gps_indicator) {
      return false;
    }
    if (this->glo_indicator != other.glo_indicator) {
      return false;
    }
    if (this->galileo_indicator != other.galileo_indicator) {
      return false;
    }
    if (this->reference_station_indicator != other.reference_station_indicator) {
      return false;
    }
    if (this->antenna_reference_point_ecef_x_m != other.antenna_reference_point_ecef_x_m) {
      return false;
    }
    if (this->antenna_reference_point_ecef_y_m != other.antenna_reference_point_ecef_y_m) {
      return false;
    }
    if (this->antenna_reference_point_ecef_z_m != other.antenna_reference_point_ecef_z_m) {
      return false;
    }
    if (this->signle_receiver_oscillator_indicator != other.signle_receiver_oscillator_indicator) {
      return false;
    }
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    if (this->reserved2 != other.reserved2) {
      return false;
    }
    if (this->msg_counter != other.msg_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCM1005_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCM1005_

// alias to use template instance with default allocator
using RTCM1005 =
  irt_nav_msgs::msg::RTCM1005_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__STRUCT_HPP_
