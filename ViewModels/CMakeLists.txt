cmake_minimum_required(VERSION 3.28)

project(ViewModels)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(VIEWMODELS
        src/PlayerViewModel.cpp
        src/PlayerViewModel.h
        src/EnemyViewModel.cpp
        src/EnemyViewModel.h
)

add_library(ViewModels STATIC ${VIEWMODELS})

target_include_directories(ViewModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Map PUBLIC ${CMAKE_SOURCE_DIR}/Map/src)
target_include_directories(Entity PUBLIC ${CMAKE_SOURCE_DIR}/Entity/src)

target_link_libraries(ViewModels PRIVATE Map Entity)

