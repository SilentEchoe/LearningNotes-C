cmake_minimum_required(VERSION 3.16)

project(LearningNotes_C C)

set(CMAKE_C_STANDARD 99)

# Static library
set(LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/string.c")
set(LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/printint.c")
add_library(strop STATIC ${LIB_SOURCES})
target_include_directories(strop PUBLIC inc)

set(EXE_SOURCES "main.c")
add_executable(str-demo ${EXE_SOURCES})
target_link_libraries(
        str-demo
        PRIVATE
        strop
)

