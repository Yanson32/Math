#include <gtest/gtest.h>
#include <Math/Radian.h>
#include <Math/Degree.h>
#include <sstream>

class RadFix :
	public ::testing::Test
{

    public:
        RadFix(): rad2(3.25), rad3(-10.83), rad4(-23){}

    Math::Radian rad;
    Math::Radian rad2;
    Math::Radian rad3;
    Math::Radian rad4;

    const float DIVIATION = 0.001f;
};


//Test Radian constructor
TEST_F(RadFix, Constructor)
{
    EXPECT_EQ(rad.get(), 0);
    EXPECT_NEAR(rad2.get(), 3.25, DIVIATION);
    EXPECT_NEAR(rad3.get(), -10.83, DIVIATION);
    EXPECT_EQ(rad4.get(), -23);
}

//Test insertion operator
TEST_F(RadFix, InsertionOperator)
{
    std::ostringstream ss;
    Math::Radian rad;
    ss << rad;
    EXPECT_STREQ(ss.str().c_str(), "0");

    std::ostringstream ss2;
    Math::Radian rad2(-145);
    ss2 << rad2;
    EXPECT_STREQ(ss2.str().c_str(), "-145");

    std::ostringstream ss3;
    Math::Radian rad3(240);
    ss3 << rad3;
    EXPECT_STREQ(ss3.str().c_str(), "240");
}

//Test extraction operator
TEST_F(RadFix, ExtractionOperator)
{
    std::stringstream ss;
    ss << 0;
    Math::Radian rad;
    ss >> rad;
    EXPECT_EQ(rad.get(), 0);

    std::stringstream ss2;
    ss2 << -145;
    Math::Radian rad2;
    ss2 >> rad2;
    EXPECT_EQ(rad2.get(), -145);

    std::stringstream ss3;
    ss3 << 240;
    Math::Radian rad3;
    ss3 >> rad3;
    EXPECT_EQ(rad3.get(), 240);
}

//Test the equality operator
TEST_F(RadFix, EqualityOperator)
{
    EXPECT_EQ(rad, Math::Radian(0));
    EXPECT_EQ(rad, Math::Degree(0));
    EXPECT_EQ(rad, Math::Degree(rad));
    EXPECT_EQ(rad2, Math::Radian(3.25));
    EXPECT_EQ(rad2, Math::Degree(3.25));
    EXPECT_EQ(rad3, Math::Radian(-10.83));
    EXPECT_EQ(rad3, Math::Degree(-10.83));
    EXPECT_EQ(rad4, Math::Degree(-23));
    EXPECT_EQ(rad4, Math::Radian(-23));
}
