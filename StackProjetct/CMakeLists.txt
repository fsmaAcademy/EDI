cmake_minimum_required(VERSION 3.6)
project(StackProjetct)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp pilha.h pilha.cpp)
add_executable(StackProjetct ${SOURCE_FILES})