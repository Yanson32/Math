#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H

#include "math_export.h"
namespace Math
{
    class Radian;
    class MATH_EXPORT Degree final
    {
        public:
            Degree() = default;
            Degree(const float degree);
            explicit Degree(const Radian &radian);

            template <class T>
            T operator * (const T param) const;
        private:
            float m_Degrees = 0;
            friend class Radian;
            friend float cos(const Degree &deg);
            friend float sin(const Degree &deg);
    };


    template <class T>
    T Degree::operator * (const T param) const
    {
        return m_Degrees * param;
    }

}
#endif
