// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'satelite_pos'
// Member 'satelite_vec'
// Member 'base_pos'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GNSSObs __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GNSSObs __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSObs_
{
  using Type = GNSSObs_<ContainerAllocator>;

  explicit GNSSObs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_receive = 0.0;
      this->integrity_flag = 0;
      this->dd_idx_sync_ref = 0;
      this->dd_idx_sync_user = 0;
      this->ref_sat_svid_gps = 0;
      this->ref_sat_svid_gal = 0;
      this->gps_corrected = false;
      this->gal_corrected = false;
    }
  }

  explicit GNSSObs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_receive = 0.0;
      this->integrity_flag = 0;
      this->dd_idx_sync_ref = 0;
      this->dd_idx_sync_user = 0;
      this->ref_sat_svid_gps = 0;
      this->ref_sat_svid_gal = 0;
      this->gps_corrected = false;
      this->gal_corrected = false;
    }
  }

  // field types and members
  using _time_receive_type =
    double;
  _time_receive_type time_receive;
  using _integrity_flag_type =
    uint8_t;
  _integrity_flag_type integrity_flag;
  using _dd_idx_sync_ref_type =
    uint8_t;
  _dd_idx_sync_ref_type dd_idx_sync_ref;
  using _dd_idx_sync_user_type =
    uint8_t;
  _dd_idx_sync_user_type dd_idx_sync_user;
  using _satelite_pos_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _satelite_pos_type satelite_pos;
  using _satelite_vec_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _satelite_vec_type satelite_vec;
  using _base_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _base_pos_type base_pos;
  using _prn_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _prn_type prn;
  using _svid_carrier_used_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _svid_carrier_used_type svid_carrier_used;
  using _pseudorange_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pseudorange_type pseudorange;
  using _pseudorange_raw_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pseudorange_raw_type pseudorange_raw;
  using _pseudorange_satclk_corrected_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pseudorange_satclk_corrected_type pseudorange_satclk_corrected;
  using _deltarange_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _deltarange_type deltarange;
  using _deltarange_raw_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _deltarange_raw_type deltarange_raw;
  using _deltarange_satclk_corrected_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _deltarange_satclk_corrected_type deltarange_satclk_corrected;
  using _pseudorange_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pseudorange_var_type pseudorange_var;
  using _pseudorange_var_measured_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pseudorange_var_measured_type pseudorange_var_measured;
  using _deltarange_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _deltarange_var_type deltarange_var;
  using _carrierphase_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _carrierphase_type carrierphase;
  using _carrierphase_raw_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _carrierphase_raw_type carrierphase_raw;
  using _carrierphase_satclk_corrected_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _carrierphase_satclk_corrected_type carrierphase_satclk_corrected;
  using _carrierphase_var_measured_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _carrierphase_var_measured_type carrierphase_var_measured;
  using _elevation_angle_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _elevation_angle_type elevation_angle;
  using _azimuth_angle_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _azimuth_angle_type azimuth_angle;
  using _locktime_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _locktime_type locktime;
  using _cn0_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cn0_type cn0;
  using _ref_sat_svid_gps_type =
    uint8_t;
  _ref_sat_svid_gps_type ref_sat_svid_gps;
  using _ref_sat_svid_gal_type =
    uint8_t;
  _ref_sat_svid_gal_type ref_sat_svid_gal;
  using _gps_corrected_type =
    bool;
  _gps_corrected_type gps_corrected;
  using _gal_corrected_type =
    bool;
  _gal_corrected_type gal_corrected;

  // setters for named parameter idiom
  Type & set__time_receive(
    const double & _arg)
  {
    this->time_receive = _arg;
    return *this;
  }
  Type & set__integrity_flag(
    const uint8_t & _arg)
  {
    this->integrity_flag = _arg;
    return *this;
  }
  Type & set__dd_idx_sync_ref(
    const uint8_t & _arg)
  {
    this->dd_idx_sync_ref = _arg;
    return *this;
  }
  Type & set__dd_idx_sync_user(
    const uint8_t & _arg)
  {
    this->dd_idx_sync_user = _arg;
    return *this;
  }
  Type & set__satelite_pos(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->satelite_pos = _arg;
    return *this;
  }
  Type & set__satelite_vec(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->satelite_vec = _arg;
    return *this;
  }
  Type & set__base_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->base_pos = _arg;
    return *this;
  }
  Type & set__prn(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->prn = _arg;
    return *this;
  }
  Type & set__svid_carrier_used(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->svid_carrier_used = _arg;
    return *this;
  }
  Type & set__pseudorange(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pseudorange = _arg;
    return *this;
  }
  Type & set__pseudorange_raw(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pseudorange_raw = _arg;
    return *this;
  }
  Type & set__pseudorange_satclk_corrected(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pseudorange_satclk_corrected = _arg;
    return *this;
  }
  Type & set__deltarange(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->deltarange = _arg;
    return *this;
  }
  Type & set__deltarange_raw(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->deltarange_raw = _arg;
    return *this;
  }
  Type & set__deltarange_satclk_corrected(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->deltarange_satclk_corrected = _arg;
    return *this;
  }
  Type & set__pseudorange_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pseudorange_var = _arg;
    return *this;
  }
  Type & set__pseudorange_var_measured(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pseudorange_var_measured = _arg;
    return *this;
  }
  Type & set__deltarange_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->deltarange_var = _arg;
    return *this;
  }
  Type & set__carrierphase(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->carrierphase = _arg;
    return *this;
  }
  Type & set__carrierphase_raw(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->carrierphase_raw = _arg;
    return *this;
  }
  Type & set__carrierphase_satclk_corrected(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->carrierphase_satclk_corrected = _arg;
    return *this;
  }
  Type & set__carrierphase_var_measured(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->carrierphase_var_measured = _arg;
    return *this;
  }
  Type & set__elevation_angle(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->elevation_angle = _arg;
    return *this;
  }
  Type & set__azimuth_angle(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->azimuth_angle = _arg;
    return *this;
  }
  Type & set__locktime(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->locktime = _arg;
    return *this;
  }
  Type & set__cn0(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cn0 = _arg;
    return *this;
  }
  Type & set__ref_sat_svid_gps(
    const uint8_t & _arg)
  {
    this->ref_sat_svid_gps = _arg;
    return *this;
  }
  Type & set__ref_sat_svid_gal(
    const uint8_t & _arg)
  {
    this->ref_sat_svid_gal = _arg;
    return *this;
  }
  Type & set__gps_corrected(
    const bool & _arg)
  {
    this->gps_corrected = _arg;
    return *this;
  }
  Type & set__gal_corrected(
    const bool & _arg)
  {
    this->gal_corrected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSObs
    std::shared_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSObs
    std::shared_ptr<irt_nav_msgs::msg::GNSSObs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSObs_ & other) const
  {
    if (this->time_receive != other.time_receive) {
      return false;
    }
    if (this->integrity_flag != other.integrity_flag) {
      return false;
    }
    if (this->dd_idx_sync_ref != other.dd_idx_sync_ref) {
      return false;
    }
    if (this->dd_idx_sync_user != other.dd_idx_sync_user) {
      return false;
    }
    if (this->satelite_pos != other.satelite_pos) {
      return false;
    }
    if (this->satelite_vec != other.satelite_vec) {
      return false;
    }
    if (this->base_pos != other.base_pos) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    if (this->svid_carrier_used != other.svid_carrier_used) {
      return false;
    }
    if (this->pseudorange != other.pseudorange) {
      return false;
    }
    if (this->pseudorange_raw != other.pseudorange_raw) {
      return false;
    }
    if (this->pseudorange_satclk_corrected != other.pseudorange_satclk_corrected) {
      return false;
    }
    if (this->deltarange != other.deltarange) {
      return false;
    }
    if (this->deltarange_raw != other.deltarange_raw) {
      return false;
    }
    if (this->deltarange_satclk_corrected != other.deltarange_satclk_corrected) {
      return false;
    }
    if (this->pseudorange_var != other.pseudorange_var) {
      return false;
    }
    if (this->pseudorange_var_measured != other.pseudorange_var_measured) {
      return false;
    }
    if (this->deltarange_var != other.deltarange_var) {
      return false;
    }
    if (this->carrierphase != other.carrierphase) {
      return false;
    }
    if (this->carrierphase_raw != other.carrierphase_raw) {
      return false;
    }
    if (this->carrierphase_satclk_corrected != other.carrierphase_satclk_corrected) {
      return false;
    }
    if (this->carrierphase_var_measured != other.carrierphase_var_measured) {
      return false;
    }
    if (this->elevation_angle != other.elevation_angle) {
      return false;
    }
    if (this->azimuth_angle != other.azimuth_angle) {
      return false;
    }
    if (this->locktime != other.locktime) {
      return false;
    }
    if (this->cn0 != other.cn0) {
      return false;
    }
    if (this->ref_sat_svid_gps != other.ref_sat_svid_gps) {
      return false;
    }
    if (this->ref_sat_svid_gal != other.ref_sat_svid_gal) {
      return false;
    }
    if (this->gps_corrected != other.gps_corrected) {
      return false;
    }
    if (this->gal_corrected != other.gal_corrected) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSObs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSObs_

// alias to use template instance with default allocator
using GNSSObs =
  irt_nav_msgs::msg::GNSSObs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__STRUCT_HPP_
