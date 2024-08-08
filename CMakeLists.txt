cmake_minimum_required(VERSION 3.28)
project(Alcia)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG main
)
FetchContent_MakeAvailable(ftxui)
include_directories(${ftxui_SOURCE_DIR}/include)


add_executable(Alcia main.cpp)

add_subdirectory(Game)
add_subdirectory(Player)

target_link_libraries(Alcia
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
)
