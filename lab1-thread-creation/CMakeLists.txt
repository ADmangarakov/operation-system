cmake_minimum_required(VERSION 3.10)
project(lab1_thread_creation C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS  "-mt")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set(CMAKE_C_FLAGS  "-pthread")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(lab1_thread_creation main.c)