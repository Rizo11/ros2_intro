# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_homework1_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED homework1_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(homework1_FOUND FALSE)
  elseif(NOT homework1_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(homework1_FOUND FALSE)
  endif()
  return()
endif()
set(_homework1_CONFIG_INCLUDED TRUE)

# output package information
if(NOT homework1_FIND_QUIETLY)
  message(STATUS "Found homework1: 0.0.0 (${homework1_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'homework1' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${homework1_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(homework1_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${homework1_DIR}/${_extra}")
endforeach()
