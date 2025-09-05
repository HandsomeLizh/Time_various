// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GaussianComponent __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GaussianComponent __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GaussianComponent_
{
  using Type = GaussianComponent_<ContainerAllocator>;

  explicit GaussianComponent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->weight = 0.0;
    }
  }

  explicit GaussianComponent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->weight = 0.0;
    }
  }

  // field types and members
  using _weight_type =
    double;
  _weight_type weight;
  using _mean_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _mean_type mean;
  using _covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__mean(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GaussianComponent
    std::shared_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GaussianComponent
    std::shared_ptr<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaussianComponent_ & other) const
  {
    if (this->weight != other.weight) {
      return false;
    }
    if (this->mean != other.mean) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaussianComponent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaussianComponent_

// alias to use template instance with default allocator
using GaussianComponent =
  irt_nav_msgs::msg::GaussianComponent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_COMPONENT__STRUCT_HPP_
