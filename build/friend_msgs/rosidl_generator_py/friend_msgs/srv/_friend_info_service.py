# generated from rosidl_generator_py/resource/_idl.py.em
# with input from friend_msgs:srv/FriendInfoService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FriendInfoService_Request(type):
    """Metaclass of message 'FriendInfoService_Request'."""

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
                'friend_msgs.srv.FriendInfoService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__friend_info_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__friend_info_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__friend_info_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__friend_info_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__friend_info_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FriendInfoService_Request(metaclass=Metaclass_FriendInfoService_Request):
    """Message class 'FriendInfoService_Request'."""

    __slots__ = [
        '_id',
        '_value',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.value = kwargs.get('value', int())

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
        if self.id != other.id:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FriendInfoService_Response(type):
    """Metaclass of message 'FriendInfoService_Response'."""

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
                'friend_msgs.srv.FriendInfoService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__friend_info_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__friend_info_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__friend_info_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__friend_info_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__friend_info_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FriendInfoService_Response(metaclass=Metaclass_FriendInfoService_Response):
    """Message class 'FriendInfoService_Response'."""

    __slots__ = [
        '_heartbeat',
    ]

    _fields_and_field_types = {
        'heartbeat': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heartbeat = kwargs.get('heartbeat', int())

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
        if self.heartbeat != other.heartbeat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def heartbeat(self):
        """Message field 'heartbeat'."""
        return self._heartbeat

    @heartbeat.setter
    def heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heartbeat' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'heartbeat' field must be an integer in [-2147483648, 2147483647]"
        self._heartbeat = value


class Metaclass_FriendInfoService(type):
    """Metaclass of service 'FriendInfoService'."""

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
                'friend_msgs.srv.FriendInfoService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__friend_info_service

            from friend_msgs.srv import _friend_info_service
            if _friend_info_service.Metaclass_FriendInfoService_Request._TYPE_SUPPORT is None:
                _friend_info_service.Metaclass_FriendInfoService_Request.__import_type_support__()
            if _friend_info_service.Metaclass_FriendInfoService_Response._TYPE_SUPPORT is None:
                _friend_info_service.Metaclass_FriendInfoService_Response.__import_type_support__()


class FriendInfoService(metaclass=Metaclass_FriendInfoService):
    from friend_msgs.srv._friend_info_service import FriendInfoService_Request as Request
    from friend_msgs.srv._friend_info_service import FriendInfoService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
