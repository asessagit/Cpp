cmake_minimum_required(VERSION 3.10)
project(CppExamples)

set(CMAKE_CXX_STANDARD 17)

add_executable(for src/for.cpp)
add_executable(hello_world src/hello_world.cpp)
add_executable(if src/if.cpp)
add_executable(mat src/mat.cpp)
add_executable(while src/while.cpp)
add_executable(vec src/vec.cpp)

