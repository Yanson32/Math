#include "Math/Vector.h"
namespace Math
{
    Vector::Vector(const Radian &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }

    Vector::Vector(const Degree &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }
}
