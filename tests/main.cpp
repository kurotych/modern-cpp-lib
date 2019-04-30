#include <assert.h>
#include <gtest/gtest.h>

#include "../include/library.h"

TEST(SimpleTest, NegativeNos) {
    ASSERT_EQ(add(2, 2), 4);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
