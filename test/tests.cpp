#include "gtest/gtest.h"
#include "automata.h"

TEST(test_1, test1)
{
    Automata test;
    EXPECT_EQ(OFF, test.getState());
}

TEST(on, test2)
{
    Automata test;
    test.on();
    EXPECT_EQ(WAIT, test.getState());
}
