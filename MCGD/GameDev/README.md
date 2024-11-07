
# Setup Dependencies
## Checking for Graphics Processor
The following command will tell you about the graphics processor in your system.
```
sudo lshw -C display
```
## Installing OpenGL Development Pre-requisites
```
sudo add-apt-repository ppa:oibaf/graphics-drivers -y
sudo apt update
sudo apt install build-essential g++ binutils cmake \
    libglu1-mesa-dev mesa-common-dev mesa-utils freeglut3-dev \
    libglew-dev glew-utils libglm-dev libglfw3-dev
```
## Checking for OpenGL Support Version
The following command shows version information of all OpenGL components installed on your system.
```
glxinfo -B
```
## Installing SFML(Simple and Fast Multimedia Library) on Ubuntu
```
sudo apt install libsfml-dev libsfml-doc
```
For more information visit https://www.sfml-dev.org/tutorials/2.5/start-linux.php

Also, to link sfml library into your code use 'pkg-config --libs sfml-all' along with your g++ command.
## Install SDL(Simple DirectMedia Layer) on Ubuntu
```
sudo apt install libsdl2-dev libsdl2-doc \
    libsdl2-image-dev libsdl2-ttf-dev libsdl2-gfx-dev libsdl2-mixer-dev libsdl2-net-dev
```
For more information visit https://wiki.libsdl.org/FrontPage
## Build and Install Bullet Physics SDK
Clone or Download github repository https://github.com/bulletphysics/bullet3

Build and install Bullet3 for C++
```
cd bullet3
./build_cmake_pybullet_double.sh
cd build_cmake
sudo make insall
```
## Set Environment Variables
Add environment configs to ~/.bashrc
```
echo export LD_LIBRARY_PATH=/usr/local/lib/:$LD_LIBRARY_PATH >> ~/.bashrc
echo export LIBGL_ALWAYS_INDIRECT=0 >> ~/.bashrc
source ~/.bashrc
```
# Build and Run Project
## Build Project using CMAKE
```
cd build
cmake ..
cmake --build . -j6
```
## Run Example Projects
```
cd build
./HelloWorld/HelloWorld
```
