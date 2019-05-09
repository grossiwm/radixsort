cmake_minimum_required(VERSION 3.12)
project(radixsort C)

set(CMAKE_C_STANDARD 99)

add_executable(radixsort main.c functions.c functions.h)