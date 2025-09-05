# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/GaussianMixture.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'residuals'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GaussianMixture(type):
    """Metaclass of message 'GaussianMixture'."""

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
                'irt_nav_msgs.msg.GaussianMixture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gaussian_mixture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gaussian_mixture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gaussian_mixture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gaussian_mixture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gaussian_mixture

            from irt_nav_msgs.msg import GaussianComponent
            if GaussianComponent.__class__._TYPE_SUPPORT is None:
                GaussianComponent.__class__.__import_type_support__()

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


class GaussianMixture(metaclass=Metaclass_GaussianMixture):
    """Message class 'GaussianMixture'."""

    __slots__ = [
        '_header',
        '_tow',
        '_sat',
        '_factor',
        '_environment',
        '_runtime',
        '_dim',
        '_residuals',
        '_gaussian',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tow': 'double',
        'sat': 'uint32',
        'factor': 'string',
        'environment': 'string',
        'runtime': 'double',
        'dim': 'uint8',
        'residuals': 'sequence<double>',
        'gaussian': 'sequence<irt_nav_msgs/GaussianComponent>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GaussianComponent')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tow = kwargs.get('tow', float())
        self.sat = kwargs.get('sat', int())
        self.factor = kwargs.get('factor', str())
        self.environment = kwargs.get('environment', str())
        self.runtime = kwargs.get('runtime', float())
        self.dim = kwargs.get('dim', int())
        self.residuals = array.array('d', kwargs.get('residuals', []))
        self.gaussian = kwargs.get('gaussian', [])

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
        if self.sat != other.sat:
            return False
        if self.factor != other.factor:
            return False
        if self.environment != other.environment:
            return False
        if self.runtime != other.runtime:
            return False
        if self.dim != other.dim:
            return False
        if self.residuals != other.residuals:
            return False
        if self.gaussian != other.gaussian:
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
    def sat(self):
        """Message field 'sat'."""
        return self._sat

    @sat.setter
    def sat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sat' field must be an unsigned integer in [0, 4294967295]"
        self._sat = value

    @builtins.property
    def factor(self):
        """Message field 'factor'."""
        return self._factor

    @factor.setter
    def factor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'factor' field must be of type 'str'"
        self._factor = value

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

    @builtins.property
    def runtime(self):
        """Message field 'runtime'."""
        return self._runtime

    @runtime.setter
    def runtime(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'runtime' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'runtime' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._runtime = value

    @builtins.property
    def dim(self):
        """Message field 'dim'."""
        return self._dim

    @dim.setter
    def dim(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dim' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dim' field must be an unsigned integer in [0, 255]"
        self._dim = value

    @builtins.property
    def residuals(self):
        """Message field 'residuals'."""
        return self._residuals

    @residuals.setter
    def residuals(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'residuals' array.array() must have the type code of 'd'"
            self._residuals = value
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
                "The 'residuals' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._residuals = array.array('d', value)

    @builtins.property
    def gaussian(self):
        """Message field 'gaussian'."""
        return self._gaussian

    @gaussian.setter
    def gaussian(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GaussianComponent
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
                 all(isinstance(v, GaussianComponent) for v in value) and
                 True), \
                "The 'gaussian' field must be a set or sequence and each value of type 'GaussianComponent'"
        self._gaussian = value
