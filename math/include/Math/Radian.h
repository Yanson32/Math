#ifndef MATH_RADIAN_H
#define MATH_RADIAN_H

#include "math_export.h"
#include <iostream>

namespace Math
{
    class Degree;
    class MATH_EXPORT Radian final
    {
        public:
            Radian() = default;
            Radian(const float radian);
            explicit Radian(const Degree &degree);
            float GetRadians() const noexcept;
            void SetRadians(const float radians) noexcept;
            friend std::iostream& operator >> (std::iostream& in, Radian &rad);
            friend std::ostream& operator << (std::ostream& out, const Radian &rad);
            float get() const;
            template <class T>
            float operator * (const T param) const;
        private:
            float m_Radians = 0;
            friend class Degree;
            friend float cos(const Radian &rad);
            friend float sin(const Radian &rad);
    };

    /****************************************************************************//**
    *   @brief  Overload the insertion operator.
    *   @param  The stream where the data is.
    *   @param  The Radian object will store data from the stream.
    ********************************************************************************/
    std::iostream& operator >> (std::iostream& in, Radian &rad);


    /****************************************************************************//**
    *   @brief  Overload the extraction operator.
    *   @param  The stream where the data will be inserted.
    *   @param  The Radian object stores data that will be inserted into the stream.
    ********************************************************************************/
    std::ostream& operator << (std::ostream& in, const Radian &rad);
    template <class T>
    float Radian::operator * (const T param) const
    {
        return m_Radians * param;
    }
}
#endif // MATH_RADIAN_H
