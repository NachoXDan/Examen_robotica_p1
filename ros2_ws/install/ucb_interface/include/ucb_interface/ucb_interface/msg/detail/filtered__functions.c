// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ucb_interface:msg/Filtered.idl
// generated code does not contain a copyright notice
#include "ucb_interface/msg/detail/filtered__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ucb_interface__msg__Filtered__init(ucb_interface__msg__Filtered * msg)
{
  if (!msg) {
    return false;
  }
  // prom
  return true;
}

void
ucb_interface__msg__Filtered__fini(ucb_interface__msg__Filtered * msg)
{
  if (!msg) {
    return;
  }
  // prom
}

bool
ucb_interface__msg__Filtered__are_equal(const ucb_interface__msg__Filtered * lhs, const ucb_interface__msg__Filtered * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prom
  if (lhs->prom != rhs->prom) {
    return false;
  }
  return true;
}

bool
ucb_interface__msg__Filtered__copy(
  const ucb_interface__msg__Filtered * input,
  ucb_interface__msg__Filtered * output)
{
  if (!input || !output) {
    return false;
  }
  // prom
  output->prom = input->prom;
  return true;
}

ucb_interface__msg__Filtered *
ucb_interface__msg__Filtered__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Filtered * msg = (ucb_interface__msg__Filtered *)allocator.allocate(sizeof(ucb_interface__msg__Filtered), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interface__msg__Filtered));
  bool success = ucb_interface__msg__Filtered__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interface__msg__Filtered__destroy(ucb_interface__msg__Filtered * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interface__msg__Filtered__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interface__msg__Filtered__Sequence__init(ucb_interface__msg__Filtered__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Filtered * data = NULL;

  if (size) {
    data = (ucb_interface__msg__Filtered *)allocator.zero_allocate(size, sizeof(ucb_interface__msg__Filtered), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interface__msg__Filtered__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interface__msg__Filtered__fini(&data[i - 1]);
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
ucb_interface__msg__Filtered__Sequence__fini(ucb_interface__msg__Filtered__Sequence * array)
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
      ucb_interface__msg__Filtered__fini(&array->data[i]);
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

ucb_interface__msg__Filtered__Sequence *
ucb_interface__msg__Filtered__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Filtered__Sequence * array = (ucb_interface__msg__Filtered__Sequence *)allocator.allocate(sizeof(ucb_interface__msg__Filtered__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interface__msg__Filtered__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interface__msg__Filtered__Sequence__destroy(ucb_interface__msg__Filtered__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interface__msg__Filtered__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interface__msg__Filtered__Sequence__are_equal(const ucb_interface__msg__Filtered__Sequence * lhs, const ucb_interface__msg__Filtered__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interface__msg__Filtered__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interface__msg__Filtered__Sequence__copy(
  const ucb_interface__msg__Filtered__Sequence * input,
  ucb_interface__msg__Filtered__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interface__msg__Filtered);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interface__msg__Filtered * data =
      (ucb_interface__msg__Filtered *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interface__msg__Filtered__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interface__msg__Filtered__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interface__msg__Filtered__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
