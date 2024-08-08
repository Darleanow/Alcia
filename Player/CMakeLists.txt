cmake_minimum_required(VERSION 3.28)

project(Player)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PLAYER
        src/Player.cpp
        src/Player.h
)

add_library(Player STATIC ${PLAYER})
