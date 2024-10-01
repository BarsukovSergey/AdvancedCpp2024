cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)

add_executable(02-unspecified unspecified.cpp)
add_executable(02-table table.cpp)
add_executable(02-conditional conditional.cpp)
add_executable(02-incompatible incompatible.cpp)
add_executable(02-conversion conversion.cpp)
add_executable(02-lexical lexical.cpp)
add_executable(02-syntax syntax.cpp)
add_executable(02-segfault segfault.cpp)
add_executable(02-fpe fpe.cpp)
add_executable(02-abort abort.cpp)
