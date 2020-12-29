# cmake_minimum_required(VERSION <specify CMake version here>)
project(LearningNotes_C C)

set(CMAKE_C_STANDARD 99)

add_executable(LearningNotes_C source/main.c include/string.h include/string.c)