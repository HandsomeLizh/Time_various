// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
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
#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__struct.h"
#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__elapsed_time_fgo__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("irt_nav_msgs.msg._elapsed_time_fgo.ElapsedTimeFGO", full_classname_dest, 49) == 0);
  }
  irt_nav_msgs__msg__ElapsedTimeFGO * ros_message = _ros_message;
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
  {  // ts_start_construction
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts_start_construction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ts_start_construction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ts_start_optimization
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts_start_optimization");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ts_start_optimization = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration_construction
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_construction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration_construction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration_optimization
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_optimization");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration_optimization = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_new_factors
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_new_factors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_new_factors = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__elapsed_time_fgo__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ElapsedTimeFGO */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._elapsed_time_fgo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ElapsedTimeFGO");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__ElapsedTimeFGO * ros_message = (irt_nav_msgs__msg__ElapsedTimeFGO *)raw_ros_message;
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
  {  // ts_start_construction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ts_start_construction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts_start_construction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ts_start_optimization
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ts_start_optimization);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts_start_optimization", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_construction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration_construction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_construction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_optimization
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration_optimization);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_optimization", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_new_factors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_new_factors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_new_factors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
