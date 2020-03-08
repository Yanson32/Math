#include <gtest/gtest.h>
#include <Math/Radian.h>
#include <Math/Degree.h>
#include <sstream>

class RadFix :
	public ::testing::Test
{

    public:
        RadFix(): rad(0), rad2(3.25), rad3(-10.83), rad4(-23){}

    Math::Radian<float> rad;
    Math::Radian<float> rad2;
    Math::Radian<float> rad3;
    Math::Radian<float> rad4;

    const float DIVIATION = 0.001f;
};


//Test Radian constructor
TEST_F(RadFix, FloatConstructor)
{
    EXPECT_EQ(rad, Math::Radian<float>(0));
    EXPECT_EQ(rad2, Math::Radian<float>(3.25));
    EXPECT_EQ(rad3, Math::Radian<float>(-10.83));
    EXPECT_EQ(rad4, Math::Radian<float>(-23));
}

//Test the Radian constructor that takes a Degree object as a parameter
TEST_F(RadFix, DegreeConstructor)
{
    EXPECT_EQ(rad, Math::Radian<float>(Math::Degree<float>(rad)));
    EXPECT_EQ(rad2, Math::Radian<float>(Math::Degree<float>(rad2)));
    EXPECT_EQ(rad3, Math::Radian<float>(Math::Degree<float>(rad3)));
    EXPECT_EQ(rad4, Math::Radian<float>(Math::Degree<float>(rad4)));
}

//Test for copy constructor
TEST_F(RadFix, CopyConstructor)
{
    EXPECT_EQ(rad, Math::Radian<float>(rad));
    EXPECT_EQ(rad2, Math::Radian<float>(rad2));
    EXPECT_EQ(rad3, Math::Radian<float>(rad3));
    EXPECT_EQ(rad4, Math::Radian<float>(rad4));
}

//Test assignment operator
TEST_F(RadFix, AssignmentOperator)
{
    Math::Radian<float> temp = rad;
    EXPECT_EQ(rad, temp);

    temp = Math::Degree<float>(rad);
    EXPECT_EQ(temp, Math::Degree<float>(rad));

    Math::Radian<float> temp2 = rad2;
    EXPECT_EQ(rad2, temp2);

    temp2 = Math::Degree<float>(rad2);
    EXPECT_EQ(temp2, Math::Degree<float>(rad2));

    Math::Radian<float> temp3 = rad3;
    EXPECT_EQ(rad3, temp3);

    temp3 = Math::Degree<float>(rad3);
    EXPECT_EQ(temp3, Math::Degree<float>(rad3));

    Math::Radian<float> temp4 = rad4;
    EXPECT_EQ(rad4, temp4);

    temp4 = Math::Degree<float>(rad4);
    EXPECT_EQ(temp4, Math::Degree<float>(rad4));
}


//Test insertion operator
TEST_F(RadFix, InsertionOperator)
{
    std::ostringstream ss;
    Math::Radian<float> rad;
    ss << rad;
    EXPECT_STREQ(ss.str().c_str(), "0");

    std::ostringstream ss2;
    Math::Radian<float> rad2(-145);
    ss2 << rad2;
    EXPECT_STREQ(ss2.str().c_str(), "-145");

    std::ostringstream ss3;
    Math::Radian<float> rad3(240);
    ss3 << rad3;
    EXPECT_STREQ(ss3.str().c_str(), "240");
}

//Test extraction operator
TEST_F(RadFix, ExtractionOperator)
{
    std::stringstream ss;
    ss << 0;
    Math::Radian<float> rad;
    ss >> rad;
    EXPECT_EQ(rad, Math::Radian<float>(0));

    std::stringstream ss2;
    ss2 << -145;
    Math::Radian<float> rad2;
    ss2 >> rad2;
    EXPECT_EQ(rad2, Math::Radian<float>(-145));

    std::stringstream ss3;
    ss3 << 240;
    Math::Radian<float> rad3;
    ss3 >> rad3;
    EXPECT_EQ(rad3, Math::Radian<float>(240));
}

//Test the equality operator
TEST_F(RadFix, EqualityOperator)
{
    EXPECT_EQ(rad, Math::Radian<float>(0));
    EXPECT_EQ(rad, Math::Degree<float>(0));
    EXPECT_EQ(rad, Math::Degree<float>(rad));
    EXPECT_EQ(rad2, Math::Radian<float>(3.25));
    EXPECT_EQ(rad2, Math::Degree<float>(rad2));
    EXPECT_EQ(rad3, Math::Radian<float>(-10.83));
    EXPECT_EQ(rad3, Math::Degree<float>(rad3));
    EXPECT_EQ(rad4, Math::Radian<float>(-23));
    EXPECT_EQ(rad4, Math::Degree<float>(rad4));

}


//Test for inequality
TEST_F(RadFix, NotEqualOperator)
{
    EXPECT_NE(rad, rad2);
    EXPECT_NE(rad, Math::Degree<float>(rad2));

    EXPECT_NE(rad2, rad3);
    EXPECT_NE(rad2, Math::Degree<float>(rad3));

    EXPECT_NE(rad3, rad4);
    EXPECT_NE(rad3, Math::Degree<float>(rad4));
}


//Test addition operator
TEST_F(RadFix, AdditionOperator)
{
    EXPECT_EQ(rad + rad, Math::Radian<float>(0));
    EXPECT_EQ(rad + rad2, Math::Radian<float>(3.25));
    EXPECT_EQ(rad2 + rad3, Math::Radian<float>(-7.58));
    EXPECT_EQ(rad2 + Math::Degree<float>(12.3), Math::Radian<float>(3.4646755));
    EXPECT_EQ(rad3 + Math::Degree<float>(-100), Math::Radian<float>(-12.575329));
    EXPECT_EQ(rad4 + Math::Degree<float>(-52.4), Math::Radian<float>(-23.9145525));
}

//Test subtraction operator
TEST_F(RadFix, SubtractionOperator)
{
    EXPECT_EQ(rad - rad, Math::Radian<float>(0));
    EXPECT_EQ(rad - rad2, Math::Radian<float>(-3.25));
    EXPECT_EQ(rad2 - rad3, Math::Radian<float>(14.08));
    EXPECT_EQ(rad2 - Math::Degree<float>(12.3), Math::Radian<float>(3.0353245));
    EXPECT_EQ(rad3 - Math::Degree<float>(-100), Math::Radian<float>(-9.084671));
    EXPECT_EQ(rad4 - Math::Degree<float>(-52.4), Math::Radian<float>(-22.0854475));
}

//Test typecast operator
TEST_F(RadFix, FLoatTypecastOperator)
{
    EXPECT_EQ(static_cast<float>(rad), 0);
    EXPECT_EQ(static_cast<float>(rad2), 3.25);


    const float DIVIATION = 0.000001;
    float temp = static_cast<float>(rad3);
    float top = -10.83 + DIVIATION;
    float bottom = -10.83 - DIVIATION;

    EXPECT_LE(-10.83, top);
    EXPECT_GE(-10.83, bottom);
    EXPECT_EQ(static_cast<float>(rad4), -23);
}
