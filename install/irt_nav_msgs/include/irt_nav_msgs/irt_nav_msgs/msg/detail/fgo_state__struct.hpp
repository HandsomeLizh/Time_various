// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'vel'
// Member 'acc'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__FGOState __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__FGOState __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FGOState_
{
  using Type = FGOState_<ContainerAllocator>;

  explicit FGOState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    vel(_init),
    acc(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  explicit FGOState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    vel(_alloc, _init),
    acc(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _vel_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _vel_type vel;
  using _acc_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _acc_type acc;
  using _pose_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pose_var_type pose_var;
  using _vel_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_var_type vel_var;
  using _acc_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acc_var_type acc_var;
  using _heading_type =
    double;
  _heading_type heading;
  using _imu_bias_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _imu_bias_type imu_bias;
  using _imu_bias_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _imu_bias_var_type imu_bias_var;
  using _cbd_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cbd_type cbd;
  using _cbd_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cbd_var_type cbd_var;
  using _amb_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _amb_type amb;
  using _amb_var_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _amb_var_type amb_var;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__acc(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__pose_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pose_var = _arg;
    return *this;
  }
  Type & set__vel_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel_var = _arg;
    return *this;
  }
  Type & set__acc_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acc_var = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__imu_bias(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->imu_bias = _arg;
    return *this;
  }
  Type & set__imu_bias_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->imu_bias_var = _arg;
    return *this;
  }
  Type & set__cbd(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cbd = _arg;
    return *this;
  }
  Type & set__cbd_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cbd_var = _arg;
    return *this;
  }
  Type & set__amb(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->amb = _arg;
    return *this;
  }
  Type & set__amb_var(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->amb_var = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::FGOState_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::FGOState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FGOState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FGOState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__FGOState
    std::shared_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__FGOState
    std::shared_ptr<irt_nav_msgs::msg::FGOState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FGOState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->pose_var != other.pose_var) {
      return false;
    }
    if (this->vel_var != other.vel_var) {
      return false;
    }
    if (this->acc_var != other.acc_var) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->imu_bias != other.imu_bias) {
      return false;
    }
    if (this->imu_bias_var != other.imu_bias_var) {
      return false;
    }
    if (this->cbd != other.cbd) {
      return false;
    }
    if (this->cbd_var != other.cbd_var) {
      return false;
    }
    if (this->amb != other.amb) {
      return false;
    }
    if (this->amb_var != other.amb_var) {
      return false;
    }
    return true;
  }
  bool operator!=(const FGOState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FGOState_

// alias to use template instance with default allocator
using FGOState =
  irt_nav_msgs::msg::FGOState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__STRUCT_HPP_
