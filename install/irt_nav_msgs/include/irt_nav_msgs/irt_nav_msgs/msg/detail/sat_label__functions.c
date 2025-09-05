// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/sat_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sat_pos`
// Member `sat_vel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `factor`
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"
// Member `residuals`
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gaussian`
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"

bool
irt_nav_msgs__msg__SatLabel__init(irt_nav_msgs__msg__SatLabel * msg)
{
  if (!msg) {
    return false;
  }
  // integrity_flag
  // prn
  // sat_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->sat_pos)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // sat_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->sat_vel)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // psr
  // psr_raw
  // psr_satclk_corrected
  // psr_dev_measured
  // psr_dev_preproc
  // dr
  // dr_raw
  // dr_satclk_corrected
  // dr_dev_preproc
  // cp
  // cp_raw
  // cp_satclk_corrected
  // cp_dev_measured
  // locktime
  // psr_correction
  // cn0
  // cycle_slip
  // psr_residual
  // dr_residual
  // cp_residual
  // elevation_angle
  // azimuth_angle
  // cmc
  // drc
  // factor
  if (!rosidl_runtime_c__String__init(&msg->factor)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // dim
  // residuals
  if (!rosidl_runtime_c__double__Sequence__init(&msg->residuals, 0)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__init(&msg->gaussian, 0)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // weight
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  // label
  // label_dev
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__SatLabel__fini(irt_nav_msgs__msg__SatLabel * msg)
{
  if (!msg) {
    return;
  }
  // integrity_flag
  // prn
  // sat_pos
  geometry_msgs__msg__Vector3__fini(&msg->sat_pos);
  // sat_vel
  geometry_msgs__msg__Vector3__fini(&msg->sat_vel);
  // psr
  // psr_raw
  // psr_satclk_corrected
  // psr_dev_measured
  // psr_dev_preproc
  // dr
  // dr_raw
  // dr_satclk_corrected
  // dr_dev_preproc
  // cp
  // cp_raw
  // cp_satclk_corrected
  // cp_dev_measured
  // locktime
  // psr_correction
  // cn0
  // cycle_slip
  // psr_residual
  // dr_residual
  // cp_residual
  // elevation_angle
  // azimuth_angle
  // cmc
  // drc
  // factor
  rosidl_runtime_c__String__fini(&msg->factor);
  // dim
  // residuals
  rosidl_runtime_c__double__Sequence__fini(&msg->residuals);
  // gaussian
  irt_nav_msgs__msg__GaussianComponent__Sequence__fini(&msg->gaussian);
  // weight
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
  // label
  // label_dev
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
irt_nav_msgs__msg__SatLabel__are_equal(const irt_nav_msgs__msg__SatLabel * lhs, const irt_nav_msgs__msg__SatLabel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // integrity_flag
  if (lhs->integrity_flag != rhs->integrity_flag) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // sat_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sat_pos), &(rhs->sat_pos)))
  {
    return false;
  }
  // sat_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sat_vel), &(rhs->sat_vel)))
  {
    return false;
  }
  // psr
  if (lhs->psr != rhs->psr) {
    return false;
  }
  // psr_raw
  if (lhs->psr_raw != rhs->psr_raw) {
    return false;
  }
  // psr_satclk_corrected
  if (lhs->psr_satclk_corrected != rhs->psr_satclk_corrected) {
    return false;
  }
  // psr_dev_measured
  if (lhs->psr_dev_measured != rhs->psr_dev_measured) {
    return false;
  }
  // psr_dev_preproc
  if (lhs->psr_dev_preproc != rhs->psr_dev_preproc) {
    return false;
  }
  // dr
  if (lhs->dr != rhs->dr) {
    return false;
  }
  // dr_raw
  if (lhs->dr_raw != rhs->dr_raw) {
    return false;
  }
  // dr_satclk_corrected
  if (lhs->dr_satclk_corrected != rhs->dr_satclk_corrected) {
    return false;
  }
  // dr_dev_preproc
  if (lhs->dr_dev_preproc != rhs->dr_dev_preproc) {
    return false;
  }
  // cp
  if (lhs->cp != rhs->cp) {
    return false;
  }
  // cp_raw
  if (lhs->cp_raw != rhs->cp_raw) {
    return false;
  }
  // cp_satclk_corrected
  if (lhs->cp_satclk_corrected != rhs->cp_satclk_corrected) {
    return false;
  }
  // cp_dev_measured
  if (lhs->cp_dev_measured != rhs->cp_dev_measured) {
    return false;
  }
  // locktime
  if (lhs->locktime != rhs->locktime) {
    return false;
  }
  // psr_correction
  if (lhs->psr_correction != rhs->psr_correction) {
    return false;
  }
  // cn0
  if (lhs->cn0 != rhs->cn0) {
    return false;
  }
  // cycle_slip
  if (lhs->cycle_slip != rhs->cycle_slip) {
    return false;
  }
  // psr_residual
  if (lhs->psr_residual != rhs->psr_residual) {
    return false;
  }
  // dr_residual
  if (lhs->dr_residual != rhs->dr_residual) {
    return false;
  }
  // cp_residual
  if (lhs->cp_residual != rhs->cp_residual) {
    return false;
  }
  // elevation_angle
  if (lhs->elevation_angle != rhs->elevation_angle) {
    return false;
  }
  // azimuth_angle
  if (lhs->azimuth_angle != rhs->azimuth_angle) {
    return false;
  }
  // cmc
  if (lhs->cmc != rhs->cmc) {
    return false;
  }
  // drc
  if (lhs->drc != rhs->drc) {
    return false;
  }
  // factor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->factor), &(rhs->factor)))
  {
    return false;
  }
  // dim
  if (lhs->dim != rhs->dim) {
    return false;
  }
  // residuals
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->residuals), &(rhs->residuals)))
  {
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__are_equal(
      &(lhs->gaussian), &(rhs->gaussian)))
  {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  // label_dev
  if (lhs->label_dev != rhs->label_dev) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__SatLabel__copy(
  const irt_nav_msgs__msg__SatLabel * input,
  irt_nav_msgs__msg__SatLabel * output)
{
  if (!input || !output) {
    return false;
  }
  // integrity_flag
  output->integrity_flag = input->integrity_flag;
  // prn
  output->prn = input->prn;
  // sat_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sat_pos), &(output->sat_pos)))
  {
    return false;
  }
  // sat_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sat_vel), &(output->sat_vel)))
  {
    return false;
  }
  // psr
  output->psr = input->psr;
  // psr_raw
  output->psr_raw = input->psr_raw;
  // psr_satclk_corrected
  output->psr_satclk_corrected = input->psr_satclk_corrected;
  // psr_dev_measured
  output->psr_dev_measured = input->psr_dev_measured;
  // psr_dev_preproc
  output->psr_dev_preproc = input->psr_dev_preproc;
  // dr
  output->dr = input->dr;
  // dr_raw
  output->dr_raw = input->dr_raw;
  // dr_satclk_corrected
  output->dr_satclk_corrected = input->dr_satclk_corrected;
  // dr_dev_preproc
  output->dr_dev_preproc = input->dr_dev_preproc;
  // cp
  output->cp = input->cp;
  // cp_raw
  output->cp_raw = input->cp_raw;
  // cp_satclk_corrected
  output->cp_satclk_corrected = input->cp_satclk_corrected;
  // cp_dev_measured
  output->cp_dev_measured = input->cp_dev_measured;
  // locktime
  output->locktime = input->locktime;
  // psr_correction
  output->psr_correction = input->psr_correction;
  // cn0
  output->cn0 = input->cn0;
  // cycle_slip
  output->cycle_slip = input->cycle_slip;
  // psr_residual
  output->psr_residual = input->psr_residual;
  // dr_residual
  output->dr_residual = input->dr_residual;
  // cp_residual
  output->cp_residual = input->cp_residual;
  // elevation_angle
  output->elevation_angle = input->elevation_angle;
  // azimuth_angle
  output->azimuth_angle = input->azimuth_angle;
  // cmc
  output->cmc = input->cmc;
  // drc
  output->drc = input->drc;
  // factor
  if (!rosidl_runtime_c__String__copy(
      &(input->factor), &(output->factor)))
  {
    return false;
  }
  // dim
  output->dim = input->dim;
  // residuals
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->residuals), &(output->residuals)))
  {
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__copy(
      &(input->gaussian), &(output->gaussian)))
  {
    return false;
  }
  // weight
  output->weight = input->weight;
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // label
  output->label = input->label;
  // label_dev
  output->label_dev = input->label_dev;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__SatLabel *
irt_nav_msgs__msg__SatLabel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatLabel * msg = (irt_nav_msgs__msg__SatLabel *)allocator.allocate(sizeof(irt_nav_msgs__msg__SatLabel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__SatLabel));
  bool success = irt_nav_msgs__msg__SatLabel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__SatLabel__destroy(irt_nav_msgs__msg__SatLabel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__SatLabel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__SatLabel__Sequence__init(irt_nav_msgs__msg__SatLabel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatLabel * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__SatLabel *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__SatLabel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__SatLabel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__SatLabel__fini(&data[i - 1]);
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
irt_nav_msgs__msg__SatLabel__Sequence__fini(irt_nav_msgs__msg__SatLabel__Sequence * array)
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
      irt_nav_msgs__msg__SatLabel__fini(&array->data[i]);
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

irt_nav_msgs__msg__SatLabel__Sequence *
irt_nav_msgs__msg__SatLabel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatLabel__Sequence * array = (irt_nav_msgs__msg__SatLabel__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__SatLabel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__SatLabel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__SatLabel__Sequence__destroy(irt_nav_msgs__msg__SatLabel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__SatLabel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__SatLabel__Sequence__are_equal(const irt_nav_msgs__msg__SatLabel__Sequence * lhs, const irt_nav_msgs__msg__SatLabel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__SatLabel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__SatLabel__Sequence__copy(
  const irt_nav_msgs__msg__SatLabel__Sequence * input,
  irt_nav_msgs__msg__SatLabel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__SatLabel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__SatLabel * data =
      (irt_nav_msgs__msg__SatLabel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__SatLabel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__SatLabel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__SatLabel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
