#ifndef MATH_RADIAN_H
#define MATH_RADIAN_H
#include "Math/Degree.h"

namespace Math
{
    class Radian final
    {
        public:
            Radian() = default;
            explicit Radian(const Degree &degree);
            float GetRadians() const noexcept;
            void SetRadians(const float radians) noexcept;
        private:
            float m_Radians = 0;
            friend class Degree;
    };
}
#endif // MATH_RADIAN_H
