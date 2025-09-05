// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__Microstrain __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__Microstrain __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Microstrain_
{
  using Type = Microstrain_<ContainerAllocator>;

  explicit Microstrain_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_timestamp = 0.0;
      this->data_ok = false;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->mag_x = 0.0;
      this->mag_y = 0.0;
      this->mag_z = 0.0;
      this->amb = 0.0;
      this->deltatheta_x = 0.0;
      this->deltatheta_y = 0.0;
      this->deltatheta_z = 0.0;
      this->deltavel_x = 0.0;
      this->deltavel_y = 0.0;
      this->deltavel_z = 0.0;
      this->freq_acc = 0.0;
      this->freq_gyro = 0.0;
      this->freq_mag = 0.0;
      this->freq_amb = 0.0;
      this->freq_d_theta = 0.0;
      this->freq_d_vel = 0.0;
    }
  }

  explicit Microstrain_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_timestamp = 0.0;
      this->data_ok = false;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->mag_x = 0.0;
      this->mag_y = 0.0;
      this->mag_z = 0.0;
      this->amb = 0.0;
      this->deltatheta_x = 0.0;
      this->deltatheta_y = 0.0;
      this->deltatheta_z = 0.0;
      this->deltavel_x = 0.0;
      this->deltavel_y = 0.0;
      this->deltavel_z = 0.0;
      this->freq_acc = 0.0;
      this->freq_gyro = 0.0;
      this->freq_mag = 0.0;
      this->freq_amb = 0.0;
      this->freq_d_theta = 0.0;
      this->freq_d_vel = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_timestamp_type =
    double;
  _sensor_timestamp_type sensor_timestamp;
  using _data_ok_type =
    bool;
  _data_ok_type data_ok;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;
  using _gyro_x_type =
    double;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    double;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    double;
  _gyro_z_type gyro_z;
  using _mag_x_type =
    double;
  _mag_x_type mag_x;
  using _mag_y_type =
    double;
  _mag_y_type mag_y;
  using _mag_z_type =
    double;
  _mag_z_type mag_z;
  using _amb_type =
    double;
  _amb_type amb;
  using _deltatheta_x_type =
    double;
  _deltatheta_x_type deltatheta_x;
  using _deltatheta_y_type =
    double;
  _deltatheta_y_type deltatheta_y;
  using _deltatheta_z_type =
    double;
  _deltatheta_z_type deltatheta_z;
  using _deltavel_x_type =
    double;
  _deltavel_x_type deltavel_x;
  using _deltavel_y_type =
    double;
  _deltavel_y_type deltavel_y;
  using _deltavel_z_type =
    double;
  _deltavel_z_type deltavel_z;
  using _freq_acc_type =
    double;
  _freq_acc_type freq_acc;
  using _freq_gyro_type =
    double;
  _freq_gyro_type freq_gyro;
  using _freq_mag_type =
    double;
  _freq_mag_type freq_mag;
  using _freq_amb_type =
    double;
  _freq_amb_type freq_amb;
  using _freq_d_theta_type =
    double;
  _freq_d_theta_type freq_d_theta;
  using _freq_d_vel_type =
    double;
  _freq_d_vel_type freq_d_vel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_timestamp(
    const double & _arg)
  {
    this->sensor_timestamp = _arg;
    return *this;
  }
  Type & set__data_ok(
    const bool & _arg)
  {
    this->data_ok = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const double & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const double & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const double & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__mag_x(
    const double & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const double & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const double & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__amb(
    const double & _arg)
  {
    this->amb = _arg;
    return *this;
  }
  Type & set__deltatheta_x(
    const double & _arg)
  {
    this->deltatheta_x = _arg;
    return *this;
  }
  Type & set__deltatheta_y(
    const double & _arg)
  {
    this->deltatheta_y = _arg;
    return *this;
  }
  Type & set__deltatheta_z(
    const double & _arg)
  {
    this->deltatheta_z = _arg;
    return *this;
  }
  Type & set__deltavel_x(
    const double & _arg)
  {
    this->deltavel_x = _arg;
    return *this;
  }
  Type & set__deltavel_y(
    const double & _arg)
  {
    this->deltavel_y = _arg;
    return *this;
  }
  Type & set__deltavel_z(
    const double & _arg)
  {
    this->deltavel_z = _arg;
    return *this;
  }
  Type & set__freq_acc(
    const double & _arg)
  {
    this->freq_acc = _arg;
    return *this;
  }
  Type & set__freq_gyro(
    const double & _arg)
  {
    this->freq_gyro = _arg;
    return *this;
  }
  Type & set__freq_mag(
    const double & _arg)
  {
    this->freq_mag = _arg;
    return *this;
  }
  Type & set__freq_amb(
    const double & _arg)
  {
    this->freq_amb = _arg;
    return *this;
  }
  Type & set__freq_d_theta(
    const double & _arg)
  {
    this->freq_d_theta = _arg;
    return *this;
  }
  Type & set__freq_d_vel(
    const double & _arg)
  {
    this->freq_d_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::Microstrain_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::Microstrain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Microstrain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Microstrain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__Microstrain
    std::shared_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__Microstrain
    std::shared_ptr<irt_nav_msgs::msg::Microstrain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Microstrain_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_timestamp != other.sensor_timestamp) {
      return false;
    }
    if (this->data_ok != other.data_ok) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->amb != other.amb) {
      return false;
    }
    if (this->deltatheta_x != other.deltatheta_x) {
      return false;
    }
    if (this->deltatheta_y != other.deltatheta_y) {
      return false;
    }
    if (this->deltatheta_z != other.deltatheta_z) {
      return false;
    }
    if (this->deltavel_x != other.deltavel_x) {
      return false;
    }
    if (this->deltavel_y != other.deltavel_y) {
      return false;
    }
    if (this->deltavel_z != other.deltavel_z) {
      return false;
    }
    if (this->freq_acc != other.freq_acc) {
      return false;
    }
    if (this->freq_gyro != other.freq_gyro) {
      return false;
    }
    if (this->freq_mag != other.freq_mag) {
      return false;
    }
    if (this->freq_amb != other.freq_amb) {
      return false;
    }
    if (this->freq_d_theta != other.freq_d_theta) {
      return false;
    }
    if (this->freq_d_vel != other.freq_d_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Microstrain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Microstrain_

// alias to use template instance with default allocator
using Microstrain =
  irt_nav_msgs::msg::Microstrain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__STRUCT_HPP_
