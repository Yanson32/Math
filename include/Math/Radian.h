#ifndef MATH_RADIAN_H
#define MATH_RADIAN_H

namespace Math
{
    class Radian final
    {
        public:
            Radian() = default;
            float GetRadians() const;
            void SetRadians(const float radians);
        protected:
        private:
            float m_radian;
    };
}
#endif // MATH_RADIAN_H
