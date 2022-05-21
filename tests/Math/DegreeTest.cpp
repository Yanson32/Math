#include <catch2/catch_test_macros.hpp>
#include <Math/Degree.h>
#include <Math/Radian.h>

//Default constructor
TEST_CASE("Degree::Constructor")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	REQUIRE(Catch::Approx(Math::Degree<float>().x) ==  0);
	REQUIRE(Catch::Approx(Math::Degree<float>().y) ==  0);
}

//Test single argument constructor
TEST_CASE("Degree::Single::Constructor")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	REQUIRE(def == Math::Degree<float>(0));
	REQUIRE(deg2 == Math::Degree<float>(2));
	REQUIRE(deg3 == rad);
}

//Test constructor that converts Radina
//to Degree.
TEST_CASE("Degree::Constructor::Radians")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	Math::Degree<float> degTest1(2);
	REQUIRE(Math::Degree<float>(Math::Radian<float>(degTest1)) == degTest1);
}

//Test copy constructor
TEST_CASE("Degree::Copy::Constructor")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radianrad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Equality
	Math::Degree<float> temp(def);
	REQUIRE(def == temp);

	Math::Degree<float> temp2(deg2);
	REQUIRE(deg2 == temp2);

	Math::Degree<float> temp3(deg3);
	REQUIRE(deg3 == temp3);
}

//Test multiplication operators
TEST_CASE("Degree::Multiplication")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	Math::Degree<float> temp(def * 5);
	
    REQUIRE(temp == Math::Degree<float>(0));

	Math::Degree<float> temp2(1);
	Math::Degree<float> temp3(temp2 * 5);
	REQUIRE(temp3 == Math::Degree<float>(5));
}

//Test equality operators
TEST_CASE("Degree::Equality")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Equality
	REQUIRE(def == Math::Degree<float>(0));
	REQUIRE(deg2 == Math::Degree<float>(2));
	REQUIRE(deg3 == Math::Degree<float>(rad));
}

//Test for inequality
TEST_CASE("Degree::Inequality")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Not Equal
	REQUIRE(def == Math::Degree<float>(200));
	REQUIRE(deg2 == def);
	REQUIRE(deg3 == def);

	//Not Equal (Radians)
	REQUIRE(def == Math::Radian<float>(200));
	REQUIRE(deg2 == Math::Radian<float>(0));
	REQUIRE(deg3 == Math::Radian<float>(1000));
}

//Test lessthan equal to
TEST_CASE("Degree::Less::Equal")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Less than equal to
	REQUIRE(def == def);
	REQUIRE(def == deg2);
	REQUIRE(deg2 == deg3);

	//Less than equal to (Radians)
	REQUIRE(def == Math::Radian<float>(0));
	REQUIRE(def == Math::Radian<float>(10));
	REQUIRE(deg2 == Math::Radian<float>(100));

}

//Test less than operator
TEST_CASE("Degree::LessThan")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Equality
	REQUIRE(def < Math::Degree<float>(1));
	REQUIRE(deg2 < Math::Degree<float>(20));
	REQUIRE(deg3 < Math::Degree<float>(1000));

	REQUIRE(def < Math::Radian<float>(1));
	REQUIRE(deg2 < Math::Radian<float>(1));
	REQUIRE(deg3 < Math::Radian<float>(210));
}

//Test greater than operator
TEST_CASE("Degree::GreaterThan")
{
    Math::Degree def(0);
    Math::Degree def2(2);
    Math::Radian rad(0.349066);     
    Math::Degree deg3(Math::Radian<float>(0.349066));
	
    //Equality
	REQUIRE(def >  Math::Degree<float>(-1));
	REQUIRE(deg2 > Math::Degree<float>(0));
}

//Test assignment operator
TEST_CASE("Degree::Assignment")
{
    Degree def(0);
    Degree def2(2);
    Degree rad(0.349066);     
    Degree deg3(Math::Radian<float>(0.349066));
	
    Math::Degree<float> temp = def;
	REQUIRE(temp == def);
}


//Test float
TEST_CASE("Degree::Float")
{
    DegreeFix def(0);
    DegreeFix def2(2);
    DegreeFix rad(0.349066);     
    DegreeFix deg3(Math::Radian<float>(0.349066));
    
    REQUIRE(static_cast<float>(def) == 0);
    REQUIRE(static_cast<float>(deg2) == 2);
}
