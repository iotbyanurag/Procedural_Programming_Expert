cmake_minimum_required(VERSION 3.10)

project(projectLogger)

# Include header files
include_directories(inc)

# Add the executable
add_executable(projectLogger src/main.cpp src/loggerBase.cpp)
