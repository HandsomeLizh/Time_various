# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tvfgo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tvfgo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tvfgo_FOUND FALSE)
  elseif(NOT tvfgo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tvfgo_FOUND FALSE)
  endif()
  return()
endif()
set(_tvfgo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tvfgo_FIND_QUIETLY)
  message(STATUS "Found tvfgo: 0.0.0 (${tvfgo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tvfgo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tvfgo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tvfgo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tvfgo_DIR}/${_extra}")
endforeach()
