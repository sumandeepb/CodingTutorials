cmake_minimum_required(VERSION 3.0)

project(SoundExample)
file(GLOB SOURCES ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ..)
link_directories(${CMAKE_BINARY_DIR}/BookEngine)

add_executable(SoundExample ${SOURCES})

target_link_libraries(SoundExample ${SDL2_LIBRARIES} BookEngine)
