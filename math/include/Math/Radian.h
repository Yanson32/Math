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


            /***************************************************************************//**
            *   @brief  Overload the addition operator.
            *   @param  A Radian object to be added to the current object
            *   @return A Radian object that is equal to the sum of the current object
            *           and the parameter.
            *******************************************************************************/
            Math::Radian operator + (const Radian &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the addition operator.
            *   @param  A Degree object to be added to the current object
            *   @return A Radian object that is equal to the sum of the current object
            *           and the parameter.
            *******************************************************************************/
            Math::Radian operator + (const Degree &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the subtraction operator.
            *   @param  A Radian object to be subtracted from the current object
            *   @return A Radian object that is equal to the difference of the current object
            *           and the parameter.
            *******************************************************************************/
            Math::Radian operator - (const Radian &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the subtraction operator.
            *   @param  A Degree object to be subtracted from the current object
            *   @return A Radian object that is equal to the difference of the current object
            *           and the parameter.
            *******************************************************************************/
            Math::Radian operator - (const Degree &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Radian object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            bool operator == (const Math::Radian &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Degree object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            bool operator == (const Math::Degree &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the not equal operator.
            *   @param  A Radian object that will be checked for inequality.
            *   @return A boolean True value when the objects are not equal and false
            *           otherwise.
            *******************************************************************************/
            bool operator != (const Math::Radian &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the not equal operator.
            *   @param  A Degree object that will be checked for inequality.
            *   @return A boolean True value when the objects are not equal and false
            *           otherwise.
            *******************************************************************************/
            bool operator != (const Math::Degree &deg) const;
            Math::Radian& operator = (const Math::Radian &rad);
            Math::Radian& operator = (const Math::Degree &deg);
            template <class T>
            Math::Radian operator * (const T param) const;
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
    Math::Radian Radian::operator * (const T param) const
    {
        return Math::Radian(m_Radians * param);
    }
}
#endif // MATH_RADIAN_H
