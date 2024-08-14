add_executable(PlayerTest
        UTPlayer.cpp
)

target_link_libraries(PlayerTest PRIVATE Player gtest gtest_main)

add_test(NAME PlayerTest COMMAND PlayerTest)
