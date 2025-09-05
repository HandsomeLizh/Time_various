// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
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
#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.h"
#include "irt_nav_msgs/msg/detail/pva_geodetic__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__pva_geodetic__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("irt_nav_msgs.msg._pva_geodetic.PVAGeodetic", full_classname_dest, 42) == 0);
  }
  irt_nav_msgs__msg__PVAGeodetic * ros_message = _ros_message;
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
  {  // tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "tow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wnc
    PyObject * field = PyObject_GetAttrString(_pymsg, "wnc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wnc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // phi_geo
    PyObject * field = PyObject_GetAttrString(_pymsg, "phi_geo");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->phi_geo = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // phi_geo_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "phi_geo_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->phi_geo_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_geo
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_geo");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_geo = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_geo_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_geo_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_geo_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h_geo
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_geo");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h_geo = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h_geo_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_geo_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h_geo_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vu
    PyObject * field = PyObject_GetAttrString(_pymsg, "vu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vu = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trk_gnd
    PyObject * field = PyObject_GetAttrString(_pymsg, "trk_gnd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trk_gnd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cog = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_roll_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_roll_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_roll_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_bias_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_bias_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_bias_var = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_drift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_drift_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_drift_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_drift_var = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // datum
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->datum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nrsv
    PyObject * field = PyObject_GetAttrString(_pymsg, "nrsv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nrsv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nrsv_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "nrsv_used");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nrsv_used = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nrsv_used_with_l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "nrsv_used_with_l1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nrsv_used_with_l1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nrsv_used_multi
    PyObject * field = PyObject_GetAttrString(_pymsg, "nrsv_used_multi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nrsv_used_multi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wa_corr_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "wa_corr_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wa_corr_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mean_corr_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_corr_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_corr_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_info = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alert_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alert_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nr_bases
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_bases");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_bases = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ppp_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "ppp_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ppp_info = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sol_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "sol_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sol_age = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // do_not_use_this
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_not_use_this");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_not_use_this = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__pva_geodetic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PVAGeodetic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._pva_geodetic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PVAGeodetic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__PVAGeodetic * ros_message = (irt_nav_msgs__msg__PVAGeodetic *)raw_ros_message;
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
  {  // tow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wnc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wnc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wnc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // phi_geo
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->phi_geo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "phi_geo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // phi_geo_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->phi_geo_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "phi_geo_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_geo
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_geo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_geo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_geo_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_geo_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_geo_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_geo
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h_geo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_geo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_geo_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h_geo_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_geo_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trk_gnd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trk_gnd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trk_gnd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_roll_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_roll_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_roll_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_bias_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_bias_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_bias_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_drift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_drift_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_drift_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_drift_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->datum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "datum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nrsv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nrsv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nrsv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nrsv_used
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nrsv_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nrsv_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nrsv_used_with_l1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nrsv_used_with_l1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nrsv_used_with_l1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nrsv_used_multi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nrsv_used_multi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nrsv_used_multi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wa_corr_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wa_corr_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wa_corr_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_corr_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mean_corr_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_corr_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alert_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alert_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nr_bases
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nr_bases);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr_bases", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ppp_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ppp_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ppp_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sol_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sol_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sol_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_not_use_this
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_not_use_this ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_not_use_this", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
