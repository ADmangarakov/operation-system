cmake_minimum_required(VERSION 3.10)
project(lab1_thread_creation C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS  "-mt")
set(CMAKE_C_FLAGS  "-pthread")

add_executable(lab1_thread_creation main.c)