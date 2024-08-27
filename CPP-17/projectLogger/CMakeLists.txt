cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ProjectLogger)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(ProjectLogger 
    src/main.cpp
    src/loggerBase.cpp
)

# Include directories
target_include_directories(ProjectLogger PUBLIC 
    ${PROJECT_SOURCE_DIR}/inc
)