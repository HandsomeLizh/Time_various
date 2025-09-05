# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/OdomInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OdomInfo(type):
    """Metaclass of message 'OdomInfo'."""

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
                'irt_nav_msgs.msg.OdomInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odom_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odom_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odom_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odom_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odom_info

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class OdomInfo(metaclass=Metaclass_OdomInfo):
    """Message class 'OdomInfo'."""

    __slots__ = [
        '_header',
        '_counter',
        '_key_current',
        '_key_previous',
        '_odom_anchor_ecef_pos',
        '_odom_anchor_ecef_to_enu_rpy',
        '_odom_anchor_yaw_offset',
        '_associated_state_timestamp_i',
        '_associated_state_timestamp_j',
        '_duration_to_i',
        '_associated_with_i',
        '_associated_with_j',
        '_odom_local_pos',
        '_odom_local_rpy',
        '_odom_ecef_pos',
        '_odom_ecef_rpy',
        '_sensor_local_pos_from',
        '_sensor_local_rpy_from',
        '_sensor_enu_pos_from',
        '_sensor_enu_rpy_from',
        '_sensor_ecef_pos_from',
        '_sensor_ecef_rpy_from',
        '_sensor_local_pos_to',
        '_sensor_local_rpy_to',
        '_sensor_enu_pos_to',
        '_sensor_enu_rpy_to',
        '_sensor_ecef_pos_to',
        '_sensor_ecef_rpy_to',
        '_sensor_local_pos_to_optimized',
        '_sensor_local_rpy_to_optimized',
        '_sensor_enu_pos_to_optimized',
        '_sensor_enu_rpy_to_optimized',
        '_sensor_ecef_pos_to_optimized',
        '_sensor_ecef_rpy_to_optimized',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'counter': 'uint64',
        'key_current': 'uint64',
        'key_previous': 'uint64',
        'odom_anchor_ecef_pos': 'geometry_msgs/Vector3',
        'odom_anchor_ecef_to_enu_rpy': 'geometry_msgs/Vector3',
        'odom_anchor_yaw_offset': 'double',
        'associated_state_timestamp_i': 'double',
        'associated_state_timestamp_j': 'double',
        'duration_to_i': 'double',
        'associated_with_i': 'boolean',
        'associated_with_j': 'boolean',
        'odom_local_pos': 'geometry_msgs/Vector3',
        'odom_local_rpy': 'geometry_msgs/Vector3',
        'odom_ecef_pos': 'geometry_msgs/Vector3',
        'odom_ecef_rpy': 'geometry_msgs/Vector3',
        'sensor_local_pos_from': 'geometry_msgs/Vector3',
        'sensor_local_rpy_from': 'geometry_msgs/Vector3',
        'sensor_enu_pos_from': 'geometry_msgs/Vector3',
        'sensor_enu_rpy_from': 'geometry_msgs/Vector3',
        'sensor_ecef_pos_from': 'geometry_msgs/Vector3',
        'sensor_ecef_rpy_from': 'geometry_msgs/Vector3',
        'sensor_local_pos_to': 'geometry_msgs/Vector3',
        'sensor_local_rpy_to': 'geometry_msgs/Vector3',
        'sensor_enu_pos_to': 'geometry_msgs/Vector3',
        'sensor_enu_rpy_to': 'geometry_msgs/Vector3',
        'sensor_ecef_pos_to': 'geometry_msgs/Vector3',
        'sensor_ecef_rpy_to': 'geometry_msgs/Vector3',
        'sensor_local_pos_to_optimized': 'geometry_msgs/Vector3',
        'sensor_local_rpy_to_optimized': 'geometry_msgs/Vector3',
        'sensor_enu_pos_to_optimized': 'geometry_msgs/Vector3',
        'sensor_enu_rpy_to_optimized': 'geometry_msgs/Vector3',
        'sensor_ecef_pos_to_optimized': 'geometry_msgs/Vector3',
        'sensor_ecef_rpy_to_optimized': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.counter = kwargs.get('counter', int())
        self.key_current = kwargs.get('key_current', int())
        self.key_previous = kwargs.get('key_previous', int())
        from geometry_msgs.msg import Vector3
        self.odom_anchor_ecef_pos = kwargs.get('odom_anchor_ecef_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.odom_anchor_ecef_to_enu_rpy = kwargs.get('odom_anchor_ecef_to_enu_rpy', Vector3())
        self.odom_anchor_yaw_offset = kwargs.get('odom_anchor_yaw_offset', float())
        self.associated_state_timestamp_i = kwargs.get('associated_state_timestamp_i', float())
        self.associated_state_timestamp_j = kwargs.get('associated_state_timestamp_j', float())
        self.duration_to_i = kwargs.get('duration_to_i', float())
        self.associated_with_i = kwargs.get('associated_with_i', bool())
        self.associated_with_j = kwargs.get('associated_with_j', bool())
        from geometry_msgs.msg import Vector3
        self.odom_local_pos = kwargs.get('odom_local_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.odom_local_rpy = kwargs.get('odom_local_rpy', Vector3())
        from geometry_msgs.msg import Vector3
        self.odom_ecef_pos = kwargs.get('odom_ecef_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.odom_ecef_rpy = kwargs.get('odom_ecef_rpy', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_pos_from = kwargs.get('sensor_local_pos_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_rpy_from = kwargs.get('sensor_local_rpy_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_pos_from = kwargs.get('sensor_enu_pos_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_rpy_from = kwargs.get('sensor_enu_rpy_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_pos_from = kwargs.get('sensor_ecef_pos_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_rpy_from = kwargs.get('sensor_ecef_rpy_from', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_pos_to = kwargs.get('sensor_local_pos_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_rpy_to = kwargs.get('sensor_local_rpy_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_pos_to = kwargs.get('sensor_enu_pos_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_rpy_to = kwargs.get('sensor_enu_rpy_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_pos_to = kwargs.get('sensor_ecef_pos_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_rpy_to = kwargs.get('sensor_ecef_rpy_to', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_pos_to_optimized = kwargs.get('sensor_local_pos_to_optimized', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_local_rpy_to_optimized = kwargs.get('sensor_local_rpy_to_optimized', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_pos_to_optimized = kwargs.get('sensor_enu_pos_to_optimized', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_enu_rpy_to_optimized = kwargs.get('sensor_enu_rpy_to_optimized', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_pos_to_optimized = kwargs.get('sensor_ecef_pos_to_optimized', Vector3())
        from geometry_msgs.msg import Vector3
        self.sensor_ecef_rpy_to_optimized = kwargs.get('sensor_ecef_rpy_to_optimized', Vector3())

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
        if self.key_current != other.key_current:
            return False
        if self.key_previous != other.key_previous:
            return False
        if self.odom_anchor_ecef_pos != other.odom_anchor_ecef_pos:
            return False
        if self.odom_anchor_ecef_to_enu_rpy != other.odom_anchor_ecef_to_enu_rpy:
            return False
        if self.odom_anchor_yaw_offset != other.odom_anchor_yaw_offset:
            return False
        if self.associated_state_timestamp_i != other.associated_state_timestamp_i:
            return False
        if self.associated_state_timestamp_j != other.associated_state_timestamp_j:
            return False
        if self.duration_to_i != other.duration_to_i:
            return False
        if self.associated_with_i != other.associated_with_i:
            return False
        if self.associated_with_j != other.associated_with_j:
            return False
        if self.odom_local_pos != other.odom_local_pos:
            return False
        if self.odom_local_rpy != other.odom_local_rpy:
            return False
        if self.odom_ecef_pos != other.odom_ecef_pos:
            return False
        if self.odom_ecef_rpy != other.odom_ecef_rpy:
            return False
        if self.sensor_local_pos_from != other.sensor_local_pos_from:
            return False
        if self.sensor_local_rpy_from != other.sensor_local_rpy_from:
            return False
        if self.sensor_enu_pos_from != other.sensor_enu_pos_from:
            return False
        if self.sensor_enu_rpy_from != other.sensor_enu_rpy_from:
            return False
        if self.sensor_ecef_pos_from != other.sensor_ecef_pos_from:
            return False
        if self.sensor_ecef_rpy_from != other.sensor_ecef_rpy_from:
            return False
        if self.sensor_local_pos_to != other.sensor_local_pos_to:
            return False
        if self.sensor_local_rpy_to != other.sensor_local_rpy_to:
            return False
        if self.sensor_enu_pos_to != other.sensor_enu_pos_to:
            return False
        if self.sensor_enu_rpy_to != other.sensor_enu_rpy_to:
            return False
        if self.sensor_ecef_pos_to != other.sensor_ecef_pos_to:
            return False
        if self.sensor_ecef_rpy_to != other.sensor_ecef_rpy_to:
            return False
        if self.sensor_local_pos_to_optimized != other.sensor_local_pos_to_optimized:
            return False
        if self.sensor_local_rpy_to_optimized != other.sensor_local_rpy_to_optimized:
            return False
        if self.sensor_enu_pos_to_optimized != other.sensor_enu_pos_to_optimized:
            return False
        if self.sensor_enu_rpy_to_optimized != other.sensor_enu_rpy_to_optimized:
            return False
        if self.sensor_ecef_pos_to_optimized != other.sensor_ecef_pos_to_optimized:
            return False
        if self.sensor_ecef_rpy_to_optimized != other.sensor_ecef_rpy_to_optimized:
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
            assert value >= 0 and value < 18446744073709551616, \
                "The 'counter' field must be an unsigned integer in [0, 18446744073709551615]"
        self._counter = value

    @builtins.property
    def key_current(self):
        """Message field 'key_current'."""
        return self._key_current

    @key_current.setter
    def key_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_current' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'key_current' field must be an unsigned integer in [0, 18446744073709551615]"
        self._key_current = value

    @builtins.property
    def key_previous(self):
        """Message field 'key_previous'."""
        return self._key_previous

    @key_previous.setter
    def key_previous(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_previous' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'key_previous' field must be an unsigned integer in [0, 18446744073709551615]"
        self._key_previous = value

    @builtins.property
    def odom_anchor_ecef_pos(self):
        """Message field 'odom_anchor_ecef_pos'."""
        return self._odom_anchor_ecef_pos

    @odom_anchor_ecef_pos.setter
    def odom_anchor_ecef_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_anchor_ecef_pos' field must be a sub message of type 'Vector3'"
        self._odom_anchor_ecef_pos = value

    @builtins.property
    def odom_anchor_ecef_to_enu_rpy(self):
        """Message field 'odom_anchor_ecef_to_enu_rpy'."""
        return self._odom_anchor_ecef_to_enu_rpy

    @odom_anchor_ecef_to_enu_rpy.setter
    def odom_anchor_ecef_to_enu_rpy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_anchor_ecef_to_enu_rpy' field must be a sub message of type 'Vector3'"
        self._odom_anchor_ecef_to_enu_rpy = value

    @builtins.property
    def odom_anchor_yaw_offset(self):
        """Message field 'odom_anchor_yaw_offset'."""
        return self._odom_anchor_yaw_offset

    @odom_anchor_yaw_offset.setter
    def odom_anchor_yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odom_anchor_yaw_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odom_anchor_yaw_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odom_anchor_yaw_offset = value

    @builtins.property
    def associated_state_timestamp_i(self):
        """Message field 'associated_state_timestamp_i'."""
        return self._associated_state_timestamp_i

    @associated_state_timestamp_i.setter
    def associated_state_timestamp_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'associated_state_timestamp_i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'associated_state_timestamp_i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._associated_state_timestamp_i = value

    @builtins.property
    def associated_state_timestamp_j(self):
        """Message field 'associated_state_timestamp_j'."""
        return self._associated_state_timestamp_j

    @associated_state_timestamp_j.setter
    def associated_state_timestamp_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'associated_state_timestamp_j' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'associated_state_timestamp_j' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._associated_state_timestamp_j = value

    @builtins.property
    def duration_to_i(self):
        """Message field 'duration_to_i'."""
        return self._duration_to_i

    @duration_to_i.setter
    def duration_to_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_to_i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration_to_i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration_to_i = value

    @builtins.property
    def associated_with_i(self):
        """Message field 'associated_with_i'."""
        return self._associated_with_i

    @associated_with_i.setter
    def associated_with_i(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'associated_with_i' field must be of type 'bool'"
        self._associated_with_i = value

    @builtins.property
    def associated_with_j(self):
        """Message field 'associated_with_j'."""
        return self._associated_with_j

    @associated_with_j.setter
    def associated_with_j(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'associated_with_j' field must be of type 'bool'"
        self._associated_with_j = value

    @builtins.property
    def odom_local_pos(self):
        """Message field 'odom_local_pos'."""
        return self._odom_local_pos

    @odom_local_pos.setter
    def odom_local_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_local_pos' field must be a sub message of type 'Vector3'"
        self._odom_local_pos = value

    @builtins.property
    def odom_local_rpy(self):
        """Message field 'odom_local_rpy'."""
        return self._odom_local_rpy

    @odom_local_rpy.setter
    def odom_local_rpy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_local_rpy' field must be a sub message of type 'Vector3'"
        self._odom_local_rpy = value

    @builtins.property
    def odom_ecef_pos(self):
        """Message field 'odom_ecef_pos'."""
        return self._odom_ecef_pos

    @odom_ecef_pos.setter
    def odom_ecef_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_ecef_pos' field must be a sub message of type 'Vector3'"
        self._odom_ecef_pos = value

    @builtins.property
    def odom_ecef_rpy(self):
        """Message field 'odom_ecef_rpy'."""
        return self._odom_ecef_rpy

    @odom_ecef_rpy.setter
    def odom_ecef_rpy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'odom_ecef_rpy' field must be a sub message of type 'Vector3'"
        self._odom_ecef_rpy = value

    @builtins.property
    def sensor_local_pos_from(self):
        """Message field 'sensor_local_pos_from'."""
        return self._sensor_local_pos_from

    @sensor_local_pos_from.setter
    def sensor_local_pos_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_pos_from' field must be a sub message of type 'Vector3'"
        self._sensor_local_pos_from = value

    @builtins.property
    def sensor_local_rpy_from(self):
        """Message field 'sensor_local_rpy_from'."""
        return self._sensor_local_rpy_from

    @sensor_local_rpy_from.setter
    def sensor_local_rpy_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_rpy_from' field must be a sub message of type 'Vector3'"
        self._sensor_local_rpy_from = value

    @builtins.property
    def sensor_enu_pos_from(self):
        """Message field 'sensor_enu_pos_from'."""
        return self._sensor_enu_pos_from

    @sensor_enu_pos_from.setter
    def sensor_enu_pos_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_pos_from' field must be a sub message of type 'Vector3'"
        self._sensor_enu_pos_from = value

    @builtins.property
    def sensor_enu_rpy_from(self):
        """Message field 'sensor_enu_rpy_from'."""
        return self._sensor_enu_rpy_from

    @sensor_enu_rpy_from.setter
    def sensor_enu_rpy_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_rpy_from' field must be a sub message of type 'Vector3'"
        self._sensor_enu_rpy_from = value

    @builtins.property
    def sensor_ecef_pos_from(self):
        """Message field 'sensor_ecef_pos_from'."""
        return self._sensor_ecef_pos_from

    @sensor_ecef_pos_from.setter
    def sensor_ecef_pos_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_pos_from' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_pos_from = value

    @builtins.property
    def sensor_ecef_rpy_from(self):
        """Message field 'sensor_ecef_rpy_from'."""
        return self._sensor_ecef_rpy_from

    @sensor_ecef_rpy_from.setter
    def sensor_ecef_rpy_from(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_rpy_from' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_rpy_from = value

    @builtins.property
    def sensor_local_pos_to(self):
        """Message field 'sensor_local_pos_to'."""
        return self._sensor_local_pos_to

    @sensor_local_pos_to.setter
    def sensor_local_pos_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_pos_to' field must be a sub message of type 'Vector3'"
        self._sensor_local_pos_to = value

    @builtins.property
    def sensor_local_rpy_to(self):
        """Message field 'sensor_local_rpy_to'."""
        return self._sensor_local_rpy_to

    @sensor_local_rpy_to.setter
    def sensor_local_rpy_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_rpy_to' field must be a sub message of type 'Vector3'"
        self._sensor_local_rpy_to = value

    @builtins.property
    def sensor_enu_pos_to(self):
        """Message field 'sensor_enu_pos_to'."""
        return self._sensor_enu_pos_to

    @sensor_enu_pos_to.setter
    def sensor_enu_pos_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_pos_to' field must be a sub message of type 'Vector3'"
        self._sensor_enu_pos_to = value

    @builtins.property
    def sensor_enu_rpy_to(self):
        """Message field 'sensor_enu_rpy_to'."""
        return self._sensor_enu_rpy_to

    @sensor_enu_rpy_to.setter
    def sensor_enu_rpy_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_rpy_to' field must be a sub message of type 'Vector3'"
        self._sensor_enu_rpy_to = value

    @builtins.property
    def sensor_ecef_pos_to(self):
        """Message field 'sensor_ecef_pos_to'."""
        return self._sensor_ecef_pos_to

    @sensor_ecef_pos_to.setter
    def sensor_ecef_pos_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_pos_to' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_pos_to = value

    @builtins.property
    def sensor_ecef_rpy_to(self):
        """Message field 'sensor_ecef_rpy_to'."""
        return self._sensor_ecef_rpy_to

    @sensor_ecef_rpy_to.setter
    def sensor_ecef_rpy_to(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_rpy_to' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_rpy_to = value

    @builtins.property
    def sensor_local_pos_to_optimized(self):
        """Message field 'sensor_local_pos_to_optimized'."""
        return self._sensor_local_pos_to_optimized

    @sensor_local_pos_to_optimized.setter
    def sensor_local_pos_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_pos_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_local_pos_to_optimized = value

    @builtins.property
    def sensor_local_rpy_to_optimized(self):
        """Message field 'sensor_local_rpy_to_optimized'."""
        return self._sensor_local_rpy_to_optimized

    @sensor_local_rpy_to_optimized.setter
    def sensor_local_rpy_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_local_rpy_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_local_rpy_to_optimized = value

    @builtins.property
    def sensor_enu_pos_to_optimized(self):
        """Message field 'sensor_enu_pos_to_optimized'."""
        return self._sensor_enu_pos_to_optimized

    @sensor_enu_pos_to_optimized.setter
    def sensor_enu_pos_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_pos_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_enu_pos_to_optimized = value

    @builtins.property
    def sensor_enu_rpy_to_optimized(self):
        """Message field 'sensor_enu_rpy_to_optimized'."""
        return self._sensor_enu_rpy_to_optimized

    @sensor_enu_rpy_to_optimized.setter
    def sensor_enu_rpy_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_enu_rpy_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_enu_rpy_to_optimized = value

    @builtins.property
    def sensor_ecef_pos_to_optimized(self):
        """Message field 'sensor_ecef_pos_to_optimized'."""
        return self._sensor_ecef_pos_to_optimized

    @sensor_ecef_pos_to_optimized.setter
    def sensor_ecef_pos_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_pos_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_pos_to_optimized = value

    @builtins.property
    def sensor_ecef_rpy_to_optimized(self):
        """Message field 'sensor_ecef_rpy_to_optimized'."""
        return self._sensor_ecef_rpy_to_optimized

    @sensor_ecef_rpy_to_optimized.setter
    def sensor_ecef_rpy_to_optimized(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sensor_ecef_rpy_to_optimized' field must be a sub message of type 'Vector3'"
        self._sensor_ecef_rpy_to_optimized = value
