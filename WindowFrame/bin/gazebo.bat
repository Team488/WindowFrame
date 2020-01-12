@echo OFF
set PATH=%GAZEBO_PATH%;%PATH%
set QT_PLUGIN_PATH=%GAZEBO_QT_PLUGIN_PATH%;%QT_PLUGIN_PATH%
start "gzserver" gzserver %*
start "gzclient" gzclient %*