// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_HPP_

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
// Member 'pva_geodetic'
#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__SFusion __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__SFusion __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFusion_
{
  using Type = SFusion_<ContainerAllocator>;

  explicit SFusion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pva_geodetic(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simulation_time = 0.0;
      this->counter = 0ull;
      this->tow = 0.0;
      this->filter_tow = 0.0;
      this->pps_counter = 0ull;
      this->num_used_stat_ant1 = 0;
      this->num_used_stat_ant2 = 0;
      this->rtcm_counter = 0ull;
      this->filter_inited_success = false;
      this->filter_inited = false;
    }
  }

  explicit SFusion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pva_geodetic(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simulation_time = 0.0;
      this->counter = 0ull;
      this->tow = 0.0;
      this->filter_tow = 0.0;
      this->pps_counter = 0ull;
      this->num_used_stat_ant1 = 0;
      this->num_used_stat_ant2 = 0;
      this->rtcm_counter = 0ull;
      this->filter_inited_success = false;
      this->filter_inited = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _simulation_time_type =
    double;
  _simulation_time_type simulation_time;
  using _counter_type =
    uint64_t;
  _counter_type counter;
  using _tow_type =
    double;
  _tow_type tow;
  using _filter_tow_type =
    double;
  _filter_tow_type filter_tow;
  using _pps_counter_type =
    uint64_t;
  _pps_counter_type pps_counter;
  using _state_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _state_type state;
  using _cov_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cov_type cov;
  using _num_used_stat_ant1_type =
    uint16_t;
  _num_used_stat_ant1_type num_used_stat_ant1;
  using _num_used_stat_ant2_type =
    uint16_t;
  _num_used_stat_ant2_type num_used_stat_ant2;
  using _rtcm_counter_type =
    uint64_t;
  _rtcm_counter_type rtcm_counter;
  using _filter_inited_success_type =
    bool;
  _filter_inited_success_type filter_inited_success;
  using _filter_inited_type =
    bool;
  _filter_inited_type filter_inited;
  using _pva_geodetic_type =
    irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>;
  _pva_geodetic_type pva_geodetic;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__simulation_time(
    const double & _arg)
  {
    this->simulation_time = _arg;
    return *this;
  }
  Type & set__counter(
    const uint64_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__filter_tow(
    const double & _arg)
  {
    this->filter_tow = _arg;
    return *this;
  }
  Type & set__pps_counter(
    const uint64_t & _arg)
  {
    this->pps_counter = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__cov(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cov = _arg;
    return *this;
  }
  Type & set__num_used_stat_ant1(
    const uint16_t & _arg)
  {
    this->num_used_stat_ant1 = _arg;
    return *this;
  }
  Type & set__num_used_stat_ant2(
    const uint16_t & _arg)
  {
    this->num_used_stat_ant2 = _arg;
    return *this;
  }
  Type & set__rtcm_counter(
    const uint64_t & _arg)
  {
    this->rtcm_counter = _arg;
    return *this;
  }
  Type & set__filter_inited_success(
    const bool & _arg)
  {
    this->filter_inited_success = _arg;
    return *this;
  }
  Type & set__filter_inited(
    const bool & _arg)
  {
    this->filter_inited = _arg;
    return *this;
  }
  Type & set__pva_geodetic(
    const irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> & _arg)
  {
    this->pva_geodetic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::SFusion_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::SFusion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SFusion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SFusion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__SFusion
    std::shared_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__SFusion
    std::shared_ptr<irt_nav_msgs::msg::SFusion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFusion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->simulation_time != other.simulation_time) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->filter_tow != other.filter_tow) {
      return false;
    }
    if (this->pps_counter != other.pps_counter) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->cov != other.cov) {
      return false;
    }
    if (this->num_used_stat_ant1 != other.num_used_stat_ant1) {
      return false;
    }
    if (this->num_used_stat_ant2 != other.num_used_stat_ant2) {
      return false;
    }
    if (this->rtcm_counter != other.rtcm_counter) {
      return false;
    }
    if (this->filter_inited_success != other.filter_inited_success) {
      return false;
    }
    if (this->filter_inited != other.filter_inited) {
      return false;
    }
    if (this->pva_geodetic != other.pva_geodetic) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFusion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFusion_

// alias to use template instance with default allocator
using SFusion =
  irt_nav_msgs::msg::SFusion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__S_FUSION__STRUCT_HPP_
