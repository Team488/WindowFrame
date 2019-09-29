find_package(assimp QUIET)

if(NOT assimp_FOUND OR "${assimp_VERSION}" VERSION_LESS 4.1.0)
  # add the local Modules directory to the modules path
  set(assimp_DIR "${rviz_assimp_vendor_DIR}/../../../opt/rviz_assimp_vendor/lib/cmake/assimp-4.1")
  message(STATUS "Setting assimp_DIR to: '${assimp_DIR}'")
endif()

find_package(assimp REQUIRED QUIET)

# workaround bug in Assimp 4.1.0 https://github.com/assimp/assimp/issues/1914
# Affecting Ubuntu package: libassimp-dev 4.1.0~dfsg-3, Brew: assimp 4.1.0
string(REPLACE "/lib/lib/" "/lib/" ASSIMP_LIBRARY_DIRS "${ASSIMP_LIBRARY_DIRS}")
string(REGEX REPLACE "/lib/include$" "/include" ASSIMP_INCLUDE_DIRS "${ASSIMP_INCLUDE_DIRS}")

set(rviz_assimp_vendor_LIBRARIES)
foreach(library IN LISTS ASSIMP_LIBRARIES)
  message(STATUS "library: ${library}")
  if(IS_ABSOLUTE "${library}")
    list(APPEND rviz_assimp_vendor_LIBRARIES "${library}")
  else()
    find_library(library_abs ${library} PATHS "${ASSIMP_LIBRARY_DIRS}" NO_DEFAULT_PATH)
    list(APPEND rviz_assimp_vendor_LIBRARIES "${library_abs}")
  endif()
endforeach()
set(rviz_assimp_vendor_LIBRARY_DIRS ${ASSIMP_LIBRARY_DIRS})
set(rviz_assimp_vendor_INCLUDE_DIRS ${ASSIMP_INCLUDE_DIRS})
