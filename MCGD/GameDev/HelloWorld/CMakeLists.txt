cmake_minimum_required(VERSION 3.0)

project(HelloWorld)
file(GLOB SOURCES ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ..)
link_directories(${CMAKE_BINARY_DIR}/BookEngine)

add_executable(HelloWorld ${SOURCES})

target_link_libraries(HelloWorld ${SDL2_LIBRARIES} BookEngine)
