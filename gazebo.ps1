param (
    [switch]$Setup,
    [string]$WorldPath = "$PSScriptRoot\WindowFrame\share\gazebo-10\worlds\empty.world",
    [switch]$Verbose = $true
)
 
[Environment]::SetEnvironmentVariable("GAZEBO_GUI_INI_FILE", "$PSScriptRoot\WindowFrame\gazebo_gui.ini", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_IP", "127.0.0.1", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_MASTER_URI", "127.0.0.1:11345", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_MODEL_PATH", "$PSScriptRoot\WindowFrame\share\gazebo-10\models", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_PLUGIN_PATH", "$PSScriptRoot\WindowFrame\lib\gazebo-10\plugins", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_RESOURCE_PATH", "$PSScriptRoot\WindowFrame\share\gazebo-10", "Process")
[Environment]::SetEnvironmentVariable("HOME", "$PSScriptRoot", "Process")
[Environment]::SetEnvironmentVariable("OGRE_RESOURCE_PATH", "$PSScriptRoot\WindowFrame\bin\gazebo", "Process")
[Environment]::SetEnvironmentVariable("PATH", "$PSScriptRoot\WindowFrame\bin;$PSScriptRoot\WindowFrame\lib;$($env:PATH)", "Process")
[Environment]::SetEnvironmentVariable("SDF_PATH", "$PSScriptRoot\WindowFrame\share\sdformat\1.6", "Process")

# Custom variables to avoid ROS2 conflicts
[Environment]::SetEnvironmentVariable("GAZEBO_PATH", "$PSScriptRoot\WindowFrame\bin\gazebo;$($env:GAZEBO_PATH)", "Process")
[Environment]::SetEnvironmentVariable("GAZEBO_QT_PLUGIN_PATH", "$PSScriptRoot\WindowFrame\plugins;$($env:GAZEBO_QT_PLUGIN_PATH)", "Process")

if (-not $Setup) {
    $verboseParam = if ($Verbose) {"--verbose"} else {""}
    [Environment]::SetEnvironmentVariable("PATH", "$($env:GAZEBO_PATH);$($env:PATH)", "Process")
    [Environment]::SetEnvironmentVariable("QT_PLUGIN_PATH", "$($env:GAZEBO_QT_PLUGIN_PATH);$($env:QT_PLUGIN_PATH)", "Process")
    Start-Process "gzserver.exe" -ArgumentList "$WorldPath $verboseParam"
    Start-Process "gzclient.exe" -ArgumentList "$verboseParam"
}
