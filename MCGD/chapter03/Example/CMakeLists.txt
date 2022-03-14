cmake_minimum_required(VERSION 3.0)

project(Example)
file(GLOB SOURCES ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ..)
link_directories(${CMAKE_BINARY_DIR}/BookEngine)

add_executable(Example ${SOURCES})

target_link_libraries(Example ${SDL2_LIBRARIES} BookEngine)
