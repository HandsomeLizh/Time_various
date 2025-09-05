# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/Residuals.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Residuals(type):
    """Metaclass of message 'Residuals'."""

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
                'irt_nav_msgs.msg.Residuals')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__residuals
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__residuals
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__residuals
            cls._TYPE_SUPPORT = module.type_support_msg__msg__residuals
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__residuals

            from irt_nav_msgs.msg import Residual
            if Residual.__class__._TYPE_SUPPORT is None:
                Residual.__class__.__import_type_support__()

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


class Residuals(metaclass=Metaclass_Residuals):
    """Message class 'Residuals'."""

    __slots__ = [
        '_header',
        '_residuals_ant_main',
        '_residuals_ant_aux',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'residuals_ant_main': 'sequence<irt_nav_msgs/Residual>',
        'residuals_ant_aux': 'sequence<irt_nav_msgs/Residual>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'Residual')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'Residual')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.residuals_ant_main = kwargs.get('residuals_ant_main', [])
        self.residuals_ant_aux = kwargs.get('residuals_ant_aux', [])

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
        if self.residuals_ant_main != other.residuals_ant_main:
            return False
        if self.residuals_ant_aux != other.residuals_ant_aux:
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
    def residuals_ant_main(self):
        """Message field 'residuals_ant_main'."""
        return self._residuals_ant_main

    @residuals_ant_main.setter
    def residuals_ant_main(self, value):
        if __debug__:
            from irt_nav_msgs.msg import Residual
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
                 all(isinstance(v, Residual) for v in value) and
                 True), \
                "The 'residuals_ant_main' field must be a set or sequence and each value of type 'Residual'"
        self._residuals_ant_main = value

    @builtins.property
    def residuals_ant_aux(self):
        """Message field 'residuals_ant_aux'."""
        return self._residuals_ant_aux

    @residuals_ant_aux.setter
    def residuals_ant_aux(self, value):
        if __debug__:
            from irt_nav_msgs.msg import Residual
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
                 all(isinstance(v, Residual) for v in value) and
                 True), \
                "The 'residuals_ant_aux' field must be a set or sequence and each value of type 'Residual'"
        self._residuals_ant_aux = value
