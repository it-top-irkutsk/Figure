cmake_minimum_required(VERSION 3.22)
project(polymorph)

set(CMAKE_CXX_STANDARD 14)

add_executable(polymorph main.cpp Figure.h Circle.h Square.h CLI.h)
