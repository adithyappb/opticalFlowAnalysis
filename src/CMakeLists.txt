# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Define the project name
project(optical_flow_project)

# Find the OpenCV package
find_package(OpenCV REQUIRED)

# Include directories for project headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)  # Adjust this path if necessary

# List source files
set(SOURCES
    main.cpp
    OpticalFlow.cpp
)

# Add an executable target named optical_flow_demo
add_executable(optical_flow_demo ${SOURCES})

# Link OpenCV libraries to the executable
target_link_libraries(optical_flow_demo ${OpenCV_LIBS})

