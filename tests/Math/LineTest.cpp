#include <gtest/gtest.h>
#include <Math/Line.h>
#include <Math/Point.h>

//Test the constructor
TEST(Line, Constructor)
{
	//Test default constructor
	Math::Line line;
	EXPECT_EQ(line.m_Start.x, 0);
	EXPECT_EQ(line.m_Start.y, 0);
	EXPECT_EQ(line.m_End.x, 0);
	EXPECT_EQ(line.m_End.y, 0);

	//Test constructor with parameters
	Math::Point start(100, 200);
	Math::Point end(300, 400);
	Math::Line line2(start, end);
	EXPECT_EQ(line2.m_Start.x, start.x);
	EXPECT_EQ(line2.m_Start.y, start.y);
	EXPECT_EQ(line2.m_End.x, end.x);
	EXPECT_EQ(line2.m_End.y, end.y);

	//Test copy constructor
	Math::Line line3(line2);
	EXPECT_EQ(line3, line2);
}


//Test the Reverse method
TEST(Line, Reverse)
{
	Math::Point start(100, 200);
	Math::Point end(300, 400);
	Math::Line line(start, end);
	EXPECT_EQ(line.Reverse().m_Start.x, end.x);
	EXPECT_EQ(line.Reverse().m_Start.y, end.y);
	EXPECT_EQ(line.Reverse().m_End.x, start.x);
	EXPECT_EQ(line.Reverse().m_End.y, start.y);
}


//Test left and right normals
TEST(Line, Normal)
{
	Math::Point start(100, 100);
	Math::Point end(200, 200);

	Math::Line line(start, end);
	Math::Line leftNormal(start, Math::Point(-100, 100));
	EXPECT_EQ(leftNormal, line.LeftNormal());

	Math::Line rightNormal(start, Math::Point(100, -100));
	EXPECT_EQ(line.RightNormal(), rightNormal);
}

//Test magnitude method
TEST(Line, Magnitude)
{
	Math::Line line({ 0, 0 }, { 100, 0 });
	EXPECT_EQ(line.Magnitude(), 100);
}

//Test Equality
TEST(Line, Equality)
{
	Math::Line l1({ 100, 100 }, { 200, 200 });
	Math::Line l2({ 100, 100 }, { 200, 200 });
	Math::Line l3({ 0, 0 }, { 200, 200 });
	EXPECT_EQ(l1, l1);
	EXPECT_EQ(l1, l2);
	EXPECT_NE(l1, l3);
}
