set "_BUILDTIME_OSPL_HOME=C:\dev\opensplice\HDE\x86_64.win64\"

:: Give priority to the OpenSplice installation found when the workspace was built, if it's valid.
:: If it's not valid, the current value of the OSPL_HOME environment variable will be used.
:: The one detected at buildtime may refer to an invalid path for users using "fat archive" binaries, for example.
if exist "%_BUILDTIME_OSPL_HOME%\" (
  :: Warn about unused environment variable.
  if "%OSPL_HOME%" NEQ "" (
    if "%OSPL_HOME%" NEQ "%_BUILDTIME_OSPL_HOME%" (
      echo [opensplice_cmake_module] Warning: OSPL_HOME environment variable is set to [[%OSPL_HOME%]]. When the workspace was built, OpenSplice was found at [[%_BUILDTIME_OSPL_HOME%]], which is what will actually be used. Manually modify the environment now if this is not the configuration you want. 1>&2
    )
  )
  set "_OSPL_HOME_TO_USE=%_BUILDTIME_OSPL_HOME%"
) else (
  if "%OSPL_HOME%" == "" (
    echo [opensplice_cmake_module] Warning: The location at which OpenSplice was found when the workspace was built [[%_BUILDTIME_OSPL_HOME%]] does not point to a valid directory, and the OSPL_HOME environment variable has not been set. Support for OpenSplice will not be available. 1>&2
    set "_BUILDTIME_OSPL_HOME="
    goto :eof
  )

  if not exist "%OSPL_HOME%\" (
    echo [opensplice_cmake_module] Warning: Neither the location at which OpenSplice was found when the workspace was built [[%_BUILDTIME_OSPL_HOME%]] nor the OSPL_HOME environment variable [[%OSPL_HOME%]] point to a valid directory. Support for OpenSplice will not be available. 1>&2
    set "_BUILDTIME_OSPL_HOME="
    goto :eof
  )
  set "_OSPL_HOME_TO_USE=%OSPL_HOME%"
)

set "_OSPL_ENV_SETUP_SCRIPT=%_OSPL_HOME_TO_USE%\release.bat"
if not exist "%_OSPL_ENV_SETUP_SCRIPT%" (
  echo [opensplice_cmake_module] Error: The expected location of the OpenSplice environment setup script [[%_OSPL_ENV_SETUP_SCRIPT%]] does not exist. Support for OpenSplice will not be available. 1>&2
  set "_BUILDTIME_OSPL_HOME="
  set "_OSPL_HOME_TO_USE="
  set "_OSPL_ENV_SETUP_SCRIPT="
  goto :eof
)
:: Call the env setup script, piping stdout to nul, since they have echo on.
call "%_OSPL_ENV_SETUP_SCRIPT%" 1> nul

set "OSPL_URI=file://%AMENT_CURRENT_PREFIX%/share/opensplice_cmake_module/config/ros_ospl.xml"
set "OSPL_INFOFILE=<stdout>"
set "OSPL_ERRORFILE=<stderr>"
set OSPL_VERBOSITY=2

:: If ROS_DOMAIN_ID is not set, set it to the default of 0.
:: This is required because rmw_opensplice_cpp cannot work unless it is set.
if "%ROS_DOMAIN_ID%"=="" set ROS_DOMAIN_ID=0

set "OSPL_HOME=%_OSPL_HOME_TO_USE%"

set "_BUILDTIME_OSPL_HOME="
set "_OSPL_HOME_TO_USE="
set "_OSPL_ENV_SETUP_SCRIPT="
