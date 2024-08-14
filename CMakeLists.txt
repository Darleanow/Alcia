cmake_minimum_required(VERSION 3.28)
project(Alcia)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# FetchContent to include ftxui
include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG main
)
FetchContent_MakeAvailable(ftxui)

# FetchContent to include gtest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Include directories
include_directories(${ftxui_SOURCE_DIR}/include)

# Add main executable
add_executable(Alcia main.cpp)

# Enable testing
enable_testing()

# Add subdirectories for Game and Player
add_subdirectory(Game)
add_subdirectory(Player)

# Link ftxui libraries to the main executable
target_link_libraries(Alcia
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
        PRIVATE Game
)
