cmake_minimum_required(VERSION 3.16)
project(Program1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Program1
        animal.cpp
        animal.h
        main.cpp
        competition.cpp
        competition.h
        LLL.cpp
        LLL.h)
