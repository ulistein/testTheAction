cmake_minimum_required(VERSION 3.14)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CXX_STANDARD 14)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    header/Example.hpp
)
set(Sources
    src/Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
