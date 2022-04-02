cmake_minimum_required(VERSION 3.0)

project(TextureExample)
file(GLOB SOURCES ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ..)
link_directories(${CMAKE_BINARY_DIR}/BookEngine)

add_executable(TextureExample ${SOURCES})

target_link_libraries(TextureExample ${SDL2_LIBRARIES} BookEngine)
