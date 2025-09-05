// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GNSSCorrection.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GNSSCorrection __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GNSSCorrection __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSCorrection_
{
  using Type = GNSSCorrection_<ContainerAllocator>;

  explicit GNSSCorrection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->psr_correction = 0.0;
    }
  }

  explicit GNSSCorrection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->psr_correction = 0.0;
    }
  }

  // field types and members
  using _prn_type =
    uint16_t;
  _prn_type prn;
  using _psr_correction_type =
    double;
  _psr_correction_type psr_correction;

  // setters for named parameter idiom
  Type & set__prn(
    const uint16_t & _arg)
  {
    this->prn = _arg;
    return *this;
  }
  Type & set__psr_correction(
    const double & _arg)
  {
    this->psr_correction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSCorrection
    std::shared_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSCorrection
    std::shared_ptr<irt_nav_msgs::msg::GNSSCorrection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSCorrection_ & other) const
  {
    if (this->prn != other.prn) {
      return false;
    }
    if (this->psr_correction != other.psr_correction) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSCorrection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSCorrection_

// alias to use template instance with default allocator
using GNSSCorrection =
  irt_nav_msgs::msg::GNSSCorrection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_CORRECTION__STRUCT_HPP_
