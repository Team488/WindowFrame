$packDir = $PSScriptRoot
$rootDir = "$PSScriptRoot\.."
$vcpkgDir = "$PSScriptRoot\..\vcpkg\installed\x64-windows"
$outDir = "$PSScriptRoot\..\package"

@(
    "gazebo\build\install\Release",
    "ign-cmake\build\install\Release",
    "ign-math\build\install\Release",
    "ign-msgs\build\install\Release",
    "ign-transport\build\install\Release",
    "sdformat\build\install\Release"
) | % {
    robocopy /xo /s "$rootDir\$_" $outDir /xf `
        "FindOGRE.cmake"
}

@(
    "bin",
    "include",
    "lib",
    "plugins",
    "share",
    "tools"
) | % {
    robocopy /xo /s "$vcpkgDir\$_" "$outDir\$_" /xf *.pdb *-debug.cmake
}

# Add extra dependencies
$gazeboCmakePath = "lib\cmake\gazebo\gazebo-config.cmake"
cat "$rootDir\gazebo\build\install\Release\$gazeboCmakePath", "$packDir\gazebo-config-extra.cmake" | sc "$outDir\$gazeboCmakePath"

# Copy boost_python for building vision_opencv
@(
    "bin",
    "lib"
) | % {
    $folder = "$outDir\$_"
    Get-Item "$folder\boost_python3?-*" | % { Copy-Item $_.FullName -Destination "$folder\$($_.Name -replace "python3\d", "python3")" }
}

# Fix paths in cmake configs
$cleanRootDir = (Resolve-Path $rootDir) -replace "\\", "/"
$releasePathRegex = "$cleanRootDir/[^/]+/build/install/Release"
Get-ChildItem -Recurse -File -Path "$outDir\lib\cmake\*.cmake" | % {
    (Get-Content $_) `
        -replace $releasePathRegex, '${CMAKE_CURRENT_LIST_DIR}/../../..' |
        Set-Content $_
}

# Move gz, Ogre and Qt5 files to gazebo directory so as to not conflict with ROS2
robocopy /xo /move "$outDir\bin" "$outDir\bin\gazebo" /if gz* /if Ogre* /if Plugin_* /if RenderSystem_* /if Qt5*
