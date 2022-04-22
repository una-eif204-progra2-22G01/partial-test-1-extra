//
// Created by Maikol Guzman on 8/27/20.
//

#include "gtest/gtest.h"

int main(int argc, char **argv) {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}