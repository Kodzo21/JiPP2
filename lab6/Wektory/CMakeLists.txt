cmake_minimum_required(VERSION 3.16)

project(Wektory)
include_directories(include)

add_executable(Wektory src/main.cpp src/Vector.cpp src/Node.cpp)