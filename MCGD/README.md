Learning examples adopted from the book Mastering C++ Game Development by Mickey MacDonald.

## Common Commands
### Compile C++ source files
Generates object(.o) files from C++ source(.cpp) files
```
g++ -c hello.cpp
```
### Build C++ library files
Generates library(.a) files from C++ object(.o) files
```
ar rvs hello.a hello.o
```
### Link C++ files into executables
Generates executable binary(.bin) files from C++ source, object and library files
```
g++ main.cpp hello.a -o main.bin
```