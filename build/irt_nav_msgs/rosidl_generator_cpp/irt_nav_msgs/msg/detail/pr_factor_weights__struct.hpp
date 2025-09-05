// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__PRFactorWeights __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__PRFactorWeights __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PRFactorWeights_
{
  using Type = PRFactorWeights_<ContainerAllocator>;

  explicit PRFactorWeights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->median = 0.0;
      this->variance = 0.0;
    }
  }

  explicit PRFactorWeights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->median = 0.0;
      this->variance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mean_type =
    double;
  _mean_type mean;
  using _median_type =
    double;
  _median_type median;
  using _variance_type =
    double;
  _variance_type variance;
  using _sat_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _sat_type sat;
  using _weight_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _weight_type weight;
  using _cardinality_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _cardinality_type cardinality;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mean(
    const double & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__median(
    const double & _arg)
  {
    this->median = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__sat(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->sat = _arg;
    return *this;
  }
  Type & set__weight(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__cardinality(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->cardinality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__PRFactorWeights
    std::shared_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__PRFactorWeights
    std::shared_ptr<irt_nav_msgs::msg::PRFactorWeights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PRFactorWeights_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mean != other.mean) {
      return false;
    }
    if (this->median != other.median) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->sat != other.sat) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->cardinality != other.cardinality) {
      return false;
    }
    return true;
  }
  bool operator!=(const PRFactorWeights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PRFactorWeights_

// alias to use template instance with default allocator
using PRFactorWeights =
  irt_nav_msgs::msg::PRFactorWeights_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__STRUCT_HPP_
