#include "Math/Point.h"
#include "Math/Vector.h"

namespace Math
{
    Point::Point()
    {
        //ctor
    }

    Point::Point(const float x, const float y):
    x(x),
    y(y)
    {

    }

    /**************************************************************//**
    *   @brief  The addition operator for a Point and Vector. The
    *           Vector will be added to the Point and the resulting
    *           Point will be returned.
    *   @param  vec is a mathmatical vector which will be added to the
    *           current point.
    *   @return A Math::Point object which represents the original point
    *           plus the input vector.
    ******************************************************************/
    Math::Point Point::operator + (const Math::Vector &vec) const
    {
        return Math::Point(this->x + vec.GetX(), this->y + vec.GetY());
    }

	bool Point::operator == (const Math::Point &param) const
	{
		if (this->x == param.x && this->y == param.y)
			return true;

		return false;
	}

	bool Point::operator != (const Math::Point &param) const
	{
		if(this->x != param.x)
			return true;

		if (this->y != param.y)
			return true;
		return false;
	}
}