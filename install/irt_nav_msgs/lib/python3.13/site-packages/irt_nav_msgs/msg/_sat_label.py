# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/SatLabel.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'residuals'
# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SatLabel(type):
    """Metaclass of message 'SatLabel'."""

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
                'irt_nav_msgs.msg.SatLabel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sat_label
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sat_label
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sat_label
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sat_label
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sat_label

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from irt_nav_msgs.msg import GaussianComponent
            if GaussianComponent.__class__._TYPE_SUPPORT is None:
                GaussianComponent.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SatLabel(metaclass=Metaclass_SatLabel):
    """Message class 'SatLabel'."""

    __slots__ = [
        '_integrity_flag',
        '_prn',
        '_sat_pos',
        '_sat_vel',
        '_psr',
        '_psr_raw',
        '_psr_satclk_corrected',
        '_psr_dev_measured',
        '_psr_dev_preproc',
        '_dr',
        '_dr_raw',
        '_dr_satclk_corrected',
        '_dr_dev_preproc',
        '_cp',
        '_cp_raw',
        '_cp_satclk_corrected',
        '_cp_dev_measured',
        '_locktime',
        '_psr_correction',
        '_cn0',
        '_cycle_slip',
        '_psr_residual',
        '_dr_residual',
        '_cp_residual',
        '_elevation_angle',
        '_azimuth_angle',
        '_cmc',
        '_drc',
        '_factor',
        '_dim',
        '_residuals',
        '_gaussian',
        '_weight',
        '_data',
        '_label',
        '_label_dev',
        '_msg',
    ]

    _fields_and_field_types = {
        'integrity_flag': 'uint8',
        'prn': 'uint32',
        'sat_pos': 'geometry_msgs/Vector3',
        'sat_vel': 'geometry_msgs/Vector3',
        'psr': 'double',
        'psr_raw': 'double',
        'psr_satclk_corrected': 'double',
        'psr_dev_measured': 'double',
        'psr_dev_preproc': 'double',
        'dr': 'double',
        'dr_raw': 'double',
        'dr_satclk_corrected': 'double',
        'dr_dev_preproc': 'double',
        'cp': 'double',
        'cp_raw': 'double',
        'cp_satclk_corrected': 'double',
        'cp_dev_measured': 'double',
        'locktime': 'double',
        'psr_correction': 'double',
        'cn0': 'double',
        'cycle_slip': 'boolean',
        'psr_residual': 'double',
        'dr_residual': 'double',
        'cp_residual': 'double',
        'elevation_angle': 'double',
        'azimuth_angle': 'double',
        'cmc': 'double',
        'drc': 'double',
        'factor': 'string',
        'dim': 'uint8',
        'residuals': 'sequence<double>',
        'gaussian': 'sequence<irt_nav_msgs/GaussianComponent>',
        'weight': 'double',
        'data': 'sequence<double>',
        'label': 'uint8',
        'label_dev': 'double',
        'msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['irt_nav_msgs', 'msg'], 'GaussianComponent')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.integrity_flag = kwargs.get('integrity_flag', int())
        self.prn = kwargs.get('prn', int())
        from geometry_msgs.msg import Vector3
        self.sat_pos = kwargs.get('sat_pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.sat_vel = kwargs.get('sat_vel', Vector3())
        self.psr = kwargs.get('psr', float())
        self.psr_raw = kwargs.get('psr_raw', float())
        self.psr_satclk_corrected = kwargs.get('psr_satclk_corrected', float())
        self.psr_dev_measured = kwargs.get('psr_dev_measured', float())
        self.psr_dev_preproc = kwargs.get('psr_dev_preproc', float())
        self.dr = kwargs.get('dr', float())
        self.dr_raw = kwargs.get('dr_raw', float())
        self.dr_satclk_corrected = kwargs.get('dr_satclk_corrected', float())
        self.dr_dev_preproc = kwargs.get('dr_dev_preproc', float())
        self.cp = kwargs.get('cp', float())
        self.cp_raw = kwargs.get('cp_raw', float())
        self.cp_satclk_corrected = kwargs.get('cp_satclk_corrected', float())
        self.cp_dev_measured = kwargs.get('cp_dev_measured', float())
        self.locktime = kwargs.get('locktime', float())
        self.psr_correction = kwargs.get('psr_correction', float())
        self.cn0 = kwargs.get('cn0', float())
        self.cycle_slip = kwargs.get('cycle_slip', bool())
        self.psr_residual = kwargs.get('psr_residual', float())
        self.dr_residual = kwargs.get('dr_residual', float())
        self.cp_residual = kwargs.get('cp_residual', float())
        self.elevation_angle = kwargs.get('elevation_angle', float())
        self.azimuth_angle = kwargs.get('azimuth_angle', float())
        self.cmc = kwargs.get('cmc', float())
        self.drc = kwargs.get('drc', float())
        self.factor = kwargs.get('factor', str())
        self.dim = kwargs.get('dim', int())
        self.residuals = array.array('d', kwargs.get('residuals', []))
        self.gaussian = kwargs.get('gaussian', [])
        self.weight = kwargs.get('weight', float())
        self.data = array.array('d', kwargs.get('data', []))
        self.label = kwargs.get('label', int())
        self.label_dev = kwargs.get('label_dev', float())
        self.msg = kwargs.get('msg', str())

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
        if self.integrity_flag != other.integrity_flag:
            return False
        if self.prn != other.prn:
            return False
        if self.sat_pos != other.sat_pos:
            return False
        if self.sat_vel != other.sat_vel:
            return False
        if self.psr != other.psr:
            return False
        if self.psr_raw != other.psr_raw:
            return False
        if self.psr_satclk_corrected != other.psr_satclk_corrected:
            return False
        if self.psr_dev_measured != other.psr_dev_measured:
            return False
        if self.psr_dev_preproc != other.psr_dev_preproc:
            return False
        if self.dr != other.dr:
            return False
        if self.dr_raw != other.dr_raw:
            return False
        if self.dr_satclk_corrected != other.dr_satclk_corrected:
            return False
        if self.dr_dev_preproc != other.dr_dev_preproc:
            return False
        if self.cp != other.cp:
            return False
        if self.cp_raw != other.cp_raw:
            return False
        if self.cp_satclk_corrected != other.cp_satclk_corrected:
            return False
        if self.cp_dev_measured != other.cp_dev_measured:
            return False
        if self.locktime != other.locktime:
            return False
        if self.psr_correction != other.psr_correction:
            return False
        if self.cn0 != other.cn0:
            return False
        if self.cycle_slip != other.cycle_slip:
            return False
        if self.psr_residual != other.psr_residual:
            return False
        if self.dr_residual != other.dr_residual:
            return False
        if self.cp_residual != other.cp_residual:
            return False
        if self.elevation_angle != other.elevation_angle:
            return False
        if self.azimuth_angle != other.azimuth_angle:
            return False
        if self.cmc != other.cmc:
            return False
        if self.drc != other.drc:
            return False
        if self.factor != other.factor:
            return False
        if self.dim != other.dim:
            return False
        if self.residuals != other.residuals:
            return False
        if self.gaussian != other.gaussian:
            return False
        if self.weight != other.weight:
            return False
        if self.data != other.data:
            return False
        if self.label != other.label:
            return False
        if self.label_dev != other.label_dev:
            return False
        if self.msg != other.msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def integrity_flag(self):
        """Message field 'integrity_flag'."""
        return self._integrity_flag

    @integrity_flag.setter
    def integrity_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integrity_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'integrity_flag' field must be an unsigned integer in [0, 255]"
        self._integrity_flag = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'prn' field must be an unsigned integer in [0, 4294967295]"
        self._prn = value

    @builtins.property
    def sat_pos(self):
        """Message field 'sat_pos'."""
        return self._sat_pos

    @sat_pos.setter
    def sat_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sat_pos' field must be a sub message of type 'Vector3'"
        self._sat_pos = value

    @builtins.property
    def sat_vel(self):
        """Message field 'sat_vel'."""
        return self._sat_vel

    @sat_vel.setter
    def sat_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'sat_vel' field must be a sub message of type 'Vector3'"
        self._sat_vel = value

    @builtins.property
    def psr(self):
        """Message field 'psr'."""
        return self._psr

    @psr.setter
    def psr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr = value

    @builtins.property
    def psr_raw(self):
        """Message field 'psr_raw'."""
        return self._psr_raw

    @psr_raw.setter
    def psr_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_raw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_raw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_raw = value

    @builtins.property
    def psr_satclk_corrected(self):
        """Message field 'psr_satclk_corrected'."""
        return self._psr_satclk_corrected

    @psr_satclk_corrected.setter
    def psr_satclk_corrected(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_satclk_corrected' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_satclk_corrected' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_satclk_corrected = value

    @builtins.property
    def psr_dev_measured(self):
        """Message field 'psr_dev_measured'."""
        return self._psr_dev_measured

    @psr_dev_measured.setter
    def psr_dev_measured(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_dev_measured' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_dev_measured' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_dev_measured = value

    @builtins.property
    def psr_dev_preproc(self):
        """Message field 'psr_dev_preproc'."""
        return self._psr_dev_preproc

    @psr_dev_preproc.setter
    def psr_dev_preproc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_dev_preproc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_dev_preproc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_dev_preproc = value

    @builtins.property
    def dr(self):
        """Message field 'dr'."""
        return self._dr

    @dr.setter
    def dr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dr = value

    @builtins.property
    def dr_raw(self):
        """Message field 'dr_raw'."""
        return self._dr_raw

    @dr_raw.setter
    def dr_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr_raw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dr_raw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dr_raw = value

    @builtins.property
    def dr_satclk_corrected(self):
        """Message field 'dr_satclk_corrected'."""
        return self._dr_satclk_corrected

    @dr_satclk_corrected.setter
    def dr_satclk_corrected(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr_satclk_corrected' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dr_satclk_corrected' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dr_satclk_corrected = value

    @builtins.property
    def dr_dev_preproc(self):
        """Message field 'dr_dev_preproc'."""
        return self._dr_dev_preproc

    @dr_dev_preproc.setter
    def dr_dev_preproc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr_dev_preproc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dr_dev_preproc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dr_dev_preproc = value

    @builtins.property
    def cp(self):
        """Message field 'cp'."""
        return self._cp

    @cp.setter
    def cp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cp = value

    @builtins.property
    def cp_raw(self):
        """Message field 'cp_raw'."""
        return self._cp_raw

    @cp_raw.setter
    def cp_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cp_raw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cp_raw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cp_raw = value

    @builtins.property
    def cp_satclk_corrected(self):
        """Message field 'cp_satclk_corrected'."""
        return self._cp_satclk_corrected

    @cp_satclk_corrected.setter
    def cp_satclk_corrected(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cp_satclk_corrected' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cp_satclk_corrected' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cp_satclk_corrected = value

    @builtins.property
    def cp_dev_measured(self):
        """Message field 'cp_dev_measured'."""
        return self._cp_dev_measured

    @cp_dev_measured.setter
    def cp_dev_measured(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cp_dev_measured' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cp_dev_measured' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cp_dev_measured = value

    @builtins.property
    def locktime(self):
        """Message field 'locktime'."""
        return self._locktime

    @locktime.setter
    def locktime(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'locktime' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'locktime' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._locktime = value

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

    @builtins.property
    def cn0(self):
        """Message field 'cn0'."""
        return self._cn0

    @cn0.setter
    def cn0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cn0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cn0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cn0 = value

    @builtins.property
    def cycle_slip(self):
        """Message field 'cycle_slip'."""
        return self._cycle_slip

    @cycle_slip.setter
    def cycle_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cycle_slip' field must be of type 'bool'"
        self._cycle_slip = value

    @builtins.property
    def psr_residual(self):
        """Message field 'psr_residual'."""
        return self._psr_residual

    @psr_residual.setter
    def psr_residual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psr_residual' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr_residual' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr_residual = value

    @builtins.property
    def dr_residual(self):
        """Message field 'dr_residual'."""
        return self._dr_residual

    @dr_residual.setter
    def dr_residual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr_residual' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dr_residual' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dr_residual = value

    @builtins.property
    def cp_residual(self):
        """Message field 'cp_residual'."""
        return self._cp_residual

    @cp_residual.setter
    def cp_residual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cp_residual' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cp_residual' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cp_residual = value

    @builtins.property
    def elevation_angle(self):
        """Message field 'elevation_angle'."""
        return self._elevation_angle

    @elevation_angle.setter
    def elevation_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevation_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elevation_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elevation_angle = value

    @builtins.property
    def azimuth_angle(self):
        """Message field 'azimuth_angle'."""
        return self._azimuth_angle

    @azimuth_angle.setter
    def azimuth_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azimuth_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azimuth_angle = value

    @builtins.property
    def cmc(self):
        """Message field 'cmc'."""
        return self._cmc

    @cmc.setter
    def cmc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cmc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cmc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cmc = value

    @builtins.property
    def drc(self):
        """Message field 'drc'."""
        return self._drc

    @drc.setter
    def drc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'drc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._drc = value

    @builtins.property
    def factor(self):
        """Message field 'factor'."""
        return self._factor

    @factor.setter
    def factor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'factor' field must be of type 'str'"
        self._factor = value

    @builtins.property
    def dim(self):
        """Message field 'dim'."""
        return self._dim

    @dim.setter
    def dim(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dim' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dim' field must be an unsigned integer in [0, 255]"
        self._dim = value

    @builtins.property
    def residuals(self):
        """Message field 'residuals'."""
        return self._residuals

    @residuals.setter
    def residuals(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'residuals' array.array() must have the type code of 'd'"
            self._residuals = value
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
                "The 'residuals' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._residuals = array.array('d', value)

    @builtins.property
    def gaussian(self):
        """Message field 'gaussian'."""
        return self._gaussian

    @gaussian.setter
    def gaussian(self, value):
        if __debug__:
            from irt_nav_msgs.msg import GaussianComponent
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
                 all(isinstance(v, GaussianComponent) for v in value) and
                 True), \
                "The 'gaussian' field must be a set or sequence and each value of type 'GaussianComponent'"
        self._gaussian = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'weight' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._weight = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'data' array.array() must have the type code of 'd'"
            self._data = value
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
                "The 'data' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._data = array.array('d', value)

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'label' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'label' field must be an unsigned integer in [0, 255]"
        self._label = value

    @builtins.property
    def label_dev(self):
        """Message field 'label_dev'."""
        return self._label_dev

    @label_dev.setter
    def label_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'label_dev' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'label_dev' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._label_dev = value

    @builtins.property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value
