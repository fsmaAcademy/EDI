cmake_minimum_required(VERSION 3.6)
project(fila)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fila.cpp Fila.h)
add_executable(fila ${SOURCE_FILES})