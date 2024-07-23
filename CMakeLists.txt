cmake_minimum_required(VERSION 3.28)
project(review_complex C)

set(CMAKE_C_STANDARD 11)

add_executable(review_complex main.c
        complex.c
        complex.h)
