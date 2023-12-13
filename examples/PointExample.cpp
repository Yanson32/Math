#include "Math/Point.h"

int main()
{
    Math::Point<float> p1;
    Math::Point<float> p2(5, 10);
   
    std::cout << "p1.x = " << p1.m_x << "p1.y = " << p1.m_y << std::endl;
    std::cout << "p2.x = " << p2.m_x << "p2.y = " << p2.m_y << std::endl;

    std::cout << "p2 prime is an image of p2 by (7, -2) " << std::endl;
    Math::Point<float> p2prime = p2.translate(7, -2);

    std::cout << "p2 prime is at (" << p2.m_x << "," << p2.m_y << ")" << std::endl;
     

    return 0;
}

