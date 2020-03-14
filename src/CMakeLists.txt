find_package(OpenCL REQUIRED)

add_executable(MatrixAddition main.cpp resourcehandler.cpp resourcehandler.h)
add_definitions(-DDATA_DIR="${OUTPUT_DIR}/data")
add_definitions(-DKERNEL_DIR="${OUTPUT_DIR}/kernel")

target_link_libraries(MatrixAddition OpenCL)