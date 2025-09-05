# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/DumperOdom.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DumperOdom(type):
    """Metaclass of message 'DumperOdom'."""

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
                'irt_nav_msgs.msg.DumperOdom')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dumper_odom
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dumper_odom
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dumper_odom
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dumper_odom
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dumper_odom

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


class DumperOdom(metaclass=Metaclass_DumperOdom):
    """Message class 'DumperOdom'."""

    __slots__ = [
        '_header',
        '_timestamp',
        '_wheelspeed_count_fl',
        '_wheelspeed_count_fr',
        '_wheelspeed_count_rl',
        '_wheelspeed_count_rr',
        '_bin_position',
        '_bin_tilt',
        '_boost',
        '_brake',
        '_direction_value',
        '_engine_speed',
        '_fuel',
        '_handbreak',
        '_horn',
        '_steering_angle',
        '_steering_rate',
        '_steering_switch',
        '_throttle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'timestamp': 'double',
        'wheelspeed_count_fl': 'double',
        'wheelspeed_count_fr': 'double',
        'wheelspeed_count_rl': 'double',
        'wheelspeed_count_rr': 'double',
        'bin_position': 'double',
        'bin_tilt': 'double',
        'boost': 'double',
        'brake': 'double',
        'direction_value': 'double',
        'engine_speed': 'double',
        'fuel': 'double',
        'handbreak': 'double',
        'horn': 'double',
        'steering_angle': 'double',
        'steering_rate': 'double',
        'steering_switch': 'double',
        'throttle': 'double',
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
        self.timestamp = kwargs.get('timestamp', float())
        self.wheelspeed_count_fl = kwargs.get('wheelspeed_count_fl', float())
        self.wheelspeed_count_fr = kwargs.get('wheelspeed_count_fr', float())
        self.wheelspeed_count_rl = kwargs.get('wheelspeed_count_rl', float())
        self.wheelspeed_count_rr = kwargs.get('wheelspeed_count_rr', float())
        self.bin_position = kwargs.get('bin_position', float())
        self.bin_tilt = kwargs.get('bin_tilt', float())
        self.boost = kwargs.get('boost', float())
        self.brake = kwargs.get('brake', float())
        self.direction_value = kwargs.get('direction_value', float())
        self.engine_speed = kwargs.get('engine_speed', float())
        self.fuel = kwargs.get('fuel', float())
        self.handbreak = kwargs.get('handbreak', float())
        self.horn = kwargs.get('horn', float())
        self.steering_angle = kwargs.get('steering_angle', float())
        self.steering_rate = kwargs.get('steering_rate', float())
        self.steering_switch = kwargs.get('steering_switch', float())
        self.throttle = kwargs.get('throttle', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.wheelspeed_count_fl != other.wheelspeed_count_fl:
            return False
        if self.wheelspeed_count_fr != other.wheelspeed_count_fr:
            return False
        if self.wheelspeed_count_rl != other.wheelspeed_count_rl:
            return False
        if self.wheelspeed_count_rr != other.wheelspeed_count_rr:
            return False
        if self.bin_position != other.bin_position:
            return False
        if self.bin_tilt != other.bin_tilt:
            return False
        if self.boost != other.boost:
            return False
        if self.brake != other.brake:
            return False
        if self.direction_value != other.direction_value:
            return False
        if self.engine_speed != other.engine_speed:
            return False
        if self.fuel != other.fuel:
            return False
        if self.handbreak != other.handbreak:
            return False
        if self.horn != other.horn:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        if self.steering_rate != other.steering_rate:
            return False
        if self.steering_switch != other.steering_switch:
            return False
        if self.throttle != other.throttle:
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
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def wheelspeed_count_fl(self):
        """Message field 'wheelspeed_count_fl'."""
        return self._wheelspeed_count_fl

    @wheelspeed_count_fl.setter
    def wheelspeed_count_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelspeed_count_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelspeed_count_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelspeed_count_fl = value

    @builtins.property
    def wheelspeed_count_fr(self):
        """Message field 'wheelspeed_count_fr'."""
        return self._wheelspeed_count_fr

    @wheelspeed_count_fr.setter
    def wheelspeed_count_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelspeed_count_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelspeed_count_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelspeed_count_fr = value

    @builtins.property
    def wheelspeed_count_rl(self):
        """Message field 'wheelspeed_count_rl'."""
        return self._wheelspeed_count_rl

    @wheelspeed_count_rl.setter
    def wheelspeed_count_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelspeed_count_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelspeed_count_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelspeed_count_rl = value

    @builtins.property
    def wheelspeed_count_rr(self):
        """Message field 'wheelspeed_count_rr'."""
        return self._wheelspeed_count_rr

    @wheelspeed_count_rr.setter
    def wheelspeed_count_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelspeed_count_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelspeed_count_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelspeed_count_rr = value

    @builtins.property
    def bin_position(self):
        """Message field 'bin_position'."""
        return self._bin_position

    @bin_position.setter
    def bin_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bin_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bin_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bin_position = value

    @builtins.property
    def bin_tilt(self):
        """Message field 'bin_tilt'."""
        return self._bin_tilt

    @bin_tilt.setter
    def bin_tilt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bin_tilt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bin_tilt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bin_tilt = value

    @builtins.property
    def boost(self):
        """Message field 'boost'."""
        return self._boost

    @boost.setter
    def boost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'boost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._boost = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake = value

    @builtins.property
    def direction_value(self):
        """Message field 'direction_value'."""
        return self._direction_value

    @direction_value.setter
    def direction_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'direction_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'direction_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._direction_value = value

    @builtins.property
    def engine_speed(self):
        """Message field 'engine_speed'."""
        return self._engine_speed

    @engine_speed.setter
    def engine_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_speed = value

    @builtins.property
    def fuel(self):
        """Message field 'fuel'."""
        return self._fuel

    @fuel.setter
    def fuel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fuel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fuel = value

    @builtins.property
    def handbreak(self):
        """Message field 'handbreak'."""
        return self._handbreak

    @handbreak.setter
    def handbreak(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'handbreak' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'handbreak' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._handbreak = value

    @builtins.property
    def horn(self):
        """Message field 'horn'."""
        return self._horn

    @horn.setter
    def horn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horn' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horn' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horn = value

    @builtins.property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle = value

    @builtins.property
    def steering_rate(self):
        """Message field 'steering_rate'."""
        return self._steering_rate

    @steering_rate.setter
    def steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_rate = value

    @builtins.property
    def steering_switch(self):
        """Message field 'steering_switch'."""
        return self._steering_switch

    @steering_switch.setter
    def steering_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_switch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_switch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_switch = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle = value
