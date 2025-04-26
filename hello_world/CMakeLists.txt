cmake_minimum_required(VERSION 3.10)
project(hello_world)

find_library(FORMATTER_LIB formatter PATHS ../formatter_lib/build NO_DEFAULT_PATH)
find_library(FORMATTER_EX_LIB formatter_ex PATHS ../formatter_ex_lib/build NO_DEFAULT_PATH)

add_executable(hello_world main.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(hello_world 
    PRIVATE 
    ../formatter_lib
    ../formatter_ex_lib
)

target_link_libraries(hello_world ${FORMATTER_EX_LIB} ${FORMATTER_LIB})