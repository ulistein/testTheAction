#include <gtest/gtest.h>
#include "../header/Example.hpp"

TEST(Example, MAC)
{
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;

    EXPECT_EQ(oldSum + x * y, MAC(x, y ,sum));
}

TEST(Example2, plsFail)
{
    EXPECT_FALSE(true);
}