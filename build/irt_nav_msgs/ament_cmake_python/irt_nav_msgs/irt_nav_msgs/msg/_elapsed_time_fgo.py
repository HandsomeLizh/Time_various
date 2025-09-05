# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ElapsedTimeFGO(type):
    """Metaclass of message 'ElapsedTimeFGO'."""

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
                'irt_nav_msgs.msg.ElapsedTimeFGO')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__elapsed_time_fgo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__elapsed_time_fgo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__elapsed_time_fgo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__elapsed_time_fgo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__elapsed_time_fgo

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


class ElapsedTimeFGO(metaclass=Metaclass_ElapsedTimeFGO):
    """Message class 'ElapsedTimeFGO'."""

    __slots__ = [
        '_header',
        '_ts_start_construction',
        '_ts_start_optimization',
        '_duration_construction',
        '_duration_optimization',
        '_num_new_factors',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ts_start_construction': 'double',
        'ts_start_optimization': 'double',
        'duration_construction': 'double',
        'duration_optimization': 'double',
        'num_new_factors': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ts_start_construction = kwargs.get('ts_start_construction', float())
        self.ts_start_optimization = kwargs.get('ts_start_optimization', float())
        self.duration_construction = kwargs.get('duration_construction', float())
        self.duration_optimization = kwargs.get('duration_optimization', float())
        self.num_new_factors = kwargs.get('num_new_factors', int())

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
        if self.ts_start_construction != other.ts_start_construction:
            return False
        if self.ts_start_optimization != other.ts_start_optimization:
            return False
        if self.duration_construction != other.duration_construction:
            return False
        if self.duration_optimization != other.duration_optimization:
            return False
        if self.num_new_factors != other.num_new_factors:
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
    def ts_start_construction(self):
        """Message field 'ts_start_construction'."""
        return self._ts_start_construction

    @ts_start_construction.setter
    def ts_start_construction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_start_construction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_start_construction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_start_construction = value

    @builtins.property
    def ts_start_optimization(self):
        """Message field 'ts_start_optimization'."""
        return self._ts_start_optimization

    @ts_start_optimization.setter
    def ts_start_optimization(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_start_optimization' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_start_optimization' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_start_optimization = value

    @builtins.property
    def duration_construction(self):
        """Message field 'duration_construction'."""
        return self._duration_construction

    @duration_construction.setter
    def duration_construction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_construction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration_construction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration_construction = value

    @builtins.property
    def duration_optimization(self):
        """Message field 'duration_optimization'."""
        return self._duration_optimization

    @duration_optimization.setter
    def duration_optimization(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_optimization' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration_optimization' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration_optimization = value

    @builtins.property
    def num_new_factors(self):
        """Message field 'num_new_factors'."""
        return self._num_new_factors

    @num_new_factors.setter
    def num_new_factors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_new_factors' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_new_factors' field must be an unsigned integer in [0, 65535]"
        self._num_new_factors = value
