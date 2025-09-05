# generated from rosidl_generator_py/resource/_idl.py.em
# with input from boreas_msgs:msg/SensorPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorPose(type):
    """Metaclass of message 'SensorPose'."""

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
            module = import_type_support('boreas_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'boreas_msgs.msg.SensorPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_pose

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


class SensorPose(metaclass=Metaclass_SensorPose):
    """Message class 'SensorPose'."""

    __slots__ = [
        '_header',
        '_gps_timestamp',
        '_pos_easting',
        '_pos_northing',
        '_pos_altitude',
        '_vel_north',
        '_vel_east',
        '_vel_up',
        '_roll',
        '_pitch',
        '_heading',
        '_ang_vel_x',
        '_ang_vel_y',
        '_ang_vel_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gps_timestamp': 'double',
        'pos_easting': 'double',
        'pos_northing': 'double',
        'pos_altitude': 'double',
        'vel_north': 'double',
        'vel_east': 'double',
        'vel_up': 'double',
        'roll': 'double',
        'pitch': 'double',
        'heading': 'double',
        'ang_vel_x': 'double',
        'ang_vel_y': 'double',
        'ang_vel_z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.gps_timestamp = kwargs.get('gps_timestamp', float())
        self.pos_easting = kwargs.get('pos_easting', float())
        self.pos_northing = kwargs.get('pos_northing', float())
        self.pos_altitude = kwargs.get('pos_altitude', float())
        self.vel_north = kwargs.get('vel_north', float())
        self.vel_east = kwargs.get('vel_east', float())
        self.vel_up = kwargs.get('vel_up', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.heading = kwargs.get('heading', float())
        self.ang_vel_x = kwargs.get('ang_vel_x', float())
        self.ang_vel_y = kwargs.get('ang_vel_y', float())
        self.ang_vel_z = kwargs.get('ang_vel_z', float())

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
        if self.gps_timestamp != other.gps_timestamp:
            return False
        if self.pos_easting != other.pos_easting:
            return False
        if self.pos_northing != other.pos_northing:
            return False
        if self.pos_altitude != other.pos_altitude:
            return False
        if self.vel_north != other.vel_north:
            return False
        if self.vel_east != other.vel_east:
            return False
        if self.vel_up != other.vel_up:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.heading != other.heading:
            return False
        if self.ang_vel_x != other.ang_vel_x:
            return False
        if self.ang_vel_y != other.ang_vel_y:
            return False
        if self.ang_vel_z != other.ang_vel_z:
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
    def gps_timestamp(self):
        """Message field 'gps_timestamp'."""
        return self._gps_timestamp

    @gps_timestamp.setter
    def gps_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_timestamp = value

    @builtins.property
    def pos_easting(self):
        """Message field 'pos_easting'."""
        return self._pos_easting

    @pos_easting.setter
    def pos_easting(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_easting' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_easting' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_easting = value

    @builtins.property
    def pos_northing(self):
        """Message field 'pos_northing'."""
        return self._pos_northing

    @pos_northing.setter
    def pos_northing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_northing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_northing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_northing = value

    @builtins.property
    def pos_altitude(self):
        """Message field 'pos_altitude'."""
        return self._pos_altitude

    @pos_altitude.setter
    def pos_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_altitude = value

    @builtins.property
    def vel_north(self):
        """Message field 'vel_north'."""
        return self._vel_north

    @vel_north.setter
    def vel_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_north' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_north' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_north = value

    @builtins.property
    def vel_east(self):
        """Message field 'vel_east'."""
        return self._vel_east

    @vel_east.setter
    def vel_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_east' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_east' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_east = value

    @builtins.property
    def vel_up(self):
        """Message field 'vel_up'."""
        return self._vel_up

    @vel_up.setter
    def vel_up(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_up' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_up' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_up = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def ang_vel_x(self):
        """Message field 'ang_vel_x'."""
        return self._ang_vel_x

    @ang_vel_x.setter
    def ang_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang_vel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ang_vel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ang_vel_x = value

    @builtins.property
    def ang_vel_y(self):
        """Message field 'ang_vel_y'."""
        return self._ang_vel_y

    @ang_vel_y.setter
    def ang_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang_vel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ang_vel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ang_vel_y = value

    @builtins.property
    def ang_vel_z(self):
        """Message field 'ang_vel_z'."""
        return self._ang_vel_z

    @ang_vel_z.setter
    def ang_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang_vel_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ang_vel_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ang_vel_z = value
