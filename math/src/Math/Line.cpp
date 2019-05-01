#include "Math/Line.h"
#include <cmath>

namespace Math
{

    Line::Line(const Point &start, const Point &end):
    m_Start(start),
    m_End(end)
    {

    }

    Line Line::Reverse() const
    {
        return Line(m_End, m_Start);
    }

    Line Line::LeftNormal() const
    {
        float dx = m_End.x - m_Start.x;
        float dy = m_End.y - m_Start.y;
        return Line(m_Start, {-dy, dx});
    }

    Line Line::RightNormal() const
    {
        float dx = m_End.x - m_Start.x;
        float dy = m_End.y - m_Start.y;
        return Line(m_Start, {dy, -dx});
    }

    unsigned Line::Magnitude() const
    {
        auto a = std::abs(m_End.x - m_Start.x);
        auto b = std::abs(m_End.y - m_Start.y);
        return std::sqrt(a * a + b * b);
    }

	bool Line::operator == (const Math::Line &param) const
	{
		if (this->m_Start.x == param.m_Start.x && this->m_Start.y == param.m_Start.y)
			if (this->m_End.x == param.m_End.x && this->m_End.y == param.m_End.y)
				return true;
		
		return false;
	}

	bool Line::operator != (const Math::Line &param) const
	{
		if (this->m_Start.x != param.m_Start.x)
			return true;

		if (this->m_Start.y != param.m_Start.y)
			return true;

		if (this->m_End.x != param.m_End.x)
			return true;

		if (this->m_End.y != param.m_End.y)
			return true;
	}
}

