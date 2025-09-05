# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/Correvit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Correvit(type):
    """Metaclass of message 'Correvit'."""

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
                'irt_nav_msgs.msg.Correvit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__correvit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__correvit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__correvit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__correvit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__correvit

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


class Correvit(metaclass=Metaclass_Correvit):
    """Message class 'Correvit'."""

    __slots__ = [
        '_header',
        '_angle_correvit',
        '_vel_x_correvit',
        '_vel_y_correvit',
        '_vel_correvit',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angle_correvit': 'double',
        'vel_x_correvit': 'double',
        'vel_y_correvit': 'double',
        'vel_correvit': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle_correvit = kwargs.get('angle_correvit', float())
        self.vel_x_correvit = kwargs.get('vel_x_correvit', float())
        self.vel_y_correvit = kwargs.get('vel_y_correvit', float())
        self.vel_correvit = kwargs.get('vel_correvit', float())

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
        if self.angle_correvit != other.angle_correvit:
            return False
        if self.vel_x_correvit != other.vel_x_correvit:
            return False
        if self.vel_y_correvit != other.vel_y_correvit:
            return False
        if self.vel_correvit != other.vel_correvit:
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
    def angle_correvit(self):
        """Message field 'angle_correvit'."""
        return self._angle_correvit

    @angle_correvit.setter
    def angle_correvit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_correvit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_correvit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_correvit = value

    @builtins.property
    def vel_x_correvit(self):
        """Message field 'vel_x_correvit'."""
        return self._vel_x_correvit

    @vel_x_correvit.setter
    def vel_x_correvit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_x_correvit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_x_correvit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_x_correvit = value

    @builtins.property
    def vel_y_correvit(self):
        """Message field 'vel_y_correvit'."""
        return self._vel_y_correvit

    @vel_y_correvit.setter
    def vel_y_correvit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_y_correvit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_y_correvit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_y_correvit = value

    @builtins.property
    def vel_correvit(self):
        """Message field 'vel_correvit'."""
        return self._vel_correvit

    @vel_correvit.setter
    def vel_correvit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_correvit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_correvit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_correvit = value
