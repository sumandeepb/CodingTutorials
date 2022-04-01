cmake_minimum_required(VERSION 3.0)

project(BookEngine)
file(GLOB SOURCES ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)

find_package(PkgConfig)
find_package(SDL2 REQUIRED)
set(OpenGL_GL_PREFERENCE LEGACY)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(Bullet REQUIRED)

pkg_check_modules(SDL2mixer REQUIRED SDL2_mixer)
pkg_check_modules(SDL2ttf REQUIRED SDL2_ttf)

include_directories(${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${BULLET_INCLUDE_DIRS})

add_library(BookEngine SHARED ${SOURCES})

target_link_libraries(BookEngine ${SDL2_LIBRARIES} ${SDL2mixer_LIBRARIES} ${SDL2ttf_LIBRARIES} ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} ${BULLET_LIBRARIES})
