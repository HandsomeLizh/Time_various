// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__SolLS __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__SolLS __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolLS_
{
  using Type = SolLS_<ContainerAllocator>;

  explicit SolLS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->llh.begin(), this->llh.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel_ned.begin(), this->vel_ned.end(), 0.0);
      this->receiver_clock_bias = 0.0;
      this->receiver_clock_drift = 0.0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->dop.begin(), this->dop.end(), 0.0);
      this->available = false;
    }
  }

  explicit SolLS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : llh(_alloc),
    vel_ned(_alloc),
    dop(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->llh.begin(), this->llh.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel_ned.begin(), this->vel_ned.end(), 0.0);
      this->receiver_clock_bias = 0.0;
      this->receiver_clock_drift = 0.0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->dop.begin(), this->dop.end(), 0.0);
      this->available = false;
    }
  }

  // field types and members
  using _llh_type =
    std::array<double, 3>;
  _llh_type llh;
  using _vel_ned_type =
    std::array<double, 3>;
  _vel_ned_type vel_ned;
  using _receiver_clock_bias_type =
    double;
  _receiver_clock_bias_type receiver_clock_bias;
  using _receiver_clock_drift_type =
    double;
  _receiver_clock_drift_type receiver_clock_drift;
  using _dop_type =
    std::array<double, 2>;
  _dop_type dop;
  using _available_type =
    bool;
  _available_type available;

  // setters for named parameter idiom
  Type & set__llh(
    const std::array<double, 3> & _arg)
  {
    this->llh = _arg;
    return *this;
  }
  Type & set__vel_ned(
    const std::array<double, 3> & _arg)
  {
    this->vel_ned = _arg;
    return *this;
  }
  Type & set__receiver_clock_bias(
    const double & _arg)
  {
    this->receiver_clock_bias = _arg;
    return *this;
  }
  Type & set__receiver_clock_drift(
    const double & _arg)
  {
    this->receiver_clock_drift = _arg;
    return *this;
  }
  Type & set__dop(
    const std::array<double, 2> & _arg)
  {
    this->dop = _arg;
    return *this;
  }
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::SolLS_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::SolLS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SolLS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SolLS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__SolLS
    std::shared_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__SolLS
    std::shared_ptr<irt_nav_msgs::msg::SolLS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolLS_ & other) const
  {
    if (this->llh != other.llh) {
      return false;
    }
    if (this->vel_ned != other.vel_ned) {
      return false;
    }
    if (this->receiver_clock_bias != other.receiver_clock_bias) {
      return false;
    }
    if (this->receiver_clock_drift != other.receiver_clock_drift) {
      return false;
    }
    if (this->dop != other.dop) {
      return false;
    }
    if (this->available != other.available) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolLS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolLS_

// alias to use template instance with default allocator
using SolLS =
  irt_nav_msgs::msg::SolLS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SOL_LS__STRUCT_HPP_
