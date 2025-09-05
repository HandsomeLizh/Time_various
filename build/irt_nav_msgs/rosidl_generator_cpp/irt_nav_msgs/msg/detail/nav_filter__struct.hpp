// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__NavFilter __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__NavFilter __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavFilter_
{
  using Type = NavFilter_<ContainerAllocator>;

  explicit NavFilter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_enabled = false;
      this->gnss_obs_delay = 0.0;
      std::fill<typename std::array<double, 18>::iterator, double>(this->state_ekf.begin(), this->state_ekf.end(), 0.0);
      std::fill<typename std::array<double, 17>::iterator, double>(this->var_ekf.begin(), this->var_ekf.end(), 0.0);
      this->vel_normed_ekf = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_ekf.begin(), this->euler_ekf.end(), 0.0);
      this->update_exit_ekf = false;
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_ecef_ekf.begin(), this->ant_ecef_ekf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_llh_ekf.begin(), this->ant_llh_ekf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_vel_ekf.begin(), this->ant_vel_ekf.end(), 0.0);
      std::fill<typename std::array<double, 18>::iterator, double>(this->state_ukf.begin(), this->state_ukf.end(), 0.0);
      std::fill<typename std::array<double, 17>::iterator, double>(this->var_ukf.begin(), this->var_ukf.end(), 0.0);
      this->vel_normed_ukf = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_ukf.begin(), this->euler_ukf.end(), 0.0);
      this->update_exit_ukf = false;
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_ecef_ukf.begin(), this->ant_ecef_ukf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_llh_ukf.begin(), this->ant_llh_ukf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_vel_ukf.begin(), this->ant_vel_ukf.end(), 0.0);
      this->filter_time = 0.0;
    }
  }

  explicit NavFilter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state_ekf(_alloc),
    var_ekf(_alloc),
    euler_ekf(_alloc),
    ant_ecef_ekf(_alloc),
    ant_llh_ekf(_alloc),
    ant_vel_ekf(_alloc),
    state_ukf(_alloc),
    var_ukf(_alloc),
    euler_ukf(_alloc),
    ant_ecef_ukf(_alloc),
    ant_llh_ukf(_alloc),
    ant_vel_ukf(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_enabled = false;
      this->gnss_obs_delay = 0.0;
      std::fill<typename std::array<double, 18>::iterator, double>(this->state_ekf.begin(), this->state_ekf.end(), 0.0);
      std::fill<typename std::array<double, 17>::iterator, double>(this->var_ekf.begin(), this->var_ekf.end(), 0.0);
      this->vel_normed_ekf = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_ekf.begin(), this->euler_ekf.end(), 0.0);
      this->update_exit_ekf = false;
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_ecef_ekf.begin(), this->ant_ecef_ekf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_llh_ekf.begin(), this->ant_llh_ekf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_vel_ekf.begin(), this->ant_vel_ekf.end(), 0.0);
      std::fill<typename std::array<double, 18>::iterator, double>(this->state_ukf.begin(), this->state_ukf.end(), 0.0);
      std::fill<typename std::array<double, 17>::iterator, double>(this->var_ukf.begin(), this->var_ukf.end(), 0.0);
      this->vel_normed_ukf = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_ukf.begin(), this->euler_ukf.end(), 0.0);
      this->update_exit_ukf = false;
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_ecef_ukf.begin(), this->ant_ecef_ukf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_llh_ukf.begin(), this->ant_llh_ukf.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->ant_vel_ukf.begin(), this->ant_vel_ukf.end(), 0.0);
      this->filter_time = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _filter_enabled_type =
    bool;
  _filter_enabled_type filter_enabled;
  using _gnss_obs_delay_type =
    double;
  _gnss_obs_delay_type gnss_obs_delay;
  using _state_ekf_type =
    std::array<double, 18>;
  _state_ekf_type state_ekf;
  using _var_ekf_type =
    std::array<double, 17>;
  _var_ekf_type var_ekf;
  using _vel_normed_ekf_type =
    double;
  _vel_normed_ekf_type vel_normed_ekf;
  using _euler_ekf_type =
    std::array<double, 3>;
  _euler_ekf_type euler_ekf;
  using _update_exit_ekf_type =
    bool;
  _update_exit_ekf_type update_exit_ekf;
  using _ant_ecef_ekf_type =
    std::array<double, 3>;
  _ant_ecef_ekf_type ant_ecef_ekf;
  using _ant_llh_ekf_type =
    std::array<double, 3>;
  _ant_llh_ekf_type ant_llh_ekf;
  using _ant_vel_ekf_type =
    std::array<double, 3>;
  _ant_vel_ekf_type ant_vel_ekf;
  using _state_ukf_type =
    std::array<double, 18>;
  _state_ukf_type state_ukf;
  using _var_ukf_type =
    std::array<double, 17>;
  _var_ukf_type var_ukf;
  using _vel_normed_ukf_type =
    double;
  _vel_normed_ukf_type vel_normed_ukf;
  using _euler_ukf_type =
    std::array<double, 3>;
  _euler_ukf_type euler_ukf;
  using _update_exit_ukf_type =
    bool;
  _update_exit_ukf_type update_exit_ukf;
  using _ant_ecef_ukf_type =
    std::array<double, 3>;
  _ant_ecef_ukf_type ant_ecef_ukf;
  using _ant_llh_ukf_type =
    std::array<double, 3>;
  _ant_llh_ukf_type ant_llh_ukf;
  using _ant_vel_ukf_type =
    std::array<double, 3>;
  _ant_vel_ukf_type ant_vel_ukf;
  using _filter_time_type =
    double;
  _filter_time_type filter_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__filter_enabled(
    const bool & _arg)
  {
    this->filter_enabled = _arg;
    return *this;
  }
  Type & set__gnss_obs_delay(
    const double & _arg)
  {
    this->gnss_obs_delay = _arg;
    return *this;
  }
  Type & set__state_ekf(
    const std::array<double, 18> & _arg)
  {
    this->state_ekf = _arg;
    return *this;
  }
  Type & set__var_ekf(
    const std::array<double, 17> & _arg)
  {
    this->var_ekf = _arg;
    return *this;
  }
  Type & set__vel_normed_ekf(
    const double & _arg)
  {
    this->vel_normed_ekf = _arg;
    return *this;
  }
  Type & set__euler_ekf(
    const std::array<double, 3> & _arg)
  {
    this->euler_ekf = _arg;
    return *this;
  }
  Type & set__update_exit_ekf(
    const bool & _arg)
  {
    this->update_exit_ekf = _arg;
    return *this;
  }
  Type & set__ant_ecef_ekf(
    const std::array<double, 3> & _arg)
  {
    this->ant_ecef_ekf = _arg;
    return *this;
  }
  Type & set__ant_llh_ekf(
    const std::array<double, 3> & _arg)
  {
    this->ant_llh_ekf = _arg;
    return *this;
  }
  Type & set__ant_vel_ekf(
    const std::array<double, 3> & _arg)
  {
    this->ant_vel_ekf = _arg;
    return *this;
  }
  Type & set__state_ukf(
    const std::array<double, 18> & _arg)
  {
    this->state_ukf = _arg;
    return *this;
  }
  Type & set__var_ukf(
    const std::array<double, 17> & _arg)
  {
    this->var_ukf = _arg;
    return *this;
  }
  Type & set__vel_normed_ukf(
    const double & _arg)
  {
    this->vel_normed_ukf = _arg;
    return *this;
  }
  Type & set__euler_ukf(
    const std::array<double, 3> & _arg)
  {
    this->euler_ukf = _arg;
    return *this;
  }
  Type & set__update_exit_ukf(
    const bool & _arg)
  {
    this->update_exit_ukf = _arg;
    return *this;
  }
  Type & set__ant_ecef_ukf(
    const std::array<double, 3> & _arg)
  {
    this->ant_ecef_ukf = _arg;
    return *this;
  }
  Type & set__ant_llh_ukf(
    const std::array<double, 3> & _arg)
  {
    this->ant_llh_ukf = _arg;
    return *this;
  }
  Type & set__ant_vel_ukf(
    const std::array<double, 3> & _arg)
  {
    this->ant_vel_ukf = _arg;
    return *this;
  }
  Type & set__filter_time(
    const double & _arg)
  {
    this->filter_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::NavFilter_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::NavFilter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::NavFilter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::NavFilter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__NavFilter
    std::shared_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__NavFilter
    std::shared_ptr<irt_nav_msgs::msg::NavFilter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavFilter_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->filter_enabled != other.filter_enabled) {
      return false;
    }
    if (this->gnss_obs_delay != other.gnss_obs_delay) {
      return false;
    }
    if (this->state_ekf != other.state_ekf) {
      return false;
    }
    if (this->var_ekf != other.var_ekf) {
      return false;
    }
    if (this->vel_normed_ekf != other.vel_normed_ekf) {
      return false;
    }
    if (this->euler_ekf != other.euler_ekf) {
      return false;
    }
    if (this->update_exit_ekf != other.update_exit_ekf) {
      return false;
    }
    if (this->ant_ecef_ekf != other.ant_ecef_ekf) {
      return false;
    }
    if (this->ant_llh_ekf != other.ant_llh_ekf) {
      return false;
    }
    if (this->ant_vel_ekf != other.ant_vel_ekf) {
      return false;
    }
    if (this->state_ukf != other.state_ukf) {
      return false;
    }
    if (this->var_ukf != other.var_ukf) {
      return false;
    }
    if (this->vel_normed_ukf != other.vel_normed_ukf) {
      return false;
    }
    if (this->euler_ukf != other.euler_ukf) {
      return false;
    }
    if (this->update_exit_ukf != other.update_exit_ukf) {
      return false;
    }
    if (this->ant_ecef_ukf != other.ant_ecef_ukf) {
      return false;
    }
    if (this->ant_llh_ukf != other.ant_llh_ukf) {
      return false;
    }
    if (this->ant_vel_ukf != other.ant_vel_ukf) {
      return false;
    }
    if (this->filter_time != other.filter_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavFilter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavFilter_

// alias to use template instance with default allocator
using NavFilter =
  irt_nav_msgs::msg::NavFilter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__NAV_FILTER__STRUCT_HPP_
