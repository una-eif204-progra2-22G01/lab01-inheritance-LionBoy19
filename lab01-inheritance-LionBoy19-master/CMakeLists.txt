cmake_minimum_required(VERSION 3.21)
project(lab01_inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(lab01_Inheritance
        src/Base.cpp src/Base.h src/Derived1.cpp src/Derived1.h src/Derived2.cpp src/Derived2.h src/Main.cpp)

