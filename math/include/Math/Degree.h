#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H
#include <iostream>
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
			//Equality operators
			bool operator == (const Degree &param) const;
			bool operator != (const Degree &param) const;
			bool operator <= (const Degree &param) const;
			bool operator >= (const Degree &param) const;

			bool operator == (const Radian &param) const;
			bool operator != (const Radian &param) const;
			bool operator <= (const Radian &param) const;
			bool operator >= (const Radian &param) const;

			//Less than 
			bool operator < (const Degree &param) const;
			bool operator < (const Radian &param) const;

			//Greater than 
			bool operator > (const Degree &param) const;

			friend std::ostream& operator << (std::ostream& out, const Degree &param);
			friend std::istream& operator >> (std::istream& in, const Degree &param);
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
