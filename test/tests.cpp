
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(15));
}

TEST(PrimeTest, NPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(6), 13); 
}

TEST(PrimeTest, NextPrime) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(17), 19);
}

TEST(PrimeTest, SumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(PrimeTest, LargeNPrime) {
    EXPECT_EQ(nPrime(100), 541);
}

TEST(PrimeTest, LargeNextPrime) {
    EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(PrimeTest, LargeSumPrime) {
    EXPECT_EQ(sumPrime(100), 1060); 
}

TEST(PrimeTest, SumPrimesBelowTwoMillion) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}

TEST(PrimeTest, BoundaryCheckPrime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeTest, PerformanceSumPrime) {
    EXPECT_EQ(sumPrime(100000), 454396537);
}
