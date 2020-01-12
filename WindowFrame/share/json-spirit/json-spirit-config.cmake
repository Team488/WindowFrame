# Written manually

# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target json_spirit
add_library(json_spirit SHARED IMPORTED)

# Set include properties
set_target_properties(json_spirit PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
)

# Import targets "json_spirit" for configuration "Release"
set_property(TARGET json_spirit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(json_spirit PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/json_spirit.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/json_spirit.dll"
  )

# Set project variables
get_target_property(json_spirit_INCLUDE_DIR json_spirit INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(json_spirit_LIBRARY json_spirit LOCATION)
set(json_spirit_FOUND TRUE)

# Cleanup temporary variables.
set(_IMPORT_PREFIX)