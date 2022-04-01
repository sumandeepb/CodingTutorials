Learning examples adopted from the book Mastering C++ Game Development by Mickey MacDonald.

# Common Commands
## Static Library
### Compile C++ source files
Generates object(.o) files from C++ source(.cpp) files.
```
g++ -c hello.cpp
```
### Build C++ library file
Generates static library(.a) file from C++ object(.o) file.
```
ar rvs hello.a hello.o
```
### Link C++ files into an executable
Generates an executable binary(.bin) file  from C++ source, object and library files.
```
g++ main.cpp hello.a -o main.bin
```
## Shared Library
### Compile C++ source files
Generates object(.o) files from C++ source(.cpp) files with position-independent code.
```
g++ -c -fPIC hello.cpp
```
### Build shared library file
Generates shared library(.so) file from C++ object(.o) file. Shared library must start with 'lib' prefix.
```
g++ -shared -o libhello.so hello.o
```
### Build executable binary file
Generates executable binary(.bin) file with linking to shared library.
```
g++ -L. -o main.bin main.cpp -lhello
```
Note: Before you run the executable, you need to add the shared library file to any location covered by env LD_LIBRARY_PATH.
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
cmake --build .
```
## Run Example Projects
```
cd build
./HelloWorld/HelloWorld
```
