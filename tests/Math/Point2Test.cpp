#include <catch2/catch_test_macros.hpp>
#include <Math/Vector2.h>

//Test constructor
TEST_CASE("Math::Vector2::Constructor")
{
	Math::Vector2<float> vec;
	
	REQUIRE(vec.x == 0);
	REQUIRE(vec.y == 0);

	Math::Vector2<float> vec2(1, 5);
	REQUIRE(vec2.x == 1);
	REQUIRE(vec2.y == 5);
}

//Test equality
TEST_CASE("Math::Vector2::Equality")
{
	Math::Vector2<float> p1(100, 200);
	Math::Vector2<float> p2(100, 200);
	//REQUIRE(p1 == p2);

}
