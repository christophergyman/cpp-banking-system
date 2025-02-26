# Minimum required CMake version
cmake_minimum_required(VERSION 3.29)

# Project name and language
project(cpp-banking-system VERSION 1.0 LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# adds source files
add_executable(main src/main.cpp src/oop-clases/AccountHolder.cpp src/oop-clases/AccountCard.cpp src/oop-clases/Account.cpp
        src/socket.cpp
        src/socket.h
)
