set (PACKAGE_VERSION "3.3.4")
set (PACKAGE_VERSION_MAJOR 3)
set (PACKAGE_VERSION_MINOR 3)
set (PACKAGE_VERSION_PATCH 4)

if (PACKAGE_VERSION VERSION_LESS PACKAGE_FIND_VERSION)
	set(PACKAGE_VERSION_COMPATIBLE FALSE)
else()
	set(PACKAGE_VERSION_COMPATIBLE TRUE)
endif()
