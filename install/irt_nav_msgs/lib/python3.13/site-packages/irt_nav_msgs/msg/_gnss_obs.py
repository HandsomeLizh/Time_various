# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irt_nav_msgs:msg/GNSSObs.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'prn'
# Member 'svid_carrier_used'
# Member 'pseudorange'
# Member 'pseudorange_raw'
# Member 'pseudorange_satclk_corrected'
# Member 'deltarange'
# Member 'deltarange_raw'
# Member 'deltarange_satclk_corrected'
# Member 'pseudorange_var'
# Member 'pseudorange_var_measured'
# Member 'deltarange_var'
# Member 'carrierphase'
# Member 'carrierphase_raw'
# Member 'carrierphase_satclk_corrected'
# Member 'carrierphase_var_measured'
# Member 'elevation_angle'
# Member 'azimuth_angle'
# Member 'locktime'
# Member 'cn0'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSObs(type):
    """Metaclass of message 'GNSSObs'."""

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
                'irt_nav_msgs.msg.GNSSObs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_obs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_obs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_obs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_obs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_obs

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GNSSObs(metaclass=Metaclass_GNSSObs):
    """Message class 'GNSSObs'."""

    __slots__ = [
        '_time_receive',
        '_integrity_flag',
        '_dd_idx_sync_ref',
        '_dd_idx_sync_user',
        '_satelite_pos',
        '_satelite_vec',
        '_base_pos',
        '_prn',
        '_svid_carrier_used',
        '_pseudorange',
        '_pseudorange_raw',
        '_pseudorange_satclk_corrected',
        '_deltarange',
        '_deltarange_raw',
        '_deltarange_satclk_corrected',
        '_pseudorange_var',
        '_pseudorange_var_measured',
        '_deltarange_var',
        '_carrierphase',
        '_carrierphase_raw',
        '_carrierphase_satclk_corrected',
        '_carrierphase_var_measured',
        '_elevation_angle',
        '_azimuth_angle',
        '_locktime',
        '_cn0',
        '_ref_sat_svid_gps',
        '_ref_sat_svid_gal',
        '_gps_corrected',
        '_gal_corrected',
    ]

    _fields_and_field_types = {
        'time_receive': 'double',
        'integrity_flag': 'uint8',
        'dd_idx_sync_ref': 'uint8',
        'dd_idx_sync_user': 'uint8',
        'satelite_pos': 'sequence<geometry_msgs/Vector3>',
        'satelite_vec': 'sequence<geometry_msgs/Vector3>',
        'base_pos': 'geometry_msgs/Vector3',
        'prn': 'sequence<uint16>',
        'svid_carrier_used': 'sequence<uint16>',
        'pseudorange': 'sequence<double>',
        'pseudorange_raw': 'sequence<double>',
        'pseudorange_satclk_corrected': 'sequence<double>',
        'deltarange': 'sequence<double>',
        'deltarange_raw': 'sequence<double>',
        'deltarange_satclk_corrected': 'sequence<double>',
        'pseudorange_var': 'sequence<double>',
        'pseudorange_var_measured': 'sequence<double>',
        'deltarange_var': 'sequence<double>',
        'carrierphase': 'sequence<double>',
        'carrierphase_raw': 'sequence<double>',
        'carrierphase_satclk_corrected': 'sequence<double>',
        'carrierphase_var_measured': 'sequence<double>',
        'elevation_angle': 'sequence<double>',
        'azimuth_angle': 'sequence<double>',
        'locktime': 'sequence<double>',
        'cn0': 'sequence<double>',
        'ref_sat_svid_gps': 'uint8',
        'ref_sat_svid_gal': 'uint8',
        'gps_corrected': 'boolean',
        'gal_corrected': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_receive = kwargs.get('time_receive', float())
        self.integrity_flag = kwargs.get('integrity_flag', int())
        self.dd_idx_sync_ref = kwargs.get('dd_idx_sync_ref', int())
        self.dd_idx_sync_user = kwargs.get('dd_idx_sync_user', int())
        self.satelite_pos = kwargs.get('satelite_pos', [])
        self.satelite_vec = kwargs.get('satelite_vec', [])
        from geometry_msgs.msg import Vector3
        self.base_pos = kwargs.get('base_pos', Vector3())
        self.prn = array.array('H', kwargs.get('prn', []))
        self.svid_carrier_used = array.array('H', kwargs.get('svid_carrier_used', []))
        self.pseudorange = array.array('d', kwargs.get('pseudorange', []))
        self.pseudorange_raw = array.array('d', kwargs.get('pseudorange_raw', []))
        self.pseudorange_satclk_corrected = array.array('d', kwargs.get('pseudorange_satclk_corrected', []))
        self.deltarange = array.array('d', kwargs.get('deltarange', []))
        self.deltarange_raw = array.array('d', kwargs.get('deltarange_raw', []))
        self.deltarange_satclk_corrected = array.array('d', kwargs.get('deltarange_satclk_corrected', []))
        self.pseudorange_var = array.array('d', kwargs.get('pseudorange_var', []))
        self.pseudorange_var_measured = array.array('d', kwargs.get('pseudorange_var_measured', []))
        self.deltarange_var = array.array('d', kwargs.get('deltarange_var', []))
        self.carrierphase = array.array('d', kwargs.get('carrierphase', []))
        self.carrierphase_raw = array.array('d', kwargs.get('carrierphase_raw', []))
        self.carrierphase_satclk_corrected = array.array('d', kwargs.get('carrierphase_satclk_corrected', []))
        self.carrierphase_var_measured = array.array('d', kwargs.get('carrierphase_var_measured', []))
        self.elevation_angle = array.array('d', kwargs.get('elevation_angle', []))
        self.azimuth_angle = array.array('d', kwargs.get('azimuth_angle', []))
        self.locktime = array.array('d', kwargs.get('locktime', []))
        self.cn0 = array.array('d', kwargs.get('cn0', []))
        self.ref_sat_svid_gps = kwargs.get('ref_sat_svid_gps', int())
        self.ref_sat_svid_gal = kwargs.get('ref_sat_svid_gal', int())
        self.gps_corrected = kwargs.get('gps_corrected', bool())
        self.gal_corrected = kwargs.get('gal_corrected', bool())

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
        if self.time_receive != other.time_receive:
            return False
        if self.integrity_flag != other.integrity_flag:
            return False
        if self.dd_idx_sync_ref != other.dd_idx_sync_ref:
            return False
        if self.dd_idx_sync_user != other.dd_idx_sync_user:
            return False
        if self.satelite_pos != other.satelite_pos:
            return False
        if self.satelite_vec != other.satelite_vec:
            return False
        if self.base_pos != other.base_pos:
            return False
        if self.prn != other.prn:
            return False
        if self.svid_carrier_used != other.svid_carrier_used:
            return False
        if self.pseudorange != other.pseudorange:
            return False
        if self.pseudorange_raw != other.pseudorange_raw:
            return False
        if self.pseudorange_satclk_corrected != other.pseudorange_satclk_corrected:
            return False
        if self.deltarange != other.deltarange:
            return False
        if self.deltarange_raw != other.deltarange_raw:
            return False
        if self.deltarange_satclk_corrected != other.deltarange_satclk_corrected:
            return False
        if self.pseudorange_var != other.pseudorange_var:
            return False
        if self.pseudorange_var_measured != other.pseudorange_var_measured:
            return False
        if self.deltarange_var != other.deltarange_var:
            return False
        if self.carrierphase != other.carrierphase:
            return False
        if self.carrierphase_raw != other.carrierphase_raw:
            return False
        if self.carrierphase_satclk_corrected != other.carrierphase_satclk_corrected:
            return False
        if self.carrierphase_var_measured != other.carrierphase_var_measured:
            return False
        if self.elevation_angle != other.elevation_angle:
            return False
        if self.azimuth_angle != other.azimuth_angle:
            return False
        if self.locktime != other.locktime:
            return False
        if self.cn0 != other.cn0:
            return False
        if self.ref_sat_svid_gps != other.ref_sat_svid_gps:
            return False
        if self.ref_sat_svid_gal != other.ref_sat_svid_gal:
            return False
        if self.gps_corrected != other.gps_corrected:
            return False
        if self.gal_corrected != other.gal_corrected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_receive(self):
        """Message field 'time_receive'."""
        return self._time_receive

    @time_receive.setter
    def time_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_receive' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_receive' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_receive = value

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
    def dd_idx_sync_ref(self):
        """Message field 'dd_idx_sync_ref'."""
        return self._dd_idx_sync_ref

    @dd_idx_sync_ref.setter
    def dd_idx_sync_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dd_idx_sync_ref' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dd_idx_sync_ref' field must be an unsigned integer in [0, 255]"
        self._dd_idx_sync_ref = value

    @builtins.property
    def dd_idx_sync_user(self):
        """Message field 'dd_idx_sync_user'."""
        return self._dd_idx_sync_user

    @dd_idx_sync_user.setter
    def dd_idx_sync_user(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dd_idx_sync_user' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dd_idx_sync_user' field must be an unsigned integer in [0, 255]"
        self._dd_idx_sync_user = value

    @builtins.property
    def satelite_pos(self):
        """Message field 'satelite_pos'."""
        return self._satelite_pos

    @satelite_pos.setter
    def satelite_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'satelite_pos' field must be a set or sequence and each value of type 'Vector3'"
        self._satelite_pos = value

    @builtins.property
    def satelite_vec(self):
        """Message field 'satelite_vec'."""
        return self._satelite_vec

    @satelite_vec.setter
    def satelite_vec(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'satelite_vec' field must be a set or sequence and each value of type 'Vector3'"
        self._satelite_vec = value

    @builtins.property
    def base_pos(self):
        """Message field 'base_pos'."""
        return self._base_pos

    @base_pos.setter
    def base_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'base_pos' field must be a sub message of type 'Vector3'"
        self._base_pos = value

    @builtins.property
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'prn' array.array() must have the type code of 'H'"
            self._prn = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'prn' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._prn = array.array('H', value)

    @builtins.property
    def svid_carrier_used(self):
        """Message field 'svid_carrier_used'."""
        return self._svid_carrier_used

    @svid_carrier_used.setter
    def svid_carrier_used(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'svid_carrier_used' array.array() must have the type code of 'H'"
            self._svid_carrier_used = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'svid_carrier_used' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._svid_carrier_used = array.array('H', value)

    @builtins.property
    def pseudorange(self):
        """Message field 'pseudorange'."""
        return self._pseudorange

    @pseudorange.setter
    def pseudorange(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pseudorange' array.array() must have the type code of 'd'"
            self._pseudorange = value
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
                "The 'pseudorange' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange = array.array('d', value)

    @builtins.property
    def pseudorange_raw(self):
        """Message field 'pseudorange_raw'."""
        return self._pseudorange_raw

    @pseudorange_raw.setter
    def pseudorange_raw(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pseudorange_raw' array.array() must have the type code of 'd'"
            self._pseudorange_raw = value
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
                "The 'pseudorange_raw' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange_raw = array.array('d', value)

    @builtins.property
    def pseudorange_satclk_corrected(self):
        """Message field 'pseudorange_satclk_corrected'."""
        return self._pseudorange_satclk_corrected

    @pseudorange_satclk_corrected.setter
    def pseudorange_satclk_corrected(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pseudorange_satclk_corrected' array.array() must have the type code of 'd'"
            self._pseudorange_satclk_corrected = value
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
                "The 'pseudorange_satclk_corrected' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange_satclk_corrected = array.array('d', value)

    @builtins.property
    def deltarange(self):
        """Message field 'deltarange'."""
        return self._deltarange

    @deltarange.setter
    def deltarange(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'deltarange' array.array() must have the type code of 'd'"
            self._deltarange = value
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
                "The 'deltarange' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._deltarange = array.array('d', value)

    @builtins.property
    def deltarange_raw(self):
        """Message field 'deltarange_raw'."""
        return self._deltarange_raw

    @deltarange_raw.setter
    def deltarange_raw(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'deltarange_raw' array.array() must have the type code of 'd'"
            self._deltarange_raw = value
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
                "The 'deltarange_raw' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._deltarange_raw = array.array('d', value)

    @builtins.property
    def deltarange_satclk_corrected(self):
        """Message field 'deltarange_satclk_corrected'."""
        return self._deltarange_satclk_corrected

    @deltarange_satclk_corrected.setter
    def deltarange_satclk_corrected(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'deltarange_satclk_corrected' array.array() must have the type code of 'd'"
            self._deltarange_satclk_corrected = value
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
                "The 'deltarange_satclk_corrected' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._deltarange_satclk_corrected = array.array('d', value)

    @builtins.property
    def pseudorange_var(self):
        """Message field 'pseudorange_var'."""
        return self._pseudorange_var

    @pseudorange_var.setter
    def pseudorange_var(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pseudorange_var' array.array() must have the type code of 'd'"
            self._pseudorange_var = value
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
                "The 'pseudorange_var' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange_var = array.array('d', value)

    @builtins.property
    def pseudorange_var_measured(self):
        """Message field 'pseudorange_var_measured'."""
        return self._pseudorange_var_measured

    @pseudorange_var_measured.setter
    def pseudorange_var_measured(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pseudorange_var_measured' array.array() must have the type code of 'd'"
            self._pseudorange_var_measured = value
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
                "The 'pseudorange_var_measured' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pseudorange_var_measured = array.array('d', value)

    @builtins.property
    def deltarange_var(self):
        """Message field 'deltarange_var'."""
        return self._deltarange_var

    @deltarange_var.setter
    def deltarange_var(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'deltarange_var' array.array() must have the type code of 'd'"
            self._deltarange_var = value
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
                "The 'deltarange_var' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._deltarange_var = array.array('d', value)

    @builtins.property
    def carrierphase(self):
        """Message field 'carrierphase'."""
        return self._carrierphase

    @carrierphase.setter
    def carrierphase(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'carrierphase' array.array() must have the type code of 'd'"
            self._carrierphase = value
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
                "The 'carrierphase' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._carrierphase = array.array('d', value)

    @builtins.property
    def carrierphase_raw(self):
        """Message field 'carrierphase_raw'."""
        return self._carrierphase_raw

    @carrierphase_raw.setter
    def carrierphase_raw(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'carrierphase_raw' array.array() must have the type code of 'd'"
            self._carrierphase_raw = value
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
                "The 'carrierphase_raw' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._carrierphase_raw = array.array('d', value)

    @builtins.property
    def carrierphase_satclk_corrected(self):
        """Message field 'carrierphase_satclk_corrected'."""
        return self._carrierphase_satclk_corrected

    @carrierphase_satclk_corrected.setter
    def carrierphase_satclk_corrected(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'carrierphase_satclk_corrected' array.array() must have the type code of 'd'"
            self._carrierphase_satclk_corrected = value
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
                "The 'carrierphase_satclk_corrected' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._carrierphase_satclk_corrected = array.array('d', value)

    @builtins.property
    def carrierphase_var_measured(self):
        """Message field 'carrierphase_var_measured'."""
        return self._carrierphase_var_measured

    @carrierphase_var_measured.setter
    def carrierphase_var_measured(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'carrierphase_var_measured' array.array() must have the type code of 'd'"
            self._carrierphase_var_measured = value
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
                "The 'carrierphase_var_measured' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._carrierphase_var_measured = array.array('d', value)

    @builtins.property
    def elevation_angle(self):
        """Message field 'elevation_angle'."""
        return self._elevation_angle

    @elevation_angle.setter
    def elevation_angle(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'elevation_angle' array.array() must have the type code of 'd'"
            self._elevation_angle = value
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
                "The 'elevation_angle' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._elevation_angle = array.array('d', value)

    @builtins.property
    def azimuth_angle(self):
        """Message field 'azimuth_angle'."""
        return self._azimuth_angle

    @azimuth_angle.setter
    def azimuth_angle(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'azimuth_angle' array.array() must have the type code of 'd'"
            self._azimuth_angle = value
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
                "The 'azimuth_angle' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._azimuth_angle = array.array('d', value)

    @builtins.property
    def locktime(self):
        """Message field 'locktime'."""
        return self._locktime

    @locktime.setter
    def locktime(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'locktime' array.array() must have the type code of 'd'"
            self._locktime = value
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
                "The 'locktime' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._locktime = array.array('d', value)

    @builtins.property
    def cn0(self):
        """Message field 'cn0'."""
        return self._cn0

    @cn0.setter
    def cn0(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'cn0' array.array() must have the type code of 'd'"
            self._cn0 = value
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
                "The 'cn0' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cn0 = array.array('d', value)

    @builtins.property
    def ref_sat_svid_gps(self):
        """Message field 'ref_sat_svid_gps'."""
        return self._ref_sat_svid_gps

    @ref_sat_svid_gps.setter
    def ref_sat_svid_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_sat_svid_gps' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ref_sat_svid_gps' field must be an unsigned integer in [0, 255]"
        self._ref_sat_svid_gps = value

    @builtins.property
    def ref_sat_svid_gal(self):
        """Message field 'ref_sat_svid_gal'."""
        return self._ref_sat_svid_gal

    @ref_sat_svid_gal.setter
    def ref_sat_svid_gal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_sat_svid_gal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ref_sat_svid_gal' field must be an unsigned integer in [0, 255]"
        self._ref_sat_svid_gal = value

    @builtins.property
    def gps_corrected(self):
        """Message field 'gps_corrected'."""
        return self._gps_corrected

    @gps_corrected.setter
    def gps_corrected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_corrected' field must be of type 'bool'"
        self._gps_corrected = value

    @builtins.property
    def gal_corrected(self):
        """Message field 'gal_corrected'."""
        return self._gal_corrected

    @gal_corrected.setter
    def gal_corrected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_corrected' field must be of type 'bool'"
        self._gal_corrected = value
