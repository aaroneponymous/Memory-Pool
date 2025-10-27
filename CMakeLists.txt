cmake_minimum_required(VERSION 4.0)
project(Memory_Pool)

set(CMAKE_CXX_STANDARD 20)

add_executable(Memory_Pool main.cpp
        include/dynamic_pool.hpp)
