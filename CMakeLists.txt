project("stack-smashing")
cmake_minimum_required(VERSION 3.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-stack-protector -z execstack -no-pie")

add_executable(stack-smashing main.c)
