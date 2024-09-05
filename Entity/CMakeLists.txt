cmake_minimum_required(VERSION 3.28)

project(Entity)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ENTITY
        src/Entity.cpp
        src/Entity.h
        src/Player.cpp
        src/Player.h
        src/Enemy.cpp
        src/Enemy.h
        src/EnemyRegistry.cpp
        src/EnemyRegistry.h

)

add_subdirectory(src/Components)

add_library(Entity STATIC ${ENTITY})

target_include_directories(Entity PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Map PUBLIC ${CMAKE_SOURCE_DIR}/Map/src)

target_link_libraries(Entity PRIVATE Components Map)

