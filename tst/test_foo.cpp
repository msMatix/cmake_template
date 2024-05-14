#include <gtest/gtest.h>

#include "../src/modul1/foo.h"

TEST(FooTest, HandlesZeroInput) {
    Foo foo;
    EXPECT_EQ(0, foo.add(0, 0));
}

TEST(FooTest, HandlesPositiveInput) {
    Foo foo;
    EXPECT_EQ(5, foo.add(2, 3));
}

TEST(FooTest, HandlesNegativeInput) {
    Foo foo;
    EXPECT_EQ(-1, foo.add(-3, 2));
}
