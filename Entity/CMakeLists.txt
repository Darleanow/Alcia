add_library(Components STATIC
        src/Components/src/Health.cpp
        src/Components/src/Mana.cpp
        src/Components/src/Strength.cpp
        src/Components/src/Defense.cpp
        src/Components/src/Level.cpp
        src/Components/src/CharacterData.cpp
        src/Components/src/Rewards.cpp
)

target_include_directories(Components PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/Components/src)

target_link_libraries(Components PRIVATE Map)

add_library(Entity STATIC
        src/Entity.cpp
        src/Player.cpp
        src/Enemy.cpp
        src/EnemyRegistry.cpp
)

target_include_directories(Entity PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(Entity PRIVATE Components Map)

target_compile_features(Entity PRIVATE cxx_std_23)
