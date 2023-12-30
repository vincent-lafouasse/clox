cmake_minimum_required(VERSION 3.18)

project(clox LANGUAGES C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra -Wpedantic)
add_compile_options(-g3)

add_executable(clox
	src/main.c
	src/chunk.c
)
target_include_directories(clox PUBLIC ./include)
