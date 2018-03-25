#ifndef MATH_POINT_H
#define MATH_POINT_H

namespace Math
{
    struct Point final
    {
        Point();
        Point(const float x, const float y);
        float m_x = 0;
        float m_y = 0;
    };
}
#endif // MATH_POINT_H
