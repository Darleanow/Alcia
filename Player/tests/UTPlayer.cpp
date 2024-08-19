#include <gtest/gtest.h>
#include "Player.h"

TEST(UTPlayer, test_gtestb) {
  const Player player(100,5,5);

  EXPECT_EQ(player.get_health(), 100);
  EXPECT_EQ(player.get_defense(), 5);
  EXPECT_EQ(player.get_attack(), 5);
  EXPECT_EQ(player.get_level(), 1);
}