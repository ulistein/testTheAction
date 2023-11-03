#include <gtest/gtest.h>
#include "../header/Example.hpp"

TEST(Example, sum)
{
    int x = 42;
    int y = 16;
    EXPECT_EQ(58, sum(x, y));
}

TEST(Example, diff)
{
    int x = 42;
    int y = 16;
    EXPECT_EQ(26, difference(x, y));
}
