add_library(Game STATIC
        src/GameInstance.cpp
)

target_include_directories(Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(Game PRIVATE Entity ViewModels Map)

target_compile_features(Game PRIVATE cxx_std_23)