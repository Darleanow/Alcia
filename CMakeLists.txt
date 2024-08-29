cmake_minimum_required(VERSION 3.28)
project(Alcia)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    option(COVERAGE "Enable coverage reporting" OFF)
    if(COVERAGE)
        add_compile_options(--coverage -g -O0)
        add_link_options(--coverage)
    endif()
endif()


# FetchContent to include ftxui
include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG main
)
FetchContent_MakeAvailable(ftxui)

# FetchContent to include nlohmann::json
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

# FetchContent to include gtest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Include directories
include_directories(${ftxui_SOURCE_DIR}/include)
include_directories(${json_SOURCE_DIR}/include)

# Add main executable
add_executable(Alcia main.cpp)

# Enable testing
enable_testing()

# Add subdirectories for Game and Player
add_subdirectory(Game)
add_subdirectory(Player)
add_subdirectory(Map)
add_subdirectory(Enemies)

# Link ftxui libraries to the main executable
target_link_libraries(Alcia
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
        PRIVATE nlohmann_json::nlohmann_json
        PRIVATE Game
        PRIVATE Map
        PRIVATE Enemies
)

# Copy Data in the build folder
add_custom_command(
        TARGET Alcia POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/Data/Location.json
        $<TARGET_FILE_DIR:Alcia>/Data/Location.json
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/Data/Enemies.json
        $<TARGET_FILE_DIR:Alcia>/Data/Enemies.json
)