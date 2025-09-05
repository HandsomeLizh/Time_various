# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_TVFGO_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED TVFGO_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(TVFGO_FOUND FALSE)
  elseif(NOT TVFGO_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(TVFGO_FOUND FALSE)
  endif()
  return()
endif()
set(_TVFGO_CONFIG_INCLUDED TRUE)

# output package information
if(NOT TVFGO_FIND_QUIETLY)
  message(STATUS "Found TVFGO: 0.0.0 (${TVFGO_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'TVFGO' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${TVFGO_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(TVFGO_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${TVFGO_DIR}/${_extra}")
endforeach()
