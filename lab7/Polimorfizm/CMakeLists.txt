cmake_minimum_required(VERSION 3.16)

project(Polimorfizm)
include_directories(include)

add_executable(Polimorfizm src/main.cpp src/Figure.cpp include/Figure.h src/Circle.cpp include/Circle.h src/Rectangle.cpp include/Rectangle.h)