# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/NavFilter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'state_ekf'
# Member 'var_ekf'
# Member 'euler_ekf'
# Member 'ant_ecef_ekf'
# Member 'ant_llh_ekf'
# Member 'ant_vel_ekf'
# Member 'state_ukf'
# Member 'var_ukf'
# Member 'euler_ukf'
# Member 'ant_ecef_ukf'
# Member 'ant_llh_ukf'
# Member 'ant_vel_ukf'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavFilter(type):
    """Metaclass of message 'NavFilter'."""

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
                'irt_nav_msgs.msg.NavFilter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_filter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_filter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_filter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_filter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_filter

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


class NavFilter(metaclass=Metaclass_NavFilter):
    """Message class 'NavFilter'."""

    __slots__ = [
        '_header',
        '_filter_enabled',
        '_gnss_obs_delay',
        '_state_ekf',
        '_var_ekf',
        '_vel_normed_ekf',
        '_euler_ekf',
        '_update_exit_ekf',
        '_ant_ecef_ekf',
        '_ant_llh_ekf',
        '_ant_vel_ekf',
        '_state_ukf',
        '_var_ukf',
        '_vel_normed_ukf',
        '_euler_ukf',
        '_update_exit_ukf',
        '_ant_ecef_ukf',
        '_ant_llh_ukf',
        '_ant_vel_ukf',
        '_filter_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'filter_enabled': 'boolean',
        'gnss_obs_delay': 'double',
        'state_ekf': 'double[18]',
        'var_ekf': 'double[17]',
        'vel_normed_ekf': 'double',
        'euler_ekf': 'double[3]',
        'update_exit_ekf': 'boolean',
        'ant_ecef_ekf': 'double[3]',
        'ant_llh_ekf': 'double[3]',
        'ant_vel_ekf': 'double[3]',
        'state_ukf': 'double[18]',
        'var_ukf': 'double[17]',
        'vel_normed_ukf': 'double',
        'euler_ukf': 'double[3]',
        'update_exit_ukf': 'boolean',
        'ant_ecef_ukf': 'double[3]',
        'ant_llh_ukf': 'double[3]',
        'ant_vel_ukf': 'double[3]',
        'filter_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 17),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 17),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.filter_enabled = kwargs.get('filter_enabled', bool())
        self.gnss_obs_delay = kwargs.get('gnss_obs_delay', float())
        if 'state_ekf' not in kwargs:
            self.state_ekf = numpy.zeros(18, dtype=numpy.float64)
        else:
            self.state_ekf = numpy.array(kwargs.get('state_ekf'), dtype=numpy.float64)
            assert self.state_ekf.shape == (18, )
        if 'var_ekf' not in kwargs:
            self.var_ekf = numpy.zeros(17, dtype=numpy.float64)
        else:
            self.var_ekf = numpy.array(kwargs.get('var_ekf'), dtype=numpy.float64)
            assert self.var_ekf.shape == (17, )
        self.vel_normed_ekf = kwargs.get('vel_normed_ekf', float())
        if 'euler_ekf' not in kwargs:
            self.euler_ekf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.euler_ekf = numpy.array(kwargs.get('euler_ekf'), dtype=numpy.float64)
            assert self.euler_ekf.shape == (3, )
        self.update_exit_ekf = kwargs.get('update_exit_ekf', bool())
        if 'ant_ecef_ekf' not in kwargs:
            self.ant_ecef_ekf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_ecef_ekf = numpy.array(kwargs.get('ant_ecef_ekf'), dtype=numpy.float64)
            assert self.ant_ecef_ekf.shape == (3, )
        if 'ant_llh_ekf' not in kwargs:
            self.ant_llh_ekf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_llh_ekf = numpy.array(kwargs.get('ant_llh_ekf'), dtype=numpy.float64)
            assert self.ant_llh_ekf.shape == (3, )
        if 'ant_vel_ekf' not in kwargs:
            self.ant_vel_ekf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_vel_ekf = numpy.array(kwargs.get('ant_vel_ekf'), dtype=numpy.float64)
            assert self.ant_vel_ekf.shape == (3, )
        if 'state_ukf' not in kwargs:
            self.state_ukf = numpy.zeros(18, dtype=numpy.float64)
        else:
            self.state_ukf = numpy.array(kwargs.get('state_ukf'), dtype=numpy.float64)
            assert self.state_ukf.shape == (18, )
        if 'var_ukf' not in kwargs:
            self.var_ukf = numpy.zeros(17, dtype=numpy.float64)
        else:
            self.var_ukf = numpy.array(kwargs.get('var_ukf'), dtype=numpy.float64)
            assert self.var_ukf.shape == (17, )
        self.vel_normed_ukf = kwargs.get('vel_normed_ukf', float())
        if 'euler_ukf' not in kwargs:
            self.euler_ukf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.euler_ukf = numpy.array(kwargs.get('euler_ukf'), dtype=numpy.float64)
            assert self.euler_ukf.shape == (3, )
        self.update_exit_ukf = kwargs.get('update_exit_ukf', bool())
        if 'ant_ecef_ukf' not in kwargs:
            self.ant_ecef_ukf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_ecef_ukf = numpy.array(kwargs.get('ant_ecef_ukf'), dtype=numpy.float64)
            assert self.ant_ecef_ukf.shape == (3, )
        if 'ant_llh_ukf' not in kwargs:
            self.ant_llh_ukf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_llh_ukf = numpy.array(kwargs.get('ant_llh_ukf'), dtype=numpy.float64)
            assert self.ant_llh_ukf.shape == (3, )
        if 'ant_vel_ukf' not in kwargs:
            self.ant_vel_ukf = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.ant_vel_ukf = numpy.array(kwargs.get('ant_vel_ukf'), dtype=numpy.float64)
            assert self.ant_vel_ukf.shape == (3, )
        self.filter_time = kwargs.get('filter_time', float())

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
        if self.filter_enabled != other.filter_enabled:
            return False
        if self.gnss_obs_delay != other.gnss_obs_delay:
            return False
        if any(self.state_ekf != other.state_ekf):
            return False
        if any(self.var_ekf != other.var_ekf):
            return False
        if self.vel_normed_ekf != other.vel_normed_ekf:
            return False
        if any(self.euler_ekf != other.euler_ekf):
            return False
        if self.update_exit_ekf != other.update_exit_ekf:
            return False
        if any(self.ant_ecef_ekf != other.ant_ecef_ekf):
            return False
        if any(self.ant_llh_ekf != other.ant_llh_ekf):
            return False
        if any(self.ant_vel_ekf != other.ant_vel_ekf):
            return False
        if any(self.state_ukf != other.state_ukf):
            return False
        if any(self.var_ukf != other.var_ukf):
            return False
        if self.vel_normed_ukf != other.vel_normed_ukf:
            return False
        if any(self.euler_ukf != other.euler_ukf):
            return False
        if self.update_exit_ukf != other.update_exit_ukf:
            return False
        if any(self.ant_ecef_ukf != other.ant_ecef_ukf):
            return False
        if any(self.ant_llh_ukf != other.ant_llh_ukf):
            return False
        if any(self.ant_vel_ukf != other.ant_vel_ukf):
            return False
        if self.filter_time != other.filter_time:
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
    def filter_enabled(self):
        """Message field 'filter_enabled'."""
        return self._filter_enabled

    @filter_enabled.setter
    def filter_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_enabled' field must be of type 'bool'"
        self._filter_enabled = value

    @builtins.property
    def gnss_obs_delay(self):
        """Message field 'gnss_obs_delay'."""
        return self._gnss_obs_delay

    @gnss_obs_delay.setter
    def gnss_obs_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_obs_delay' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gnss_obs_delay' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gnss_obs_delay = value

    @builtins.property
    def state_ekf(self):
        """Message field 'state_ekf'."""
        return self._state_ekf

    @state_ekf.setter
    def state_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'state_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 18, \
                "The 'state_ekf' numpy.ndarray() must have a size of 18"
            self._state_ekf = value
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
                 len(value) == 18 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'state_ekf' field must be a set or sequence with length 18 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._state_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def var_ekf(self):
        """Message field 'var_ekf'."""
        return self._var_ekf

    @var_ekf.setter
    def var_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'var_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 17, \
                "The 'var_ekf' numpy.ndarray() must have a size of 17"
            self._var_ekf = value
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
                 len(value) == 17 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'var_ekf' field must be a set or sequence with length 17 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._var_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def vel_normed_ekf(self):
        """Message field 'vel_normed_ekf'."""
        return self._vel_normed_ekf

    @vel_normed_ekf.setter
    def vel_normed_ekf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_normed_ekf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_normed_ekf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_normed_ekf = value

    @builtins.property
    def euler_ekf(self):
        """Message field 'euler_ekf'."""
        return self._euler_ekf

    @euler_ekf.setter
    def euler_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'euler_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'euler_ekf' numpy.ndarray() must have a size of 3"
            self._euler_ekf = value
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
                "The 'euler_ekf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._euler_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def update_exit_ekf(self):
        """Message field 'update_exit_ekf'."""
        return self._update_exit_ekf

    @update_exit_ekf.setter
    def update_exit_ekf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'update_exit_ekf' field must be of type 'bool'"
        self._update_exit_ekf = value

    @builtins.property
    def ant_ecef_ekf(self):
        """Message field 'ant_ecef_ekf'."""
        return self._ant_ecef_ekf

    @ant_ecef_ekf.setter
    def ant_ecef_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_ecef_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_ecef_ekf' numpy.ndarray() must have a size of 3"
            self._ant_ecef_ekf = value
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
                "The 'ant_ecef_ekf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_ecef_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ant_llh_ekf(self):
        """Message field 'ant_llh_ekf'."""
        return self._ant_llh_ekf

    @ant_llh_ekf.setter
    def ant_llh_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_llh_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_llh_ekf' numpy.ndarray() must have a size of 3"
            self._ant_llh_ekf = value
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
                "The 'ant_llh_ekf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_llh_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ant_vel_ekf(self):
        """Message field 'ant_vel_ekf'."""
        return self._ant_vel_ekf

    @ant_vel_ekf.setter
    def ant_vel_ekf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_vel_ekf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_vel_ekf' numpy.ndarray() must have a size of 3"
            self._ant_vel_ekf = value
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
                "The 'ant_vel_ekf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_vel_ekf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def state_ukf(self):
        """Message field 'state_ukf'."""
        return self._state_ukf

    @state_ukf.setter
    def state_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'state_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 18, \
                "The 'state_ukf' numpy.ndarray() must have a size of 18"
            self._state_ukf = value
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
                 len(value) == 18 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'state_ukf' field must be a set or sequence with length 18 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._state_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def var_ukf(self):
        """Message field 'var_ukf'."""
        return self._var_ukf

    @var_ukf.setter
    def var_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'var_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 17, \
                "The 'var_ukf' numpy.ndarray() must have a size of 17"
            self._var_ukf = value
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
                 len(value) == 17 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'var_ukf' field must be a set or sequence with length 17 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._var_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def vel_normed_ukf(self):
        """Message field 'vel_normed_ukf'."""
        return self._vel_normed_ukf

    @vel_normed_ukf.setter
    def vel_normed_ukf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_normed_ukf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_normed_ukf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_normed_ukf = value

    @builtins.property
    def euler_ukf(self):
        """Message field 'euler_ukf'."""
        return self._euler_ukf

    @euler_ukf.setter
    def euler_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'euler_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'euler_ukf' numpy.ndarray() must have a size of 3"
            self._euler_ukf = value
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
                "The 'euler_ukf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._euler_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def update_exit_ukf(self):
        """Message field 'update_exit_ukf'."""
        return self._update_exit_ukf

    @update_exit_ukf.setter
    def update_exit_ukf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'update_exit_ukf' field must be of type 'bool'"
        self._update_exit_ukf = value

    @builtins.property
    def ant_ecef_ukf(self):
        """Message field 'ant_ecef_ukf'."""
        return self._ant_ecef_ukf

    @ant_ecef_ukf.setter
    def ant_ecef_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_ecef_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_ecef_ukf' numpy.ndarray() must have a size of 3"
            self._ant_ecef_ukf = value
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
                "The 'ant_ecef_ukf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_ecef_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ant_llh_ukf(self):
        """Message field 'ant_llh_ukf'."""
        return self._ant_llh_ukf

    @ant_llh_ukf.setter
    def ant_llh_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_llh_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_llh_ukf' numpy.ndarray() must have a size of 3"
            self._ant_llh_ukf = value
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
                "The 'ant_llh_ukf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_llh_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ant_vel_ukf(self):
        """Message field 'ant_vel_ukf'."""
        return self._ant_vel_ukf

    @ant_vel_ukf.setter
    def ant_vel_ukf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ant_vel_ukf' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'ant_vel_ukf' numpy.ndarray() must have a size of 3"
            self._ant_vel_ukf = value
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
                "The 'ant_vel_ukf' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ant_vel_ukf = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def filter_time(self):
        """Message field 'filter_time'."""
        return self._filter_time

    @filter_time.setter
    def filter_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'filter_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'filter_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._filter_time = value
