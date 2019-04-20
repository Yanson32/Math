#include <gtest/gtest.h>
#include <Math/Degree.h>
#include <Math/Radian.h>
TEST(Degree, Constructor)
{
	Math::Degree deg;
	EXPECT_EQ(deg * 1, 0);

	Math::Degree deg2(2);
	EXPECT_EQ(deg2 * 1, 2);

	Math::Radian rad(0.349066);
	Math::Degree deg3(rad);
	EXPECT_EQ(deg3 * 1, 20);
}
