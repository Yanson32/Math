#include <catch2/catch_test_macros.hpp>
#include <Math/Degree.h>
#include <Math/Radian.h>

//Default constructor
TEST_CASE(DegreeFix, DefaultConstructor)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	EXPECT_EQ(Math::Degree<float>(), 0);
}

//Test single argument constructor
TEST_CASE(DegreeFix, SingleArgumentConstructor)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	EXPECT_EQ(def, Math::Degree<float>(0));
	EXPECT_EQ(deg2, Math::Degree<float>(2));
	EXPECT_NE(deg3, rad);
}

//Test constructor that converts Radina
//to Degree.
TEST_CASE(DegreeFix, RadianToDegreeConstructor)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	Math::Degree<float> degTest1(2);
	EXPECT_EQ(Math::Degree<float>(Math::Radian<float>(degTest1)), degTest1);
}

//Test copy constructor
TEST_CASE(DegreeFix, CopyConstructor)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Equality
	Math::Degree<float> temp(def);
	EXPECT_EQ(def, temp);

	Math::Degree<float> temp2(deg2);
	EXPECT_EQ(deg2, temp2);

	Math::Degree<float> temp3(deg3);
	EXPECT_EQ(deg3, temp3);
}

//Test multiplication operators
TEST_CASE(DegreeFix, Multiplication)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	Math::Degree<float> temp(def * 5);
	
    EXPECT_EQ(temp, Math::Degree<float>(0));

	Math::Degree<float> temp2(1);
	Math::Degree<float> temp3(temp2 * 5);
	EXPECT_EQ(temp3, Math::Degree<float>(5));
}

//Test equality operators
TEST_CASE(DegreeFix, Equality)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Equality
	EXPECT_EQ(def, Math::Degree<float>(0));
	EXPECT_EQ(deg2, Math::Degree<float>(2));
	EXPECT_EQ(deg3, Math::Degree<float>(rad));
}

//Test for inequality
TEST_CASE(DegreeFix, NotEqual)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Not Equal
	EXPECT_NE(def, Math::Degree<float>(200));
	EXPECT_NE(deg2, def);
	EXPECT_NE(deg3, def);

	//Not Equal (Radians)
	EXPECT_NE(def, Math::Radian<float>(200));
	EXPECT_NE(deg2, Math::Radian<float>(0));
	EXPECT_NE(deg3, Math::Radian<float>(1000));
}

//Test lessthan equal to
TEST_CASE(DegreeFix, LessThanEqualTo)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Less than equal to
	EXPECT_LE(def, def);
	EXPECT_LE(def, deg2);
	EXPECT_LE(deg2, deg3);

	//Less than equal to (Radians)
	EXPECT_LE(def, Math::Radian<float>(0));
	EXPECT_LE(def, Math::Radian<float>(10));
	EXPECT_LE(deg2, Math::Radian<float>(100));

}

//Test less than operator
TEST_CASE(DegreeFix, Lessthan)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Equality
	EXPECT_LT(def, Math::Degree<float>(1));
	EXPECT_LT(deg2, Math::Degree<float>(20));
	EXPECT_LT(deg3, Math::Degree<float>(1000));

	EXPECT_LT(def, Math::Radian<float>(1));
	EXPECT_LT(deg2, Math::Radian<float>(1));
	EXPECT_LT(deg3, Math::Radian<float>(210));
}

//Test greater than operator
TEST_CASE(DegreeFix, Greaterthan)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    //Equality
	EXPECT_GT(def, Math::Degree<float>(-1));
	EXPECT_GT(deg2, Math::Degree<float>(0));
}

//Test assignment operator
TEST_CASE(DegreeFix, Assignment)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
	
    Math::Degree<float> temp = def;
	EXPECT_EQ(temp, def);
}


//Test float
TEST_CASE(DegreeFix, FloatTypecastOperator)
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
    
    EXPECT_EQ(static_cast<float>(def), 0);
    EXPECT_EQ(static_cast<float>(deg2), 2);
}
