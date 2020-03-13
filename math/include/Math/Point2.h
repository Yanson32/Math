#ifndef MATH_Point2_H
#define MATH_Point2_H

#include "math_export.h"
namespace Math
{
    template <class T>
    class Vector2;

    template <class T>
    struct MATH_EXPORT Point2 final
    {
        Point2();
        Point2(const T x, const T y);


        /**************************************************************//**
        *   @brief  The addition operator for a Point2 and Vector. The
        *           Vector will be added to the Point2 and the resulting
        *           Point2 will be returned.
        *   @param  vec is a mathmatical vector which will be added to the
        *           current Point2.
        *   @return A Math::Point2 object which represents the original Point2
        *           plus the input vector.
        ******************************************************************/
        Point2<T> operator + (const Math::Vector2<T> &vec) const;

		bool operator == (const Math::Point2<T> &param) const;

		bool operator != (const Math::Point2<T> &param) const;

        T x = 0;
        T y = 0;
    };

    template <class T>
    Point2<T>::Point2()
    {
        //ctor
    }

    template <class T>
    Point2<T>::Point2(const T x, const T y):
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
    template <class T>
    Point2<T> Point2<T>::operator + (const Vector2<T> &vec) const
    {
        return Point2<T>(this->x + vec.GetX(), this->y + vec.GetY());
    }

    template <class T>
	bool Point2<T>::operator == (const Point2<T> &param) const
	{
		if (this->x == param.x && this->y == param.y)
			return true;

		return false;
	}

    template <class T>
	bool Point2<T>::operator != (const Point2<T> &param) const
	{
		if(this->x != param.x)
			return true;

		if (this->y != param.y)
			return true;
		return false;
	}
}
#endif // MATH_Point2_H
