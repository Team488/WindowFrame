# WindowFrame

ROS2 and Gazebo packages, and dependencies for building C++ projects on Windows 10

## Packages

- [ROS2](https://github.com/ros2/ros2/releases) (`ros2-dashing-20190910-windows-release-amd64`)
- [Gazebo](https://bitbucket.org/osrf/gazebo/src/gazebo10/) (`gazebo10 7c4281fe1229`)
- [OpenCV](https://opencv.org/releases/) (`4.1.1`)
- [OpenSSL](https://slproweb.com/products/Win32OpenSSL.html) (`Win64 v1.0.2t`)
- [Boost](https://www.boost.org/) (`1.70.0`)

## Prerequisites

1. Git LFS for storing binary files
    1. Download and install [Git LFS](https://git-lfs.github.com/)
    2. Run `git lfs install`
2. Visual Studio for editing and building
    1. Depending on your preference, install either [Visual Studio](https://visualstudio.microsoft.com/downloads/) or both [Visual Studio Code](https://code.visualstudio.com/download) and [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/) (not the main download; look under Tools for Visual Studio 2019)
    2. Open "Visual Studio Install", modify your Visual Studio installation, and install the "Desktop development with C++" or "C++ build tools" workload
3. Python dependencies for ROS2 (adapted from https://index.ros.org/doc/ros2/Installation/Dashing/Windows-Install-Binary)
    1. Download and install [Python 3](https://www.python.org/downloads/windows/)
    2. Install CLI dependencies
        ```cmd
        > pip install -U catkin_pkg empy lark-parser lxml numpy opencv-python pyparsing pyyaml setuptools
        ```
    3. Install RQT dependencies
        ```cmd
        > pip install -U pydot PyQt5
        ```
    4. Install colcon
        ```cmd
        > pip install -U colcon-common-extensions
        ```

## Usage

##### PowerShell

Right-click `WindowFrame.ps1` and select "Run with PowerShell".

This will open and configure an Admin PowerShell window ready to:
- Run ROS2
    - `ros2`
    - `rviz2`
    - `rqt`
    - `rqt_graph`
- Run Gazebo
    - `gazebo [<path_to_world>] [--verbose]`
- Build with included packages
    ```cmd
    > mkdir build & cd build
    > cmake .. -G "NMake Makefiles"
    > nmake
    ```

##### ROS2

Right-click ros2.ps1 and select "Run with PowerShell".
This will open and configure a PowerShell window ready to run any of the ROS2 commands above, but not build.

##### Gazebo

Right-click gazebo.ps1 and select "Run with PowerShell".
This will open a Gazebo window with the empty world.

## Troubleshooting

- If you see this error: “Unable to get rmw_implementation_identifier, try specifying the implementation to use via the 'RMW_IMPLEMENTATION' environment variable,” install the [Visual C++ Redistributable Packages for Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40784) (source: [ROS2 Development Setup Troubleshooting](https://index.ros.org/doc/ros2/Installation/Dashing/Windows-Development-Setup/#failed-to-load-fastrtps-shared-library))

## Construction

For constructing or updating WindowFrame, check out [construction](construction).
