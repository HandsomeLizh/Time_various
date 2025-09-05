# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/GNSSCorrection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSCorrection(type):
    """Metaclass of message 'GNSSCorrection'."""

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
                'irt_nav_msgs.msg.GNSSCorrection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_correction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_correction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_correction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_correction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_correction

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GNSSCorrection(metaclass=Metaclass_GNSSCorrection):
    """Message class 'GNSSCorrection'."""

    __slots__ = [
        '_prn',
        '_psr_correction',
    ]

    _fields_and_field_types = {
        'prn': 'uint16',
        'psr_correction': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prn = kwargs.get('prn', int())
        self.psr_correction = kwargs.get('psr_correction', float())

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
        if self.prn != other.prn:
            return False
        if self.psr_correction != other.psr_correction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prn' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'prn' field must be an unsigned integer in [0, 65535]"
        self._prn = value

    @builtins.property
    def psr_correction(self):
        """Message field 'psr_correction'."""
        return self._psr_correction

    @psr_correction.setter
    def psr_correction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_correction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_correction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_correction = value
