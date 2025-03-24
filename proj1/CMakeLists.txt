# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(obiektowe VERSION 1.0)

# Set the C++ standard to C++17 (or any other standard you prefer)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the src directory
include_directories(src)

# Find all .cpp files in the src directory
file(GLOB SOURCES "src/*.cpp")

# Find all .h files in the src directory (optional, for IDE support)
file(GLOB HEADERS "src/*.h")

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

