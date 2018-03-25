#include "Math/Vector.h"
namespace Math
{
    Vector::Vector(const Radian &direction, unsigned magnitude):
    m_Magnitude(magnitude),
    m_Direction(direction)
    {

    }

    Vector::Vector(const Degree &direction, unsigned magnitude):
    m_Magnitude(magnitude),
    m_Direction(direction)
    {

    }
}
