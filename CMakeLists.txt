cmake_minimum_required(VERSION 3.12)
project(
  MyTemplate
  VERSION 1.0
  DESCRIPTION "A simple c++ cmake template project"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

add_subdirectory(src)
add_subdirectory(tst)

enable_testing()

target_include_directories(my_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
