// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice
#include "friend_msgs/srv/detail/friend_info_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
friend_msgs__srv__FriendInfoService_Request__init(friend_msgs__srv__FriendInfoService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // value
  return true;
}

void
friend_msgs__srv__FriendInfoService_Request__fini(friend_msgs__srv__FriendInfoService_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
  // value
}

bool
friend_msgs__srv__FriendInfoService_Request__are_equal(const friend_msgs__srv__FriendInfoService_Request * lhs, const friend_msgs__srv__FriendInfoService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
friend_msgs__srv__FriendInfoService_Request__copy(
  const friend_msgs__srv__FriendInfoService_Request * input,
  friend_msgs__srv__FriendInfoService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // value
  output->value = input->value;
  return true;
}

friend_msgs__srv__FriendInfoService_Request *
friend_msgs__srv__FriendInfoService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Request * msg = (friend_msgs__srv__FriendInfoService_Request *)allocator.allocate(sizeof(friend_msgs__srv__FriendInfoService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(friend_msgs__srv__FriendInfoService_Request));
  bool success = friend_msgs__srv__FriendInfoService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
friend_msgs__srv__FriendInfoService_Request__destroy(friend_msgs__srv__FriendInfoService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    friend_msgs__srv__FriendInfoService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
friend_msgs__srv__FriendInfoService_Request__Sequence__init(friend_msgs__srv__FriendInfoService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Request * data = NULL;

  if (size) {
    data = (friend_msgs__srv__FriendInfoService_Request *)allocator.zero_allocate(size, sizeof(friend_msgs__srv__FriendInfoService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = friend_msgs__srv__FriendInfoService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        friend_msgs__srv__FriendInfoService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
friend_msgs__srv__FriendInfoService_Request__Sequence__fini(friend_msgs__srv__FriendInfoService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      friend_msgs__srv__FriendInfoService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

friend_msgs__srv__FriendInfoService_Request__Sequence *
friend_msgs__srv__FriendInfoService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Request__Sequence * array = (friend_msgs__srv__FriendInfoService_Request__Sequence *)allocator.allocate(sizeof(friend_msgs__srv__FriendInfoService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = friend_msgs__srv__FriendInfoService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
friend_msgs__srv__FriendInfoService_Request__Sequence__destroy(friend_msgs__srv__FriendInfoService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    friend_msgs__srv__FriendInfoService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
friend_msgs__srv__FriendInfoService_Request__Sequence__are_equal(const friend_msgs__srv__FriendInfoService_Request__Sequence * lhs, const friend_msgs__srv__FriendInfoService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!friend_msgs__srv__FriendInfoService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
friend_msgs__srv__FriendInfoService_Request__Sequence__copy(
  const friend_msgs__srv__FriendInfoService_Request__Sequence * input,
  friend_msgs__srv__FriendInfoService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(friend_msgs__srv__FriendInfoService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    friend_msgs__srv__FriendInfoService_Request * data =
      (friend_msgs__srv__FriendInfoService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!friend_msgs__srv__FriendInfoService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          friend_msgs__srv__FriendInfoService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!friend_msgs__srv__FriendInfoService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
friend_msgs__srv__FriendInfoService_Response__init(friend_msgs__srv__FriendInfoService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // heartbeat
  return true;
}

void
friend_msgs__srv__FriendInfoService_Response__fini(friend_msgs__srv__FriendInfoService_Response * msg)
{
  if (!msg) {
    return;
  }
  // heartbeat
}

bool
friend_msgs__srv__FriendInfoService_Response__are_equal(const friend_msgs__srv__FriendInfoService_Response * lhs, const friend_msgs__srv__FriendInfoService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heartbeat
  if (lhs->heartbeat != rhs->heartbeat) {
    return false;
  }
  return true;
}

bool
friend_msgs__srv__FriendInfoService_Response__copy(
  const friend_msgs__srv__FriendInfoService_Response * input,
  friend_msgs__srv__FriendInfoService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // heartbeat
  output->heartbeat = input->heartbeat;
  return true;
}

friend_msgs__srv__FriendInfoService_Response *
friend_msgs__srv__FriendInfoService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Response * msg = (friend_msgs__srv__FriendInfoService_Response *)allocator.allocate(sizeof(friend_msgs__srv__FriendInfoService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(friend_msgs__srv__FriendInfoService_Response));
  bool success = friend_msgs__srv__FriendInfoService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
friend_msgs__srv__FriendInfoService_Response__destroy(friend_msgs__srv__FriendInfoService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    friend_msgs__srv__FriendInfoService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
friend_msgs__srv__FriendInfoService_Response__Sequence__init(friend_msgs__srv__FriendInfoService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Response * data = NULL;

  if (size) {
    data = (friend_msgs__srv__FriendInfoService_Response *)allocator.zero_allocate(size, sizeof(friend_msgs__srv__FriendInfoService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = friend_msgs__srv__FriendInfoService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        friend_msgs__srv__FriendInfoService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
friend_msgs__srv__FriendInfoService_Response__Sequence__fini(friend_msgs__srv__FriendInfoService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      friend_msgs__srv__FriendInfoService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

friend_msgs__srv__FriendInfoService_Response__Sequence *
friend_msgs__srv__FriendInfoService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__srv__FriendInfoService_Response__Sequence * array = (friend_msgs__srv__FriendInfoService_Response__Sequence *)allocator.allocate(sizeof(friend_msgs__srv__FriendInfoService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = friend_msgs__srv__FriendInfoService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
friend_msgs__srv__FriendInfoService_Response__Sequence__destroy(friend_msgs__srv__FriendInfoService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    friend_msgs__srv__FriendInfoService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
friend_msgs__srv__FriendInfoService_Response__Sequence__are_equal(const friend_msgs__srv__FriendInfoService_Response__Sequence * lhs, const friend_msgs__srv__FriendInfoService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!friend_msgs__srv__FriendInfoService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
friend_msgs__srv__FriendInfoService_Response__Sequence__copy(
  const friend_msgs__srv__FriendInfoService_Response__Sequence * input,
  friend_msgs__srv__FriendInfoService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(friend_msgs__srv__FriendInfoService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    friend_msgs__srv__FriendInfoService_Response * data =
      (friend_msgs__srv__FriendInfoService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!friend_msgs__srv__FriendInfoService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          friend_msgs__srv__FriendInfoService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!friend_msgs__srv__FriendInfoService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
