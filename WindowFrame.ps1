function Elevate-Self {
    # http://www.expta.com/2017/03/how-to-self-elevate-powershell-script.html
    if (-Not ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] 'Administrator')) {
        if ([int](Get-CimInstance -Class Win32_OperatingSystem | Select-Object -ExpandProperty BuildNumber) -ge 6000) {
            $CommandLine = "-NoExit -File `"" + $MyInvocation.ScriptName + "`" " + $MyInvocation.UnboundArguments
            Start-Process -FilePath PowerShell.exe -Verb Runas -ArgumentList $CommandLine
            Exit
        }
    }
}

function Setup-BuildVars {
    [Environment]::SetEnvironmentVariable("CMAKE_PREFIX_PATH", "$PSScriptRoot\WindowFrame", "Process")
    [Environment]::SetEnvironmentVariable("CMAKE_PROGRAM_PATH", "$PSScriptRoot\WindowFrame\tools\protobuf", "Process")
    [Environment]::SetEnvironmentVariable("COLCON_DEFAULTS_FILE", "$PSScriptRoot\WindowFrame\colcon_defaults.txt", "Process")
}

function Setup-Gazebo {
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
}

function Setup-Ros2 {
    [Environment]::SetEnvironmentVariable("PATH", "$PSScriptRoot\WindowFrame\lib;$($env:PATH)", "Process")
}

function Get-VCVarsCmd {
    Get-ChildItem "$PSScriptRoot\WindowFrame\tools\VSSetup" | Unblock-File
    Import-Module "$PSScriptRoot\WindowFrame\tools\VSSetup\VSSetup"
    $vs = Get-VSSetupInstance | Select-VSSetupInstance -Product * -Latest

    if (-not $vs) {
        throw "VS instance not found. Please install Visual Studio or Visual Studio Build Tools."
    }

    $vcvars64Path = "$($vs.InstallationPath)\VC\Auxiliary\Build\vcvars64.bat"

    if (-not (Test-Path $vcvars64Path)) {
        throw "vcvars64.bat not found at `"$vcvars64Path`". Please use Visual Studio Installer to install the 'Desktop development with C++' or 'C++ build tools' workload."
    }

    return "`"$vcvars64Path`""
}

function Get-Ros2Cmd {
    return @(
        "echo Setting up ROS2"
        "`"$PSScriptRoot\WindowFrame\local_setup.bat`""
        "echo."
        "`"$PSScriptRoot\WindowFrame\setup_vars_opencv4.cmd`""
        "echo."
        "cd /d `"$PSScriptRoot`""
        "powershell"
    ) -join " & "
}

function Run-Cmds {
    $cmd = @(
        Get-VCVarsCmd
        "echo."
        Get-Ros2Cmd
    ) -join " & "

    & cmd.exe /c $cmd
}

Elevate-Self
Setup-BuildVars
Setup-Gazebo
Run-Cmds
Stop-Process $PID