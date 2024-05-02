#include "../src/modul2/bar.h"
#include <gtest/gtest.h>

TEST(BarTest, EchoReturnsSameString) {
  Bar bar;
  std::string input = "Hello, world!";
  EXPECT_EQ(input, bar.echo(input));
}

TEST(BarTest, EchoHandlesEmptyString) {
  Bar bar;
  std::string input = "";
  EXPECT_EQ(input, bar.echo(input));
}
