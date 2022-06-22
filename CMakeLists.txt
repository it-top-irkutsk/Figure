cmake_minimum_required(VERSION 3.17)
project(Figure)

set(CMAKE_CXX_STANDARD 14)

add_executable(Figure main.cpp Figure.h Circle.h Square.h CLI.h)
