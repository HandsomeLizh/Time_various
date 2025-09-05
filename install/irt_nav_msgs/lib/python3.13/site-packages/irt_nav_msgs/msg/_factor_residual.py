# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/FactorResidual.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FactorResidual(type):
    """Metaclass of message 'FactorResidual'."""

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
                'irt_nav_msgs.msg.FactorResidual')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__factor_residual
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__factor_residual
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__factor_residual
            cls._TYPE_SUPPORT = module.type_support_msg__msg__factor_residual
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__factor_residual

            from irt_nav_msgs.msg import ResidualSample
            if ResidualSample.__class__._TYPE_SUPPORT is None:
                ResidualSample.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FactorResidual(metaclass=Metaclass_FactorResidual):
    """Message class 'FactorResidual'."""

    __slots__ = [
        '_factor_name',
        '_current_state_key',
        '_related_keys',
        '_samples',
    ]

    _fields_and_field_types = {
        'factor_name': 'string',
        'current_state_key': 'uint64',
        'related_keys': 'sequence<string>',
        'samples': 'sequence<irt_nav_msgs/ResidualSample>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'ResidualSample')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.factor_name = kwargs.get('factor_name', str())
        self.current_state_key = kwargs.get('current_state_key', int())
        self.related_keys = kwargs.get('related_keys', [])
        self.samples = kwargs.get('samples', [])

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
        if self.factor_name != other.factor_name:
            return False
        if self.current_state_key != other.current_state_key:
            return False
        if self.related_keys != other.related_keys:
            return False
        if self.samples != other.samples:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def factor_name(self):
        """Message field 'factor_name'."""
        return self._factor_name

    @factor_name.setter
    def factor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'factor_name' field must be of type 'str'"
        self._factor_name = value

    @builtins.property
    def current_state_key(self):
        """Message field 'current_state_key'."""
        return self._current_state_key

    @current_state_key.setter
    def current_state_key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_state_key' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'current_state_key' field must be an unsigned integer in [0, 18446744073709551615]"
        self._current_state_key = value

    @builtins.property
    def related_keys(self):
        """Message field 'related_keys'."""
        return self._related_keys

    @related_keys.setter
    def related_keys(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'related_keys' field must be a set or sequence and each value of type 'str'"
        self._related_keys = value

    @builtins.property
    def samples(self):
        """Message field 'samples'."""
        return self._samples

    @samples.setter
    def samples(self, value):
        if __debug__:
            from irt_nav_msgs.msg import ResidualSample
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
                 all(isinstance(v, ResidualSample) for v in value) and
                 True), \
                "The 'samples' field must be a set or sequence and each value of type 'ResidualSample'"
        self._samples = value
