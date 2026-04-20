cmake_minimum_required(VERSION 4.0)
project(
  Alcia
  VERSION 1.0.0
  LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

add_compile_options(-Wall -Wextra -Wpedantic -Wshadow -Wconversion -Werror)

add_executable(Alcia
  src/main.cpp
)

target_include_directories(Alcia
                            PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(test_suite
  tests/test_main.cpp
)
target_link_libraries(test_suite PUBLIC GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_suite)

enable_testing()
