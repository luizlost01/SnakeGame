cmake_minimum_required(VERSION 3.15)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch raylib
include(FetchContent)
FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.tar.gz
)
FetchContent_MakeAvailable(raylib)

# 1. Properly define the source files variable and fix relative paths
set(SOURCES
    src/main.cpp
    src/snake.cpp
    src/fruit.cpp
)

# 2. Use the SOURCES variable to create the executable
add_executable(snake ${SOURCES})

# 3. Modern CMake: Use target_include_directories instead of include_directories
target_include_directories(snake PRIVATE include)

# Link the raylib library
target_link_libraries(snake PRIVATE raylib)