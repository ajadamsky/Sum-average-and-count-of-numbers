cmake_minimum_required(VERSION 3.6)
project(hand_in_2_1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall -pedantic")

set(SOURCE_FILES main.c)
add_executable(hand_in_2_1 ${SOURCE_FILES})