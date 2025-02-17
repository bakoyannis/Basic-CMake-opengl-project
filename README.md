# Basic OpenGL CMake project
- Tested on Windows & GNU/Linux.

## Dependencies included
- [GLFW](https://github.com/glfw/glfw)
- [GLM](https://github.com/g-truc/glm)
- [GLAD](https://github.com/Dav1dde/glad)

## Requirements
- [CMake](https://cmake.org/download/)
- [Git](https://git-scm.com/)
- For GNU/Linux you might need to install additional packages
  - Debian `sudo apt install libwayland-dev libxkbcommon-dev xorg-dev`
  - Red hat - Fedora `sudo dnf install wayland-devel libxkbcommon-devel libXcursor-devel libXi-devel libXinerama-devel libXrandr-devel` 

## Build Instructions
### Command line
- `mkdir build`
- `cd build`
- `cmake ..`
- `cd ..`
- `cmake --build build`
### You can also use the CMake extension in VS Code or any IDE that supports it
