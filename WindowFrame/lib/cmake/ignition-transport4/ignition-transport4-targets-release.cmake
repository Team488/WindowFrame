#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ignition-transport4::ignition-transport4" for configuration "Release"
set_property(TARGET ignition-transport4::ignition-transport4 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ignition-transport4::ignition-transport4 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ignition-transport4.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "libzmq"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ignition-transport4.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ignition-transport4::ignition-transport4 )
list(APPEND _IMPORT_CHECK_FILES_FOR_ignition-transport4::ignition-transport4 "${_IMPORT_PREFIX}/lib/ignition-transport4.lib" "${_IMPORT_PREFIX}/bin/ignition-transport4.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
