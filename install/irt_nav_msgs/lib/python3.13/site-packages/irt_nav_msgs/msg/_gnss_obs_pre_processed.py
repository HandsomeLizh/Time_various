# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'faulty_prn_main'
# Member 'faulty_prn_aux'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSObsPreProcessed(type):
    """Metaclass of message 'GNSSObsPreProcessed'."""

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
                'irt_nav_msgs.msg.GNSSObsPreProcessed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_obs_pre_processed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_obs_pre_processed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_obs_pre_processed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_obs_pre_processed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_obs_pre_processed

            from irt_nav_msgs.msg import GNSSCorrection
            if GNSSCorrection.__class__._TYPE_SUPPORT is None:
                GNSSCorrection.__class__.__import_type_support__()

            from irt_nav_msgs.msg import GNSSObs
            if GNSSObs.__class__._TYPE_SUPPORT is None:
                GNSSObs.__class__.__import_type_support__()

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


class GNSSObsPreProcessed(metaclass=Metaclass_GNSSObsPreProcessed):
    """Message class 'GNSSObsPreProcessed'."""

    __slots__ = [
        '_header',
        '_counter',
        '_time_offset_gal_gps',
        '_is_ggto_valid',
        '_gnss_obs_ant_main',
        '_gnss_obs_ant_aux',
        '_dd_gnss_obs_dualantenna',
        '_dd_gnss_obs_time',
        '_dd_gnss_obs_rtcm',
        '_gnss_corrections',
        '_faulty_prn_main',
        '_faulty_prn_aux',
        '_has_time_dd',
        '_has_dualantenna',
        '_has_dualantenna_dd',
        '_has_rtcm_dd',
        '_has_rtk',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'counter': 'uint32',
        'time_offset_gal_gps': 'double',
        'is_ggto_valid': 'boolean',
        'gnss_obs_ant_main': 'irt_nav_msgs/GNSSObs',
        'gnss_obs_ant_aux': 'irt_nav_msgs/GNSSObs',
        'dd_gnss_obs_dualantenna': 'irt_nav_msgs/GNSSObs',
        'dd_gnss_obs_time': 'irt_nav_msgs/GNSSObs',
        'dd_gnss_obs_rtcm': 'irt_nav_msgs/GNSSObs',
        'gnss_corrections': 'sequence<irt_nav_msgs/GNSSCorrection>',
        'faulty_prn_main': 'sequence<uint8>',
        'faulty_prn_aux': 'sequence<uint8>',
        'has_time_dd': 'boolean',
        'has_dualantenna': 'boolean',
        'has_dualantenna_dd': 'boolean',
        'has_rtcm_dd': 'boolean',
        'has_rtk': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSObs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSObs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSObs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSObs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSObs'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GNSSCorrection')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.counter = kwargs.get('counter', int())
        self.time_offset_gal_gps = kwargs.get('time_offset_gal_gps', float())
        self.is_ggto_valid = kwargs.get('is_ggto_valid', bool())
        from irt_nav_msgs.msg import GNSSObs
        self.gnss_obs_ant_main = kwargs.get('gnss_obs_ant_main', GNSSObs())
        from irt_nav_msgs.msg import GNSSObs
        self.gnss_obs_ant_aux = kwargs.get('gnss_obs_ant_aux', GNSSObs())
        from irt_nav_msgs.msg import GNSSObs
        self.dd_gnss_obs_dualantenna = kwargs.get('dd_gnss_obs_dualantenna', GNSSObs())
        from irt_nav_msgs.msg import GNSSObs
        self.dd_gnss_obs_time = kwargs.get('dd_gnss_obs_time', GNSSObs())
        from irt_nav_msgs.msg import GNSSObs
        self.dd_gnss_obs_rtcm = kwargs.get('dd_gnss_obs_rtcm', GNSSObs())
        self.gnss_corrections = kwargs.get('gnss_corrections', [])
        self.faulty_prn_main = array.array('B', kwargs.get('faulty_prn_main', []))
        self.faulty_prn_aux = array.array('B', kwargs.get('faulty_prn_aux', []))
        self.has_time_dd = kwargs.get('has_time_dd', bool())
        self.has_dualantenna = kwargs.get('has_dualantenna', bool())
        self.has_dualantenna_dd = kwargs.get('has_dualantenna_dd', bool())
        self.has_rtcm_dd = kwargs.get('has_rtcm_dd', bool())
        self.has_rtk = kwargs.get('has_rtk', bool())

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
        if self.counter != other.counter:
            return False
        if self.time_offset_gal_gps != other.time_offset_gal_gps:
            return False
        if self.is_ggto_valid != other.is_ggto_valid:
            return False
        if self.gnss_obs_ant_main != other.gnss_obs_ant_main:
            return False
        if self.gnss_obs_ant_aux != other.gnss_obs_ant_aux:
            return False
        if self.dd_gnss_obs_dualantenna != other.dd_gnss_obs_dualantenna:
            return False
        if self.dd_gnss_obs_time != other.dd_gnss_obs_time:
            return False
        if self.dd_gnss_obs_rtcm != other.dd_gnss_obs_rtcm:
            return False
        if self.gnss_corrections != other.gnss_corrections:
            return False
        if self.faulty_prn_main != other.faulty_prn_main:
            return False
        if self.faulty_prn_aux != other.faulty_prn_aux:
            return False
        if self.has_time_dd != other.has_time_dd:
            return False
        if self.has_dualantenna != other.has_dualantenna:
            return False
        if self.has_dualantenna_dd != other.has_dualantenna_dd:
            return False
        if self.has_rtcm_dd != other.has_rtcm_dd:
            return False
        if self.has_rtk != other.has_rtk:
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
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'counter' field must be an unsigned integer in [0, 4294967295]"
        self._counter = value

    @builtins.property
    def time_offset_gal_gps(self):
        """Message field 'time_offset_gal_gps'."""
        return self._time_offset_gal_gps

    @time_offset_gal_gps.setter
    def time_offset_gal_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_offset_gal_gps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_offset_gal_gps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_offset_gal_gps = value

    @builtins.property
    def is_ggto_valid(self):
        """Message field 'is_ggto_valid'."""
        return self._is_ggto_valid

    @is_ggto_valid.setter
    def is_ggto_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ggto_valid' field must be of type 'bool'"
        self._is_ggto_valid = value

    @builtins.property
    def gnss_obs_ant_main(self):
        """Message field 'gnss_obs_ant_main'."""
        return self._gnss_obs_ant_main

    @gnss_obs_ant_main.setter
    def gnss_obs_ant_main(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSObs
            assert \
                isinstance(value, GNSSObs), \
                "The 'gnss_obs_ant_main' field must be a sub message of type 'GNSSObs'"
        self._gnss_obs_ant_main = value

    @builtins.property
    def gnss_obs_ant_aux(self):
        """Message field 'gnss_obs_ant_aux'."""
        return self._gnss_obs_ant_aux

    @gnss_obs_ant_aux.setter
    def gnss_obs_ant_aux(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSObs
            assert \
                isinstance(value, GNSSObs), \
                "The 'gnss_obs_ant_aux' field must be a sub message of type 'GNSSObs'"
        self._gnss_obs_ant_aux = value

    @builtins.property
    def dd_gnss_obs_dualantenna(self):
        """Message field 'dd_gnss_obs_dualantenna'."""
        return self._dd_gnss_obs_dualantenna

    @dd_gnss_obs_dualantenna.setter
    def dd_gnss_obs_dualantenna(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSObs
            assert \
                isinstance(value, GNSSObs), \
                "The 'dd_gnss_obs_dualantenna' field must be a sub message of type 'GNSSObs'"
        self._dd_gnss_obs_dualantenna = value

    @builtins.property
    def dd_gnss_obs_time(self):
        """Message field 'dd_gnss_obs_time'."""
        return self._dd_gnss_obs_time

    @dd_gnss_obs_time.setter
    def dd_gnss_obs_time(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSObs
            assert \
                isinstance(value, GNSSObs), \
                "The 'dd_gnss_obs_time' field must be a sub message of type 'GNSSObs'"
        self._dd_gnss_obs_time = value

    @builtins.property
    def dd_gnss_obs_rtcm(self):
        """Message field 'dd_gnss_obs_rtcm'."""
        return self._dd_gnss_obs_rtcm

    @dd_gnss_obs_rtcm.setter
    def dd_gnss_obs_rtcm(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSObs
            assert \
                isinstance(value, GNSSObs), \
                "The 'dd_gnss_obs_rtcm' field must be a sub message of type 'GNSSObs'"
        self._dd_gnss_obs_rtcm = value

    @builtins.property
    def gnss_corrections(self):
        """Message field 'gnss_corrections'."""
        return self._gnss_corrections

    @gnss_corrections.setter
    def gnss_corrections(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GNSSCorrection
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
                 all(isinstance(v, GNSSCorrection) for v in value) and
                 True), \
                "The 'gnss_corrections' field must be a set or sequence and each value of type 'GNSSCorrection'"
        self._gnss_corrections = value

    @builtins.property
    def faulty_prn_main(self):
        """Message field 'faulty_prn_main'."""
        return self._faulty_prn_main

    @faulty_prn_main.setter
    def faulty_prn_main(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'faulty_prn_main' array.array() must have the type code of 'B'"
            self._faulty_prn_main = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'faulty_prn_main' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._faulty_prn_main = array.array('B', value)

    @builtins.property
    def faulty_prn_aux(self):
        """Message field 'faulty_prn_aux'."""
        return self._faulty_prn_aux

    @faulty_prn_aux.setter
    def faulty_prn_aux(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'faulty_prn_aux' array.array() must have the type code of 'B'"
            self._faulty_prn_aux = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'faulty_prn_aux' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._faulty_prn_aux = array.array('B', value)

    @builtins.property
    def has_time_dd(self):
        """Message field 'has_time_dd'."""
        return self._has_time_dd

    @has_time_dd.setter
    def has_time_dd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_time_dd' field must be of type 'bool'"
        self._has_time_dd = value

    @builtins.property
    def has_dualantenna(self):
        """Message field 'has_dualantenna'."""
        return self._has_dualantenna

    @has_dualantenna.setter
    def has_dualantenna(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_dualantenna' field must be of type 'bool'"
        self._has_dualantenna = value

    @builtins.property
    def has_dualantenna_dd(self):
        """Message field 'has_dualantenna_dd'."""
        return self._has_dualantenna_dd

    @has_dualantenna_dd.setter
    def has_dualantenna_dd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_dualantenna_dd' field must be of type 'bool'"
        self._has_dualantenna_dd = value

    @builtins.property
    def has_rtcm_dd(self):
        """Message field 'has_rtcm_dd'."""
        return self._has_rtcm_dd

    @has_rtcm_dd.setter
    def has_rtcm_dd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_rtcm_dd' field must be of type 'bool'"
        self._has_rtcm_dd = value

    @builtins.property
    def has_rtk(self):
        """Message field 'has_rtk'."""
        return self._has_rtk

    @has_rtk.setter
    def has_rtk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_rtk' field must be of type 'bool'"
        self._has_rtk = value
