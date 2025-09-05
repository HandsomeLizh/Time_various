# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/PVAGeodetic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PVAGeodetic(type):
    """Metaclass of message 'PVAGeodetic'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('irt_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'irt_nav_msgs.msg.PVAGeodetic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pva_geodetic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pva_geodetic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pva_geodetic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pva_geodetic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pva_geodetic

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PVAGeodetic(metaclass=Metaclass_PVAGeodetic):
    """Message class 'PVAGeodetic'."""

    __slots__ = [
        '_header',
        '_tow',
        '_wnc',
        '_mode',
        '_error',
        '_phi_geo',
        '_phi_geo_var',
        '_lambda_geo',
        '_lambda_geo_var',
        '_h_geo',
        '_h_geo_var',
        '_undulation',
        '_vn',
        '_ve',
        '_vu',
        '_trk_gnd',
        '_cog',
        '_yaw',
        '_yaw_var',
        '_pitch_roll',
        '_pitch_roll_var',
        '_rx_clk_bias',
        '_rx_clk_bias_var',
        '_rx_clk_drift',
        '_rx_clk_drift_var',
        '_time_system',
        '_datum',
        '_nrsv',
        '_nrsv_used',
        '_nrsv_used_with_l1',
        '_nrsv_used_multi',
        '_wa_corr_info',
        '_reference_id',
        '_mean_corr_age',
        '_signal_info',
        '_alert_flag',
        '_nr_bases',
        '_ppp_info',
        '_sol_age',
        '_diff_age',
        '_do_not_use_this',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tow': 'double',
        'wnc': 'uint16',
        'mode': 'uint8',
        'error': 'uint8',
        'phi_geo': 'double',
        'phi_geo_var': 'float',
        'lambda_geo': 'double',
        'lambda_geo_var': 'float',
        'h_geo': 'double',
        'h_geo_var': 'float',
        'undulation': 'float',
        'vn': 'double',
        've': 'double',
        'vu': 'double',
        'trk_gnd': 'double',
        'cog': 'double',
        'yaw': 'float',
        'yaw_var': 'float',
        'pitch_roll': 'float',
        'pitch_roll_var': 'float',
        'rx_clk_bias': 'double',
        'rx_clk_bias_var': 'double',
        'rx_clk_drift': 'double',
        'rx_clk_drift_var': 'double',
        'time_system': 'uint8',
        'datum': 'uint8',
        'nrsv': 'uint8',
        'nrsv_used': 'uint8',
        'nrsv_used_with_l1': 'uint8',
        'nrsv_used_multi': 'uint8',
        'wa_corr_info': 'uint8',
        'reference_id': 'uint16',
        'mean_corr_age': 'uint16',
        'signal_info': 'uint32',
        'alert_flag': 'uint8',
        'nr_bases': 'uint8',
        'ppp_info': 'uint16',
        'sol_age': 'double',
        'diff_age': 'double',
        'do_not_use_this': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tow = kwargs.get('tow', float())
        self.wnc = kwargs.get('wnc', int())
        self.mode = kwargs.get('mode', int())
        self.error = kwargs.get('error', int())
        self.phi_geo = kwargs.get('phi_geo', float())
        self.phi_geo_var = kwargs.get('phi_geo_var', float())
        self.lambda_geo = kwargs.get('lambda_geo', float())
        self.lambda_geo_var = kwargs.get('lambda_geo_var', float())
        self.h_geo = kwargs.get('h_geo', float())
        self.h_geo_var = kwargs.get('h_geo_var', float())
        self.undulation = kwargs.get('undulation', float())
        self.vn = kwargs.get('vn', float())
        self.ve = kwargs.get('ve', float())
        self.vu = kwargs.get('vu', float())
        self.trk_gnd = kwargs.get('trk_gnd', float())
        self.cog = kwargs.get('cog', float())
        self.yaw = kwargs.get('yaw', float())
        self.yaw_var = kwargs.get('yaw_var', float())
        self.pitch_roll = kwargs.get('pitch_roll', float())
        self.pitch_roll_var = kwargs.get('pitch_roll_var', float())
        self.rx_clk_bias = kwargs.get('rx_clk_bias', float())
        self.rx_clk_bias_var = kwargs.get('rx_clk_bias_var', float())
        self.rx_clk_drift = kwargs.get('rx_clk_drift', float())
        self.rx_clk_drift_var = kwargs.get('rx_clk_drift_var', float())
        self.time_system = kwargs.get('time_system', int())
        self.datum = kwargs.get('datum', int())
        self.nrsv = kwargs.get('nrsv', int())
        self.nrsv_used = kwargs.get('nrsv_used', int())
        self.nrsv_used_with_l1 = kwargs.get('nrsv_used_with_l1', int())
        self.nrsv_used_multi = kwargs.get('nrsv_used_multi', int())
        self.wa_corr_info = kwargs.get('wa_corr_info', int())
        self.reference_id = kwargs.get('reference_id', int())
        self.mean_corr_age = kwargs.get('mean_corr_age', int())
        self.signal_info = kwargs.get('signal_info', int())
        self.alert_flag = kwargs.get('alert_flag', int())
        self.nr_bases = kwargs.get('nr_bases', int())
        self.ppp_info = kwargs.get('ppp_info', int())
        self.sol_age = kwargs.get('sol_age', float())
        self.diff_age = kwargs.get('diff_age', float())
        self.do_not_use_this = kwargs.get('do_not_use_this', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.tow != other.tow:
            return False
        if self.wnc != other.wnc:
            return False
        if self.mode != other.mode:
            return False
        if self.error != other.error:
            return False
        if self.phi_geo != other.phi_geo:
            return False
        if self.phi_geo_var != other.phi_geo_var:
            return False
        if self.lambda_geo != other.lambda_geo:
            return False
        if self.lambda_geo_var != other.lambda_geo_var:
            return False
        if self.h_geo != other.h_geo:
            return False
        if self.h_geo_var != other.h_geo_var:
            return False
        if self.undulation != other.undulation:
            return False
        if self.vn != other.vn:
            return False
        if self.ve != other.ve:
            return False
        if self.vu != other.vu:
            return False
        if self.trk_gnd != other.trk_gnd:
            return False
        if self.cog != other.cog:
            return False
        if self.yaw != other.yaw:
            return False
        if self.yaw_var != other.yaw_var:
            return False
        if self.pitch_roll != other.pitch_roll:
            return False
        if self.pitch_roll_var != other.pitch_roll_var:
            return False
        if self.rx_clk_bias != other.rx_clk_bias:
            return False
        if self.rx_clk_bias_var != other.rx_clk_bias_var:
            return False
        if self.rx_clk_drift != other.rx_clk_drift:
            return False
        if self.rx_clk_drift_var != other.rx_clk_drift_var:
            return False
        if self.time_system != other.time_system:
            return False
        if self.datum != other.datum:
            return False
        if self.nrsv != other.nrsv:
            return False
        if self.nrsv_used != other.nrsv_used:
            return False
        if self.nrsv_used_with_l1 != other.nrsv_used_with_l1:
            return False
        if self.nrsv_used_multi != other.nrsv_used_multi:
            return False
        if self.wa_corr_info != other.wa_corr_info:
            return False
        if self.reference_id != other.reference_id:
            return False
        if self.mean_corr_age != other.mean_corr_age:
            return False
        if self.signal_info != other.signal_info:
            return False
        if self.alert_flag != other.alert_flag:
            return False
        if self.nr_bases != other.nr_bases:
            return False
        if self.ppp_info != other.ppp_info:
            return False
        if self.sol_age != other.sol_age:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.do_not_use_this != other.do_not_use_this:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tow = value

    @builtins.property
    def wnc(self):
        """Message field 'wnc'."""
        return self._wnc

    @wnc.setter
    def wnc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wnc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'wnc' field must be an unsigned integer in [0, 65535]"
        self._wnc = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error' field must be an unsigned integer in [0, 255]"
        self._error = value

    @builtins.property
    def phi_geo(self):
        """Message field 'phi_geo'."""
        return self._phi_geo

    @phi_geo.setter
    def phi_geo(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'phi_geo' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'phi_geo' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._phi_geo = value

    @builtins.property
    def phi_geo_var(self):
        """Message field 'phi_geo_var'."""
        return self._phi_geo_var

    @phi_geo_var.setter
    def phi_geo_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'phi_geo_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'phi_geo_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._phi_geo_var = value

    @builtins.property
    def lambda_geo(self):
        """Message field 'lambda_geo'."""
        return self._lambda_geo

    @lambda_geo.setter
    def lambda_geo(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_geo' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lambda_geo' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lambda_geo = value

    @builtins.property
    def lambda_geo_var(self):
        """Message field 'lambda_geo_var'."""
        return self._lambda_geo_var

    @lambda_geo_var.setter
    def lambda_geo_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_geo_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lambda_geo_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lambda_geo_var = value

    @builtins.property
    def h_geo(self):
        """Message field 'h_geo'."""
        return self._h_geo

    @h_geo.setter
    def h_geo(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_geo' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'h_geo' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._h_geo = value

    @builtins.property
    def h_geo_var(self):
        """Message field 'h_geo_var'."""
        return self._h_geo_var

    @h_geo_var.setter
    def h_geo_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_geo_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h_geo_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h_geo_var = value

    @builtins.property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def vn(self):
        """Message field 'vn'."""
        return self._vn

    @vn.setter
    def vn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vn' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vn' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vn = value

    @builtins.property
    def ve(self):
        """Message field 've'."""
        return self._ve

    @ve.setter
    def ve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 've' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ve = value

    @builtins.property
    def vu(self):
        """Message field 'vu'."""
        return self._vu

    @vu.setter
    def vu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vu' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vu' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vu = value

    @builtins.property
    def trk_gnd(self):
        """Message field 'trk_gnd'."""
        return self._trk_gnd

    @trk_gnd.setter
    def trk_gnd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trk_gnd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'trk_gnd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._trk_gnd = value

    @builtins.property
    def cog(self):
        """Message field 'cog'."""
        return self._cog

    @cog.setter
    def cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cog' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cog' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cog = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def yaw_var(self):
        """Message field 'yaw_var'."""
        return self._yaw_var

    @yaw_var.setter
    def yaw_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_var = value

    @builtins.property
    def pitch_roll(self):
        """Message field 'pitch_roll'."""
        return self._pitch_roll

    @pitch_roll.setter
    def pitch_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_roll = value

    @builtins.property
    def pitch_roll_var(self):
        """Message field 'pitch_roll_var'."""
        return self._pitch_roll_var

    @pitch_roll_var.setter
    def pitch_roll_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_roll_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_roll_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_roll_var = value

    @builtins.property
    def rx_clk_bias(self):
        """Message field 'rx_clk_bias'."""
        return self._rx_clk_bias

    @rx_clk_bias.setter
    def rx_clk_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rx_clk_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rx_clk_bias = value

    @builtins.property
    def rx_clk_bias_var(self):
        """Message field 'rx_clk_bias_var'."""
        return self._rx_clk_bias_var

    @rx_clk_bias_var.setter
    def rx_clk_bias_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_bias_var' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rx_clk_bias_var' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rx_clk_bias_var = value

    @builtins.property
    def rx_clk_drift(self):
        """Message field 'rx_clk_drift'."""
        return self._rx_clk_drift

    @rx_clk_drift.setter
    def rx_clk_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rx_clk_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rx_clk_drift = value

    @builtins.property
    def rx_clk_drift_var(self):
        """Message field 'rx_clk_drift_var'."""
        return self._rx_clk_drift_var

    @rx_clk_drift_var.setter
    def rx_clk_drift_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_drift_var' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rx_clk_drift_var' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rx_clk_drift_var = value

    @builtins.property
    def time_system(self):
        """Message field 'time_system'."""
        return self._time_system

    @time_system.setter
    def time_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_system' field must be an unsigned integer in [0, 255]"
        self._time_system = value

    @builtins.property
    def datum(self):
        """Message field 'datum'."""
        return self._datum

    @datum.setter
    def datum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'datum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'datum' field must be an unsigned integer in [0, 255]"
        self._datum = value

    @builtins.property
    def nrsv(self):
        """Message field 'nrsv'."""
        return self._nrsv

    @nrsv.setter
    def nrsv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nrsv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nrsv' field must be an unsigned integer in [0, 255]"
        self._nrsv = value

    @builtins.property
    def nrsv_used(self):
        """Message field 'nrsv_used'."""
        return self._nrsv_used

    @nrsv_used.setter
    def nrsv_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nrsv_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nrsv_used' field must be an unsigned integer in [0, 255]"
        self._nrsv_used = value

    @builtins.property
    def nrsv_used_with_l1(self):
        """Message field 'nrsv_used_with_l1'."""
        return self._nrsv_used_with_l1

    @nrsv_used_with_l1.setter
    def nrsv_used_with_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nrsv_used_with_l1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nrsv_used_with_l1' field must be an unsigned integer in [0, 255]"
        self._nrsv_used_with_l1 = value

    @builtins.property
    def nrsv_used_multi(self):
        """Message field 'nrsv_used_multi'."""
        return self._nrsv_used_multi

    @nrsv_used_multi.setter
    def nrsv_used_multi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nrsv_used_multi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nrsv_used_multi' field must be an unsigned integer in [0, 255]"
        self._nrsv_used_multi = value

    @builtins.property
    def wa_corr_info(self):
        """Message field 'wa_corr_info'."""
        return self._wa_corr_info

    @wa_corr_info.setter
    def wa_corr_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wa_corr_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wa_corr_info' field must be an unsigned integer in [0, 255]"
        self._wa_corr_info = value

    @builtins.property
    def reference_id(self):
        """Message field 'reference_id'."""
        return self._reference_id

    @reference_id.setter
    def reference_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_id' field must be an unsigned integer in [0, 65535]"
        self._reference_id = value

    @builtins.property
    def mean_corr_age(self):
        """Message field 'mean_corr_age'."""
        return self._mean_corr_age

    @mean_corr_age.setter
    def mean_corr_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_corr_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mean_corr_age' field must be an unsigned integer in [0, 65535]"
        self._mean_corr_age = value

    @builtins.property
    def signal_info(self):
        """Message field 'signal_info'."""
        return self._signal_info

    @signal_info.setter
    def signal_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'signal_info' field must be an unsigned integer in [0, 4294967295]"
        self._signal_info = value

    @builtins.property
    def alert_flag(self):
        """Message field 'alert_flag'."""
        return self._alert_flag

    @alert_flag.setter
    def alert_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alert_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alert_flag' field must be an unsigned integer in [0, 255]"
        self._alert_flag = value

    @builtins.property
    def nr_bases(self):
        """Message field 'nr_bases'."""
        return self._nr_bases

    @nr_bases.setter
    def nr_bases(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nr_bases' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nr_bases' field must be an unsigned integer in [0, 255]"
        self._nr_bases = value

    @builtins.property
    def ppp_info(self):
        """Message field 'ppp_info'."""
        return self._ppp_info

    @ppp_info.setter
    def ppp_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ppp_info' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ppp_info' field must be an unsigned integer in [0, 65535]"
        self._ppp_info = value

    @builtins.property
    def sol_age(self):
        """Message field 'sol_age'."""
        return self._sol_age

    @sol_age.setter
    def sol_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sol_age' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sol_age' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sol_age = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_age' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_age = value

    @builtins.property
    def do_not_use_this(self):
        """Message field 'do_not_use_this'."""
        return self._do_not_use_this

    @do_not_use_this.setter
    def do_not_use_this(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'do_not_use_this' field must be of type 'bool'"
        self._do_not_use_this = value
