cmake_minimum_required(VERSION 3.28)
project(Alcia)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)

# FetchContent to include nlohmann::json
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)


# todo(Enzo): Needed functionality from package, so using commit sha for now.
# v3.0.0
FetchContent_Declare(
        saucer
        GIT_REPOSITORY "https://github.com/saucer/saucer"
        GIT_TAG 8d753e5f85c98fe1c88d8896917f4c3dc58034fd
)

FetchContent_MakeAvailable(saucer)

include_directories(${json_SOURCE_DIR}/include)


add_executable(Alcia
        main.cpp
)

add_subdirectory(Game)
add_subdirectory(Map)
add_subdirectory(Entity)
add_subdirectory(ViewModels)

target_include_directories(Alcia PRIVATE "Frontend/embedded")

target_link_libraries(Alcia
        nlohmann_json::nlohmann_json
        Game
        Map
        Entity
        ViewModels
        saucer::saucer
)

# Copy Data files to the build folder
add_custom_command(
        TARGET Alcia POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/Data/Location.json
        $<TARGET_FILE_DIR:Alcia>/Data/Location.json
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/Data/Enemies.json
        $<TARGET_FILE_DIR:Alcia>/Data/Enemies.json
)