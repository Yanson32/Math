#include <catch2/catch_test_macros.hpp>
#include <Math/Vector2.h>
#include <iostream>
#include <catch2/catch_approx.hpp>


//Test constructor
TEST_CASE("Math::Vector2::Constructor")
{
	Math::Vector2<float> vec;
	
	REQUIRE(vec.x == 0);
	REQUIRE(vec.y == 0);

	Math::Vector2<float> vec2(1, 5.7);
	REQUIRE(vec2.x == 1);
	REQUIRE(vec2.y == 5.7f);

    
}

//Test copy constructor
TEST_CASE("Math::Vector2::Copy::Constructor")
{
	Math::Vector2<float> p1(4.3, 6.2);
    Math::Vector2<float> p2(p1);	
	REQUIRE(p1.x == Catch::Approx(p2.x));
	REQUIRE(p1.y == Catch::Approx(p2.y));
}

//Test assignment 
TEST_CASE("Math::Vector2::Assignment")
{
	Math::Vector2<float> p1(4.3, 6.2);
    Math::Vector2<float> p2 = p1;	
	REQUIRE(p1.x == Catch::Approx(p2.x));
	REQUIRE(p1.y == Catch::Approx(p2.y));
}


//Test equality
TEST_CASE("Math::Vector2::Equality")
{
	Math::Vector2<float> p1(100, 200);
	Math::Vector2<float> p2(100, 200);
	REQUIRE(p1 == p2);

    Math::Vector2<float> p3(24.3, 57.8);
    Math::Vector2<float> p4(24.3, 57.8);
    REQUIRE(p3 == p4); 
}


//Test addition
TEST_CASE("Math::operator+")
{
	Math::Vector2<float> p1(0, 0);
	Math::Vector2<float> p2(0, 0);
	REQUIRE(p1 + p2 == p1);

    Math::Vector2<float> p3(24.3, 57.8);
    Math::Vector2<float> p4(24.3, 57.8);
    Math::Vector2<float> p5(48.6, 115.6);
    REQUIRE(p3 + p4 == p5); 
    
}


//Test subtraction
TEST_CASE("Math::operator-")
{
	Math::Vector2<float> p1(0, 0);
	Math::Vector2<float> p2(0, 0);
	REQUIRE(p1 -  p2 == p1);

    Math::Vector2<float> p3(24.3, 57.8);
    Math::Vector2<float> p4(2.3, 157.8);
    Math::Vector2<float> p5(22, -100);
    REQUIRE(p3 - p4 == p5); 
    
}


//Test multiplication
TEST_CASE("Math::operator*")
{
    //Multiply by zero
	Math::Vector2<float> p1(5, 5);
    Math::Vector2<float> p2(0, 0);
    p1 = p1 * 0;
	REQUIRE(p1.x == Catch::Approx(p2.x));
	REQUIRE(p1.y == Catch::Approx(p2.y));

    //Multiply positive numbers
    Math::Vector2<float> p3(24.3, 57.8);
    Math::Vector2<float> p4 = p3 * 13;
    Math::Vector2<float> p5(315.9, 751.4);
    REQUIRE(p4.x == Catch::Approx(p5.x)); 
    REQUIRE(p4.y == Catch::Approx(p5.y)); 
   
    //Multiply negative numbers
    Math::Vector2<float> p6(-24.3, -57.8);
    Math::Vector2<float> p7 = p6 * 13;
    Math::Vector2<float> p8(-315.9, -751.4);
    REQUIRE(p7.x == Catch::Approx(p8.x)); 
    REQUIRE(p7.y == Catch::Approx(p8.y)); 

}

//Test dot product
TEST_CASE("Math::dot")
{
    //Dot product with positive numbers
	Math::Vector2<float> p1(5, 5);
    Math::Vector2<float> p2(8, 3);
	REQUIRE(Catch::Approx(p1.dot(p2))  == 55);

   //Dot product with negative numbers
	Math::Vector2<float> p3(-5, -5);
    Math::Vector2<float> p4(-8, -3);
	REQUIRE(Catch::Approx(p3.dot(p4))  == 55);
     

    //Dot product with negative and positive numbers
	Math::Vector2<float> p5(-5, 5);
    Math::Vector2<float> p6(8, -3);
	REQUIRE(p5.dot(p6)  == -55);
    

    //Floating point numbers
    Math::Vector2<float> p7(5.4f, 9.1f);
    Math::Vector2<float> p8(2.3, 3.4);
	REQUIRE(p7.dot(p8)  == Catch::Approx(43.36f));
    
}


//Test Magnitude 
TEST_CASE("Math::magnitude")
{
	Math::Vector2<int> p1(8, 5);
	REQUIRE(p1.magnitude()  == 9);

	Math::Vector2<float> p2(15, 5);
	REQUIRE(p2.magnitude()  == Catch::Approx(15.81139f));
}


//Test Normalize 
TEST_CASE("Math::Normalize")
{
	Math::Vector2<float> p1(33.3, 43.5);
    p1.normalize();
	
    REQUIRE(p1.normalize().magnitude()  == 1);
}


