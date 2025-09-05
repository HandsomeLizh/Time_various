# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/RTCM1005.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCM1005(type):
    """Metaclass of message 'RTCM1005'."""

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
                'irt_nav_msgs.msg.RTCM1005')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcm1005
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcm1005
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcm1005
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcm1005
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcm1005

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


class RTCM1005(metaclass=Metaclass_RTCM1005):
    """Message class 'RTCM1005'."""

    __slots__ = [
        '_header',
        '_msg_number',
        '_ref_station_id',
        '_reserved_itrf_realization_year',
        '_gps_indicator',
        '_glo_indicator',
        '_galileo_indicator',
        '_reference_station_indicator',
        '_antenna_reference_point_ecef_x_m',
        '_antenna_reference_point_ecef_y_m',
        '_antenna_reference_point_ecef_z_m',
        '_signle_receiver_oscillator_indicator',
        '_reserved1',
        '_reserved2',
        '_msg_counter',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'msg_number': 'uint16',
        'ref_station_id': 'uint16',
        'reserved_itrf_realization_year': 'uint8',
        'gps_indicator': 'uint8',
        'glo_indicator': 'uint8',
        'galileo_indicator': 'uint8',
        'reference_station_indicator': 'uint8',
        'antenna_reference_point_ecef_x_m': 'double',
        'antenna_reference_point_ecef_y_m': 'double',
        'antenna_reference_point_ecef_z_m': 'double',
        'signle_receiver_oscillator_indicator': 'uint8',
        'reserved1': 'uint8',
        'reserved2': 'uint8',
        'msg_counter': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.msg_number = kwargs.get('msg_number', int())
        self.ref_station_id = kwargs.get('ref_station_id', int())
        self.reserved_itrf_realization_year = kwargs.get('reserved_itrf_realization_year', int())
        self.gps_indicator = kwargs.get('gps_indicator', int())
        self.glo_indicator = kwargs.get('glo_indicator', int())
        self.galileo_indicator = kwargs.get('galileo_indicator', int())
        self.reference_station_indicator = kwargs.get('reference_station_indicator', int())
        self.antenna_reference_point_ecef_x_m = kwargs.get('antenna_reference_point_ecef_x_m', float())
        self.antenna_reference_point_ecef_y_m = kwargs.get('antenna_reference_point_ecef_y_m', float())
        self.antenna_reference_point_ecef_z_m = kwargs.get('antenna_reference_point_ecef_z_m', float())
        self.signle_receiver_oscillator_indicator = kwargs.get('signle_receiver_oscillator_indicator', int())
        self.reserved1 = kwargs.get('reserved1', int())
        self.reserved2 = kwargs.get('reserved2', int())
        self.msg_counter = kwargs.get('msg_counter', int())

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
        if self.msg_number != other.msg_number:
            return False
        if self.ref_station_id != other.ref_station_id:
            return False
        if self.reserved_itrf_realization_year != other.reserved_itrf_realization_year:
            return False
        if self.gps_indicator != other.gps_indicator:
            return False
        if self.glo_indicator != other.glo_indicator:
            return False
        if self.galileo_indicator != other.galileo_indicator:
            return False
        if self.reference_station_indicator != other.reference_station_indicator:
            return False
        if self.antenna_reference_point_ecef_x_m != other.antenna_reference_point_ecef_x_m:
            return False
        if self.antenna_reference_point_ecef_y_m != other.antenna_reference_point_ecef_y_m:
            return False
        if self.antenna_reference_point_ecef_z_m != other.antenna_reference_point_ecef_z_m:
            return False
        if self.signle_receiver_oscillator_indicator != other.signle_receiver_oscillator_indicator:
            return False
        if self.reserved1 != other.reserved1:
            return False
        if self.reserved2 != other.reserved2:
            return False
        if self.msg_counter != other.msg_counter:
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
    def msg_number(self):
        """Message field 'msg_number'."""
        return self._msg_number

    @msg_number.setter
    def msg_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msg_number' field must be an unsigned integer in [0, 65535]"
        self._msg_number = value

    @builtins.property
    def ref_station_id(self):
        """Message field 'ref_station_id'."""
        return self._ref_station_id

    @ref_station_id.setter
    def ref_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ref_station_id' field must be an unsigned integer in [0, 65535]"
        self._ref_station_id = value

    @builtins.property
    def reserved_itrf_realization_year(self):
        """Message field 'reserved_itrf_realization_year'."""
        return self._reserved_itrf_realization_year

    @reserved_itrf_realization_year.setter
    def reserved_itrf_realization_year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_itrf_realization_year' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved_itrf_realization_year' field must be an unsigned integer in [0, 255]"
        self._reserved_itrf_realization_year = value

    @builtins.property
    def gps_indicator(self):
        """Message field 'gps_indicator'."""
        return self._gps_indicator

    @gps_indicator.setter
    def gps_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_indicator' field must be an unsigned integer in [0, 255]"
        self._gps_indicator = value

    @builtins.property
    def glo_indicator(self):
        """Message field 'glo_indicator'."""
        return self._glo_indicator

    @glo_indicator.setter
    def glo_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'glo_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'glo_indicator' field must be an unsigned integer in [0, 255]"
        self._glo_indicator = value

    @builtins.property
    def galileo_indicator(self):
        """Message field 'galileo_indicator'."""
        return self._galileo_indicator

    @galileo_indicator.setter
    def galileo_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'galileo_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'galileo_indicator' field must be an unsigned integer in [0, 255]"
        self._galileo_indicator = value

    @builtins.property
    def reference_station_indicator(self):
        """Message field 'reference_station_indicator'."""
        return self._reference_station_indicator

    @reference_station_indicator.setter
    def reference_station_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_station_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reference_station_indicator' field must be an unsigned integer in [0, 255]"
        self._reference_station_indicator = value

    @builtins.property
    def antenna_reference_point_ecef_x_m(self):
        """Message field 'antenna_reference_point_ecef_x_m'."""
        return self._antenna_reference_point_ecef_x_m

    @antenna_reference_point_ecef_x_m.setter
    def antenna_reference_point_ecef_x_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'antenna_reference_point_ecef_x_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'antenna_reference_point_ecef_x_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._antenna_reference_point_ecef_x_m = value

    @builtins.property
    def antenna_reference_point_ecef_y_m(self):
        """Message field 'antenna_reference_point_ecef_y_m'."""
        return self._antenna_reference_point_ecef_y_m

    @antenna_reference_point_ecef_y_m.setter
    def antenna_reference_point_ecef_y_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'antenna_reference_point_ecef_y_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'antenna_reference_point_ecef_y_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._antenna_reference_point_ecef_y_m = value

    @builtins.property
    def antenna_reference_point_ecef_z_m(self):
        """Message field 'antenna_reference_point_ecef_z_m'."""
        return self._antenna_reference_point_ecef_z_m

    @antenna_reference_point_ecef_z_m.setter
    def antenna_reference_point_ecef_z_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'antenna_reference_point_ecef_z_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'antenna_reference_point_ecef_z_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._antenna_reference_point_ecef_z_m = value

    @builtins.property
    def signle_receiver_oscillator_indicator(self):
        """Message field 'signle_receiver_oscillator_indicator'."""
        return self._signle_receiver_oscillator_indicator

    @signle_receiver_oscillator_indicator.setter
    def signle_receiver_oscillator_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signle_receiver_oscillator_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signle_receiver_oscillator_indicator' field must be an unsigned integer in [0, 255]"
        self._signle_receiver_oscillator_indicator = value

    @builtins.property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved1' field must be an unsigned integer in [0, 255]"
        self._reserved1 = value

    @builtins.property
    def reserved2(self):
        """Message field 'reserved2'."""
        return self._reserved2

    @reserved2.setter
    def reserved2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved2' field must be an unsigned integer in [0, 255]"
        self._reserved2 = value

    @builtins.property
    def msg_counter(self):
        """Message field 'msg_counter'."""
        return self._msg_counter

    @msg_counter.setter
    def msg_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'msg_counter' field must be an unsigned integer in [0, 4294967295]"
        self._msg_counter = value
