#ifndef MATH_POINT_H
#define MATH_POINT_H

#include "math_export.h"
namespace Math
{
    class Vector;
    struct MATH_EXPORT Point final
    {
        Point();
        Point(const float x, const float y);


        /**************************************************************//**
        *   @brief  The addition operator for a Point and Vector. The
        *           Vector will be added to the Point and the resulting
        *           Point will be returned.
        *   @param  vec is a mathmatical vector which will be added to the
        *           current point.
        *   @return A Math::Point object which represents the original point
        *           plus the input vector.
        ******************************************************************/
        Math::Point operator + (const Math::Vector &vec) const;

		bool operator == (const Math::Point &param) const;

		bool operator != (const Math::Point &param) const;

        float x = 0;
        float y = 0;
    };
}
#endif // MATH_POINT_H
