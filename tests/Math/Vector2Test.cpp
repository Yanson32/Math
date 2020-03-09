#include <gtest/gtest.h>
#include <Math/Vector2.h>

class Vector2Fix : public ::testing::Test
{
    protected:  
	    Vector2Fix(): vec2(12.0f, 23.0f)
	    {

	    }
    Math::Vector2<float> vec;
    Math::Vector2<float> vec2;
};

//Test constructor
TEST_F(Vector2Fix, Constructor)
{
	EXPECT_EQ(vec.x, 0);
	EXPECT_EQ(vec.y, 0);
}

//Test two argument constructor
TEST_F(Vector2Fix, ConstructorDoubleArgument)
{
	EXPECT_EQ(vec2.x, 12.0f);
	EXPECT_EQ(vec2.y, 23.0f);
}

//Test magnitude method
TEST_F(Vector2Fix, magnitude)
{
	EXPECT_EQ(vec.magnitude(), 0);

    //Check range
    EXPECT_LT(vec2.magnitude(), 26);
    EXPECT_GT(vec2.magnitude(), 25);
}

//Test normalize method
TEST_F(Vector2Fix, normalize)
{
    //Normalize the vector
    vec2.normalize();

    //Check range
    EXPECT_LT(vec2.magnitude(), 1.1);
    EXPECT_GT(vec2.magnitude(), 0.9);
}

//Test scalar multiplication
TEST_F(Vector2Fix, scalarMultiplication)
{
    Math::Vector2<float> temp = vec2 * 10;

    EXPECT_LT(temp.x, 120.1);
    EXPECT_GT(temp.x, 119.9);
}

//Test vector subtraction
TEST_F(Vector2Fix, vectorSubtraction)
{
    Math::Vector2<float> temp(2, 3);
    Math::Vector2<float> result = vec2 - temp;
    
    EXPECT_EQ(result.x, 10);
    EXPECT_EQ(result.y, 20);
}

//Test vector addition
TEST_F(Vector2Fix, vectorAddition)
{
    Math::Vector2<float> temp(2, 3);
    Math::Vector2<float> result = vec2 + temp;

    EXPECT_EQ(result.x, 14);
    EXPECT_EQ(result.y, 26);
}

//Test dot product
TEST_F(Vector2Fix, dotProduct)
{
    Math::Vector2<float> temp(6, 18);
    float result = vec2.dot(temp);

    EXPECT_EQ(result, 486);
}
