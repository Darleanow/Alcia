cmake_minimum_required(VERSION 3.28)

project(Components)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(COMPONENTS
        src/Health.cpp
        src/Health.h
        src/Mana.cpp
        src/Mana.h
        src/Strength.cpp
        src/Strength.h
        src/Defense.cpp
        src/Defense.h
        src/Component.h
        src/Level.cpp
        src/Level.h
        src/CharacterData.cpp
        src/CharacterData.h
        src/Rewards.cpp
        src/Rewards.h

)

add_library(Components STATIC ${COMPONENTS})

target_include_directories(Components PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Map PUBLIC ${CMAKE_SOURCE_DIR}/Map/src)

target_link_libraries(Components PRIVATE Map)