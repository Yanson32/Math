#include <gtest/gtest.h>
#include <Math/Point2.h>
#include <Math/Vector.h>

//Test constructor
TEST(Point, Constructor)
{
	Math::Point2<float> point;
	
	EXPECT_EQ(point.x, 0);
	EXPECT_EQ(point.y, 0);

	Math::Point2<float> point2(1, 5);
	EXPECT_EQ(point2.x, 1);
	EXPECT_EQ(point2.y, 5);
}

//Test equality
TEST(Point, Equality)
{
	Math::Point2<float> p1(100, 200);
	Math::Point2<float> p2(100, 200);
	EXPECT_EQ(p1, p2);

	Math::Point2<float> p3(0, 0);
	EXPECT_NE(p1, p3);
	
}
