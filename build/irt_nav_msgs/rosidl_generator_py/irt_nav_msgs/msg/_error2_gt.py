# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/Error2GT.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pose_std_ecef'
# Member 'pose_std_ned'
# Member 'vel_std_ecef'
# Member 'vel_std_ned'
# Member 'ref_llh'
# Member 'ref_llh_std'
# Member 'cbd'
# Member 'cbd_std'
# Member 'ref_cbd'
# Member 'acc_bias'
# Member 'gyro_bias'
# Member 'acc_bias_std'
# Member 'gyro_bias_std'
# Member 'vel_ned'
# Member 'omega_body'
# Member 'omega_body_std'
# Member 'ref_vel'
# Member 'ref_vel_std'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Error2GT(type):
    """Metaclass of message 'Error2GT'."""

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
                'irt_nav_msgs.msg.Error2GT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error2_gt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error2_gt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error2_gt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error2_gt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error2_gt

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


class Error2GT(metaclass=Metaclass_Error2GT):
    """Message class 'Error2GT'."""

    __slots__ = [
        '_header',
        '_ref_tow_before',
        '_ref_tow_after',
        '_tow',
        '_pos_1d_error_ned',
        '_pos_2d_error_ned',
        '_pos_3d_error_ned',
        '_pos_1d_error_body',
        '_pos_2d_error_body',
        '_pos_3d_error_body',
        '_pos_2d_error_geographic',
        '_pos_3d_error_geographic',
        '_pos_2d_error_ecef',
        '_pos_3d_error_ecef',
        '_vel_2d_error',
        '_vel_3d_error',
        '_pose_std_ecef',
        '_pose_std_ned',
        '_vel_std_ecef',
        '_vel_std_ned',
        '_ref_llh',
        '_ref_llh_std',
        '_yaw_error',
        '_yaw',
        '_pitch',
        '_roll',
        '_ref_yaw',
        '_ref_yaw_std',
        '_ref_pitch_roll',
        '_ref_pitch_roll_std',
        '_cbd',
        '_cbd_std',
        '_ref_cbd',
        '_acc_bias',
        '_gyro_bias',
        '_acc_bias_std',
        '_gyro_bias_std',
        '_vel_ned',
        '_omega_body',
        '_omega_body_std',
        '_ref_vel',
        '_ref_vel_std',
        '_ref_mode',
        '_ref_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ref_tow_before': 'double',
        'ref_tow_after': 'double',
        'tow': 'double',
        'pos_1d_error_ned': 'double',
        'pos_2d_error_ned': 'double',
        'pos_3d_error_ned': 'double',
        'pos_1d_error_body': 'double',
        'pos_2d_error_body': 'double',
        'pos_3d_error_body': 'double',
        'pos_2d_error_geographic': 'double',
        'pos_3d_error_geographic': 'double',
        'pos_2d_error_ecef': 'double',
        'pos_3d_error_ecef': 'double',
        'vel_2d_error': 'double',
        'vel_3d_error': 'double',
        'pose_std_ecef': 'sequence<double>',
        'pose_std_ned': 'sequence<double>',
        'vel_std_ecef': 'sequence<double>',
        'vel_std_ned': 'sequence<double>',
        'ref_llh': 'sequence<double>',
        'ref_llh_std': 'sequence<double>',
        'yaw_error': 'double',
        'yaw': 'double',
        'pitch': 'double',
        'roll': 'double',
        'ref_yaw': 'double',
        'ref_yaw_std': 'double',
        'ref_pitch_roll': 'double',
        'ref_pitch_roll_std': 'double',
        'cbd': 'sequence<double>',
        'cbd_std': 'sequence<double>',
        'ref_cbd': 'sequence<double>',
        'acc_bias': 'sequence<double>',
        'gyro_bias': 'sequence<double>',
        'acc_bias_std': 'sequence<double>',
        'gyro_bias_std': 'sequence<double>',
        'vel_ned': 'sequence<double>',
        'omega_body': 'sequence<double>',
        'omega_body_std': 'sequence<double>',
        'ref_vel': 'sequence<double>',
        'ref_vel_std': 'sequence<double>',
        'ref_mode': 'uint8',
        'ref_error': 'uint8',
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ref_tow_before = kwargs.get('ref_tow_before', float())
        self.ref_tow_after = kwargs.get('ref_tow_after', float())
        self.tow = kwargs.get('tow', float())
        self.pos_1d_error_ned = kwargs.get('pos_1d_error_ned', float())
        self.pos_2d_error_ned = kwargs.get('pos_2d_error_ned', float())
        self.pos_3d_error_ned = kwargs.get('pos_3d_error_ned', float())
        self.pos_1d_error_body = kwargs.get('pos_1d_error_body', float())
        self.pos_2d_error_body = kwargs.get('pos_2d_error_body', float())
        self.pos_3d_error_body = kwargs.get('pos_3d_error_body', float())
        self.pos_2d_error_geographic = kwargs.get('pos_2d_error_geographic', float())
        self.pos_3d_error_geographic = kwargs.get('pos_3d_error_geographic', float())
        self.pos_2d_error_ecef = kwargs.get('pos_2d_error_ecef', float())
        self.pos_3d_error_ecef = kwargs.get('pos_3d_error_ecef', float())
        self.vel_2d_error = kwargs.get('vel_2d_error', float())
        self.vel_3d_error = kwargs.get('vel_3d_error', float())
        self.pose_std_ecef = array.array('d', kwargs.get('pose_std_ecef', []))
        self.pose_std_ned = array.array('d', kwargs.get('pose_std_ned', []))
        self.vel_std_ecef = array.array('d', kwargs.get('vel_std_ecef', []))
        self.vel_std_ned = array.array('d', kwargs.get('vel_std_ned', []))
        self.ref_llh = array.array('d', kwargs.get('ref_llh', []))
        self.ref_llh_std = array.array('d', kwargs.get('ref_llh_std', []))
        self.yaw_error = kwargs.get('yaw_error', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.ref_yaw = kwargs.get('ref_yaw', float())
        self.ref_yaw_std = kwargs.get('ref_yaw_std', float())
        self.ref_pitch_roll = kwargs.get('ref_pitch_roll', float())
        self.ref_pitch_roll_std = kwargs.get('ref_pitch_roll_std', float())
        self.cbd = array.array('d', kwargs.get('cbd', []))
        self.cbd_std = array.array('d', kwargs.get('cbd_std', []))
        self.ref_cbd = array.array('d', kwargs.get('ref_cbd', []))
        self.acc_bias = array.array('d', kwargs.get('acc_bias', []))
        self.gyro_bias = array.array('d', kwargs.get('gyro_bias', []))
        self.acc_bias_std = array.array('d', kwargs.get('acc_bias_std', []))
        self.gyro_bias_std = array.array('d', kwargs.get('gyro_bias_std', []))
        self.vel_ned = array.array('d', kwargs.get('vel_ned', []))
        self.omega_body = array.array('d', kwargs.get('omega_body', []))
        self.omega_body_std = array.array('d', kwargs.get('omega_body_std', []))
        self.ref_vel = array.array('d', kwargs.get('ref_vel', []))
        self.ref_vel_std = array.array('d', kwargs.get('ref_vel_std', []))
        self.ref_mode = kwargs.get('ref_mode', int())
        self.ref_error = kwargs.get('ref_error', int())

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
        if self.ref_tow_before != other.ref_tow_before:
            return False
        if self.ref_tow_after != other.ref_tow_after:
            return False
        if self.tow != other.tow:
            return False
        if self.pos_1d_error_ned != other.pos_1d_error_ned:
            return False
        if self.pos_2d_error_ned != other.pos_2d_error_ned:
            return False
        if self.pos_3d_error_ned != other.pos_3d_error_ned:
            return False
        if self.pos_1d_error_body != other.pos_1d_error_body:
            return False
        if self.pos_2d_error_body != other.pos_2d_error_body:
            return False
        if self.pos_3d_error_body != other.pos_3d_error_body:
            return False
        if self.pos_2d_error_geographic != other.pos_2d_error_geographic:
            return False
        if self.pos_3d_error_geographic != other.pos_3d_error_geographic:
            return False
        if self.pos_2d_error_ecef != other.pos_2d_error_ecef:
            return False
        if self.pos_3d_error_ecef != other.pos_3d_error_ecef:
            return False
        if self.vel_2d_error != other.vel_2d_error:
            return False
        if self.vel_3d_error != other.vel_3d_error:
            return False
        if self.pose_std_ecef != other.pose_std_ecef:
            return False
        if self.pose_std_ned != other.pose_std_ned:
            return False
        if self.vel_std_ecef != other.vel_std_ecef:
            return False
        if self.vel_std_ned != other.vel_std_ned:
            return False
        if self.ref_llh != other.ref_llh:
            return False
        if self.ref_llh_std != other.ref_llh_std:
            return False
        if self.yaw_error != other.yaw_error:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.ref_yaw != other.ref_yaw:
            return False
        if self.ref_yaw_std != other.ref_yaw_std:
            return False
        if self.ref_pitch_roll != other.ref_pitch_roll:
            return False
        if self.ref_pitch_roll_std != other.ref_pitch_roll_std:
            return False
        if self.cbd != other.cbd:
            return False
        if self.cbd_std != other.cbd_std:
            return False
        if self.ref_cbd != other.ref_cbd:
            return False
        if self.acc_bias != other.acc_bias:
            return False
        if self.gyro_bias != other.gyro_bias:
            return False
        if self.acc_bias_std != other.acc_bias_std:
            return False
        if self.gyro_bias_std != other.gyro_bias_std:
            return False
        if self.vel_ned != other.vel_ned:
            return False
        if self.omega_body != other.omega_body:
            return False
        if self.omega_body_std != other.omega_body_std:
            return False
        if self.ref_vel != other.ref_vel:
            return False
        if self.ref_vel_std != other.ref_vel_std:
            return False
        if self.ref_mode != other.ref_mode:
            return False
        if self.ref_error != other.ref_error:
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
    def ref_tow_before(self):
        """Message field 'ref_tow_before'."""
        return self._ref_tow_before

    @ref_tow_before.setter
    def ref_tow_before(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_tow_before' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_tow_before' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_tow_before = value

    @builtins.property
    def ref_tow_after(self):
        """Message field 'ref_tow_after'."""
        return self._ref_tow_after

    @ref_tow_after.setter
    def ref_tow_after(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_tow_after' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_tow_after' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_tow_after = value

    @builtins.property
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tow = value

    @builtins.property
    def pos_1d_error_ned(self):
        """Message field 'pos_1d_error_ned'."""
        return self._pos_1d_error_ned

    @pos_1d_error_ned.setter
    def pos_1d_error_ned(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_1d_error_ned' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_1d_error_ned' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_1d_error_ned = value

    @builtins.property
    def pos_2d_error_ned(self):
        """Message field 'pos_2d_error_ned'."""
        return self._pos_2d_error_ned

    @pos_2d_error_ned.setter
    def pos_2d_error_ned(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2d_error_ned' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_2d_error_ned' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_2d_error_ned = value

    @builtins.property
    def pos_3d_error_ned(self):
        """Message field 'pos_3d_error_ned'."""
        return self._pos_3d_error_ned

    @pos_3d_error_ned.setter
    def pos_3d_error_ned(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_3d_error_ned' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_3d_error_ned' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_3d_error_ned = value

    @builtins.property
    def pos_1d_error_body(self):
        """Message field 'pos_1d_error_body'."""
        return self._pos_1d_error_body

    @pos_1d_error_body.setter
    def pos_1d_error_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_1d_error_body' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_1d_error_body' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_1d_error_body = value

    @builtins.property
    def pos_2d_error_body(self):
        """Message field 'pos_2d_error_body'."""
        return self._pos_2d_error_body

    @pos_2d_error_body.setter
    def pos_2d_error_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2d_error_body' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_2d_error_body' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_2d_error_body = value

    @builtins.property
    def pos_3d_error_body(self):
        """Message field 'pos_3d_error_body'."""
        return self._pos_3d_error_body

    @pos_3d_error_body.setter
    def pos_3d_error_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_3d_error_body' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_3d_error_body' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_3d_error_body = value

    @builtins.property
    def pos_2d_error_geographic(self):
        """Message field 'pos_2d_error_geographic'."""
        return self._pos_2d_error_geographic

    @pos_2d_error_geographic.setter
    def pos_2d_error_geographic(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2d_error_geographic' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_2d_error_geographic' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_2d_error_geographic = value

    @builtins.property
    def pos_3d_error_geographic(self):
        """Message field 'pos_3d_error_geographic'."""
        return self._pos_3d_error_geographic

    @pos_3d_error_geographic.setter
    def pos_3d_error_geographic(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_3d_error_geographic' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_3d_error_geographic' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_3d_error_geographic = value

    @builtins.property
    def pos_2d_error_ecef(self):
        """Message field 'pos_2d_error_ecef'."""
        return self._pos_2d_error_ecef

    @pos_2d_error_ecef.setter
    def pos_2d_error_ecef(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2d_error_ecef' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_2d_error_ecef' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_2d_error_ecef = value

    @builtins.property
    def pos_3d_error_ecef(self):
        """Message field 'pos_3d_error_ecef'."""
        return self._pos_3d_error_ecef

    @pos_3d_error_ecef.setter
    def pos_3d_error_ecef(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_3d_error_ecef' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_3d_error_ecef' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_3d_error_ecef = value

    @builtins.property
    def vel_2d_error(self):
        """Message field 'vel_2d_error'."""
        return self._vel_2d_error

    @vel_2d_error.setter
    def vel_2d_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_2d_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_2d_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_2d_error = value

    @builtins.property
    def vel_3d_error(self):
        """Message field 'vel_3d_error'."""
        return self._vel_3d_error

    @vel_3d_error.setter
    def vel_3d_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_3d_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_3d_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_3d_error = value

    @builtins.property
    def pose_std_ecef(self):
        """Message field 'pose_std_ecef'."""
        return self._pose_std_ecef

    @pose_std_ecef.setter
    def pose_std_ecef(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pose_std_ecef' array.array() must have the type code of 'd'"
            self._pose_std_ecef = value
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
                "The 'pose_std_ecef' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pose_std_ecef = array.array('d', value)

    @builtins.property
    def pose_std_ned(self):
        """Message field 'pose_std_ned'."""
        return self._pose_std_ned

    @pose_std_ned.setter
    def pose_std_ned(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pose_std_ned' array.array() must have the type code of 'd'"
            self._pose_std_ned = value
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
                "The 'pose_std_ned' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pose_std_ned = array.array('d', value)

    @builtins.property
    def vel_std_ecef(self):
        """Message field 'vel_std_ecef'."""
        return self._vel_std_ecef

    @vel_std_ecef.setter
    def vel_std_ecef(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'vel_std_ecef' array.array() must have the type code of 'd'"
            self._vel_std_ecef = value
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
                "The 'vel_std_ecef' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vel_std_ecef = array.array('d', value)

    @builtins.property
    def vel_std_ned(self):
        """Message field 'vel_std_ned'."""
        return self._vel_std_ned

    @vel_std_ned.setter
    def vel_std_ned(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'vel_std_ned' array.array() must have the type code of 'd'"
            self._vel_std_ned = value
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
                "The 'vel_std_ned' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vel_std_ned = array.array('d', value)

    @builtins.property
    def ref_llh(self):
        """Message field 'ref_llh'."""
        return self._ref_llh

    @ref_llh.setter
    def ref_llh(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ref_llh' array.array() must have the type code of 'd'"
            self._ref_llh = value
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
                "The 'ref_llh' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ref_llh = array.array('d', value)

    @builtins.property
    def ref_llh_std(self):
        """Message field 'ref_llh_std'."""
        return self._ref_llh_std

    @ref_llh_std.setter
    def ref_llh_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ref_llh_std' array.array() must have the type code of 'd'"
            self._ref_llh_std = value
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
                "The 'ref_llh_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ref_llh_std = array.array('d', value)

    @builtins.property
    def yaw_error(self):
        """Message field 'yaw_error'."""
        return self._yaw_error

    @yaw_error.setter
    def yaw_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_error = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

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
    def ref_yaw(self):
        """Message field 'ref_yaw'."""
        return self._ref_yaw

    @ref_yaw.setter
    def ref_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_yaw = value

    @builtins.property
    def ref_yaw_std(self):
        """Message field 'ref_yaw_std'."""
        return self._ref_yaw_std

    @ref_yaw_std.setter
    def ref_yaw_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_yaw_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_yaw_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_yaw_std = value

    @builtins.property
    def ref_pitch_roll(self):
        """Message field 'ref_pitch_roll'."""
        return self._ref_pitch_roll

    @ref_pitch_roll.setter
    def ref_pitch_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_pitch_roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_pitch_roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_pitch_roll = value

    @builtins.property
    def ref_pitch_roll_std(self):
        """Message field 'ref_pitch_roll_std'."""
        return self._ref_pitch_roll_std

    @ref_pitch_roll_std.setter
    def ref_pitch_roll_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_pitch_roll_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_pitch_roll_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_pitch_roll_std = value

    @builtins.property
    def cbd(self):
        """Message field 'cbd'."""
        return self._cbd

    @cbd.setter
    def cbd(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'cbd' array.array() must have the type code of 'd'"
            self._cbd = value
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
                "The 'cbd' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cbd = array.array('d', value)

    @builtins.property
    def cbd_std(self):
        """Message field 'cbd_std'."""
        return self._cbd_std

    @cbd_std.setter
    def cbd_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'cbd_std' array.array() must have the type code of 'd'"
            self._cbd_std = value
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
                "The 'cbd_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cbd_std = array.array('d', value)

    @builtins.property
    def ref_cbd(self):
        """Message field 'ref_cbd'."""
        return self._ref_cbd

    @ref_cbd.setter
    def ref_cbd(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ref_cbd' array.array() must have the type code of 'd'"
            self._ref_cbd = value
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
                "The 'ref_cbd' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ref_cbd = array.array('d', value)

    @builtins.property
    def acc_bias(self):
        """Message field 'acc_bias'."""
        return self._acc_bias

    @acc_bias.setter
    def acc_bias(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acc_bias' array.array() must have the type code of 'd'"
            self._acc_bias = value
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
                "The 'acc_bias' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acc_bias = array.array('d', value)

    @builtins.property
    def gyro_bias(self):
        """Message field 'gyro_bias'."""
        return self._gyro_bias

    @gyro_bias.setter
    def gyro_bias(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'gyro_bias' array.array() must have the type code of 'd'"
            self._gyro_bias = value
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
                "The 'gyro_bias' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._gyro_bias = array.array('d', value)

    @builtins.property
    def acc_bias_std(self):
        """Message field 'acc_bias_std'."""
        return self._acc_bias_std

    @acc_bias_std.setter
    def acc_bias_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acc_bias_std' array.array() must have the type code of 'd'"
            self._acc_bias_std = value
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
                "The 'acc_bias_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acc_bias_std = array.array('d', value)

    @builtins.property
    def gyro_bias_std(self):
        """Message field 'gyro_bias_std'."""
        return self._gyro_bias_std

    @gyro_bias_std.setter
    def gyro_bias_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'gyro_bias_std' array.array() must have the type code of 'd'"
            self._gyro_bias_std = value
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
                "The 'gyro_bias_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._gyro_bias_std = array.array('d', value)

    @builtins.property
    def vel_ned(self):
        """Message field 'vel_ned'."""
        return self._vel_ned

    @vel_ned.setter
    def vel_ned(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'vel_ned' array.array() must have the type code of 'd'"
            self._vel_ned = value
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
                "The 'vel_ned' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vel_ned = array.array('d', value)

    @builtins.property
    def omega_body(self):
        """Message field 'omega_body'."""
        return self._omega_body

    @omega_body.setter
    def omega_body(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'omega_body' array.array() must have the type code of 'd'"
            self._omega_body = value
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
                "The 'omega_body' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._omega_body = array.array('d', value)

    @builtins.property
    def omega_body_std(self):
        """Message field 'omega_body_std'."""
        return self._omega_body_std

    @omega_body_std.setter
    def omega_body_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'omega_body_std' array.array() must have the type code of 'd'"
            self._omega_body_std = value
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
                "The 'omega_body_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._omega_body_std = array.array('d', value)

    @builtins.property
    def ref_vel(self):
        """Message field 'ref_vel'."""
        return self._ref_vel

    @ref_vel.setter
    def ref_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ref_vel' array.array() must have the type code of 'd'"
            self._ref_vel = value
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
                "The 'ref_vel' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ref_vel = array.array('d', value)

    @builtins.property
    def ref_vel_std(self):
        """Message field 'ref_vel_std'."""
        return self._ref_vel_std

    @ref_vel_std.setter
    def ref_vel_std(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ref_vel_std' array.array() must have the type code of 'd'"
            self._ref_vel_std = value
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
                "The 'ref_vel_std' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ref_vel_std = array.array('d', value)

    @builtins.property
    def ref_mode(self):
        """Message field 'ref_mode'."""
        return self._ref_mode

    @ref_mode.setter
    def ref_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ref_mode' field must be an unsigned integer in [0, 255]"
        self._ref_mode = value

    @builtins.property
    def ref_error(self):
        """Message field 'ref_error'."""
        return self._ref_error

    @ref_error.setter
    def ref_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ref_error' field must be an unsigned integer in [0, 255]"
        self._ref_error = value
