#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ignition-math4::ignition-math4" for configuration "Release"
set_property(TARGET ignition-math4::ignition-math4 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ignition-math4::ignition-math4 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ignition-math4.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ignition-math4.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ignition-math4::ignition-math4 )
list(APPEND _IMPORT_CHECK_FILES_FOR_ignition-math4::ignition-math4 "${_IMPORT_PREFIX}/lib/ignition-math4.lib" "${_IMPORT_PREFIX}/bin/ignition-math4.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
