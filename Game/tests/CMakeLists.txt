enable_testing()

add_executable(GameTest
        UTGameInstance.cpp
)

target_link_libraries(GameTest PRIVATE Game gtest gtest_main)

add_test(NAME GameTest COMMAND GameTest)
