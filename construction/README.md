# Constructing WindowFrame

These steps should stay up to date with detailed information on how to create the WindowFrame package and the source of each file.
In each step, if there are file conflicts when moving files, always keep pre-existing files.

1. Start with static files
    1. `WindowFrame/colcon_defaults.txt`
    2. `WindowFrame/gazebo_gui.ini`
    3. `WindowFrame/bin/gazebo.bat`
    4. `WindowFrame/bin/gazebo/plugins.cfg`
    5. `WindowFrame/share/json-spirit/json-spirit-config.cmake`
2. Download and merge ROS2
    1. Download the latest windows-release-amd64 version of ROS2 Eloquent from https://github.com/ros2/ros2/releases
    2. Delete `connext_cmake_module` and `opensplice_cmake_module` from the `ros2-windows\share\colcon-core\packages` folder
    3. Move the contents of the `ros2-windows` folder into the `WindowFrame` folder
3. Build, pack, and merge Gazebo
    1. Follow the "Building Gazebo" instructions below
    2. Move the contents of the `gazebo\package` folder into the `WindowFrame` folder
4. Download and merge OpenCV
    1. Install the latest Windows version of OpenCV from https://opencv.org/releases/
    2. Delete the `opencv\x64\vc14` folder to save space, since no one should use VS older than 2017
    3. Delete all `.pdb` files from the `opencv\x64\vc15\bin` folder to save space, since they are rarely used
    4. Edit `opencv\build\setup_vars_opencv4.cmd` and change "vc14" to "vc15"
    5. Rename `opencv\build\LICENSE` to `opencv\build\LICENSE_OPENCV.txt`
    6. Move the contents of the `opencv\build` folder into the `WindowFrame` folder
    7. Move `opencv\LICENSE_FFMPEG.txt` into the `WindowFrame` folder
5. Build and merge RealSense2
    1. Follow the "Building RealSense2" instructions below
    2. Move the `build\install\include` and `build\install\lib` folders into the `WindowFrame` folder
    3. Move the `.dll` files from the `build\install\bin` folder to `WindowFrame\bin`
    4. Move the `.exe` files from the `build\install\bin` folder to `WindowFrame\tools\realsense2`
6. Download and merge Asio, Eigen, TinyXML, TinyXML2, and Log4CXX
    1. Download the latest versions of the nupkg dependencies from https://index.ros.org/doc/ros2/Installation/Eloquent/Windows-Install-Binary/#install-dependencies
    2. For each package, change the extension to `.zip` and extract
    3. Move the contents of the `include` folders into `WindowFrame\include`, except for `.gitkeep` files
    4. Move the contents of the `share` folders into `WindowFrame\share`
    5. Move `.lib` files from the `lib` folders into `WindowFrame\lib`, except for `*d.lib` files
    6. Move `.dll` files from the `lib` folders into `WindowFrame\bin`, except for `*d.dll` files
    7. Rename `LICENSE` files in the `tools` folders to `LICENSE_<package>.txt` and move them into the `WindowFrame` folder
7. Download and merge VSSetup
    1. Download the latest VSSetup.zip from https://github.com/Microsoft/vssetup.powershell/releases
    2. Move the contents of the `VSSetup` folder to `WindowFrame\tools\VSSetup`
8. List versions of all downloads in the main README

# Building Gazebo

These instructions are an adaptation of http://gazebosim.org/tutorials?tut=install_on_windows

1. Install the latest version of [Mercurial](https://www.mercurial-scm.org/) (you can disable all options in the installer)
2. Install the latest version of [Ruby](https://rubyinstaller.org/downloads/) (x64, without devkit)
3. Open “x64 Native Tools Command Prompt for VS 2019” as Administrator and set up the environment. To install this with Visual Studio, it requires running the Visual Studio Installer to Modify your installation by adding the “C++ build tools” workload and the latest “Windows 10 SDK” individual component.
    ```cmd
    > git clone https://github.com/IntelRealSense/librealsense.git
    > cd librealsense
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_BUILD_TYPE="Release"
    > nmake
    > nmake install
    ```
4. Make a directory to work in
    ```cmd
    > md gazebo & cd gazebo
    ```
5. Build vcpkg and dependencies. This can take a few hours, and you may have to uninstall OpenSSL. This requires the latest Windows 10 SDK and Visual C++ tools for CMake, which can be installed with the Visual Studio Installer.
    1. Note: `czmq` and `json-spirit` are not actually needed for Gazebo, but are built at the same time as extra packages.
    ```cmd
    > git clone https://github.com/Microsoft/vcpkg.git
    > cd vcpkg
    > git checkout f30df21cd9191009d8761e5bde4ddb5363e0fd2c -- ports/ogre
    > .\bootstrap-vcpkg.bat
    > .\vcpkg.exe install --clean-after-build --triplet x64-windows boost cppzmq curl czmq dlfcn-win32 freeimage json-spirit protobuf ogre qwt tbb zeromq zlib zziplib
    ```
6. Clone the repos that you will need to build manually. (Dependency version compatibility is listed in the [docs](http://gazebosim.org/tutorials?tut=install_dependencies_from_source#Versions).)
    ```cmd
    > cd ..
    > hg clone https://bitbucket.org/ignitionrobotics/ign-cmake 
    > hg clone https://bitbucket.org/ignitionrobotics/ign-math
    > hg clone https://bitbucket.org/ignitionrobotics/ign-msgs
    > hg clone https://bitbucket.org/ignitionrobotics/ign-transport 
    > hg clone https://bitbucket.org/osrf/sdformat
    > hg clone https://bitbucket.org/osrf/gazebo
    ```
7. Build ign-cmake
    ```cmd
    > cd ign-cmake
    > hg up ign-cmake0
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DBUILD_TESTING:BOOL=False
    > nmake
    > nmake install
    ```
8. Build ign-math
    ```cmd
    > cd ..\..\ign-math
    > hg up ign-math4
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_BUILD_TYPE="Release" -DBUILD_TESTING:BOOL=False
    > nmake
    > nmake install
    ```
9. Install ign-msgs
    ```cmd
    > cd ..\..\ign-msgs
    > hg up ign-msgs1
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_BUILD_TYPE="Release" -DBUILD_TESTING:BOOL=False -DCMAKE_TOOLCHAIN_FILE=..\..\vcpkg\scripts\buildsystems\vcpkg.cmake
    > nmake
    > nmake install
    ```
10. Build ign-transport
    ```cmd
    > cd ..\..\ign-transport
    > hg up ign-transport4
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_PREFIX_PATH="install\Release" -DCMAKE_BUILD_TYPE="Release" -DBUILD_TESTING:BOOL=False -DCMAKE_TOOLCHAIN_FILE=..\..\vcpkg\scripts\buildsystems\vcpkg.cmake
    > nmake
    > nmake install
    ```
11. Build sdformat
    ```cmd
    > cd ..\..\sdformat
    > hg up sdf6
    > md build & cd build
    > cmake .. -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_BUILD_TYPE="Release" -DCMAKE_TOOLCHAIN_FILE=..\..\vcpkg\scripts\buildsystems\vcpkg.cmake
    > nmake
    > nmake install
    ```
12. Build gazebo
    1. If this fails due to missing PkgConfig, try `> choco install pkgconfiglite`
    ```cmd
    > cd ..\..\gazebo
    > hg up gazebo10
    > md build & cd build
    > cmake .. -Wno-dev -G "NMake Makefiles" -DCMAKE_INSTALL_PREFIX="install\Release" -DCMAKE_BUILD_TYPE="Release" -DFREEIMAGE_RUNS=1 -DOGRE_VERSION="1.9.0-1" -DOGRE_PLUGINDIR="%cd%\..\..\vcpkg\installed\x64-windows\lib\opt" -DCMAKE_TOOLCHAIN_FILE=%cd%\..\..\vcpkg\scripts\buildsystems\vcpkg.cmake
    > nmake
    > nmake install
    ```
13. Package gazebo
    1. Copy the `pack_gazebo` folder alongside the `gazebo`, `ign`, `sdformat`, and `vcpkg` folder
    2. Right-click `pack_gazebo\pack.ps1` and select "Run with PowerShell"

# Building RealSense2

1. Open “Visual Studio Installer”, modify your Visual Studio installation, and install the latest "C++ ATL for latest build tools (x86 & x64)" individual component
2. Clone the repo and open it in VS Code
    ```cmd
    > git clone https://github.com/IntelRealSense/librealsense.git
    > code librealsense
    ```
4. Hit `ctrl+,` and type “cmake.installPrefix” and set it to `${workspaceFolder}/build/install`
5. Hit `ctrl+shift+P` and type “CMake: Select a Kit” and select the latest amd64 kit
6. Hit `ctrl+shift+P` and type “CMake: Select Variant” and select “CMake: Release”
7. Hit `ctrl+shift+P` and type “CMake: Configure”
8. Hit `ctrl+shift+P` and type “CMake: Build”
9. Hit `ctrl+shift+P` and type “CMake: Install”
