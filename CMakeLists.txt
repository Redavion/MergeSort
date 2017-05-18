cmake_minimum_required(VERSION 3.6)
project(spring_2017_assignment_1_Redavion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    driver.c
    linkedlist.c
    linkedlist.h
    Makefile
    mergesort.c
    mergesort.h)

add_executable(spring_2017_assignment_1_Redavion ${SOURCE_FILES})