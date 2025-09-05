// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__RTCMV3 __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__RTCMV3 __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCMV3_
{
  using Type = RTCMV3_<ContainerAllocator>;

  explicit RTCMV3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->base.begin(), this->base.end(), 0.0);
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->svid.begin(), this->svid.end(), 0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->pseudorange.begin(), this->pseudorange.end(), 0.0);
      std::fill<typename std::array<uint8_t, 200>::iterator, uint8_t>(this->type.begin(), this->type.end(), 0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->carrier.begin(), this->carrier.end(), 0.0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->cn0.begin(), this->cn0.end(), 0.0);
      std::fill<typename std::array<uint16_t, 200>::iterator, uint16_t>(this->locktime.begin(), this->locktime.end(), 0);
      std::fill<typename std::array<uint16_t, 200>::iterator, uint16_t>(this->lli.begin(), this->lli.end(), 0);
      this->reference_station_id = 0;
    }
  }

  explicit RTCMV3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    base(_alloc),
    svid(_alloc),
    pseudorange(_alloc),
    type(_alloc),
    carrier(_alloc),
    cn0(_alloc),
    locktime(_alloc),
    lli(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->base.begin(), this->base.end(), 0.0);
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->svid.begin(), this->svid.end(), 0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->pseudorange.begin(), this->pseudorange.end(), 0.0);
      std::fill<typename std::array<uint8_t, 200>::iterator, uint8_t>(this->type.begin(), this->type.end(), 0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->carrier.begin(), this->carrier.end(), 0.0);
      std::fill<typename std::array<double, 200>::iterator, double>(this->cn0.begin(), this->cn0.end(), 0.0);
      std::fill<typename std::array<uint16_t, 200>::iterator, uint16_t>(this->locktime.begin(), this->locktime.end(), 0);
      std::fill<typename std::array<uint16_t, 200>::iterator, uint16_t>(this->lli.begin(), this->lli.end(), 0);
      this->reference_station_id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tow_type =
    double;
  _tow_type tow;
  using _base_type =
    std::array<double, 3>;
  _base_type base;
  using _svid_type =
    std::array<uint8_t, 40>;
  _svid_type svid;
  using _pseudorange_type =
    std::array<double, 200>;
  _pseudorange_type pseudorange;
  using _type_type =
    std::array<uint8_t, 200>;
  _type_type type;
  using _carrier_type =
    std::array<double, 200>;
  _carrier_type carrier;
  using _cn0_type =
    std::array<double, 200>;
  _cn0_type cn0;
  using _locktime_type =
    std::array<uint16_t, 200>;
  _locktime_type locktime;
  using _lli_type =
    std::array<uint16_t, 200>;
  _lli_type lli;
  using _reference_station_id_type =
    uint16_t;
  _reference_station_id_type reference_station_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__base(
    const std::array<double, 3> & _arg)
  {
    this->base = _arg;
    return *this;
  }
  Type & set__svid(
    const std::array<uint8_t, 40> & _arg)
  {
    this->svid = _arg;
    return *this;
  }
  Type & set__pseudorange(
    const std::array<double, 200> & _arg)
  {
    this->pseudorange = _arg;
    return *this;
  }
  Type & set__type(
    const std::array<uint8_t, 200> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__carrier(
    const std::array<double, 200> & _arg)
  {
    this->carrier = _arg;
    return *this;
  }
  Type & set__cn0(
    const std::array<double, 200> & _arg)
  {
    this->cn0 = _arg;
    return *this;
  }
  Type & set__locktime(
    const std::array<uint16_t, 200> & _arg)
  {
    this->locktime = _arg;
    return *this;
  }
  Type & set__lli(
    const std::array<uint16_t, 200> & _arg)
  {
    this->lli = _arg;
    return *this;
  }
  Type & set__reference_station_id(
    const uint16_t & _arg)
  {
    this->reference_station_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__RTCMV3
    std::shared_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__RTCMV3
    std::shared_ptr<irt_nav_msgs::msg::RTCMV3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCMV3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->base != other.base) {
      return false;
    }
    if (this->svid != other.svid) {
      return false;
    }
    if (this->pseudorange != other.pseudorange) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->carrier != other.carrier) {
      return false;
    }
    if (this->cn0 != other.cn0) {
      return false;
    }
    if (this->locktime != other.locktime) {
      return false;
    }
    if (this->lli != other.lli) {
      return false;
    }
    if (this->reference_station_id != other.reference_station_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCMV3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCMV3_

// alias to use template instance with default allocator
using RTCMV3 =
  irt_nav_msgs::msg::RTCMV3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCMV3__STRUCT_HPP_
