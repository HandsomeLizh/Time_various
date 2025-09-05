// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__Error2GT __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__Error2GT __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Error2GT_
{
  using Type = Error2GT_<ContainerAllocator>;

  explicit Error2GT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_tow_before = 0.0;
      this->ref_tow_after = 0.0;
      this->tow = 0.0;
      this->pos_1d_error_ned = 0.0;
      this->pos_2d_error_ned = 0.0;
      this->pos_3d_error_ned = 0.0;
      this->pos_1d_error_body = 0.0;
      this->pos_2d_error_body = 0.0;
      this->pos_3d_error_body = 0.0;
      this->pos_2d_error_geographic = 0.0;
      this->pos_3d_error_geographic = 0.0;
      this->pos_2d_error_ecef = 0.0;
      this->pos_3d_error_ecef = 0.0;
      this->vel_2d_error = 0.0;
      this->vel_3d_error = 0.0;
      this->yaw_error = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->ref_yaw = 0.0;
      this->ref_yaw_std = 0.0;
      this->ref_pitch_roll = 0.0;
      this->ref_pitch_roll_std = 0.0;
      this->ref_mode = 0;
      this->ref_error = 0;
    }
  }

  explicit Error2GT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_tow_before = 0.0;
      this->ref_tow_after = 0.0;
      this->tow = 0.0;
      this->pos_1d_error_ned = 0.0;
      this->pos_2d_error_ned = 0.0;
      this->pos_3d_error_ned = 0.0;
      this->pos_1d_error_body = 0.0;
      this->pos_2d_error_body = 0.0;
      this->pos_3d_error_body = 0.0;
      this->pos_2d_error_geographic = 0.0;
      this->pos_3d_error_geographic = 0.0;
      this->pos_2d_error_ecef = 0.0;
      this->pos_3d_error_ecef = 0.0;
      this->vel_2d_error = 0.0;
      this->vel_3d_error = 0.0;
      this->yaw_error = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->ref_yaw = 0.0;
      this->ref_yaw_std = 0.0;
      this->ref_pitch_roll = 0.0;
      this->ref_pitch_roll_std = 0.0;
      this->ref_mode = 0;
      this->ref_error = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_tow_before_type =
    double;
  _ref_tow_before_type ref_tow_before;
  using _ref_tow_after_type =
    double;
  _ref_tow_after_type ref_tow_after;
  using _tow_type =
    double;
  _tow_type tow;
  using _pos_1d_error_ned_type =
    double;
  _pos_1d_error_ned_type pos_1d_error_ned;
  using _pos_2d_error_ned_type =
    double;
  _pos_2d_error_ned_type pos_2d_error_ned;
  using _pos_3d_error_ned_type =
    double;
  _pos_3d_error_ned_type pos_3d_error_ned;
  using _pos_1d_error_body_type =
    double;
  _pos_1d_error_body_type pos_1d_error_body;
  using _pos_2d_error_body_type =
    double;
  _pos_2d_error_body_type pos_2d_error_body;
  using _pos_3d_error_body_type =
    double;
  _pos_3d_error_body_type pos_3d_error_body;
  using _pos_2d_error_geographic_type =
    double;
  _pos_2d_error_geographic_type pos_2d_error_geographic;
  using _pos_3d_error_geographic_type =
    double;
  _pos_3d_error_geographic_type pos_3d_error_geographic;
  using _pos_2d_error_ecef_type =
    double;
  _pos_2d_error_ecef_type pos_2d_error_ecef;
  using _pos_3d_error_ecef_type =
    double;
  _pos_3d_error_ecef_type pos_3d_error_ecef;
  using _vel_2d_error_type =
    double;
  _vel_2d_error_type vel_2d_error;
  using _vel_3d_error_type =
    double;
  _vel_3d_error_type vel_3d_error;
  using _pose_std_ecef_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pose_std_ecef_type pose_std_ecef;
  using _pose_std_ned_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pose_std_ned_type pose_std_ned;
  using _vel_std_ecef_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_std_ecef_type vel_std_ecef;
  using _vel_std_ned_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_std_ned_type vel_std_ned;
  using _ref_llh_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_llh_type ref_llh;
  using _ref_llh_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_llh_std_type ref_llh_std;
  using _yaw_error_type =
    double;
  _yaw_error_type yaw_error;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _ref_yaw_type =
    double;
  _ref_yaw_type ref_yaw;
  using _ref_yaw_std_type =
    double;
  _ref_yaw_std_type ref_yaw_std;
  using _ref_pitch_roll_type =
    double;
  _ref_pitch_roll_type ref_pitch_roll;
  using _ref_pitch_roll_std_type =
    double;
  _ref_pitch_roll_std_type ref_pitch_roll_std;
  using _cbd_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cbd_type cbd;
  using _cbd_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cbd_std_type cbd_std;
  using _ref_cbd_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_cbd_type ref_cbd;
  using _acc_bias_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acc_bias_type acc_bias;
  using _gyro_bias_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _gyro_bias_type gyro_bias;
  using _acc_bias_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acc_bias_std_type acc_bias_std;
  using _gyro_bias_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _gyro_bias_std_type gyro_bias_std;
  using _vel_ned_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_ned_type vel_ned;
  using _omega_body_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _omega_body_type omega_body;
  using _omega_body_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _omega_body_std_type omega_body_std;
  using _ref_vel_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_vel_type ref_vel;
  using _ref_vel_std_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_vel_std_type ref_vel_std;
  using _ref_mode_type =
    uint8_t;
  _ref_mode_type ref_mode;
  using _ref_error_type =
    uint8_t;
  _ref_error_type ref_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_tow_before(
    const double & _arg)
  {
    this->ref_tow_before = _arg;
    return *this;
  }
  Type & set__ref_tow_after(
    const double & _arg)
  {
    this->ref_tow_after = _arg;
    return *this;
  }
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__pos_1d_error_ned(
    const double & _arg)
  {
    this->pos_1d_error_ned = _arg;
    return *this;
  }
  Type & set__pos_2d_error_ned(
    const double & _arg)
  {
    this->pos_2d_error_ned = _arg;
    return *this;
  }
  Type & set__pos_3d_error_ned(
    const double & _arg)
  {
    this->pos_3d_error_ned = _arg;
    return *this;
  }
  Type & set__pos_1d_error_body(
    const double & _arg)
  {
    this->pos_1d_error_body = _arg;
    return *this;
  }
  Type & set__pos_2d_error_body(
    const double & _arg)
  {
    this->pos_2d_error_body = _arg;
    return *this;
  }
  Type & set__pos_3d_error_body(
    const double & _arg)
  {
    this->pos_3d_error_body = _arg;
    return *this;
  }
  Type & set__pos_2d_error_geographic(
    const double & _arg)
  {
    this->pos_2d_error_geographic = _arg;
    return *this;
  }
  Type & set__pos_3d_error_geographic(
    const double & _arg)
  {
    this->pos_3d_error_geographic = _arg;
    return *this;
  }
  Type & set__pos_2d_error_ecef(
    const double & _arg)
  {
    this->pos_2d_error_ecef = _arg;
    return *this;
  }
  Type & set__pos_3d_error_ecef(
    const double & _arg)
  {
    this->pos_3d_error_ecef = _arg;
    return *this;
  }
  Type & set__vel_2d_error(
    const double & _arg)
  {
    this->vel_2d_error = _arg;
    return *this;
  }
  Type & set__vel_3d_error(
    const double & _arg)
  {
    this->vel_3d_error = _arg;
    return *this;
  }
  Type & set__pose_std_ecef(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pose_std_ecef = _arg;
    return *this;
  }
  Type & set__pose_std_ned(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pose_std_ned = _arg;
    return *this;
  }
  Type & set__vel_std_ecef(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel_std_ecef = _arg;
    return *this;
  }
  Type & set__vel_std_ned(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel_std_ned = _arg;
    return *this;
  }
  Type & set__ref_llh(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_llh = _arg;
    return *this;
  }
  Type & set__ref_llh_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_llh_std = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const double & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__ref_yaw(
    const double & _arg)
  {
    this->ref_yaw = _arg;
    return *this;
  }
  Type & set__ref_yaw_std(
    const double & _arg)
  {
    this->ref_yaw_std = _arg;
    return *this;
  }
  Type & set__ref_pitch_roll(
    const double & _arg)
  {
    this->ref_pitch_roll = _arg;
    return *this;
  }
  Type & set__ref_pitch_roll_std(
    const double & _arg)
  {
    this->ref_pitch_roll_std = _arg;
    return *this;
  }
  Type & set__cbd(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cbd = _arg;
    return *this;
  }
  Type & set__cbd_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cbd_std = _arg;
    return *this;
  }
  Type & set__ref_cbd(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_cbd = _arg;
    return *this;
  }
  Type & set__acc_bias(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acc_bias = _arg;
    return *this;
  }
  Type & set__gyro_bias(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->gyro_bias = _arg;
    return *this;
  }
  Type & set__acc_bias_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acc_bias_std = _arg;
    return *this;
  }
  Type & set__gyro_bias_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->gyro_bias_std = _arg;
    return *this;
  }
  Type & set__vel_ned(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel_ned = _arg;
    return *this;
  }
  Type & set__omega_body(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->omega_body = _arg;
    return *this;
  }
  Type & set__omega_body_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->omega_body_std = _arg;
    return *this;
  }
  Type & set__ref_vel(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_vel = _arg;
    return *this;
  }
  Type & set__ref_vel_std(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_vel_std = _arg;
    return *this;
  }
  Type & set__ref_mode(
    const uint8_t & _arg)
  {
    this->ref_mode = _arg;
    return *this;
  }
  Type & set__ref_error(
    const uint8_t & _arg)
  {
    this->ref_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::Error2GT_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::Error2GT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Error2GT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Error2GT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__Error2GT
    std::shared_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__Error2GT
    std::shared_ptr<irt_nav_msgs::msg::Error2GT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error2GT_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_tow_before != other.ref_tow_before) {
      return false;
    }
    if (this->ref_tow_after != other.ref_tow_after) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->pos_1d_error_ned != other.pos_1d_error_ned) {
      return false;
    }
    if (this->pos_2d_error_ned != other.pos_2d_error_ned) {
      return false;
    }
    if (this->pos_3d_error_ned != other.pos_3d_error_ned) {
      return false;
    }
    if (this->pos_1d_error_body != other.pos_1d_error_body) {
      return false;
    }
    if (this->pos_2d_error_body != other.pos_2d_error_body) {
      return false;
    }
    if (this->pos_3d_error_body != other.pos_3d_error_body) {
      return false;
    }
    if (this->pos_2d_error_geographic != other.pos_2d_error_geographic) {
      return false;
    }
    if (this->pos_3d_error_geographic != other.pos_3d_error_geographic) {
      return false;
    }
    if (this->pos_2d_error_ecef != other.pos_2d_error_ecef) {
      return false;
    }
    if (this->pos_3d_error_ecef != other.pos_3d_error_ecef) {
      return false;
    }
    if (this->vel_2d_error != other.vel_2d_error) {
      return false;
    }
    if (this->vel_3d_error != other.vel_3d_error) {
      return false;
    }
    if (this->pose_std_ecef != other.pose_std_ecef) {
      return false;
    }
    if (this->pose_std_ned != other.pose_std_ned) {
      return false;
    }
    if (this->vel_std_ecef != other.vel_std_ecef) {
      return false;
    }
    if (this->vel_std_ned != other.vel_std_ned) {
      return false;
    }
    if (this->ref_llh != other.ref_llh) {
      return false;
    }
    if (this->ref_llh_std != other.ref_llh_std) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->ref_yaw != other.ref_yaw) {
      return false;
    }
    if (this->ref_yaw_std != other.ref_yaw_std) {
      return false;
    }
    if (this->ref_pitch_roll != other.ref_pitch_roll) {
      return false;
    }
    if (this->ref_pitch_roll_std != other.ref_pitch_roll_std) {
      return false;
    }
    if (this->cbd != other.cbd) {
      return false;
    }
    if (this->cbd_std != other.cbd_std) {
      return false;
    }
    if (this->ref_cbd != other.ref_cbd) {
      return false;
    }
    if (this->acc_bias != other.acc_bias) {
      return false;
    }
    if (this->gyro_bias != other.gyro_bias) {
      return false;
    }
    if (this->acc_bias_std != other.acc_bias_std) {
      return false;
    }
    if (this->gyro_bias_std != other.gyro_bias_std) {
      return false;
    }
    if (this->vel_ned != other.vel_ned) {
      return false;
    }
    if (this->omega_body != other.omega_body) {
      return false;
    }
    if (this->omega_body_std != other.omega_body_std) {
      return false;
    }
    if (this->ref_vel != other.ref_vel) {
      return false;
    }
    if (this->ref_vel_std != other.ref_vel_std) {
      return false;
    }
    if (this->ref_mode != other.ref_mode) {
      return false;
    }
    if (this->ref_error != other.ref_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error2GT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error2GT_

// alias to use template instance with default allocator
using Error2GT =
  irt_nav_msgs::msg::Error2GT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__STRUCT_HPP_
