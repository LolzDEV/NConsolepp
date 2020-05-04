cmake_minimum_required(VERSION 3.16)
project(NConsole__)

set(CMAKE_CXX_STANDARD 14)


add_executable(NConsole__ main.cpp console.cpp console.h commands.cpp commands.h register.cpp register.h main.h)