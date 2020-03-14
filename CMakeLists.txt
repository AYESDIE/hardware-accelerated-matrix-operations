cmake_minimum_required(VERSION 3.15)
project(matrix-addition-opencl)

set(CMAKE_CXX_STANDARD 14)

set(OUTPUT_DIR ${CMAKE_BINARY_DIR}/output)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/bin)

add_subdirectory(data)
add_subdirectory(src)