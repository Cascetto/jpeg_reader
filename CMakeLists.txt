project(jpeg_reader)
set(CMAKE_VERBOSE_MAKEFILE true)
cmake_minimum_required(VERSION 3.21)

set(SOURCE_FILES main.cpp)

add_executable(jpeg_reader ${SOURCE_FILES})
set_property(TARGET jpeg_reader PROPERTY CXX_STANDARD 17)
