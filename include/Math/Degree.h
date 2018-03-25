#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H

namespace Math
{
    class Degree final
    {
        public:
            Degree() = default;
            Degree(const float degree);

            template <class T>
            T operator * (const T param) const;
        private:
            float m_Degrees = 0;
            friend class Radian;
    };


    template <class T>
    T Degree::operator * (const T param) const
    {
        return m_Degrees * param;
    }

}
#endif
