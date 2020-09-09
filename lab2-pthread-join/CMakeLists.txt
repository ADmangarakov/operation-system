cmake_minimum_required(VERSION 3.10)
project(lab2_pthread_join C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS  "-mt")
set(CMAKE_C_FLAGS  "-pthread")

add_executable(lab2_pthread_join main.c)