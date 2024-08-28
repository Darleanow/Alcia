cmake_minimum_required(VERSION 3.28)

project(Map)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(MAP
        src/Map.cpp
        src/Map.h
        src/World.cpp
        src/World.h
        src/Region.cpp
        src/Region.h
        src/SubRegion.cpp
        src/SubRegion.h
        src/Location.cpp
        src/Location.h
        src/Connection.cpp
        src/Connection.h
)

add_library(Map STATIC ${MAP})

# target_include_directories(Game PUBLIC ${CMAKE_SOURCE_DIR}/Player/src)

enable_testing()

# add_subdirectory(tests)