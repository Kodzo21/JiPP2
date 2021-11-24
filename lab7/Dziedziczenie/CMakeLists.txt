cmake_minimum_required(VERSION 3.16)

project(Dziedziczenie)
include_directories(include)

add_executable(Dziedziczenie src/main.cpp src/Figure.cpp include/Figure.h src/Circle.cpp include/Circle.h src/Square.cpp include/Square.h src/Triangle.cpp include/Triangle.h)