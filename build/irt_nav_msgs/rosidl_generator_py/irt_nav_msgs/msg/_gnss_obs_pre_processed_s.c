// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
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
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.h"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "irt_nav_msgs/msg/detail/gnss_correction__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_obs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_obs__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_obs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_obs__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_obs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_obs__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_obs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_obs__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_obs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_obs__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__gnss_correction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__gnss_correction__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__gnss_obs_pre_processed__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("irt_nav_msgs.msg._gnss_obs_pre_processed.GNSSObsPreProcessed", full_classname_dest, 60) == 0);
  }
  irt_nav_msgs__msg__GNSSObsPreProcessed * ros_message = _ros_message;
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
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_offset_gal_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_offset_gal_gps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_offset_gal_gps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_ggto_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ggto_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ggto_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gnss_obs_ant_main
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_obs_ant_main");
    if (!field) {
      return false;
    }
    if (!irt_nav_msgs__msg__gnss_obs__convert_from_py(field, &ros_message->gnss_obs_ant_main)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gnss_obs_ant_aux
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_obs_ant_aux");
    if (!field) {
      return false;
    }
    if (!irt_nav_msgs__msg__gnss_obs__convert_from_py(field, &ros_message->gnss_obs_ant_aux)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dd_gnss_obs_dualantenna
    PyObject * field = PyObject_GetAttrString(_pymsg, "dd_gnss_obs_dualantenna");
    if (!field) {
      return false;
    }
    if (!irt_nav_msgs__msg__gnss_obs__convert_from_py(field, &ros_message->dd_gnss_obs_dualantenna)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dd_gnss_obs_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "dd_gnss_obs_time");
    if (!field) {
      return false;
    }
    if (!irt_nav_msgs__msg__gnss_obs__convert_from_py(field, &ros_message->dd_gnss_obs_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dd_gnss_obs_rtcm
    PyObject * field = PyObject_GetAttrString(_pymsg, "dd_gnss_obs_rtcm");
    if (!field) {
      return false;
    }
    if (!irt_nav_msgs__msg__gnss_obs__convert_from_py(field, &ros_message->dd_gnss_obs_rtcm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gnss_corrections
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_corrections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gnss_corrections'");
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
    if (!irt_nav_msgs__msg__GNSSCorrection__Sequence__init(&(ros_message->gnss_corrections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create irt_nav_msgs__msg__GNSSCorrection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    irt_nav_msgs__msg__GNSSCorrection * dest = ros_message->gnss_corrections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!irt_nav_msgs__msg__gnss_correction__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // faulty_prn_main
    PyObject * field = PyObject_GetAttrString(_pymsg, "faulty_prn_main");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_main), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_main.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'faulty_prn_main'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_main), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_main.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // faulty_prn_aux
    PyObject * field = PyObject_GetAttrString(_pymsg, "faulty_prn_aux");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_aux), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_aux.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'faulty_prn_aux'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_aux), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_aux.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // has_time_dd
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_time_dd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_time_dd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_dualantenna
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_dualantenna");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_dualantenna = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_dualantenna_dd
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_dualantenna_dd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_dualantenna_dd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_rtcm_dd
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_rtcm_dd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_rtcm_dd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_rtk
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_rtk");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_rtk = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__gnss_obs_pre_processed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GNSSObsPreProcessed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._gnss_obs_pre_processed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GNSSObsPreProcessed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__GNSSObsPreProcessed * ros_message = (irt_nav_msgs__msg__GNSSObsPreProcessed *)raw_ros_message;
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
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_offset_gal_gps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_offset_gal_gps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_offset_gal_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_ggto_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ggto_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ggto_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_obs_ant_main
    PyObject * field = NULL;
    field = irt_nav_msgs__msg__gnss_obs__convert_to_py(&ros_message->gnss_obs_ant_main);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_obs_ant_main", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_obs_ant_aux
    PyObject * field = NULL;
    field = irt_nav_msgs__msg__gnss_obs__convert_to_py(&ros_message->gnss_obs_ant_aux);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_obs_ant_aux", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dd_gnss_obs_dualantenna
    PyObject * field = NULL;
    field = irt_nav_msgs__msg__gnss_obs__convert_to_py(&ros_message->dd_gnss_obs_dualantenna);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dd_gnss_obs_dualantenna", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dd_gnss_obs_time
    PyObject * field = NULL;
    field = irt_nav_msgs__msg__gnss_obs__convert_to_py(&ros_message->dd_gnss_obs_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dd_gnss_obs_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dd_gnss_obs_rtcm
    PyObject * field = NULL;
    field = irt_nav_msgs__msg__gnss_obs__convert_to_py(&ros_message->dd_gnss_obs_rtcm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dd_gnss_obs_rtcm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_corrections
    PyObject * field = NULL;
    size_t size = ros_message->gnss_corrections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    irt_nav_msgs__msg__GNSSCorrection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->gnss_corrections.data[i]);
      PyObject * pyitem = irt_nav_msgs__msg__gnss_correction__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "gnss_corrections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // faulty_prn_main
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "faulty_prn_main");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->faulty_prn_main.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->faulty_prn_main.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->faulty_prn_main.size * sizeof(uint8_t));
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
  {  // faulty_prn_aux
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "faulty_prn_aux");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->faulty_prn_aux.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->faulty_prn_aux.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->faulty_prn_aux.size * sizeof(uint8_t));
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
  {  // has_time_dd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_time_dd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_time_dd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_dualantenna
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_dualantenna ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_dualantenna", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_dualantenna_dd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_dualantenna_dd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_dualantenna_dd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_rtcm_dd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_rtcm_dd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_rtcm_dd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_rtk
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_rtk ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_rtk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
