add_library(Map STATIC
        src/Map.cpp
        src/World.cpp
        src/Region.cpp
        src/SubRegion.cpp
        src/Location.cpp
        src/Connection.cpp
)

target_include_directories(Map PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_compile_features(Map PRIVATE cxx_std_23)