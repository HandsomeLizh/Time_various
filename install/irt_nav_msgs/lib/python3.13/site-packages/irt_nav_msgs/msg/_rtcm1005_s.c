// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
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
#include "irt_nav_msgs/msg/detail/rtcm1005__struct.h"
#include "irt_nav_msgs/msg/detail/rtcm1005__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__rtcm1005__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("irt_nav_msgs.msg._rtcm1005.RTCM1005", full_classname_dest, 35) == 0);
  }
  irt_nav_msgs__msg__RTCM1005 * ros_message = _ros_message;
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
  {  // reserved_itrf_realization_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_itrf_realization_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_itrf_realization_year = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // glo_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->glo_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // galileo_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->galileo_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_station_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_station_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_station_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // antenna_reference_point_ecef_x_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_reference_point_ecef_x_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->antenna_reference_point_ecef_x_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // antenna_reference_point_ecef_y_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_reference_point_ecef_y_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->antenna_reference_point_ecef_y_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // antenna_reference_point_ecef_z_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_reference_point_ecef_z_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->antenna_reference_point_ecef_z_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // signle_receiver_oscillator_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "signle_receiver_oscillator_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signle_receiver_oscillator_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved2 = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * irt_nav_msgs__msg__rtcm1005__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RTCM1005 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._rtcm1005");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RTCM1005");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__RTCM1005 * ros_message = (irt_nav_msgs__msg__RTCM1005 *)raw_ros_message;
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
  {  // reserved_itrf_realization_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_itrf_realization_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_itrf_realization_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->glo_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->galileo_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_station_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_station_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_station_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_reference_point_ecef_x_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->antenna_reference_point_ecef_x_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_reference_point_ecef_x_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_reference_point_ecef_y_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->antenna_reference_point_ecef_y_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_reference_point_ecef_y_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_reference_point_ecef_z_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->antenna_reference_point_ecef_z_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_reference_point_ecef_z_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signle_receiver_oscillator_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signle_receiver_oscillator_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signle_receiver_oscillator_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
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
