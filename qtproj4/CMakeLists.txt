cmake_minimum_required(VERSION 3.16)
project(qtCalc VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt 6 packages
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Enable automatic moc, uic, and rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Add executable
add_executable(qtCalc
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
)

# Link Qt libraries
target_link_libraries(qtCalc PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

# Install target (optional)
install(TARGETS qtCalc DESTINATION bin)
