cmake_minimum_required(VERSION 3.28)

project(Game)

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

target_include_directories(Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Game PUBLIC ${CMAKE_SOURCE_DIR}/Player/src)
target_include_directories(Game PUBLIC ${CMAKE_SOURCE_DIR}/Map/src)
target_include_directories(Game PUBLIC ${CMAKE_SOURCE_DIR}/Enemies/src)

target_link_libraries(Game PUBLIC Player Map Enemies)

enable_testing()

add_subdirectory(tests)