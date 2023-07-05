#include "pch.h"
#include "../TDD2_2/prime-factor.cpp"

#include <vector>
using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1)
{
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2)
{
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3)
{
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}