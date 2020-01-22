# WindowFrame

ROS2 and Gazebo packages, and dependencies for building C++ projects on Windows 10

## Packages

- [ROS2](https://github.com/ros2/ros2/releases) (`ros2-eloquent-20191122-windows-release-amd64`)
- [Gazebo](https://bitbucket.org/osrf/gazebo/src/gazebo10/) (`gazebo10 7c4281fe1229`)
- [OpenCV](https://opencv.org/releases/) (`4.1.1`)
- [RealSense2](https://github.com/IntelRealSense/librealsense) (`86280d3`)
- [OpenSSL](https://slproweb.com/products/Win32OpenSSL.html) (`Win64 v1.0.2t`)
- [Boost](https://www.boost.org/) (`1.70.0`)

## Prerequisites

1. Allow running downloaded PowerShell scripts
    1. Open an Admin PowerShell window and run `Set-ExecutionPolicy -ExecutionPolicy Unrestricted`
2. Download and install [Git LFS](https://git-lfs.github.com/) for storing binary files
3. Visual Studio for editing and building
    1. Depending on your preference, install either [Visual Studio](https://visualstudio.microsoft.com/downloads/) or both [Visual Studio Code](https://code.visualstudio.com/download) and [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/) (not the main download; look under Tools for Visual Studio 2019)
    2. Open "Visual Studio Installer", modify your Visual Studio installation, and install the "Desktop development with C++" or "C++ build tools" workload
4. Python dependencies for ROS2 (adapted from https://index.ros.org/doc/ros2/Installation/Dashing/Windows-Install-Binary)
    1. Install Chocolatey in an Admin PowerShell window
       ```cmd
       > iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
       ```
    2. Install Visual C++ Redistributables
       ```cmd
       > choco install -y vcredist2013 vcredist140
       ```
    3. Install Python 3.7.5 (this must be installed via Chocolatey)
       ```cmd
       > choco install python --version=3.7.5
       ```
    4. Install CLI dependencies
        ```cmd
        > pip install -U catkin_pkg cryptography empy ifcfg lark-parser lxml netifaces numpy opencv-python pyparsing pyyaml setuptools
        ```
    5. Install RQT dependencies
        ```cmd
        > pip install -U pydot PyQt5
        ```
    6. Install colcon
        ```cmd
        > pip install -U colcon-common-extensions
        ```

## Usage

Right-click `WindowFrame.ps1` and select "Run with PowerShell".

This will open and configure an Admin PowerShell window ready to:
- Run ROS2
    - `ros2`
    - `rviz2`
    - `rqt`
    - `rqt_graph`
- Run Gazebo
    - `gazebo [<path_to_world>] [--verbose]`
- Build with included packages (in VS Code or via the command line)
    ```cmd
    > mkdir build
    > cd build
    > cmake .. -G "NMake Makefiles"
    > nmake
    ```

## Troubleshooting

- If you see this error: "failed to create process," ensure that Python is installed via Chocolatey. See [Prerequisites](#prerequisites) for details.

- If you see this error: "Unable to get rmw_implementation_identifier, try specifying the implementation to use via the 'RMW_IMPLEMENTATION' environment variable," install the [Visual C++ Redistributable Packages for Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40784) (source: [ROS2 Development Setup Troubleshooting](https://index.ros.org/doc/ros2/Installation/Dashing/Windows-Development-Setup/#failed-to-load-fastrtps-shared-library))

## Construction

For constructing or updating WindowFrame, check out [construction](construction).
