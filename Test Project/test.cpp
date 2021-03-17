#include "pch.h"
#include "calc.h"
#include <gtest/gtest.h>

calc c;

TEST(NewTest, EqualTest) {
	int result = c.add(10, 10);
	EXPECT_EQ(result, 20);
	EXPECT_TRUE(true);
}

TEST(NewTest, BinaryGreater) {
	int result = c.mult(2, 10);
	EXPECT_GT(result, 15);
	EXPECT_TRUE(true);
}

TEST(NewTest, BinaryNotGreater) {
	EXPECT_LT(1, 2);
	EXPECT_TRUE(true);
}

TEST(NewTest, BinaryNotGreaterExpFalse) {
	EXPECT_LT(1, 2);
	EXPECT_FALSE(false);
}

TEST(NewTest, StringComparison) {
	EXPECT_STREQ("yes", "yes", "yes");
	EXPECT_TRUE(true);
}

TEST(NewTest, StringComparisonCase) {
	EXPECT_STREQ("Yes", "yes", "yes");
	EXPECT_TRUE(true);
}

TEST(NewTest, StringComparisonFalse) {
	EXPECT_STREQ("yes", "no");
	EXPECT_TRUE(true);
}
TEST(NewTest, MathTest) {
	int result1 = c.add(10, 10);
	int result2 = c.mult(10, 2);
	EXPECT_EQ(result1, result2);
	EXPECT_TRUE(true);
}

TEST(NewTest, IterativeTest) {
	int num[5] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; ++i) {
		EXPECT_EQ(num[i], i);
	}
}
