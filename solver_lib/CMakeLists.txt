cmake_minimum_required(VERSION 3.10)
project(solver_lib)

find_library(FORMATTER_LIB formatter PATHS ../formatter_lib/build NO_DEFAULT_PATH)
find_library(FORMATTER_EX_LIB formatter_ex PATHS ../formatter_ex_lib/build NO_DEFAULT_PATH)

add_library(solver_lib STATIC solver.cpp solver.h)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(solver_lib 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ../formatter_lib
    ../formatter_ex_lib
)

target_link_libraries(solver_lib ${FORMATTER_EX_LIB} ${FORMATTER_LIB})