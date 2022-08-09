cmake_minimum_required(VERSION 3.20)
project(ParallelComputing)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ParallelComputing
        parallelLUD.cpp
        serialLUD.cpp
        ompLUD.cpp
        verification.cpp
        utils.cpp
        utils.h)
