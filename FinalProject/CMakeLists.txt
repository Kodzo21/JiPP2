cmake_minimum_required(VERSION 3.16)

project(FinalProject)

include_directories(include)

add_executable(FinalProject
        src/main.cpp
        src/Worker.cpp
        src/Employee.cpp
        src/Manager.cpp
        src/WorkersManager.cpp )