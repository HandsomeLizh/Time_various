# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/RTCM1004.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'sat_id'
# Member 'l1_code_indicator'
# Member 'l1_pseudorange_mod1lightms_m'
# Member 'l1_phasenrange_l1_pseudorange_m'
# Member 'l1_locktime_indicator'
# Member 'l1_integer_pseudorange_modulus_ambiguity_m'
# Member 'l1_cnr_db_hz'
# Member 'l2_code_indicator'
# Member 'l2_l1_pseudorange_difference_m'
# Member 'l2_phaserange_l1_pseudorange_m'
# Member 'l2_locktime_indicator'
# Member 'l2_cnr_db_hz'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCM1004(type):
    """Metaclass of message 'RTCM1004'."""

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
                'irt_nav_msgs.msg.RTCM1004')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcm1004
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcm1004
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcm1004
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcm1004
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcm1004

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


class RTCM1004(metaclass=Metaclass_RTCM1004):
    """Message class 'RTCM1004'."""

    __slots__ = [
        '_header',
        '_msg_number',
        '_ref_station_id',
        '_gps_epoch_time_ms',
        '_flag_gnss_synchronous',
        '_no_gps_sat_signal_processed',
        '_divergency_free_smoothing_indicator',
        '_smoothing_interval',
        '_sat_id',
        '_l1_code_indicator',
        '_l1_pseudorange_mod1lightms_m',
        '_l1_phasenrange_l1_pseudorange_m',
        '_l1_locktime_indicator',
        '_l1_integer_pseudorange_modulus_ambiguity_m',
        '_l1_cnr_db_hz',
        '_l2_code_indicator',
        '_l2_l1_pseudorange_difference_m',
        '_l2_phaserange_l1_pseudorange_m',
        '_l2_locktime_indicator',
        '_l2_cnr_db_hz',
        '_msg_counter',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'msg_number': 'uint16',
        'ref_station_id': 'uint16',
        'gps_epoch_time_ms': 'uint32',
        'flag_gnss_synchronous': 'uint8',
        'no_gps_sat_signal_processed': 'uint8',
        'divergency_free_smoothing_indicator': 'uint8',
        'smoothing_interval': 'uint8',
        'sat_id': 'uint8[12]',
        'l1_code_indicator': 'uint8[12]',
        'l1_pseudorange_mod1lightms_m': 'double[12]',
        'l1_phasenrange_l1_pseudorange_m': 'double[12]',
        'l1_locktime_indicator': 'uint8[12]',
        'l1_integer_pseudorange_modulus_ambiguity_m': 'double[12]',
        'l1_cnr_db_hz': 'double[12]',
        'l2_code_indicator': 'uint8[12]',
        'l2_l1_pseudorange_difference_m': 'double[12]',
        'l2_phaserange_l1_pseudorange_m': 'double[12]',
        'l2_locktime_indicator': 'uint8[12]',
        'l2_cnr_db_hz': 'double[12]',
        'msg_counter': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.msg_number = kwargs.get('msg_number', int())
        self.ref_station_id = kwargs.get('ref_station_id', int())
        self.gps_epoch_time_ms = kwargs.get('gps_epoch_time_ms', int())
        self.flag_gnss_synchronous = kwargs.get('flag_gnss_synchronous', int())
        self.no_gps_sat_signal_processed = kwargs.get('no_gps_sat_signal_processed', int())
        self.divergency_free_smoothing_indicator = kwargs.get('divergency_free_smoothing_indicator', int())
        self.smoothing_interval = kwargs.get('smoothing_interval', int())
        if 'sat_id' not in kwargs:
            self.sat_id = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.sat_id = numpy.array(kwargs.get('sat_id'), dtype=numpy.uint8)
            assert self.sat_id.shape == (12, )
        if 'l1_code_indicator' not in kwargs:
            self.l1_code_indicator = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.l1_code_indicator = numpy.array(kwargs.get('l1_code_indicator'), dtype=numpy.uint8)
            assert self.l1_code_indicator.shape == (12, )
        if 'l1_pseudorange_mod1lightms_m' not in kwargs:
            self.l1_pseudorange_mod1lightms_m = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l1_pseudorange_mod1lightms_m = numpy.array(kwargs.get('l1_pseudorange_mod1lightms_m'), dtype=numpy.float64)
            assert self.l1_pseudorange_mod1lightms_m.shape == (12, )
        if 'l1_phasenrange_l1_pseudorange_m' not in kwargs:
            self.l1_phasenrange_l1_pseudorange_m = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l1_phasenrange_l1_pseudorange_m = numpy.array(kwargs.get('l1_phasenrange_l1_pseudorange_m'), dtype=numpy.float64)
            assert self.l1_phasenrange_l1_pseudorange_m.shape == (12, )
        if 'l1_locktime_indicator' not in kwargs:
            self.l1_locktime_indicator = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.l1_locktime_indicator = numpy.array(kwargs.get('l1_locktime_indicator'), dtype=numpy.uint8)
            assert self.l1_locktime_indicator.shape == (12, )
        if 'l1_integer_pseudorange_modulus_ambiguity_m' not in kwargs:
            self.l1_integer_pseudorange_modulus_ambiguity_m = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l1_integer_pseudorange_modulus_ambiguity_m = numpy.array(kwargs.get('l1_integer_pseudorange_modulus_ambiguity_m'), dtype=numpy.float64)
            assert self.l1_integer_pseudorange_modulus_ambiguity_m.shape == (12, )
        if 'l1_cnr_db_hz' not in kwargs:
            self.l1_cnr_db_hz = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l1_cnr_db_hz = numpy.array(kwargs.get('l1_cnr_db_hz'), dtype=numpy.float64)
            assert self.l1_cnr_db_hz.shape == (12, )
        if 'l2_code_indicator' not in kwargs:
            self.l2_code_indicator = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.l2_code_indicator = numpy.array(kwargs.get('l2_code_indicator'), dtype=numpy.uint8)
            assert self.l2_code_indicator.shape == (12, )
        if 'l2_l1_pseudorange_difference_m' not in kwargs:
            self.l2_l1_pseudorange_difference_m = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l2_l1_pseudorange_difference_m = numpy.array(kwargs.get('l2_l1_pseudorange_difference_m'), dtype=numpy.float64)
            assert self.l2_l1_pseudorange_difference_m.shape == (12, )
        if 'l2_phaserange_l1_pseudorange_m' not in kwargs:
            self.l2_phaserange_l1_pseudorange_m = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l2_phaserange_l1_pseudorange_m = numpy.array(kwargs.get('l2_phaserange_l1_pseudorange_m'), dtype=numpy.float64)
            assert self.l2_phaserange_l1_pseudorange_m.shape == (12, )
        if 'l2_locktime_indicator' not in kwargs:
            self.l2_locktime_indicator = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.l2_locktime_indicator = numpy.array(kwargs.get('l2_locktime_indicator'), dtype=numpy.uint8)
            assert self.l2_locktime_indicator.shape == (12, )
        if 'l2_cnr_db_hz' not in kwargs:
            self.l2_cnr_db_hz = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.l2_cnr_db_hz = numpy.array(kwargs.get('l2_cnr_db_hz'), dtype=numpy.float64)
            assert self.l2_cnr_db_hz.shape == (12, )
        self.msg_counter = kwargs.get('msg_counter', int())

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
        if self.msg_number != other.msg_number:
            return False
        if self.ref_station_id != other.ref_station_id:
            return False
        if self.gps_epoch_time_ms != other.gps_epoch_time_ms:
            return False
        if self.flag_gnss_synchronous != other.flag_gnss_synchronous:
            return False
        if self.no_gps_sat_signal_processed != other.no_gps_sat_signal_processed:
            return False
        if self.divergency_free_smoothing_indicator != other.divergency_free_smoothing_indicator:
            return False
        if self.smoothing_interval != other.smoothing_interval:
            return False
        if any(self.sat_id != other.sat_id):
            return False
        if any(self.l1_code_indicator != other.l1_code_indicator):
            return False
        if any(self.l1_pseudorange_mod1lightms_m != other.l1_pseudorange_mod1lightms_m):
            return False
        if any(self.l1_phasenrange_l1_pseudorange_m != other.l1_phasenrange_l1_pseudorange_m):
            return False
        if any(self.l1_locktime_indicator != other.l1_locktime_indicator):
            return False
        if any(self.l1_integer_pseudorange_modulus_ambiguity_m != other.l1_integer_pseudorange_modulus_ambiguity_m):
            return False
        if any(self.l1_cnr_db_hz != other.l1_cnr_db_hz):
            return False
        if any(self.l2_code_indicator != other.l2_code_indicator):
            return False
        if any(self.l2_l1_pseudorange_difference_m != other.l2_l1_pseudorange_difference_m):
            return False
        if any(self.l2_phaserange_l1_pseudorange_m != other.l2_phaserange_l1_pseudorange_m):
            return False
        if any(self.l2_locktime_indicator != other.l2_locktime_indicator):
            return False
        if any(self.l2_cnr_db_hz != other.l2_cnr_db_hz):
            return False
        if self.msg_counter != other.msg_counter:
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
    def msg_number(self):
        """Message field 'msg_number'."""
        return self._msg_number

    @msg_number.setter
    def msg_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msg_number' field must be an unsigned integer in [0, 65535]"
        self._msg_number = value

    @builtins.property
    def ref_station_id(self):
        """Message field 'ref_station_id'."""
        return self._ref_station_id

    @ref_station_id.setter
    def ref_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ref_station_id' field must be an unsigned integer in [0, 65535]"
        self._ref_station_id = value

    @builtins.property
    def gps_epoch_time_ms(self):
        """Message field 'gps_epoch_time_ms'."""
        return self._gps_epoch_time_ms

    @gps_epoch_time_ms.setter
    def gps_epoch_time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_epoch_time_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_epoch_time_ms' field must be an unsigned integer in [0, 4294967295]"
        self._gps_epoch_time_ms = value

    @builtins.property
    def flag_gnss_synchronous(self):
        """Message field 'flag_gnss_synchronous'."""
        return self._flag_gnss_synchronous

    @flag_gnss_synchronous.setter
    def flag_gnss_synchronous(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flag_gnss_synchronous' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flag_gnss_synchronous' field must be an unsigned integer in [0, 255]"
        self._flag_gnss_synchronous = value

    @builtins.property
    def no_gps_sat_signal_processed(self):
        """Message field 'no_gps_sat_signal_processed'."""
        return self._no_gps_sat_signal_processed

    @no_gps_sat_signal_processed.setter
    def no_gps_sat_signal_processed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'no_gps_sat_signal_processed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'no_gps_sat_signal_processed' field must be an unsigned integer in [0, 255]"
        self._no_gps_sat_signal_processed = value

    @builtins.property
    def divergency_free_smoothing_indicator(self):
        """Message field 'divergency_free_smoothing_indicator'."""
        return self._divergency_free_smoothing_indicator

    @divergency_free_smoothing_indicator.setter
    def divergency_free_smoothing_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'divergency_free_smoothing_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'divergency_free_smoothing_indicator' field must be an unsigned integer in [0, 255]"
        self._divergency_free_smoothing_indicator = value

    @builtins.property
    def smoothing_interval(self):
        """Message field 'smoothing_interval'."""
        return self._smoothing_interval

    @smoothing_interval.setter
    def smoothing_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'smoothing_interval' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'smoothing_interval' field must be an unsigned integer in [0, 255]"
        self._smoothing_interval = value

    @builtins.property
    def sat_id(self):
        """Message field 'sat_id'."""
        return self._sat_id

    @sat_id.setter
    def sat_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'sat_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'sat_id' numpy.ndarray() must have a size of 12"
            self._sat_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sat_id' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sat_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def l1_code_indicator(self):
        """Message field 'l1_code_indicator'."""
        return self._l1_code_indicator

    @l1_code_indicator.setter
    def l1_code_indicator(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'l1_code_indicator' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'l1_code_indicator' numpy.ndarray() must have a size of 12"
            self._l1_code_indicator = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'l1_code_indicator' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._l1_code_indicator = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def l1_pseudorange_mod1lightms_m(self):
        """Message field 'l1_pseudorange_mod1lightms_m'."""
        return self._l1_pseudorange_mod1lightms_m

    @l1_pseudorange_mod1lightms_m.setter
    def l1_pseudorange_mod1lightms_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l1_pseudorange_mod1lightms_m' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l1_pseudorange_mod1lightms_m' numpy.ndarray() must have a size of 12"
            self._l1_pseudorange_mod1lightms_m = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l1_pseudorange_mod1lightms_m' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l1_pseudorange_mod1lightms_m = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l1_phasenrange_l1_pseudorange_m(self):
        """Message field 'l1_phasenrange_l1_pseudorange_m'."""
        return self._l1_phasenrange_l1_pseudorange_m

    @l1_phasenrange_l1_pseudorange_m.setter
    def l1_phasenrange_l1_pseudorange_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l1_phasenrange_l1_pseudorange_m' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l1_phasenrange_l1_pseudorange_m' numpy.ndarray() must have a size of 12"
            self._l1_phasenrange_l1_pseudorange_m = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l1_phasenrange_l1_pseudorange_m' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l1_phasenrange_l1_pseudorange_m = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l1_locktime_indicator(self):
        """Message field 'l1_locktime_indicator'."""
        return self._l1_locktime_indicator

    @l1_locktime_indicator.setter
    def l1_locktime_indicator(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'l1_locktime_indicator' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'l1_locktime_indicator' numpy.ndarray() must have a size of 12"
            self._l1_locktime_indicator = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'l1_locktime_indicator' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._l1_locktime_indicator = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def l1_integer_pseudorange_modulus_ambiguity_m(self):
        """Message field 'l1_integer_pseudorange_modulus_ambiguity_m'."""
        return self._l1_integer_pseudorange_modulus_ambiguity_m

    @l1_integer_pseudorange_modulus_ambiguity_m.setter
    def l1_integer_pseudorange_modulus_ambiguity_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l1_integer_pseudorange_modulus_ambiguity_m' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l1_integer_pseudorange_modulus_ambiguity_m' numpy.ndarray() must have a size of 12"
            self._l1_integer_pseudorange_modulus_ambiguity_m = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l1_integer_pseudorange_modulus_ambiguity_m' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l1_integer_pseudorange_modulus_ambiguity_m = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l1_cnr_db_hz(self):
        """Message field 'l1_cnr_db_hz'."""
        return self._l1_cnr_db_hz

    @l1_cnr_db_hz.setter
    def l1_cnr_db_hz(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l1_cnr_db_hz' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l1_cnr_db_hz' numpy.ndarray() must have a size of 12"
            self._l1_cnr_db_hz = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l1_cnr_db_hz' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l1_cnr_db_hz = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l2_code_indicator(self):
        """Message field 'l2_code_indicator'."""
        return self._l2_code_indicator

    @l2_code_indicator.setter
    def l2_code_indicator(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'l2_code_indicator' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'l2_code_indicator' numpy.ndarray() must have a size of 12"
            self._l2_code_indicator = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'l2_code_indicator' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._l2_code_indicator = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def l2_l1_pseudorange_difference_m(self):
        """Message field 'l2_l1_pseudorange_difference_m'."""
        return self._l2_l1_pseudorange_difference_m

    @l2_l1_pseudorange_difference_m.setter
    def l2_l1_pseudorange_difference_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l2_l1_pseudorange_difference_m' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l2_l1_pseudorange_difference_m' numpy.ndarray() must have a size of 12"
            self._l2_l1_pseudorange_difference_m = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l2_l1_pseudorange_difference_m' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l2_l1_pseudorange_difference_m = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l2_phaserange_l1_pseudorange_m(self):
        """Message field 'l2_phaserange_l1_pseudorange_m'."""
        return self._l2_phaserange_l1_pseudorange_m

    @l2_phaserange_l1_pseudorange_m.setter
    def l2_phaserange_l1_pseudorange_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l2_phaserange_l1_pseudorange_m' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l2_phaserange_l1_pseudorange_m' numpy.ndarray() must have a size of 12"
            self._l2_phaserange_l1_pseudorange_m = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l2_phaserange_l1_pseudorange_m' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l2_phaserange_l1_pseudorange_m = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def l2_locktime_indicator(self):
        """Message field 'l2_locktime_indicator'."""
        return self._l2_locktime_indicator

    @l2_locktime_indicator.setter
    def l2_locktime_indicator(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'l2_locktime_indicator' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'l2_locktime_indicator' numpy.ndarray() must have a size of 12"
            self._l2_locktime_indicator = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'l2_locktime_indicator' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._l2_locktime_indicator = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def l2_cnr_db_hz(self):
        """Message field 'l2_cnr_db_hz'."""
        return self._l2_cnr_db_hz

    @l2_cnr_db_hz.setter
    def l2_cnr_db_hz(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'l2_cnr_db_hz' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'l2_cnr_db_hz' numpy.ndarray() must have a size of 12"
            self._l2_cnr_db_hz = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'l2_cnr_db_hz' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._l2_cnr_db_hz = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def msg_counter(self):
        """Message field 'msg_counter'."""
        return self._msg_counter

    @msg_counter.setter
    def msg_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'msg_counter' field must be an unsigned integer in [0, 4294967295]"
        self._msg_counter = value
