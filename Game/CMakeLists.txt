cmake_minimum_required(VERSION 3.28)

project(Game)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(GAME
        src/Game.cpp
        src/Game.h
        src/GameInstance.cpp
        src/GameInstance.h

        src/utils/EnumTypes.h
)

add_library(Game STATIC ${GAME})
