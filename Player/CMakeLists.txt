cmake_minimum_required(VERSION 3.28)

project(Player)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PLAYER
        src/Player.cpp
        src/Player.h
        src/EntityComponents/Health.cpp
        src/EntityComponents/Health.h
        src/EntityComponents/Level.cpp
        src/EntityComponents/Level.h
        src/EntityComponents/Mana.h
        src/EntityComponents/Mana.cpp
        src/CharacterAttributes.cpp
        src/CharacterAttributes.h
        src/EntityComponents/Defense.cpp
        src/EntityComponents/Defense.h
)

add_library(Player STATIC ${PLAYER})

target_include_directories(Player PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()

add_subdirectory(tests)