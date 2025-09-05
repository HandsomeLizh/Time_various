// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/SatLabel.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/detail/sat_label__struct.h"
#include "irt_nav_msgs/msg/detail/sat_label__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gaussian_component__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gaussian_component__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__sat_label__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("irt_nav_msgs.msg._sat_label.SatLabel", full_classname_dest, 36) == 0);
  }
  irt_nav_msgs__msg__SatLabel * ros_message = _ros_message;
  {  // integrity_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "integrity_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->integrity_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prn
    PyObject * field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sat_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "sat_pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->sat_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sat_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "sat_vel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->sat_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // psr
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_raw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_satclk_corrected
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_satclk_corrected");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_satclk_corrected = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_dev_measured
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_dev_measured");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_dev_measured = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_dev_preproc
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_dev_preproc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_dev_preproc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dr
    PyObject * field = PyObject_GetAttrString(_pymsg, "dr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dr_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "dr_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dr_raw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dr_satclk_corrected
    PyObject * field = PyObject_GetAttrString(_pymsg, "dr_satclk_corrected");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dr_satclk_corrected = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dr_dev_preproc
    PyObject * field = PyObject_GetAttrString(_pymsg, "dr_dev_preproc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dr_dev_preproc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cp
    PyObject * field = PyObject_GetAttrString(_pymsg, "cp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cp_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "cp_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cp_raw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cp_satclk_corrected
    PyObject * field = PyObject_GetAttrString(_pymsg, "cp_satclk_corrected");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cp_satclk_corrected = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cp_dev_measured
    PyObject * field = PyObject_GetAttrString(_pymsg, "cp_dev_measured");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cp_dev_measured = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // locktime
    PyObject * field = PyObject_GetAttrString(_pymsg, "locktime");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->locktime = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_correction
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_correction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_correction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cn0
    PyObject * field = PyObject_GetAttrString(_pymsg, "cn0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cn0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cycle_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_slip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cycle_slip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // psr_residual
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_residual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_residual = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dr_residual
    PyObject * field = PyObject_GetAttrString(_pymsg, "dr_residual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dr_residual = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cp_residual
    PyObject * field = PyObject_GetAttrString(_pymsg, "cp_residual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cp_residual = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elevation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevation_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azimuth_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmc
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drc
    PyObject * field = PyObject_GetAttrString(_pymsg, "drc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "factor");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->factor, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dim
    PyObject * field = PyObject_GetAttrString(_pymsg, "dim");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dim = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // residuals
    PyObject * field = PyObject_GetAttrString(_pymsg, "residuals");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->residuals), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->residuals.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'residuals'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->residuals), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->residuals.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gaussian
    PyObject * field = PyObject_GetAttrString(_pymsg, "gaussian");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gaussian'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!irt_nav_msgs__msg__GaussianComponent__Sequence__init(&(ros_message->gaussian), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create irt_nav_msgs__msg__GaussianComponent__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    irt_nav_msgs__msg__GaussianComponent * dest = ros_message->gaussian.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!irt_nav_msgs__msg__gaussian_component__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->data), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->data.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'data'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->data), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->data.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // label
    PyObject * field = PyObject_GetAttrString(_pymsg, "label");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->label = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // label_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "label_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->label_dev = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__sat_label__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SatLabel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._sat_label");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SatLabel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__SatLabel * ros_message = (irt_nav_msgs__msg__SatLabel *)raw_ros_message;
  {  // integrity_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->integrity_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integrity_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sat_pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->sat_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sat_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sat_vel
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->sat_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sat_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_satclk_corrected
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_satclk_corrected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_satclk_corrected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_dev_measured
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_dev_measured);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_dev_measured", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_dev_preproc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_dev_preproc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_dev_preproc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dr_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dr_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dr_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dr_satclk_corrected
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dr_satclk_corrected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dr_satclk_corrected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dr_dev_preproc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dr_dev_preproc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dr_dev_preproc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cp_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cp_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cp_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cp_satclk_corrected
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cp_satclk_corrected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cp_satclk_corrected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cp_dev_measured
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cp_dev_measured);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cp_dev_measured", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locktime
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->locktime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "locktime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_correction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_correction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_correction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cn0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cn0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cn0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_slip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cycle_slip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_residual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_residual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_residual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dr_residual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dr_residual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dr_residual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cp_residual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cp_residual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cp_residual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevation_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factor
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->factor.data,
      strlen(ros_message->factor.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dim
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // residuals
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "residuals");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->residuals.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->residuals.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->residuals.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // gaussian
    PyObject * field = NULL;
    size_t size = ros_message->gaussian.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    irt_nav_msgs__msg__GaussianComponent * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->gaussian.data[i]);
      PyObject * pyitem = irt_nav_msgs__msg__gaussian_component__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gaussian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "data");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->data.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->data.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->data.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // label
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->label);
    {
      int rc = PyObject_SetAttrString(_pymessage, "label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // label_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->label_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "label_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->msg.data,
      strlen(ros_message->msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
