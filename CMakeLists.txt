cmake_minimum_required(VERSION 3.23)

project(2022-CPL-codes C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(codes-in-class)

add_subdirectory(codes-in-homework)

add_executable(test test.c)

