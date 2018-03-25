#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H
#include "Math/Point.h"
#include "Math/Radian.h"

namespace Math
{

    class Vector final
    {
        public:
            Vector() = default;
            explicit Vector(const Radian &direction, unsigned magnitude);
            explicit Vector(const Degree &direction, unsigned magnitude);
        private:
            unsigned m_Magnitude;
            Radian m_Direction;
    };

}
#endif // MATH_VECTOR_H
