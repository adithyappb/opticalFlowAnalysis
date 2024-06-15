cmake_minimum_required(VERSION 3.0)
project(optical_flow_project)

# Set the path to where the binary/executable should be built
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# Find OpenCV package
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# List source files
set(SOURCES
    main.cpp
    OpticalFlow.cpp
)

# Add executable
add_executable(optical_flow_demo ${SOURCES})

# Link OpenCV libraries
target_link_libraries(optical_flow_demo ${OpenCV_LIBS})



