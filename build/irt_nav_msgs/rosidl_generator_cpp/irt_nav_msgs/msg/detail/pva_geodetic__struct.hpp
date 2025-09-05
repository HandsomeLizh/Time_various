// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__PVAGeodetic __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__PVAGeodetic __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PVAGeodetic_
{
  using Type = PVAGeodetic_<ContainerAllocator>;

  explicit PVAGeodetic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->wnc = 0;
      this->mode = 0;
      this->error = 0;
      this->phi_geo = 0.0;
      this->phi_geo_var = 0.0f;
      this->lambda_geo = 0.0;
      this->lambda_geo_var = 0.0f;
      this->h_geo = 0.0;
      this->h_geo_var = 0.0f;
      this->undulation = 0.0f;
      this->vn = 0.0;
      this->ve = 0.0;
      this->vu = 0.0;
      this->trk_gnd = 0.0;
      this->cog = 0.0;
      this->yaw = 0.0f;
      this->yaw_var = 0.0f;
      this->pitch_roll = 0.0f;
      this->pitch_roll_var = 0.0f;
      this->rx_clk_bias = 0.0;
      this->rx_clk_bias_var = 0.0;
      this->rx_clk_drift = 0.0;
      this->rx_clk_drift_var = 0.0;
      this->time_system = 0;
      this->datum = 0;
      this->nrsv = 0;
      this->nrsv_used = 0;
      this->nrsv_used_with_l1 = 0;
      this->nrsv_used_multi = 0;
      this->wa_corr_info = 0;
      this->reference_id = 0;
      this->mean_corr_age = 0;
      this->signal_info = 0ul;
      this->alert_flag = 0;
      this->nr_bases = 0;
      this->ppp_info = 0;
      this->sol_age = 0.0;
      this->diff_age = 0.0;
      this->do_not_use_this = false;
    }
  }

  explicit PVAGeodetic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->wnc = 0;
      this->mode = 0;
      this->error = 0;
      this->phi_geo = 0.0;
      this->phi_geo_var = 0.0f;
      this->lambda_geo = 0.0;
      this->lambda_geo_var = 0.0f;
      this->h_geo = 0.0;
      this->h_geo_var = 0.0f;
      this->undulation = 0.0f;
      this->vn = 0.0;
      this->ve = 0.0;
      this->vu = 0.0;
      this->trk_gnd = 0.0;
      this->cog = 0.0;
      this->yaw = 0.0f;
      this->yaw_var = 0.0f;
      this->pitch_roll = 0.0f;
      this->pitch_roll_var = 0.0f;
      this->rx_clk_bias = 0.0;
      this->rx_clk_bias_var = 0.0;
      this->rx_clk_drift = 0.0;
      this->rx_clk_drift_var = 0.0;
      this->time_system = 0;
      this->datum = 0;
      this->nrsv = 0;
      this->nrsv_used = 0;
      this->nrsv_used_with_l1 = 0;
      this->nrsv_used_multi = 0;
      this->wa_corr_info = 0;
      this->reference_id = 0;
      this->mean_corr_age = 0;
      this->signal_info = 0ul;
      this->alert_flag = 0;
      this->nr_bases = 0;
      this->ppp_info = 0;
      this->sol_age = 0.0;
      this->diff_age = 0.0;
      this->do_not_use_this = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tow_type =
    double;
  _tow_type tow;
  using _wnc_type =
    uint16_t;
  _wnc_type wnc;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _error_type =
    uint8_t;
  _error_type error;
  using _phi_geo_type =
    double;
  _phi_geo_type phi_geo;
  using _phi_geo_var_type =
    float;
  _phi_geo_var_type phi_geo_var;
  using _lambda_geo_type =
    double;
  _lambda_geo_type lambda_geo;
  using _lambda_geo_var_type =
    float;
  _lambda_geo_var_type lambda_geo_var;
  using _h_geo_type =
    double;
  _h_geo_type h_geo;
  using _h_geo_var_type =
    float;
  _h_geo_var_type h_geo_var;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _vn_type =
    double;
  _vn_type vn;
  using _ve_type =
    double;
  _ve_type ve;
  using _vu_type =
    double;
  _vu_type vu;
  using _trk_gnd_type =
    double;
  _trk_gnd_type trk_gnd;
  using _cog_type =
    double;
  _cog_type cog;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _yaw_var_type =
    float;
  _yaw_var_type yaw_var;
  using _pitch_roll_type =
    float;
  _pitch_roll_type pitch_roll;
  using _pitch_roll_var_type =
    float;
  _pitch_roll_var_type pitch_roll_var;
  using _rx_clk_bias_type =
    double;
  _rx_clk_bias_type rx_clk_bias;
  using _rx_clk_bias_var_type =
    double;
  _rx_clk_bias_var_type rx_clk_bias_var;
  using _rx_clk_drift_type =
    double;
  _rx_clk_drift_type rx_clk_drift;
  using _rx_clk_drift_var_type =
    double;
  _rx_clk_drift_var_type rx_clk_drift_var;
  using _time_system_type =
    uint8_t;
  _time_system_type time_system;
  using _datum_type =
    uint8_t;
  _datum_type datum;
  using _nrsv_type =
    uint8_t;
  _nrsv_type nrsv;
  using _nrsv_used_type =
    uint8_t;
  _nrsv_used_type nrsv_used;
  using _nrsv_used_with_l1_type =
    uint8_t;
  _nrsv_used_with_l1_type nrsv_used_with_l1;
  using _nrsv_used_multi_type =
    uint8_t;
  _nrsv_used_multi_type nrsv_used_multi;
  using _wa_corr_info_type =
    uint8_t;
  _wa_corr_info_type wa_corr_info;
  using _reference_id_type =
    uint16_t;
  _reference_id_type reference_id;
  using _mean_corr_age_type =
    uint16_t;
  _mean_corr_age_type mean_corr_age;
  using _signal_info_type =
    uint32_t;
  _signal_info_type signal_info;
  using _alert_flag_type =
    uint8_t;
  _alert_flag_type alert_flag;
  using _nr_bases_type =
    uint8_t;
  _nr_bases_type nr_bases;
  using _ppp_info_type =
    uint16_t;
  _ppp_info_type ppp_info;
  using _sol_age_type =
    double;
  _sol_age_type sol_age;
  using _diff_age_type =
    double;
  _diff_age_type diff_age;
  using _do_not_use_this_type =
    bool;
  _do_not_use_this_type do_not_use_this;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__wnc(
    const uint16_t & _arg)
  {
    this->wnc = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__phi_geo(
    const double & _arg)
  {
    this->phi_geo = _arg;
    return *this;
  }
  Type & set__phi_geo_var(
    const float & _arg)
  {
    this->phi_geo_var = _arg;
    return *this;
  }
  Type & set__lambda_geo(
    const double & _arg)
  {
    this->lambda_geo = _arg;
    return *this;
  }
  Type & set__lambda_geo_var(
    const float & _arg)
  {
    this->lambda_geo_var = _arg;
    return *this;
  }
  Type & set__h_geo(
    const double & _arg)
  {
    this->h_geo = _arg;
    return *this;
  }
  Type & set__h_geo_var(
    const float & _arg)
  {
    this->h_geo_var = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__vn(
    const double & _arg)
  {
    this->vn = _arg;
    return *this;
  }
  Type & set__ve(
    const double & _arg)
  {
    this->ve = _arg;
    return *this;
  }
  Type & set__vu(
    const double & _arg)
  {
    this->vu = _arg;
    return *this;
  }
  Type & set__trk_gnd(
    const double & _arg)
  {
    this->trk_gnd = _arg;
    return *this;
  }
  Type & set__cog(
    const double & _arg)
  {
    this->cog = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_var(
    const float & _arg)
  {
    this->yaw_var = _arg;
    return *this;
  }
  Type & set__pitch_roll(
    const float & _arg)
  {
    this->pitch_roll = _arg;
    return *this;
  }
  Type & set__pitch_roll_var(
    const float & _arg)
  {
    this->pitch_roll_var = _arg;
    return *this;
  }
  Type & set__rx_clk_bias(
    const double & _arg)
  {
    this->rx_clk_bias = _arg;
    return *this;
  }
  Type & set__rx_clk_bias_var(
    const double & _arg)
  {
    this->rx_clk_bias_var = _arg;
    return *this;
  }
  Type & set__rx_clk_drift(
    const double & _arg)
  {
    this->rx_clk_drift = _arg;
    return *this;
  }
  Type & set__rx_clk_drift_var(
    const double & _arg)
  {
    this->rx_clk_drift_var = _arg;
    return *this;
  }
  Type & set__time_system(
    const uint8_t & _arg)
  {
    this->time_system = _arg;
    return *this;
  }
  Type & set__datum(
    const uint8_t & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__nrsv(
    const uint8_t & _arg)
  {
    this->nrsv = _arg;
    return *this;
  }
  Type & set__nrsv_used(
    const uint8_t & _arg)
  {
    this->nrsv_used = _arg;
    return *this;
  }
  Type & set__nrsv_used_with_l1(
    const uint8_t & _arg)
  {
    this->nrsv_used_with_l1 = _arg;
    return *this;
  }
  Type & set__nrsv_used_multi(
    const uint8_t & _arg)
  {
    this->nrsv_used_multi = _arg;
    return *this;
  }
  Type & set__wa_corr_info(
    const uint8_t & _arg)
  {
    this->wa_corr_info = _arg;
    return *this;
  }
  Type & set__reference_id(
    const uint16_t & _arg)
  {
    this->reference_id = _arg;
    return *this;
  }
  Type & set__mean_corr_age(
    const uint16_t & _arg)
  {
    this->mean_corr_age = _arg;
    return *this;
  }
  Type & set__signal_info(
    const uint32_t & _arg)
  {
    this->signal_info = _arg;
    return *this;
  }
  Type & set__alert_flag(
    const uint8_t & _arg)
  {
    this->alert_flag = _arg;
    return *this;
  }
  Type & set__nr_bases(
    const uint8_t & _arg)
  {
    this->nr_bases = _arg;
    return *this;
  }
  Type & set__ppp_info(
    const uint16_t & _arg)
  {
    this->ppp_info = _arg;
    return *this;
  }
  Type & set__sol_age(
    const double & _arg)
  {
    this->sol_age = _arg;
    return *this;
  }
  Type & set__diff_age(
    const double & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__do_not_use_this(
    const bool & _arg)
  {
    this->do_not_use_this = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__PVAGeodetic
    std::shared_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__PVAGeodetic
    std::shared_ptr<irt_nav_msgs::msg::PVAGeodetic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PVAGeodetic_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->wnc != other.wnc) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->phi_geo != other.phi_geo) {
      return false;
    }
    if (this->phi_geo_var != other.phi_geo_var) {
      return false;
    }
    if (this->lambda_geo != other.lambda_geo) {
      return false;
    }
    if (this->lambda_geo_var != other.lambda_geo_var) {
      return false;
    }
    if (this->h_geo != other.h_geo) {
      return false;
    }
    if (this->h_geo_var != other.h_geo_var) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->vn != other.vn) {
      return false;
    }
    if (this->ve != other.ve) {
      return false;
    }
    if (this->vu != other.vu) {
      return false;
    }
    if (this->trk_gnd != other.trk_gnd) {
      return false;
    }
    if (this->cog != other.cog) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_var != other.yaw_var) {
      return false;
    }
    if (this->pitch_roll != other.pitch_roll) {
      return false;
    }
    if (this->pitch_roll_var != other.pitch_roll_var) {
      return false;
    }
    if (this->rx_clk_bias != other.rx_clk_bias) {
      return false;
    }
    if (this->rx_clk_bias_var != other.rx_clk_bias_var) {
      return false;
    }
    if (this->rx_clk_drift != other.rx_clk_drift) {
      return false;
    }
    if (this->rx_clk_drift_var != other.rx_clk_drift_var) {
      return false;
    }
    if (this->time_system != other.time_system) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->nrsv != other.nrsv) {
      return false;
    }
    if (this->nrsv_used != other.nrsv_used) {
      return false;
    }
    if (this->nrsv_used_with_l1 != other.nrsv_used_with_l1) {
      return false;
    }
    if (this->nrsv_used_multi != other.nrsv_used_multi) {
      return false;
    }
    if (this->wa_corr_info != other.wa_corr_info) {
      return false;
    }
    if (this->reference_id != other.reference_id) {
      return false;
    }
    if (this->mean_corr_age != other.mean_corr_age) {
      return false;
    }
    if (this->signal_info != other.signal_info) {
      return false;
    }
    if (this->alert_flag != other.alert_flag) {
      return false;
    }
    if (this->nr_bases != other.nr_bases) {
      return false;
    }
    if (this->ppp_info != other.ppp_info) {
      return false;
    }
    if (this->sol_age != other.sol_age) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->do_not_use_this != other.do_not_use_this) {
      return false;
    }
    return true;
  }
  bool operator!=(const PVAGeodetic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PVAGeodetic_

// alias to use template instance with default allocator
using PVAGeodetic =
  irt_nav_msgs::msg::PVAGeodetic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_HPP_
