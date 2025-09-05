// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__ResidualSample __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__ResidualSample __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResidualSample_
{
  using Type = ResidualSample_<ContainerAllocator>;

  explicit ResidualSample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->type = 0;
      this->loss_error = 0.0;
      this->noise_model_weight = 0.0;
    }
  }

  explicit ResidualSample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->type = 0;
      this->loss_error = 0.0;
      this->noise_model_weight = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _whitened_error_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _whitened_error_type whitened_error;
  using _unwhitened_error_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _unwhitened_error_type unwhitened_error;
  using _loss_error_type =
    double;
  _loss_error_type loss_error;
  using _noise_model_weight_type =
    double;
  _noise_model_weight_type noise_model_weight;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__whitened_error(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->whitened_error = _arg;
    return *this;
  }
  Type & set__unwhitened_error(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->unwhitened_error = _arg;
    return *this;
  }
  Type & set__loss_error(
    const double & _arg)
  {
    this->loss_error = _arg;
    return *this;
  }
  Type & set__noise_model_weight(
    const double & _arg)
  {
    this->noise_model_weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GROUND_TRUTH =
    0u;
  static constexpr uint8_t ESTIMATE =
    1u;
  static constexpr uint8_t SAMPLED_FROM_GROUND_TRUTH =
    2u;
  static constexpr uint8_t SAMPLED_FROM_ESTIMATE =
    3u;

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__ResidualSample
    std::shared_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__ResidualSample
    std::shared_ptr<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResidualSample_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->whitened_error != other.whitened_error) {
      return false;
    }
    if (this->unwhitened_error != other.unwhitened_error) {
      return false;
    }
    if (this->loss_error != other.loss_error) {
      return false;
    }
    if (this->noise_model_weight != other.noise_model_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResidualSample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResidualSample_

// alias to use template instance with default allocator
using ResidualSample =
  irt_nav_msgs::msg::ResidualSample_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResidualSample_<ContainerAllocator>::GROUND_TRUTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResidualSample_<ContainerAllocator>::ESTIMATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResidualSample_<ContainerAllocator>::SAMPLED_FROM_GROUND_TRUTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResidualSample_<ContainerAllocator>::SAMPLED_FROM_ESTIMATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL_SAMPLE__STRUCT_HPP_
