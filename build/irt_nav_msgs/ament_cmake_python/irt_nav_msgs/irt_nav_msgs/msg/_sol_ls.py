# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/SolLS.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'llh'
# Member 'vel_ned'
# Member 'dop'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolLS(type):
    """Metaclass of message 'SolLS'."""

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
                'irt_nav_msgs.msg.SolLS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sol_ls
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sol_ls
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sol_ls
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sol_ls
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sol_ls

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SolLS(metaclass=Metaclass_SolLS):
    """Message class 'SolLS'."""

    __slots__ = [
        '_llh',
        '_vel_ned',
        '_receiver_clock_bias',
        '_receiver_clock_drift',
        '_dop',
        '_available',
    ]

    _fields_and_field_types = {
        'llh': 'double[3]',
        'vel_ned': 'double[3]',
        'receiver_clock_bias': 'double',
        'receiver_clock_drift': 'double',
        'dop': 'double[2]',
        'available': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'llh' not in kwargs:
            self.llh = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.llh = numpy.array(kwargs.get('llh'), dtype=numpy.float64)
            assert self.llh.shape == (3, )
        if 'vel_ned' not in kwargs:
            self.vel_ned = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.vel_ned = numpy.array(kwargs.get('vel_ned'), dtype=numpy.float64)
            assert self.vel_ned.shape == (3, )
        self.receiver_clock_bias = kwargs.get('receiver_clock_bias', float())
        self.receiver_clock_drift = kwargs.get('receiver_clock_drift', float())
        if 'dop' not in kwargs:
            self.dop = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.dop = numpy.array(kwargs.get('dop'), dtype=numpy.float64)
            assert self.dop.shape == (2, )
        self.available = kwargs.get('available', bool())

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
        if any(self.llh != other.llh):
            return False
        if any(self.vel_ned != other.vel_ned):
            return False
        if self.receiver_clock_bias != other.receiver_clock_bias:
            return False
        if self.receiver_clock_drift != other.receiver_clock_drift:
            return False
        if any(self.dop != other.dop):
            return False
        if self.available != other.available:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def llh(self):
        """Message field 'llh'."""
        return self._llh

    @llh.setter
    def llh(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'llh' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'llh' numpy.ndarray() must have a size of 3"
            self._llh = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'llh' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._llh = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def vel_ned(self):
        """Message field 'vel_ned'."""
        return self._vel_ned

    @vel_ned.setter
    def vel_ned(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'vel_ned' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'vel_ned' numpy.ndarray() must have a size of 3"
            self._vel_ned = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'vel_ned' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vel_ned = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def receiver_clock_bias(self):
        """Message field 'receiver_clock_bias'."""
        return self._receiver_clock_bias

    @receiver_clock_bias.setter
    def receiver_clock_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'receiver_clock_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'receiver_clock_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._receiver_clock_bias = value

    @builtins.property
    def receiver_clock_drift(self):
        """Message field 'receiver_clock_drift'."""
        return self._receiver_clock_drift

    @receiver_clock_drift.setter
    def receiver_clock_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'receiver_clock_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'receiver_clock_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._receiver_clock_drift = value

    @builtins.property
    def dop(self):
        """Message field 'dop'."""
        return self._dop

    @dop.setter
    def dop(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dop' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'dop' numpy.ndarray() must have a size of 2"
            self._dop = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dop' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dop = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value
