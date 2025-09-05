# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/GNSSLabeling.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'faulty_prn_main'
# Member 'faulty_prn_aux'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSLabeling(type):
    """Metaclass of message 'GNSSLabeling'."""

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
                'irt_nav_msgs.msg.GNSSLabeling')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_labeling
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_labeling
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_labeling
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_labeling
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_labeling

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from irt_nav_msgs.msg import SatLabel
            if SatLabel.__class__._TYPE_SUPPORT is None:
                SatLabel.__class__.__import_type_support__()

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


class GNSSLabeling(metaclass=Metaclass_GNSSLabeling):
    """Message class 'GNSSLabeling'."""

    __slots__ = [
        '_header',
        '_related_state_timestamp_nanosec',
        '_counter',
        '_time_receive',
        '_solution_type',
        '_ant_main_labels',
        '_ant_aux_labels',
        '_faulty_prn_main',
        '_faulty_prn_aux',
        '_gt_available',
        '_ant_pos',
        '_ant_vel',
        '_gt_pos',
        '_gt_vel',
        '_clock_bias',
        '_clock_drift',
        '_gt_clock_bias',
        '_gt_clock_drift',
        '_environment',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'related_state_timestamp_nanosec': 'int64',
        'counter': 'uint64',
        'time_receive': 'double',
        'solution_type': 'uint8',
        'ant_main_labels': 'sequence<irt_nav_msgs/SatLabel>',
        'ant_aux_labels': 'sequence<irt_nav_msgs/SatLabel>',
        'faulty_prn_main': 'sequence<uint8>',
        'faulty_prn_aux': 'sequence<uint8>',
        'gt_available': 'boolean',
        'ant_pos': 'geometry_msgs/Vector3',
        'ant_vel': 'geometry_msgs/Vector3',
        'gt_pos': 'geometry_msgs/Vector3',
        'gt_vel': 'geometry_msgs/Vector3',
        'clock_bias': 'double',
        'clock_drift': 'double',
        'gt_clock_bias': 'double',
        'gt_clock_drift': 'double',
        'environment': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'SatLabel')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'SatLabel')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.related_state_timestamp_nanosec = kwargs.get('related_state_timestamp_nanosec', int())
        self.counter = kwargs.get('counter', int())
        self.time_receive = kwargs.get('time_receive', float())
        self.solution_type = kwargs.get('solution_type', int())
        self.ant_main_labels = kwargs.get('ant_main_labels', [])
        self.ant_aux_labels = kwargs.get('ant_aux_labels', [])
        self.faulty_prn_main = array.array('B', kwargs.get('faulty_prn_main', []))
        self.faulty_prn_aux = array.array('B', kwargs.get('faulty_prn_aux', []))
        self.gt_available = kwargs.get('gt_available', bool())
        from geometry_msgs.msg import Vector3
        self.ant_pos = kwargs.get('ant_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.ant_vel = kwargs.get('ant_vel', Vector3())
        from geometry_msgs.msg import Vector3
        self.gt_pos = kwargs.get('gt_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.gt_vel = kwargs.get('gt_vel', Vector3())
        self.clock_bias = kwargs.get('clock_bias', float())
        self.clock_drift = kwargs.get('clock_drift', float())
        self.gt_clock_bias = kwargs.get('gt_clock_bias', float())
        self.gt_clock_drift = kwargs.get('gt_clock_drift', float())
        self.environment = kwargs.get('environment', str())

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
        if self.related_state_timestamp_nanosec != other.related_state_timestamp_nanosec:
            return False
        if self.counter != other.counter:
            return False
        if self.time_receive != other.time_receive:
            return False
        if self.solution_type != other.solution_type:
            return False
        if self.ant_main_labels != other.ant_main_labels:
            return False
        if self.ant_aux_labels != other.ant_aux_labels:
            return False
        if self.faulty_prn_main != other.faulty_prn_main:
            return False
        if self.faulty_prn_aux != other.faulty_prn_aux:
            return False
        if self.gt_available != other.gt_available:
            return False
        if self.ant_pos != other.ant_pos:
            return False
        if self.ant_vel != other.ant_vel:
            return False
        if self.gt_pos != other.gt_pos:
            return False
        if self.gt_vel != other.gt_vel:
            return False
        if self.clock_bias != other.clock_bias:
            return False
        if self.clock_drift != other.clock_drift:
            return False
        if self.gt_clock_bias != other.gt_clock_bias:
            return False
        if self.gt_clock_drift != other.gt_clock_drift:
            return False
        if self.environment != other.environment:
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
    def related_state_timestamp_nanosec(self):
        """Message field 'related_state_timestamp_nanosec'."""
        return self._related_state_timestamp_nanosec

    @related_state_timestamp_nanosec.setter
    def related_state_timestamp_nanosec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'related_state_timestamp_nanosec' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'related_state_timestamp_nanosec' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._related_state_timestamp_nanosec = value

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
    def time_receive(self):
        """Message field 'time_receive'."""
        return self._time_receive

    @time_receive.setter
    def time_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_receive' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_receive' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_receive = value

    @builtins.property
    def solution_type(self):
        """Message field 'solution_type'."""
        return self._solution_type

    @solution_type.setter
    def solution_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'solution_type' field must be an unsigned integer in [0, 255]"
        self._solution_type = value

    @builtins.property
    def ant_main_labels(self):
        """Message field 'ant_main_labels'."""
        return self._ant_main_labels

    @ant_main_labels.setter
    def ant_main_labels(self, value):
        if __debug__:
            from irt_nav_msgs.msg import SatLabel
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
                 all(isinstance(v, SatLabel) for v in value) and
                 True), \
                "The 'ant_main_labels' field must be a set or sequence and each value of type 'SatLabel'"
        self._ant_main_labels = value

    @builtins.property
    def ant_aux_labels(self):
        """Message field 'ant_aux_labels'."""
        return self._ant_aux_labels

    @ant_aux_labels.setter
    def ant_aux_labels(self, value):
        if __debug__:
            from irt_nav_msgs.msg import SatLabel
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
                 all(isinstance(v, SatLabel) for v in value) and
                 True), \
                "The 'ant_aux_labels' field must be a set or sequence and each value of type 'SatLabel'"
        self._ant_aux_labels = value

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
    def gt_available(self):
        """Message field 'gt_available'."""
        return self._gt_available

    @gt_available.setter
    def gt_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gt_available' field must be of type 'bool'"
        self._gt_available = value

    @builtins.property
    def ant_pos(self):
        """Message field 'ant_pos'."""
        return self._ant_pos

    @ant_pos.setter
    def ant_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'ant_pos' field must be a sub message of type 'Vector3'"
        self._ant_pos = value

    @builtins.property
    def ant_vel(self):
        """Message field 'ant_vel'."""
        return self._ant_vel

    @ant_vel.setter
    def ant_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'ant_vel' field must be a sub message of type 'Vector3'"
        self._ant_vel = value

    @builtins.property
    def gt_pos(self):
        """Message field 'gt_pos'."""
        return self._gt_pos

    @gt_pos.setter
    def gt_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'gt_pos' field must be a sub message of type 'Vector3'"
        self._gt_pos = value

    @builtins.property
    def gt_vel(self):
        """Message field 'gt_vel'."""
        return self._gt_vel

    @gt_vel.setter
    def gt_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'gt_vel' field must be a sub message of type 'Vector3'"
        self._gt_vel = value

    @builtins.property
    def clock_bias(self):
        """Message field 'clock_bias'."""
        return self._clock_bias

    @clock_bias.setter
    def clock_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clock_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'clock_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._clock_bias = value

    @builtins.property
    def clock_drift(self):
        """Message field 'clock_drift'."""
        return self._clock_drift

    @clock_drift.setter
    def clock_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clock_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'clock_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._clock_drift = value

    @builtins.property
    def gt_clock_bias(self):
        """Message field 'gt_clock_bias'."""
        return self._gt_clock_bias

    @gt_clock_bias.setter
    def gt_clock_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gt_clock_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gt_clock_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gt_clock_bias = value

    @builtins.property
    def gt_clock_drift(self):
        """Message field 'gt_clock_drift'."""
        return self._gt_clock_drift

    @gt_clock_drift.setter
    def gt_clock_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gt_clock_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gt_clock_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gt_clock_drift = value

    @builtins.property
    def environment(self):
        """Message field 'environment'."""
        return self._environment

    @environment.setter
    def environment(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'environment' field must be of type 'str'"
        self._environment = value
