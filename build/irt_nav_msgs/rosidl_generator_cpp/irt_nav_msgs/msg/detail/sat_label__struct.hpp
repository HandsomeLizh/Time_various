// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sat_pos'
// Member 'sat_vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'gaussian'
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__SatLabel __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__SatLabel __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SatLabel_
{
  using Type = SatLabel_<ContainerAllocator>;

  explicit SatLabel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sat_pos(_init),
    sat_vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrity_flag = 0;
      this->prn = 0ul;
      this->psr = 0.0;
      this->psr_raw = 0.0;
      this->psr_satclk_corrected = 0.0;
      this->psr_dev_measured = 0.0;
      this->psr_dev_preproc = 0.0;
      this->dr = 0.0;
      this->dr_raw = 0.0;
      this->dr_satclk_corrected = 0.0;
      this->dr_dev_preproc = 0.0;
      this->cp = 0.0;
      this->cp_raw = 0.0;
      this->cp_satclk_corrected = 0.0;
      this->cp_dev_measured = 0.0;
      this->locktime = 0.0;
      this->psr_correction = 0.0;
      this->cn0 = 0.0;
      this->cycle_slip = false;
      this->psr_residual = 0.0;
      this->dr_residual = 0.0;
      this->cp_residual = 0.0;
      this->elevation_angle = 0.0;
      this->azimuth_angle = 0.0;
      this->cmc = 0.0;
      this->drc = 0.0;
      this->factor = "";
      this->dim = 0;
      this->weight = 0.0;
      this->label = 0;
      this->label_dev = 0.0;
      this->msg = "";
    }
  }

  explicit SatLabel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sat_pos(_alloc, _init),
    sat_vel(_alloc, _init),
    factor(_alloc),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrity_flag = 0;
      this->prn = 0ul;
      this->psr = 0.0;
      this->psr_raw = 0.0;
      this->psr_satclk_corrected = 0.0;
      this->psr_dev_measured = 0.0;
      this->psr_dev_preproc = 0.0;
      this->dr = 0.0;
      this->dr_raw = 0.0;
      this->dr_satclk_corrected = 0.0;
      this->dr_dev_preproc = 0.0;
      this->cp = 0.0;
      this->cp_raw = 0.0;
      this->cp_satclk_corrected = 0.0;
      this->cp_dev_measured = 0.0;
      this->locktime = 0.0;
      this->psr_correction = 0.0;
      this->cn0 = 0.0;
      this->cycle_slip = false;
      this->psr_residual = 0.0;
      this->dr_residual = 0.0;
      this->cp_residual = 0.0;
      this->elevation_angle = 0.0;
      this->azimuth_angle = 0.0;
      this->cmc = 0.0;
      this->drc = 0.0;
      this->factor = "";
      this->dim = 0;
      this->weight = 0.0;
      this->label = 0;
      this->label_dev = 0.0;
      this->msg = "";
    }
  }

  // field types and members
  using _integrity_flag_type =
    uint8_t;
  _integrity_flag_type integrity_flag;
  using _prn_type =
    uint32_t;
  _prn_type prn;
  using _sat_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sat_pos_type sat_pos;
  using _sat_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sat_vel_type sat_vel;
  using _psr_type =
    double;
  _psr_type psr;
  using _psr_raw_type =
    double;
  _psr_raw_type psr_raw;
  using _psr_satclk_corrected_type =
    double;
  _psr_satclk_corrected_type psr_satclk_corrected;
  using _psr_dev_measured_type =
    double;
  _psr_dev_measured_type psr_dev_measured;
  using _psr_dev_preproc_type =
    double;
  _psr_dev_preproc_type psr_dev_preproc;
  using _dr_type =
    double;
  _dr_type dr;
  using _dr_raw_type =
    double;
  _dr_raw_type dr_raw;
  using _dr_satclk_corrected_type =
    double;
  _dr_satclk_corrected_type dr_satclk_corrected;
  using _dr_dev_preproc_type =
    double;
  _dr_dev_preproc_type dr_dev_preproc;
  using _cp_type =
    double;
  _cp_type cp;
  using _cp_raw_type =
    double;
  _cp_raw_type cp_raw;
  using _cp_satclk_corrected_type =
    double;
  _cp_satclk_corrected_type cp_satclk_corrected;
  using _cp_dev_measured_type =
    double;
  _cp_dev_measured_type cp_dev_measured;
  using _locktime_type =
    double;
  _locktime_type locktime;
  using _psr_correction_type =
    double;
  _psr_correction_type psr_correction;
  using _cn0_type =
    double;
  _cn0_type cn0;
  using _cycle_slip_type =
    bool;
  _cycle_slip_type cycle_slip;
  using _psr_residual_type =
    double;
  _psr_residual_type psr_residual;
  using _dr_residual_type =
    double;
  _dr_residual_type dr_residual;
  using _cp_residual_type =
    double;
  _cp_residual_type cp_residual;
  using _elevation_angle_type =
    double;
  _elevation_angle_type elevation_angle;
  using _azimuth_angle_type =
    double;
  _azimuth_angle_type azimuth_angle;
  using _cmc_type =
    double;
  _cmc_type cmc;
  using _drc_type =
    double;
  _drc_type drc;
  using _factor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _factor_type factor;
  using _dim_type =
    uint8_t;
  _dim_type dim;
  using _residuals_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _residuals_type residuals;
  using _gaussian_type =
    std::vector<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>>;
  _gaussian_type gaussian;
  using _weight_type =
    double;
  _weight_type weight;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;
  using _label_type =
    uint8_t;
  _label_type label;
  using _label_dev_type =
    double;
  _label_dev_type label_dev;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__integrity_flag(
    const uint8_t & _arg)
  {
    this->integrity_flag = _arg;
    return *this;
  }
  Type & set__prn(
    const uint32_t & _arg)
  {
    this->prn = _arg;
    return *this;
  }
  Type & set__sat_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sat_pos = _arg;
    return *this;
  }
  Type & set__sat_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sat_vel = _arg;
    return *this;
  }
  Type & set__psr(
    const double & _arg)
  {
    this->psr = _arg;
    return *this;
  }
  Type & set__psr_raw(
    const double & _arg)
  {
    this->psr_raw = _arg;
    return *this;
  }
  Type & set__psr_satclk_corrected(
    const double & _arg)
  {
    this->psr_satclk_corrected = _arg;
    return *this;
  }
  Type & set__psr_dev_measured(
    const double & _arg)
  {
    this->psr_dev_measured = _arg;
    return *this;
  }
  Type & set__psr_dev_preproc(
    const double & _arg)
  {
    this->psr_dev_preproc = _arg;
    return *this;
  }
  Type & set__dr(
    const double & _arg)
  {
    this->dr = _arg;
    return *this;
  }
  Type & set__dr_raw(
    const double & _arg)
  {
    this->dr_raw = _arg;
    return *this;
  }
  Type & set__dr_satclk_corrected(
    const double & _arg)
  {
    this->dr_satclk_corrected = _arg;
    return *this;
  }
  Type & set__dr_dev_preproc(
    const double & _arg)
  {
    this->dr_dev_preproc = _arg;
    return *this;
  }
  Type & set__cp(
    const double & _arg)
  {
    this->cp = _arg;
    return *this;
  }
  Type & set__cp_raw(
    const double & _arg)
  {
    this->cp_raw = _arg;
    return *this;
  }
  Type & set__cp_satclk_corrected(
    const double & _arg)
  {
    this->cp_satclk_corrected = _arg;
    return *this;
  }
  Type & set__cp_dev_measured(
    const double & _arg)
  {
    this->cp_dev_measured = _arg;
    return *this;
  }
  Type & set__locktime(
    const double & _arg)
  {
    this->locktime = _arg;
    return *this;
  }
  Type & set__psr_correction(
    const double & _arg)
  {
    this->psr_correction = _arg;
    return *this;
  }
  Type & set__cn0(
    const double & _arg)
  {
    this->cn0 = _arg;
    return *this;
  }
  Type & set__cycle_slip(
    const bool & _arg)
  {
    this->cycle_slip = _arg;
    return *this;
  }
  Type & set__psr_residual(
    const double & _arg)
  {
    this->psr_residual = _arg;
    return *this;
  }
  Type & set__dr_residual(
    const double & _arg)
  {
    this->dr_residual = _arg;
    return *this;
  }
  Type & set__cp_residual(
    const double & _arg)
  {
    this->cp_residual = _arg;
    return *this;
  }
  Type & set__elevation_angle(
    const double & _arg)
  {
    this->elevation_angle = _arg;
    return *this;
  }
  Type & set__azimuth_angle(
    const double & _arg)
  {
    this->azimuth_angle = _arg;
    return *this;
  }
  Type & set__cmc(
    const double & _arg)
  {
    this->cmc = _arg;
    return *this;
  }
  Type & set__drc(
    const double & _arg)
  {
    this->drc = _arg;
    return *this;
  }
  Type & set__factor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->factor = _arg;
    return *this;
  }
  Type & set__dim(
    const uint8_t & _arg)
  {
    this->dim = _arg;
    return *this;
  }
  Type & set__residuals(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->residuals = _arg;
    return *this;
  }
  Type & set__gaussian(
    const std::vector<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>> & _arg)
  {
    this->gaussian = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__label(
    const uint8_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__label_dev(
    const double & _arg)
  {
    this->label_dev = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::SatLabel_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::SatLabel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__SatLabel
    std::shared_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__SatLabel
    std::shared_ptr<irt_nav_msgs::msg::SatLabel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SatLabel_ & other) const
  {
    if (this->integrity_flag != other.integrity_flag) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    if (this->sat_pos != other.sat_pos) {
      return false;
    }
    if (this->sat_vel != other.sat_vel) {
      return false;
    }
    if (this->psr != other.psr) {
      return false;
    }
    if (this->psr_raw != other.psr_raw) {
      return false;
    }
    if (this->psr_satclk_corrected != other.psr_satclk_corrected) {
      return false;
    }
    if (this->psr_dev_measured != other.psr_dev_measured) {
      return false;
    }
    if (this->psr_dev_preproc != other.psr_dev_preproc) {
      return false;
    }
    if (this->dr != other.dr) {
      return false;
    }
    if (this->dr_raw != other.dr_raw) {
      return false;
    }
    if (this->dr_satclk_corrected != other.dr_satclk_corrected) {
      return false;
    }
    if (this->dr_dev_preproc != other.dr_dev_preproc) {
      return false;
    }
    if (this->cp != other.cp) {
      return false;
    }
    if (this->cp_raw != other.cp_raw) {
      return false;
    }
    if (this->cp_satclk_corrected != other.cp_satclk_corrected) {
      return false;
    }
    if (this->cp_dev_measured != other.cp_dev_measured) {
      return false;
    }
    if (this->locktime != other.locktime) {
      return false;
    }
    if (this->psr_correction != other.psr_correction) {
      return false;
    }
    if (this->cn0 != other.cn0) {
      return false;
    }
    if (this->cycle_slip != other.cycle_slip) {
      return false;
    }
    if (this->psr_residual != other.psr_residual) {
      return false;
    }
    if (this->dr_residual != other.dr_residual) {
      return false;
    }
    if (this->cp_residual != other.cp_residual) {
      return false;
    }
    if (this->elevation_angle != other.elevation_angle) {
      return false;
    }
    if (this->azimuth_angle != other.azimuth_angle) {
      return false;
    }
    if (this->cmc != other.cmc) {
      return false;
    }
    if (this->drc != other.drc) {
      return false;
    }
    if (this->factor != other.factor) {
      return false;
    }
    if (this->dim != other.dim) {
      return false;
    }
    if (this->residuals != other.residuals) {
      return false;
    }
    if (this->gaussian != other.gaussian) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->label_dev != other.label_dev) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SatLabel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SatLabel_

// alias to use template instance with default allocator
using SatLabel =
  irt_nav_msgs::msg::SatLabel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SAT_LABEL__STRUCT_HPP_
