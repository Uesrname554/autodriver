// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_path_interfaces:srv/PathInterfaces.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PATH_INTERFACES__SRV__DETAIL__PATH_INTERFACES__FUNCTIONS_H_
#define ROS2_PATH_INTERFACES__SRV__DETAIL__PATH_INTERFACES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_path_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_path_interfaces/srv/detail/path_interfaces__struct.h"

/// Initialize srv/PathInterfaces message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_path_interfaces__srv__PathInterfaces_Request
 * )) before or use
 * ros2_path_interfaces__srv__PathInterfaces_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__init(ros2_path_interfaces__srv__PathInterfaces_Request * msg);

/// Finalize srv/PathInterfaces message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Request__fini(ros2_path_interfaces__srv__PathInterfaces_Request * msg);

/// Create srv/PathInterfaces message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
ros2_path_interfaces__srv__PathInterfaces_Request *
ros2_path_interfaces__srv__PathInterfaces_Request__create();

/// Destroy srv/PathInterfaces message.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Request__destroy(ros2_path_interfaces__srv__PathInterfaces_Request * msg);

/// Check for srv/PathInterfaces message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__are_equal(const ros2_path_interfaces__srv__PathInterfaces_Request * lhs, const ros2_path_interfaces__srv__PathInterfaces_Request * rhs);

/// Copy a srv/PathInterfaces message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__copy(
  const ros2_path_interfaces__srv__PathInterfaces_Request * input,
  ros2_path_interfaces__srv__PathInterfaces_Request * output);

/// Initialize array of srv/PathInterfaces messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__init(ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * array, size_t size);

/// Finalize array of srv/PathInterfaces messages.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__fini(ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * array);

/// Create array of srv/PathInterfaces messages.
/**
 * It allocates the memory for the array and calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence *
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__create(size_t size);

/// Destroy array of srv/PathInterfaces messages.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__destroy(ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * array);

/// Check for srv/PathInterfaces message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__are_equal(const ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * lhs, const ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * rhs);

/// Copy an array of srv/PathInterfaces messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Request__Sequence__copy(
  const ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * input,
  ros2_path_interfaces__srv__PathInterfaces_Request__Sequence * output);

/// Initialize srv/PathInterfaces message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_path_interfaces__srv__PathInterfaces_Response
 * )) before or use
 * ros2_path_interfaces__srv__PathInterfaces_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__init(ros2_path_interfaces__srv__PathInterfaces_Response * msg);

/// Finalize srv/PathInterfaces message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Response__fini(ros2_path_interfaces__srv__PathInterfaces_Response * msg);

/// Create srv/PathInterfaces message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
ros2_path_interfaces__srv__PathInterfaces_Response *
ros2_path_interfaces__srv__PathInterfaces_Response__create();

/// Destroy srv/PathInterfaces message.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Response__destroy(ros2_path_interfaces__srv__PathInterfaces_Response * msg);

/// Check for srv/PathInterfaces message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__are_equal(const ros2_path_interfaces__srv__PathInterfaces_Response * lhs, const ros2_path_interfaces__srv__PathInterfaces_Response * rhs);

/// Copy a srv/PathInterfaces message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__copy(
  const ros2_path_interfaces__srv__PathInterfaces_Response * input,
  ros2_path_interfaces__srv__PathInterfaces_Response * output);

/// Initialize array of srv/PathInterfaces messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__init(ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * array, size_t size);

/// Finalize array of srv/PathInterfaces messages.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__fini(ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * array);

/// Create array of srv/PathInterfaces messages.
/**
 * It allocates the memory for the array and calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence *
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__create(size_t size);

/// Destroy array of srv/PathInterfaces messages.
/**
 * It calls
 * ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
void
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__destroy(ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * array);

/// Check for srv/PathInterfaces message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__are_equal(const ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * lhs, const ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * rhs);

/// Copy an array of srv/PathInterfaces messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_path_interfaces
bool
ros2_path_interfaces__srv__PathInterfaces_Response__Sequence__copy(
  const ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * input,
  ros2_path_interfaces__srv__PathInterfaces_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_PATH_INTERFACES__SRV__DETAIL__PATH_INTERFACES__FUNCTIONS_H_
