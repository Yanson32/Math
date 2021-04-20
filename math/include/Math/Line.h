#ifndef MATH_LINE_H
#define MATH_LINE_H

#include "Math/Vector2.h"
#include <cmath>

namespace Math
{
    template <class T>
    class Line final
    {
        public:
            Line();
            Line(const Vector2 &start, const Vector2 &end);
            Line<T> Reverse() const;
            Line<T> LeftNormal() const;
            Line<T> RightNormal() const;
            unsigned Magnitude() const;
			bool operator == (const Math::Line<T> &param) const;
			bool operator != (const Math::Line<T> &param) const;
            Vector2 m_Start;
            Vector2 m_End;
    };


    template <class T>
    Line<T>::Line():m_Start<T>(0, 0), m_End<T>(0, 0)
    {

    }

    Line<T>::Line(const Vector2 &start, const Vector2 &end):
    m_Start<T>(start),
    m_End<T>(end)
    {

    }

    Line<T> Line<T>::Reverse() const
    {
        return Line<T>(m_End, m_Start);
    }

    Line<T> Line<T>::LeftNormal() const
    {
        T dx = m_End.x - m_Start.x;
        T dy = m_End.y - m_Start.y;
        return Line<T>(m_Start, {-dy, dx});
    }

    Line<T> Line::RightNormal() const
    {
        T dx = m_End.x - m_Start.x;
        T dy = m_End.y - m_Start.y;
        return Line<T>(m_Start, {dy, -dx});
    }

    unsigned Line<T>::Magnitude() const
    {
        auto a = std::abs(m_End.x - m_Start.x);
        auto b = std::abs(m_End.y - m_Start.y);
        return std::sqrt(a * a + b * b);
    }

	bool Line<T>::operator == (const Math::Line<T> &param) const
	{
		if (this->m_Start.x == param.m_Start.x && this->m_Start.y == param.m_Start.y)
			if (this->m_End.x == param.m_End.x && this->m_End.y == param.m_End.y)
				return true;

		return false;
	}

	bool Line<T>::operator != (const Math::Line<T> &param) const
	{
		if (this->m_Start.x != param.m_Start.x)
			return true;

		if (this->m_Start.y != param.m_Start.y)
			return true;

		if (this->m_End.x != param.m_End.x)
			return true;

		if (this->m_End.y != param.m_End.y)
			return true;

        return false;
	}
}

#endif // MATH_LINE_H
