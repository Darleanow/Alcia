add_library(ViewModels STATIC
        src/EnemyViewModel.cpp
        src/PlayerViewModel.cpp
)

target_include_directories(ViewModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(ViewModels PRIVATE Map Entity)

target_compile_features(ViewModels PRIVATE cxx_std_23)