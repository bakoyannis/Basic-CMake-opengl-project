cmake_minimum_required(VERSION 3.28)
project(my_application)

set(CMAKE_CXX_STANDARD           20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS        OFF) # Turn off extensions for compatibility

include_directories(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/source
)

file(GLOB_RECURSE src_files
    "source/*.cpp"
    "source/graphics/*.cpp"
)

file(GLOB_RECURSE header_files
    "source/*.hpp"
    "source/graphics/*.hpp"
)

add_executable(${PROJECT_NAME} ${src_files} ${header_files})

add_subdirectory(dependencies)
