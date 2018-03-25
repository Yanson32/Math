#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H

namespace Math
{
    class Degree final
    {
        public:
            Degree() = default;
            Degree(const float degree);
        private:
            float m_degree = 0;
    };
}
#endif
