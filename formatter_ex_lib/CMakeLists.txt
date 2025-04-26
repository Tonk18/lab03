cmake_minimum_required(VERSION 3.10)
project(formatter_ex)

find_library(FORMATTER_LIB formatter PATHS ../formatter_lib/build NO_DEFAULT_PATH)

add_library(formatter_ex STATIC formatter_ex.cpp formatter_ex.h)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(formatter_ex 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ../formatter_lib
)

target_link_libraries(formatter_ex ${FORMATTER_LIB})