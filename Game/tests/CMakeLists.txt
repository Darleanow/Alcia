enable_testing()

add_executable(GameTest
        UTGameInstance.cpp
)

target_link_libraries(GameTest
        PRIVATE Game
        PRIVATE gtest
        PRIVATE gtest_main
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
)

add_test(NAME GameTest COMMAND GameTest)
