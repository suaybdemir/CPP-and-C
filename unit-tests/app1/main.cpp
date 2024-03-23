#include <iostream>
#include <gtest/gtest.h>

using namespace std;

inline int add(int a,int b)
{
	return a+b;
}

TEST(add,positive)
{
	ASSERT_EQ(10,add(5,5));
}

TEST(add,negative)
{
	ASSERT_EQ(-10,add(-5,-5));
}

int main(void)
{
	::testing::InitGoogleTest();
	RUN_ALL_TESTS();

	return RUN_ALL_TESTS();
}
