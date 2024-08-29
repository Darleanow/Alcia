cmake_minimum_required(VERSION 3.28)

project(Enemies)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ENEMIES
        src/MonsterRegistry.cpp
        src/MonsterRegistry.h
        src/Enemy.cpp
        src/Enemy.h
)

add_library(Enemies STATIC ${ENEMIES})

target_include_directories(Enemies PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Enemies PUBLIC ${CMAKE_SOURCE_DIR}/Map/src)

target_link_libraries(Enemies PUBLIC Map)