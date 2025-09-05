# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/SFusion.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'state'
# Member 'cov'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFusion(type):
    """Metaclass of message 'SFusion'."""

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
                'irt_nav_msgs.msg.SFusion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__s_fusion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__s_fusion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__s_fusion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__s_fusion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__s_fusion

            from irt_nav_msgs.msg import PVAGeodetic
            if PVAGeodetic.__class__._TYPE_SUPPORT is None:
                PVAGeodetic.__class__.__import_type_support__()

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


class SFusion(metaclass=Metaclass_SFusion):
    """Message class 'SFusion'."""

    __slots__ = [
        '_header',
        '_simulation_time',
        '_counter',
        '_tow',
        '_filter_tow',
        '_pps_counter',
        '_state',
        '_cov',
        '_num_used_stat_ant1',
        '_num_used_stat_ant2',
        '_rtcm_counter',
        '_filter_inited_success',
        '_filter_inited',
        '_pva_geodetic',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'simulation_time': 'double',
        'counter': 'uint64',
        'tow': 'double',
        'filter_tow': 'double',
        'pps_counter': 'uint64',
        'state': 'sequence<double>',
        'cov': 'sequence<double>',
        'num_used_stat_ant1': 'uint16',
        'num_used_stat_ant2': 'uint16',
        'rtcm_counter': 'uint64',
        'filter_inited_success': 'boolean',
        'filter_inited': 'boolean',
        'pva_geodetic': 'irt_nav_msgs/PVAGeodetic',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'PVAGeodetic'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.simulation_time = kwargs.get('simulation_time', float())
        self.counter = kwargs.get('counter', int())
        self.tow = kwargs.get('tow', float())
        self.filter_tow = kwargs.get('filter_tow', float())
        self.pps_counter = kwargs.get('pps_counter', int())
        self.state = array.array('d', kwargs.get('state', []))
        self.cov = array.array('d', kwargs.get('cov', []))
        self.num_used_stat_ant1 = kwargs.get('num_used_stat_ant1', int())
        self.num_used_stat_ant2 = kwargs.get('num_used_stat_ant2', int())
        self.rtcm_counter = kwargs.get('rtcm_counter', int())
        self.filter_inited_success = kwargs.get('filter_inited_success', bool())
        self.filter_inited = kwargs.get('filter_inited', bool())
        from irt_nav_msgs.msg import PVAGeodetic
        self.pva_geodetic = kwargs.get('pva_geodetic', PVAGeodetic())

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
        if self.simulation_time != other.simulation_time:
            return False
        if self.counter != other.counter:
            return False
        if self.tow != other.tow:
            return False
        if self.filter_tow != other.filter_tow:
            return False
        if self.pps_counter != other.pps_counter:
            return False
        if self.state != other.state:
            return False
        if self.cov != other.cov:
            return False
        if self.num_used_stat_ant1 != other.num_used_stat_ant1:
            return False
        if self.num_used_stat_ant2 != other.num_used_stat_ant2:
            return False
        if self.rtcm_counter != other.rtcm_counter:
            return False
        if self.filter_inited_success != other.filter_inited_success:
            return False
        if self.filter_inited != other.filter_inited:
            return False
        if self.pva_geodetic != other.pva_geodetic:
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
    def simulation_time(self):
        """Message field 'simulation_time'."""
        return self._simulation_time

    @simulation_time.setter
    def simulation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'simulation_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'simulation_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._simulation_time = value

    @builtins.property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'counter' field must be an unsigned integer in [0, 18446744073709551615]"
        self._counter = value

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
    def filter_tow(self):
        """Message field 'filter_tow'."""
        return self._filter_tow

    @filter_tow.setter
    def filter_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'filter_tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'filter_tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._filter_tow = value

    @builtins.property
    def pps_counter(self):
        """Message field 'pps_counter'."""
        return self._pps_counter

    @pps_counter.setter
    def pps_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pps_counter' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'pps_counter' field must be an unsigned integer in [0, 18446744073709551615]"
        self._pps_counter = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'state' array.array() must have the type code of 'd'"
            self._state = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'state' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._state = array.array('d', value)

    @builtins.property
    def cov(self):
        """Message field 'cov'."""
        return self._cov

    @cov.setter
    def cov(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'cov' array.array() must have the type code of 'd'"
            self._cov = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cov' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cov = array.array('d', value)

    @builtins.property
    def num_used_stat_ant1(self):
        """Message field 'num_used_stat_ant1'."""
        return self._num_used_stat_ant1

    @num_used_stat_ant1.setter
    def num_used_stat_ant1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_used_stat_ant1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_used_stat_ant1' field must be an unsigned integer in [0, 65535]"
        self._num_used_stat_ant1 = value

    @builtins.property
    def num_used_stat_ant2(self):
        """Message field 'num_used_stat_ant2'."""
        return self._num_used_stat_ant2

    @num_used_stat_ant2.setter
    def num_used_stat_ant2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_used_stat_ant2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_used_stat_ant2' field must be an unsigned integer in [0, 65535]"
        self._num_used_stat_ant2 = value

    @builtins.property
    def rtcm_counter(self):
        """Message field 'rtcm_counter'."""
        return self._rtcm_counter

    @rtcm_counter.setter
    def rtcm_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtcm_counter' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rtcm_counter' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rtcm_counter = value

    @builtins.property
    def filter_inited_success(self):
        """Message field 'filter_inited_success'."""
        return self._filter_inited_success

    @filter_inited_success.setter
    def filter_inited_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_inited_success' field must be of type 'bool'"
        self._filter_inited_success = value

    @builtins.property
    def filter_inited(self):
        """Message field 'filter_inited'."""
        return self._filter_inited

    @filter_inited.setter
    def filter_inited(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_inited' field must be of type 'bool'"
        self._filter_inited = value

    @builtins.property
    def pva_geodetic(self):
        """Message field 'pva_geodetic'."""
        return self._pva_geodetic

    @pva_geodetic.setter
    def pva_geodetic(self, value):
        if __debug__:
            from irt_nav_msgs.msg import PVAGeodetic
            assert \
                isinstance(value, PVAGeodetic), \
                "The 'pva_geodetic' field must be a sub message of type 'PVAGeodetic'"
        self._pva_geodetic = value
