#include <assert.h>
#include <gtest/gtest.h>

#include "../include/interface.h"

TEST(SimpleTest, Add) {
    ASSERT_EQ(add(2, 2), 4);
}

TEST(SimpleTest, Sub) {
    ASSERT_EQ(sub(2, 2), 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
