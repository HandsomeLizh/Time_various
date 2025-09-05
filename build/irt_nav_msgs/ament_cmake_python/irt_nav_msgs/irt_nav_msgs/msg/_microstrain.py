# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/Microstrain.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Microstrain(type):
    """Metaclass of message 'Microstrain'."""

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
                'irt_nav_msgs.msg.Microstrain')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__microstrain
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__microstrain
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__microstrain
            cls._TYPE_SUPPORT = module.type_support_msg__msg__microstrain
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__microstrain

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


class Microstrain(metaclass=Metaclass_Microstrain):
    """Message class 'Microstrain'."""

    __slots__ = [
        '_header',
        '_sensor_timestamp',
        '_data_ok',
        '_acc_x',
        '_acc_y',
        '_acc_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_mag_x',
        '_mag_y',
        '_mag_z',
        '_amb',
        '_deltatheta_x',
        '_deltatheta_y',
        '_deltatheta_z',
        '_deltavel_x',
        '_deltavel_y',
        '_deltavel_z',
        '_freq_acc',
        '_freq_gyro',
        '_freq_mag',
        '_freq_amb',
        '_freq_d_theta',
        '_freq_d_vel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_timestamp': 'double',
        'data_ok': 'boolean',
        'acc_x': 'double',
        'acc_y': 'double',
        'acc_z': 'double',
        'gyro_x': 'double',
        'gyro_y': 'double',
        'gyro_z': 'double',
        'mag_x': 'double',
        'mag_y': 'double',
        'mag_z': 'double',
        'amb': 'double',
        'deltatheta_x': 'double',
        'deltatheta_y': 'double',
        'deltatheta_z': 'double',
        'deltavel_x': 'double',
        'deltavel_y': 'double',
        'deltavel_z': 'double',
        'freq_acc': 'double',
        'freq_gyro': 'double',
        'freq_mag': 'double',
        'freq_amb': 'double',
        'freq_d_theta': 'double',
        'freq_d_vel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.sensor_timestamp = kwargs.get('sensor_timestamp', float())
        self.data_ok = kwargs.get('data_ok', bool())
        self.acc_x = kwargs.get('acc_x', float())
        self.acc_y = kwargs.get('acc_y', float())
        self.acc_z = kwargs.get('acc_z', float())
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())
        self.mag_x = kwargs.get('mag_x', float())
        self.mag_y = kwargs.get('mag_y', float())
        self.mag_z = kwargs.get('mag_z', float())
        self.amb = kwargs.get('amb', float())
        self.deltatheta_x = kwargs.get('deltatheta_x', float())
        self.deltatheta_y = kwargs.get('deltatheta_y', float())
        self.deltatheta_z = kwargs.get('deltatheta_z', float())
        self.deltavel_x = kwargs.get('deltavel_x', float())
        self.deltavel_y = kwargs.get('deltavel_y', float())
        self.deltavel_z = kwargs.get('deltavel_z', float())
        self.freq_acc = kwargs.get('freq_acc', float())
        self.freq_gyro = kwargs.get('freq_gyro', float())
        self.freq_mag = kwargs.get('freq_mag', float())
        self.freq_amb = kwargs.get('freq_amb', float())
        self.freq_d_theta = kwargs.get('freq_d_theta', float())
        self.freq_d_vel = kwargs.get('freq_d_vel', float())

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
        if self.sensor_timestamp != other.sensor_timestamp:
            return False
        if self.data_ok != other.data_ok:
            return False
        if self.acc_x != other.acc_x:
            return False
        if self.acc_y != other.acc_y:
            return False
        if self.acc_z != other.acc_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.mag_x != other.mag_x:
            return False
        if self.mag_y != other.mag_y:
            return False
        if self.mag_z != other.mag_z:
            return False
        if self.amb != other.amb:
            return False
        if self.deltatheta_x != other.deltatheta_x:
            return False
        if self.deltatheta_y != other.deltatheta_y:
            return False
        if self.deltatheta_z != other.deltatheta_z:
            return False
        if self.deltavel_x != other.deltavel_x:
            return False
        if self.deltavel_y != other.deltavel_y:
            return False
        if self.deltavel_z != other.deltavel_z:
            return False
        if self.freq_acc != other.freq_acc:
            return False
        if self.freq_gyro != other.freq_gyro:
            return False
        if self.freq_mag != other.freq_mag:
            return False
        if self.freq_amb != other.freq_amb:
            return False
        if self.freq_d_theta != other.freq_d_theta:
            return False
        if self.freq_d_vel != other.freq_d_vel:
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
    def sensor_timestamp(self):
        """Message field 'sensor_timestamp'."""
        return self._sensor_timestamp

    @sensor_timestamp.setter
    def sensor_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sensor_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sensor_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sensor_timestamp = value

    @builtins.property
    def data_ok(self):
        """Message field 'data_ok'."""
        return self._data_ok

    @data_ok.setter
    def data_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'data_ok' field must be of type 'bool'"
        self._data_ok = value

    @builtins.property
    def acc_x(self):
        """Message field 'acc_x'."""
        return self._acc_x

    @acc_x.setter
    def acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_x = value

    @builtins.property
    def acc_y(self):
        """Message field 'acc_y'."""
        return self._acc_y

    @acc_y.setter
    def acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_y = value

    @builtins.property
    def acc_z(self):
        """Message field 'acc_z'."""
        return self._acc_z

    @acc_z.setter
    def acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_z = value

    @builtins.property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gyro_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gyro_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gyro_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gyro_z = value

    @builtins.property
    def mag_x(self):
        """Message field 'mag_x'."""
        return self._mag_x

    @mag_x.setter
    def mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mag_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mag_x = value

    @builtins.property
    def mag_y(self):
        """Message field 'mag_y'."""
        return self._mag_y

    @mag_y.setter
    def mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mag_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mag_y = value

    @builtins.property
    def mag_z(self):
        """Message field 'mag_z'."""
        return self._mag_z

    @mag_z.setter
    def mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mag_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mag_z = value

    @builtins.property
    def amb(self):
        """Message field 'amb'."""
        return self._amb

    @amb.setter
    def amb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'amb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'amb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._amb = value

    @builtins.property
    def deltatheta_x(self):
        """Message field 'deltatheta_x'."""
        return self._deltatheta_x

    @deltatheta_x.setter
    def deltatheta_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltatheta_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltatheta_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltatheta_x = value

    @builtins.property
    def deltatheta_y(self):
        """Message field 'deltatheta_y'."""
        return self._deltatheta_y

    @deltatheta_y.setter
    def deltatheta_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltatheta_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltatheta_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltatheta_y = value

    @builtins.property
    def deltatheta_z(self):
        """Message field 'deltatheta_z'."""
        return self._deltatheta_z

    @deltatheta_z.setter
    def deltatheta_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltatheta_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltatheta_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltatheta_z = value

    @builtins.property
    def deltavel_x(self):
        """Message field 'deltavel_x'."""
        return self._deltavel_x

    @deltavel_x.setter
    def deltavel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltavel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltavel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltavel_x = value

    @builtins.property
    def deltavel_y(self):
        """Message field 'deltavel_y'."""
        return self._deltavel_y

    @deltavel_y.setter
    def deltavel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltavel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltavel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltavel_y = value

    @builtins.property
    def deltavel_z(self):
        """Message field 'deltavel_z'."""
        return self._deltavel_z

    @deltavel_z.setter
    def deltavel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deltavel_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deltavel_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deltavel_z = value

    @builtins.property
    def freq_acc(self):
        """Message field 'freq_acc'."""
        return self._freq_acc

    @freq_acc.setter
    def freq_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_acc = value

    @builtins.property
    def freq_gyro(self):
        """Message field 'freq_gyro'."""
        return self._freq_gyro

    @freq_gyro.setter
    def freq_gyro(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_gyro' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_gyro' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_gyro = value

    @builtins.property
    def freq_mag(self):
        """Message field 'freq_mag'."""
        return self._freq_mag

    @freq_mag.setter
    def freq_mag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_mag' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_mag' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_mag = value

    @builtins.property
    def freq_amb(self):
        """Message field 'freq_amb'."""
        return self._freq_amb

    @freq_amb.setter
    def freq_amb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_amb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_amb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_amb = value

    @builtins.property
    def freq_d_theta(self):
        """Message field 'freq_d_theta'."""
        return self._freq_d_theta

    @freq_d_theta.setter
    def freq_d_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_d_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_d_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_d_theta = value

    @builtins.property
    def freq_d_vel(self):
        """Message field 'freq_d_vel'."""
        return self._freq_d_vel

    @freq_d_vel.setter
    def freq_d_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq_d_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_d_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_d_vel = value
