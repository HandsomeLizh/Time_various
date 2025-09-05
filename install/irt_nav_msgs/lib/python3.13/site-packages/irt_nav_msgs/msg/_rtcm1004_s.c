// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
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
#include "irt_nav_msgs/msg/detail/rtcm1004__struct.h"
#include "irt_nav_msgs/msg/detail/rtcm1004__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__rtcm1004__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("irt_nav_msgs.msg._rtcm1004.RTCM1004", full_classname_dest, 35) == 0);
  }
  irt_nav_msgs__msg__RTCM1004 * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // msg_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ref_station_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_station_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ref_station_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_epoch_time_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_epoch_time_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_epoch_time_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flag_gnss_synchronous
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_gnss_synchronous");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flag_gnss_synchronous = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // no_gps_sat_signal_processed
    PyObject * field = PyObject_GetAttrString(_pymsg, "no_gps_sat_signal_processed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->no_gps_sat_signal_processed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // divergency_free_smoothing_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "divergency_free_smoothing_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->divergency_free_smoothing_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // smoothing_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "smoothing_interval");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->smoothing_interval = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sat_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sat_id");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->sat_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_code_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_code_indicator");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->l1_code_indicator;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_pseudorange_mod1lightms_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_pseudorange_mod1lightms_m");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l1_pseudorange_mod1lightms_m;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_phasenrange_l1_pseudorange_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_phasenrange_l1_pseudorange_m");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l1_phasenrange_l1_pseudorange_m;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_locktime_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_locktime_indicator");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->l1_locktime_indicator;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_integer_pseudorange_modulus_ambiguity_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_integer_pseudorange_modulus_ambiguity_m");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l1_integer_pseudorange_modulus_ambiguity_m;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l1_cnr_db_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_cnr_db_hz");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l1_cnr_db_hz;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l2_code_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_code_indicator");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->l2_code_indicator;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l2_l1_pseudorange_difference_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_l1_pseudorange_difference_m");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l2_l1_pseudorange_difference_m;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l2_phaserange_l1_pseudorange_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_phaserange_l1_pseudorange_m");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l2_phaserange_l1_pseudorange_m;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l2_locktime_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_locktime_indicator");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->l2_locktime_indicator;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l2_cnr_db_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_cnr_db_hz");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->l2_cnr_db_hz;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // msg_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__rtcm1004__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RTCM1004 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._rtcm1004");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RTCM1004");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__RTCM1004 * ros_message = (irt_nav_msgs__msg__RTCM1004 *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_station_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ref_station_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_station_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_epoch_time_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_epoch_time_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_epoch_time_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_gnss_synchronous
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flag_gnss_synchronous);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_gnss_synchronous", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // no_gps_sat_signal_processed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->no_gps_sat_signal_processed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "no_gps_sat_signal_processed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // divergency_free_smoothing_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->divergency_free_smoothing_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "divergency_free_smoothing_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smoothing_interval
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->smoothing_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "smoothing_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sat_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sat_id");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->sat_id[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // l1_code_indicator
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_code_indicator");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->l1_code_indicator[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // l1_pseudorange_mod1lightms_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_pseudorange_mod1lightms_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l1_pseudorange_mod1lightms_m[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l1_phasenrange_l1_pseudorange_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_phasenrange_l1_pseudorange_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l1_phasenrange_l1_pseudorange_m[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l1_locktime_indicator
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_locktime_indicator");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->l1_locktime_indicator[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // l1_integer_pseudorange_modulus_ambiguity_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_integer_pseudorange_modulus_ambiguity_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l1_integer_pseudorange_modulus_ambiguity_m[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l1_cnr_db_hz
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l1_cnr_db_hz");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l1_cnr_db_hz[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l2_code_indicator
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l2_code_indicator");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->l2_code_indicator[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // l2_l1_pseudorange_difference_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l2_l1_pseudorange_difference_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l2_l1_pseudorange_difference_m[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l2_phaserange_l1_pseudorange_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l2_phaserange_l1_pseudorange_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l2_phaserange_l1_pseudorange_m[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // l2_locktime_indicator
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l2_locktime_indicator");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->l2_locktime_indicator[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // l2_cnr_db_hz
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l2_cnr_db_hz");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->l2_cnr_db_hz[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // msg_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
