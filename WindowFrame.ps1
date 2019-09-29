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
    & $PSScriptRoot\gazebo.ps1 -Setup
}

function Get-VCVarsCmd {
    Get-ChildItem "$PSScriptRoot\WindowFrame\tools\VSSetup" | Unblock-File
    Import-Module "$PSScriptRoot\WindowFrame\tools\VSSetup\VSSetup"
    $vs = Get-VSSetupInstance | Select-VSSetupInstance -Latest

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
    return & $PSScriptRoot\ros2.ps1 -WhatIf
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