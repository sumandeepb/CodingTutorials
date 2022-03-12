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