#include <gtest/gtest.h>
#include <Math/Degree.h>
#include <Math/Radian.h>

class DegreeFix :
	public ::testing::Test
{
protected:
	DegreeFix():deg2(2), rad(0.349066), deg3(Math::Radian(0.349066))
	{

	}

	//void TearDown() override {}
	Math::Degree def;
	Math::Degree deg2;
	Math::Degree deg3;
	Math::Radian rad;

	const float DIVIATION = 0.001f;
};

//Test constructor
TEST_F(DegreeFix, Constructor)
{
	EXPECT_EQ(def, Math::Degree(0));
	EXPECT_EQ(deg2, Math::Degree(2));
	EXPECT_NE(deg3, rad);
}

//Test copy constructor
TEST_F(DegreeFix, CopyConstructor)
{
	//Equality
	Math::Degree temp(def);
	EXPECT_EQ(def, temp);

	Math::Degree temp2(deg2);
	EXPECT_EQ(deg2, temp2);

	Math::Degree temp3(deg3);
	EXPECT_EQ(deg3, temp3);
}

//Test multiplication operators
TEST_F(DegreeFix, Multiplication)
{
	Math::Degree temp(def * 5);
	EXPECT_EQ(temp, Math::Degree(0));

	Math::Degree temp2(1);
	Math::Degree temp3(temp2 * 5);
	EXPECT_EQ(temp3, Math::Degree(5));
}

//Test equality operators
TEST_F(DegreeFix, Equality)
{
	//Equality
	EXPECT_EQ(def, Math::Degree(0));
	EXPECT_EQ(deg2, Math::Degree(2));
	EXPECT_EQ(deg3, Math::Degree(rad));
}

//Test for inequality
TEST_F(DegreeFix, NotEqual)
{
	//Not Equal
	EXPECT_NE(def, Math::Degree(200));
	EXPECT_NE(deg2, def);
	EXPECT_NE(deg3, def);

	//Not Equal (Radians)
	EXPECT_NE(def, Math::Radian(200));
	EXPECT_NE(deg2, Math::Radian(0));
	EXPECT_NE(deg3, Math::Radian(1000));
}

//Test lessthan equal to
TEST_F(DegreeFix, LessThanEqualTo)
{
	//Less than equal to
	EXPECT_LE(def, def);
	EXPECT_LE(def, deg2);
	EXPECT_LE(deg2, deg3);

	//Less than equal to (Radians)
	EXPECT_LE(def, Math::Radian(0));
	EXPECT_LE(def, Math::Radian(10));
	EXPECT_LE(deg2, Math::Radian(100));

}

//Test less than operator
TEST_F(DegreeFix, Lessthan)
{
	//Equality
	EXPECT_LT(def, Math::Degree(1));
	EXPECT_LT(deg2, Math::Degree(20));
	EXPECT_LT(deg3, Math::Degree(1000));

	EXPECT_LT(def, Math::Radian(1));
	EXPECT_LT(deg2, Math::Radian(1));
	EXPECT_LT(deg3, Math::Radian(210));
}

//Test greater than operator
TEST_F(DegreeFix, Greaterthan)
{
	//Equality
	EXPECT_GT(def, Math::Degree(-1));
	EXPECT_GT(deg2, Math::Degree(0));
}

//Test assignment operator
TEST_F(DegreeFix, Assignment)
{
	Math::Degree temp = def;
	EXPECT_EQ(temp, def);
}
