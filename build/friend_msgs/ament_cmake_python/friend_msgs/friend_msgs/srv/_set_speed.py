# generated from rosidl_generator_py/resource/_idl.py.em
# with input from friend_msgs:srv/SetSpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSpeed_Request(type):
    """Metaclass of message 'SetSpeed_Request'."""

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
            module = import_type_support('friend_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'friend_msgs.srv.SetSpeed_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_speed__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_speed__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_speed__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_speed__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_speed__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSpeed_Request(metaclass=Metaclass_SetSpeed_Request):
    """Message class 'SetSpeed_Request'."""

    __slots__ = [
        '_desired_speed',
    ]

    _fields_and_field_types = {
        'desired_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.desired_speed = kwargs.get('desired_speed', float())

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
        if self.desired_speed != other.desired_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def desired_speed(self):
        """Message field 'desired_speed'."""
        return self._desired_speed

    @desired_speed.setter
    def desired_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'desired_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._desired_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSpeed_Response(type):
    """Metaclass of message 'SetSpeed_Response'."""

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
            module = import_type_support('friend_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'friend_msgs.srv.SetSpeed_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_speed__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_speed__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_speed__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_speed__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_speed__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSpeed_Response(metaclass=Metaclass_SetSpeed_Response):
    """Message class 'SetSpeed_Response'."""

    __slots__ = [
        '_previous_speed',
        '_new_speed',
        '_stalled',
    ]

    _fields_and_field_types = {
        'previous_speed': 'float',
        'new_speed': 'float',
        'stalled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.previous_speed = kwargs.get('previous_speed', float())
        self.new_speed = kwargs.get('new_speed', float())
        self.stalled = kwargs.get('stalled', bool())

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
        if self.previous_speed != other.previous_speed:
            return False
        if self.new_speed != other.new_speed:
            return False
        if self.stalled != other.stalled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def previous_speed(self):
        """Message field 'previous_speed'."""
        return self._previous_speed

    @previous_speed.setter
    def previous_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'previous_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'previous_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._previous_speed = value

    @builtins.property
    def new_speed(self):
        """Message field 'new_speed'."""
        return self._new_speed

    @new_speed.setter
    def new_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'new_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._new_speed = value

    @builtins.property
    def stalled(self):
        """Message field 'stalled'."""
        return self._stalled

    @stalled.setter
    def stalled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stalled' field must be of type 'bool'"
        self._stalled = value


class Metaclass_SetSpeed(type):
    """Metaclass of service 'SetSpeed'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('friend_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'friend_msgs.srv.SetSpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_speed

            from friend_msgs.srv import _set_speed
            if _set_speed.Metaclass_SetSpeed_Request._TYPE_SUPPORT is None:
                _set_speed.Metaclass_SetSpeed_Request.__import_type_support__()
            if _set_speed.Metaclass_SetSpeed_Response._TYPE_SUPPORT is None:
                _set_speed.Metaclass_SetSpeed_Response.__import_type_support__()


class SetSpeed(metaclass=Metaclass_SetSpeed):
    from friend_msgs.srv._set_speed import SetSpeed_Request as Request
    from friend_msgs.srv._set_speed import SetSpeed_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
