param (
    [switch]$WhatIf
)

[Environment]::SetEnvironmentVariable("PATH", "$PSScriptRoot\WindowFrame\lib;$($env:PATH)", "Process")

$cmd = @(
    "echo Setting up ROS2... This may take a moment."
    "echo."
    "`"$PSScriptRoot\WindowFrame\local_setup.bat`""
    "echo."
    "`"$PSScriptRoot\WindowFrame\setup_vars_opencv4.cmd`""
    "echo."
    "cd /d `"$PSScriptRoot`""
    "powershell"
) -join " & "

if ($WhatIf) {
    $cmd
} else {
    & cmd.exe /c $cmd
}
