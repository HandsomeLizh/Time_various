# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/SensorProcessingReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'residual_information'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorProcessingReport(type):
    """Metaclass of message 'SensorProcessingReport'."""

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
                'irt_nav_msgs.msg.SensorProcessingReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_processing_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_processing_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_processing_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_processing_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_processing_report

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


class SensorProcessingReport(metaclass=Metaclass_SensorProcessingReport):
    """Message class 'SensorProcessingReport'."""

    __slots__ = [
        '_header',
        '_sensor_name',
        '_ts_measurement',
        '_num_measurements',
        '_measurement_delay',
        '_ts_start_processing',
        '_duration_processing',
        '_observation_available',
        '_residual_information',
        '_message',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_name': 'string',
        'ts_measurement': 'double',
        'num_measurements': 'uint16',
        'measurement_delay': 'double',
        'ts_start_processing': 'double',
        'duration_processing': 'double',
        'observation_available': 'boolean',
        'residual_information': 'sequence<double>',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sensor_name = kwargs.get('sensor_name', str())
        self.ts_measurement = kwargs.get('ts_measurement', float())
        self.num_measurements = kwargs.get('num_measurements', int())
        self.measurement_delay = kwargs.get('measurement_delay', float())
        self.ts_start_processing = kwargs.get('ts_start_processing', float())
        self.duration_processing = kwargs.get('duration_processing', float())
        self.observation_available = kwargs.get('observation_available', bool())
        self.residual_information = array.array('d', kwargs.get('residual_information', []))
        self.message = kwargs.get('message', str())

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
        if self.sensor_name != other.sensor_name:
            return False
        if self.ts_measurement != other.ts_measurement:
            return False
        if self.num_measurements != other.num_measurements:
            return False
        if self.measurement_delay != other.measurement_delay:
            return False
        if self.ts_start_processing != other.ts_start_processing:
            return False
        if self.duration_processing != other.duration_processing:
            return False
        if self.observation_available != other.observation_available:
            return False
        if self.residual_information != other.residual_information:
            return False
        if self.message != other.message:
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
    def sensor_name(self):
        """Message field 'sensor_name'."""
        return self._sensor_name

    @sensor_name.setter
    def sensor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_name' field must be of type 'str'"
        self._sensor_name = value

    @builtins.property
    def ts_measurement(self):
        """Message field 'ts_measurement'."""
        return self._ts_measurement

    @ts_measurement.setter
    def ts_measurement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_measurement' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_measurement' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_measurement = value

    @builtins.property
    def num_measurements(self):
        """Message field 'num_measurements'."""
        return self._num_measurements

    @num_measurements.setter
    def num_measurements(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_measurements' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_measurements' field must be an unsigned integer in [0, 65535]"
        self._num_measurements = value

    @builtins.property
    def measurement_delay(self):
        """Message field 'measurement_delay'."""
        return self._measurement_delay

    @measurement_delay.setter
    def measurement_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'measurement_delay' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'measurement_delay' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._measurement_delay = value

    @builtins.property
    def ts_start_processing(self):
        """Message field 'ts_start_processing'."""
        return self._ts_start_processing

    @ts_start_processing.setter
    def ts_start_processing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_start_processing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_start_processing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_start_processing = value

    @builtins.property
    def duration_processing(self):
        """Message field 'duration_processing'."""
        return self._duration_processing

    @duration_processing.setter
    def duration_processing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_processing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration_processing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration_processing = value

    @builtins.property
    def observation_available(self):
        """Message field 'observation_available'."""
        return self._observation_available

    @observation_available.setter
    def observation_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'observation_available' field must be of type 'bool'"
        self._observation_available = value

    @builtins.property
    def residual_information(self):
        """Message field 'residual_information'."""
        return self._residual_information

    @residual_information.setter
    def residual_information(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'residual_information' array.array() must have the type code of 'd'"
            self._residual_information = value
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
                "The 'residual_information' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._residual_information = array.array('d', value)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
