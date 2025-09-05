# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/ResidualSample.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'whitened_error'
# Member 'unwhitened_error'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResidualSample(type):
    """Metaclass of message 'ResidualSample'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GROUND_TRUTH': 0,
        'ESTIMATE': 1,
        'SAMPLED_FROM_GROUND_TRUTH': 2,
        'SAMPLED_FROM_ESTIMATE': 3,
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
                'irt_nav_msgs.msg.ResidualSample')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__residual_sample
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__residual_sample
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__residual_sample
            cls._TYPE_SUPPORT = module.type_support_msg__msg__residual_sample
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__residual_sample

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GROUND_TRUTH': cls.__constants['GROUND_TRUTH'],
            'ESTIMATE': cls.__constants['ESTIMATE'],
            'SAMPLED_FROM_GROUND_TRUTH': cls.__constants['SAMPLED_FROM_GROUND_TRUTH'],
            'SAMPLED_FROM_ESTIMATE': cls.__constants['SAMPLED_FROM_ESTIMATE'],
        }

    @property
    def GROUND_TRUTH(self):
        """Message constant 'GROUND_TRUTH'."""
        return Metaclass_ResidualSample.__constants['GROUND_TRUTH']

    @property
    def ESTIMATE(self):
        """Message constant 'ESTIMATE'."""
        return Metaclass_ResidualSample.__constants['ESTIMATE']

    @property
    def SAMPLED_FROM_GROUND_TRUTH(self):
        """Message constant 'SAMPLED_FROM_GROUND_TRUTH'."""
        return Metaclass_ResidualSample.__constants['SAMPLED_FROM_GROUND_TRUTH']

    @property
    def SAMPLED_FROM_ESTIMATE(self):
        """Message constant 'SAMPLED_FROM_ESTIMATE'."""
        return Metaclass_ResidualSample.__constants['SAMPLED_FROM_ESTIMATE']


class ResidualSample(metaclass=Metaclass_ResidualSample):
    """
    Message class 'ResidualSample'.

    Constants:
      GROUND_TRUTH
      ESTIMATE
      SAMPLED_FROM_GROUND_TRUTH
      SAMPLED_FROM_ESTIMATE
    """

    __slots__ = [
        '_id',
        '_type',
        '_whitened_error',
        '_unwhitened_error',
        '_loss_error',
        '_noise_model_weight',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'type': 'uint8',
        'whitened_error': 'sequence<double>',
        'unwhitened_error': 'sequence<double>',
        'loss_error': 'double',
        'noise_model_weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.whitened_error = array.array('d', kwargs.get('whitened_error', []))
        self.unwhitened_error = array.array('d', kwargs.get('unwhitened_error', []))
        self.loss_error = kwargs.get('loss_error', float())
        self.noise_model_weight = kwargs.get('noise_model_weight', float())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.whitened_error != other.whitened_error:
            return False
        if self.unwhitened_error != other.unwhitened_error:
            return False
        if self.loss_error != other.loss_error:
            return False
        if self.noise_model_weight != other.noise_model_weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def whitened_error(self):
        """Message field 'whitened_error'."""
        return self._whitened_error

    @whitened_error.setter
    def whitened_error(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'whitened_error' array.array() must have the type code of 'd'"
            self._whitened_error = value
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
                "The 'whitened_error' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._whitened_error = array.array('d', value)

    @builtins.property
    def unwhitened_error(self):
        """Message field 'unwhitened_error'."""
        return self._unwhitened_error

    @unwhitened_error.setter
    def unwhitened_error(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'unwhitened_error' array.array() must have the type code of 'd'"
            self._unwhitened_error = value
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
                "The 'unwhitened_error' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._unwhitened_error = array.array('d', value)

    @builtins.property
    def loss_error(self):
        """Message field 'loss_error'."""
        return self._loss_error

    @loss_error.setter
    def loss_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loss_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loss_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loss_error = value

    @builtins.property
    def noise_model_weight(self):
        """Message field 'noise_model_weight'."""
        return self._noise_model_weight

    @noise_model_weight.setter
    def noise_model_weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise_model_weight' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'noise_model_weight' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._noise_model_weight = value
