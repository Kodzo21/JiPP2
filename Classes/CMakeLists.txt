cmake_minimum_required(VERSION 3.16)

project(Classes)

set( project_sources
        src/main.cpp
        src/Prostopadloscian.cpp
        src/Kolo.cpp
        src/FunkcjaKwadratowa.cpp
        src/Student.cpp
        src/Punkt.cpp
        src/Figura.cpp
        )

# Create executable with all necessary source files
add_executable(${PROJECT_NAME}
        ${project_sources}
        )