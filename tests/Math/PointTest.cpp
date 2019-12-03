#include <gtest/gtest.h>
#include <Math/Point.h>
#include <Math/Vector.h>

//Test constructor
TEST(Point, Constructor)
{
	Math::Point point;
	
	EXPECT_EQ(point.x, 0);
	EXPECT_EQ(point.y, 0);

	Math::Point point2(1, 5);
	EXPECT_EQ(point2.x, 1);
	EXPECT_EQ(point2.y, 5);
}

//Test equality
TEST(Point, Equality)
{
	Math::Point p1(100, 200);
	Math::Point p2(100, 200);
	EXPECT_EQ(p1, p2);

	Math::Point p3(0, 0);
	EXPECT_NE(p1, p3);
	
}