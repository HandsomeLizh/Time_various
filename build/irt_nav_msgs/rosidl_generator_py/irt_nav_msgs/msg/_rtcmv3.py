# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/RTCMV3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'base'
# Member 'svid'
# Member 'pseudorange'
# Member 'type'
# Member 'carrier'
# Member 'cn0'
# Member 'locktime'
# Member 'lli'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCMV3(type):
    """Metaclass of message 'RTCMV3'."""

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
                'irt_nav_msgs.msg.RTCMV3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcmv3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcmv3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcmv3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcmv3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcmv3

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


class RTCMV3(metaclass=Metaclass_RTCMV3):
    """Message class 'RTCMV3'."""

    __slots__ = [
        '_header',
        '_tow',
        '_base',
        '_svid',
        '_pseudorange',
        '_type',
        '_carrier',
        '_cn0',
        '_locktime',
        '_lli',
        '_reference_station_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tow': 'double',
        'base': 'double[3]',
        'svid': 'uint8[40]',
        'pseudorange': 'double[200]',
        'type': 'uint8[200]',
        'carrier': 'double[200]',
        'cn0': 'double[200]',
        'locktime': 'uint16[200]',
        'lli': 'uint16[200]',
        'reference_station_id': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 200),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 200),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 200),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 200),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 200),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 200),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tow = kwargs.get('tow', float())
        if 'base' not in kwargs:
            self.base = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.base = numpy.array(kwargs.get('base'), dtype=numpy.float64)
            assert self.base.shape == (3, )
        if 'svid' not in kwargs:
            self.svid = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.svid = numpy.array(kwargs.get('svid'), dtype=numpy.uint8)
            assert self.svid.shape == (40, )
        if 'pseudorange' not in kwargs:
            self.pseudorange = numpy.zeros(200, dtype=numpy.float64)
        else:
            self.pseudorange = numpy.array(kwargs.get('pseudorange'), dtype=numpy.float64)
            assert self.pseudorange.shape == (200, )
        if 'type' not in kwargs:
            self.type = numpy.zeros(200, dtype=numpy.uint8)
        else:
            self.type = numpy.array(kwargs.get('type'), dtype=numpy.uint8)
            assert self.type.shape == (200, )
        if 'carrier' not in kwargs:
            self.carrier = numpy.zeros(200, dtype=numpy.float64)
        else:
            self.carrier = numpy.array(kwargs.get('carrier'), dtype=numpy.float64)
            assert self.carrier.shape == (200, )
        if 'cn0' not in kwargs:
            self.cn0 = numpy.zeros(200, dtype=numpy.float64)
        else:
            self.cn0 = numpy.array(kwargs.get('cn0'), dtype=numpy.float64)
            assert self.cn0.shape == (200, )
        if 'locktime' not in kwargs:
            self.locktime = numpy.zeros(200, dtype=numpy.uint16)
        else:
            self.locktime = numpy.array(kwargs.get('locktime'), dtype=numpy.uint16)
            assert self.locktime.shape == (200, )
        if 'lli' not in kwargs:
            self.lli = numpy.zeros(200, dtype=numpy.uint16)
        else:
            self.lli = numpy.array(kwargs.get('lli'), dtype=numpy.uint16)
            assert self.lli.shape == (200, )
        self.reference_station_id = kwargs.get('reference_station_id', int())

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
        if any(self.base != other.base):
            return False
        if any(self.svid != other.svid):
            return False
        if any(self.pseudorange != other.pseudorange):
            return False
        if any(self.type != other.type):
            return False
        if any(self.carrier != other.carrier):
            return False
        if any(self.cn0 != other.cn0):
            return False
        if any(self.locktime != other.locktime):
            return False
        if any(self.lli != other.lli):
            return False
        if self.reference_station_id != other.reference_station_id:
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
    def base(self):
        """Message field 'base'."""
        return self._base

    @base.setter
    def base(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'base' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'base' numpy.ndarray() must have a size of 3"
            self._base = value
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
                "The 'base' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._base = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def svid(self):
        """Message field 'svid'."""
        return self._svid

    @svid.setter
    def svid(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'svid' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 40, \
                "The 'svid' numpy.ndarray() must have a size of 40"
            self._svid = value
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
                 len(value) == 40 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'svid' field must be a set or sequence with length 40 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._svid = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def pseudorange(self):
        """Message field 'pseudorange'."""
        return self._pseudorange

    @pseudorange.setter
    def pseudorange(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pseudorange' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 200, \
                "The 'pseudorange' numpy.ndarray() must have a size of 200"
            self._pseudorange = value
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
                 len(value) == 200 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pseudorange' field must be a set or sequence with length 200 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange = numpy.array(value, dtype=numpy.float64)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'type' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 200, \
                "The 'type' numpy.ndarray() must have a size of 200"
            self._type = value
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
                 len(value) == 200 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'type' field must be a set or sequence with length 200 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._type = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def carrier(self):
        """Message field 'carrier'."""
        return self._carrier

    @carrier.setter
    def carrier(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'carrier' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 200, \
                "The 'carrier' numpy.ndarray() must have a size of 200"
            self._carrier = value
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
                 len(value) == 200 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'carrier' field must be a set or sequence with length 200 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._carrier = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cn0(self):
        """Message field 'cn0'."""
        return self._cn0

    @cn0.setter
    def cn0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cn0' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 200, \
                "The 'cn0' numpy.ndarray() must have a size of 200"
            self._cn0 = value
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
                 len(value) == 200 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cn0' field must be a set or sequence with length 200 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cn0 = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def locktime(self):
        """Message field 'locktime'."""
        return self._locktime

    @locktime.setter
    def locktime(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'locktime' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 200, \
                "The 'locktime' numpy.ndarray() must have a size of 200"
            self._locktime = value
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
                 len(value) == 200 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'locktime' field must be a set or sequence with length 200 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._locktime = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def lli(self):
        """Message field 'lli'."""
        return self._lli

    @lli.setter
    def lli(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'lli' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 200, \
                "The 'lli' numpy.ndarray() must have a size of 200"
            self._lli = value
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
                 len(value) == 200 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'lli' field must be a set or sequence with length 200 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._lli = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def reference_station_id(self):
        """Message field 'reference_station_id'."""
        return self._reference_station_id

    @reference_station_id.setter
    def reference_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_station_id' field must be an unsigned integer in [0, 65535]"
        self._reference_station_id = value
