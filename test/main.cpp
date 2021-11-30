#include "gtest/gtest.h"
/*! \brief main() Testing fuction.
 * 
 *
 *  all _test.cpp files are called by this function
 */
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}