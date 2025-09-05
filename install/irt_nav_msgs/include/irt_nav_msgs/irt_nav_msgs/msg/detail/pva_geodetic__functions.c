// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/pva_geodetic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__PVAGeodetic__init(irt_nav_msgs__msg__PVAGeodetic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__PVAGeodetic__fini(msg);
    return false;
  }
  // tow
  // wnc
  // mode
  // error
  // phi_geo
  // phi_geo_var
  // lambda_geo
  // lambda_geo_var
  // h_geo
  // h_geo_var
  // undulation
  // vn
  // ve
  // vu
  // trk_gnd
  // cog
  // yaw
  // yaw_var
  // pitch_roll
  // pitch_roll_var
  // rx_clk_bias
  // rx_clk_bias_var
  // rx_clk_drift
  // rx_clk_drift_var
  // time_system
  // datum
  // nrsv
  // nrsv_used
  // nrsv_used_with_l1
  // nrsv_used_multi
  // wa_corr_info
  // reference_id
  // mean_corr_age
  // signal_info
  // alert_flag
  // nr_bases
  // ppp_info
  // sol_age
  // diff_age
  // do_not_use_this
  return true;
}

void
irt_nav_msgs__msg__PVAGeodetic__fini(irt_nav_msgs__msg__PVAGeodetic * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tow
  // wnc
  // mode
  // error
  // phi_geo
  // phi_geo_var
  // lambda_geo
  // lambda_geo_var
  // h_geo
  // h_geo_var
  // undulation
  // vn
  // ve
  // vu
  // trk_gnd
  // cog
  // yaw
  // yaw_var
  // pitch_roll
  // pitch_roll_var
  // rx_clk_bias
  // rx_clk_bias_var
  // rx_clk_drift
  // rx_clk_drift_var
  // time_system
  // datum
  // nrsv
  // nrsv_used
  // nrsv_used_with_l1
  // nrsv_used_multi
  // wa_corr_info
  // reference_id
  // mean_corr_age
  // signal_info
  // alert_flag
  // nr_bases
  // ppp_info
  // sol_age
  // diff_age
  // do_not_use_this
}

bool
irt_nav_msgs__msg__PVAGeodetic__are_equal(const irt_nav_msgs__msg__PVAGeodetic * lhs, const irt_nav_msgs__msg__PVAGeodetic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // wnc
  if (lhs->wnc != rhs->wnc) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // phi_geo
  if (lhs->phi_geo != rhs->phi_geo) {
    return false;
  }
  // phi_geo_var
  if (lhs->phi_geo_var != rhs->phi_geo_var) {
    return false;
  }
  // lambda_geo
  if (lhs->lambda_geo != rhs->lambda_geo) {
    return false;
  }
  // lambda_geo_var
  if (lhs->lambda_geo_var != rhs->lambda_geo_var) {
    return false;
  }
  // h_geo
  if (lhs->h_geo != rhs->h_geo) {
    return false;
  }
  // h_geo_var
  if (lhs->h_geo_var != rhs->h_geo_var) {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
    return false;
  }
  // vn
  if (lhs->vn != rhs->vn) {
    return false;
  }
  // ve
  if (lhs->ve != rhs->ve) {
    return false;
  }
  // vu
  if (lhs->vu != rhs->vu) {
    return false;
  }
  // trk_gnd
  if (lhs->trk_gnd != rhs->trk_gnd) {
    return false;
  }
  // cog
  if (lhs->cog != rhs->cog) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // yaw_var
  if (lhs->yaw_var != rhs->yaw_var) {
    return false;
  }
  // pitch_roll
  if (lhs->pitch_roll != rhs->pitch_roll) {
    return false;
  }
  // pitch_roll_var
  if (lhs->pitch_roll_var != rhs->pitch_roll_var) {
    return false;
  }
  // rx_clk_bias
  if (lhs->rx_clk_bias != rhs->rx_clk_bias) {
    return false;
  }
  // rx_clk_bias_var
  if (lhs->rx_clk_bias_var != rhs->rx_clk_bias_var) {
    return false;
  }
  // rx_clk_drift
  if (lhs->rx_clk_drift != rhs->rx_clk_drift) {
    return false;
  }
  // rx_clk_drift_var
  if (lhs->rx_clk_drift_var != rhs->rx_clk_drift_var) {
    return false;
  }
  // time_system
  if (lhs->time_system != rhs->time_system) {
    return false;
  }
  // datum
  if (lhs->datum != rhs->datum) {
    return false;
  }
  // nrsv
  if (lhs->nrsv != rhs->nrsv) {
    return false;
  }
  // nrsv_used
  if (lhs->nrsv_used != rhs->nrsv_used) {
    return false;
  }
  // nrsv_used_with_l1
  if (lhs->nrsv_used_with_l1 != rhs->nrsv_used_with_l1) {
    return false;
  }
  // nrsv_used_multi
  if (lhs->nrsv_used_multi != rhs->nrsv_used_multi) {
    return false;
  }
  // wa_corr_info
  if (lhs->wa_corr_info != rhs->wa_corr_info) {
    return false;
  }
  // reference_id
  if (lhs->reference_id != rhs->reference_id) {
    return false;
  }
  // mean_corr_age
  if (lhs->mean_corr_age != rhs->mean_corr_age) {
    return false;
  }
  // signal_info
  if (lhs->signal_info != rhs->signal_info) {
    return false;
  }
  // alert_flag
  if (lhs->alert_flag != rhs->alert_flag) {
    return false;
  }
  // nr_bases
  if (lhs->nr_bases != rhs->nr_bases) {
    return false;
  }
  // ppp_info
  if (lhs->ppp_info != rhs->ppp_info) {
    return false;
  }
  // sol_age
  if (lhs->sol_age != rhs->sol_age) {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // do_not_use_this
  if (lhs->do_not_use_this != rhs->do_not_use_this) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__PVAGeodetic__copy(
  const irt_nav_msgs__msg__PVAGeodetic * input,
  irt_nav_msgs__msg__PVAGeodetic * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tow
  output->tow = input->tow;
  // wnc
  output->wnc = input->wnc;
  // mode
  output->mode = input->mode;
  // error
  output->error = input->error;
  // phi_geo
  output->phi_geo = input->phi_geo;
  // phi_geo_var
  output->phi_geo_var = input->phi_geo_var;
  // lambda_geo
  output->lambda_geo = input->lambda_geo;
  // lambda_geo_var
  output->lambda_geo_var = input->lambda_geo_var;
  // h_geo
  output->h_geo = input->h_geo;
  // h_geo_var
  output->h_geo_var = input->h_geo_var;
  // undulation
  output->undulation = input->undulation;
  // vn
  output->vn = input->vn;
  // ve
  output->ve = input->ve;
  // vu
  output->vu = input->vu;
  // trk_gnd
  output->trk_gnd = input->trk_gnd;
  // cog
  output->cog = input->cog;
  // yaw
  output->yaw = input->yaw;
  // yaw_var
  output->yaw_var = input->yaw_var;
  // pitch_roll
  output->pitch_roll = input->pitch_roll;
  // pitch_roll_var
  output->pitch_roll_var = input->pitch_roll_var;
  // rx_clk_bias
  output->rx_clk_bias = input->rx_clk_bias;
  // rx_clk_bias_var
  output->rx_clk_bias_var = input->rx_clk_bias_var;
  // rx_clk_drift
  output->rx_clk_drift = input->rx_clk_drift;
  // rx_clk_drift_var
  output->rx_clk_drift_var = input->rx_clk_drift_var;
  // time_system
  output->time_system = input->time_system;
  // datum
  output->datum = input->datum;
  // nrsv
  output->nrsv = input->nrsv;
  // nrsv_used
  output->nrsv_used = input->nrsv_used;
  // nrsv_used_with_l1
  output->nrsv_used_with_l1 = input->nrsv_used_with_l1;
  // nrsv_used_multi
  output->nrsv_used_multi = input->nrsv_used_multi;
  // wa_corr_info
  output->wa_corr_info = input->wa_corr_info;
  // reference_id
  output->reference_id = input->reference_id;
  // mean_corr_age
  output->mean_corr_age = input->mean_corr_age;
  // signal_info
  output->signal_info = input->signal_info;
  // alert_flag
  output->alert_flag = input->alert_flag;
  // nr_bases
  output->nr_bases = input->nr_bases;
  // ppp_info
  output->ppp_info = input->ppp_info;
  // sol_age
  output->sol_age = input->sol_age;
  // diff_age
  output->diff_age = input->diff_age;
  // do_not_use_this
  output->do_not_use_this = input->do_not_use_this;
  return true;
}

irt_nav_msgs__msg__PVAGeodetic *
irt_nav_msgs__msg__PVAGeodetic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVAGeodetic * msg = (irt_nav_msgs__msg__PVAGeodetic *)allocator.allocate(sizeof(irt_nav_msgs__msg__PVAGeodetic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__PVAGeodetic));
  bool success = irt_nav_msgs__msg__PVAGeodetic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__PVAGeodetic__destroy(irt_nav_msgs__msg__PVAGeodetic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__PVAGeodetic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__PVAGeodetic__Sequence__init(irt_nav_msgs__msg__PVAGeodetic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVAGeodetic * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__PVAGeodetic *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__PVAGeodetic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__PVAGeodetic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__PVAGeodetic__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
irt_nav_msgs__msg__PVAGeodetic__Sequence__fini(irt_nav_msgs__msg__PVAGeodetic__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irt_nav_msgs__msg__PVAGeodetic__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

irt_nav_msgs__msg__PVAGeodetic__Sequence *
irt_nav_msgs__msg__PVAGeodetic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVAGeodetic__Sequence * array = (irt_nav_msgs__msg__PVAGeodetic__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__PVAGeodetic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__PVAGeodetic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__PVAGeodetic__Sequence__destroy(irt_nav_msgs__msg__PVAGeodetic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__PVAGeodetic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__PVAGeodetic__Sequence__are_equal(const irt_nav_msgs__msg__PVAGeodetic__Sequence * lhs, const irt_nav_msgs__msg__PVAGeodetic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__PVAGeodetic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__PVAGeodetic__Sequence__copy(
  const irt_nav_msgs__msg__PVAGeodetic__Sequence * input,
  irt_nav_msgs__msg__PVAGeodetic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__PVAGeodetic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__PVAGeodetic * data =
      (irt_nav_msgs__msg__PVAGeodetic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__PVAGeodetic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__PVAGeodetic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__PVAGeodetic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
