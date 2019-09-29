#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ignition-msgs1::ignition-msgs1" for configuration "Release"
set_property(TARGET ignition-msgs1::ignition-msgs1 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ignition-msgs1::ignition-msgs1 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ignition-msgs1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ignition-msgs1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ignition-msgs1::ignition-msgs1 )
list(APPEND _IMPORT_CHECK_FILES_FOR_ignition-msgs1::ignition-msgs1 "${_IMPORT_PREFIX}/lib/ignition-msgs1.lib" "${_IMPORT_PREFIX}/bin/ignition-msgs1.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
