cmake_minimum_required(VERSION 3.16)

project(.)

add_executable(. src/main.cpp src/TimeMeasure.cpp)

target_include_directories(. PUBLIC include)