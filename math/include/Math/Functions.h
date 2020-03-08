#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Math/Constants.h"
#include "Math/Radian.h"
#include "Math/Degree.h"

namespace Math
{

    /*********************************************************//**
    *   @brief  Get the cosign of a Math::Radian object.
    *   @param  rad a Math::Radian object which will be used to
    *           calculate the cosign.
    *   @return a float representing the cosign of the input
    *           Math::Radian object.
    *************************************************************/
    template <class T>
    float cos(const Radian<T> &rad)
    {
        return std::cos(rad.m_Radians);
    }


    /***********************************************************//**
    *   @brief  Get the cosign of the Math::Degree object.
    *   @param  deg a Math::Degree object which will be used to
    *           calculate the cosign.
    *   @return a float representing the cosign of the input
    *           Math::Degree object.
    ***************************************************************/
    template <class P>
    float cos(const Degree<P> &deg)
    {
        return std::cos(deg.m_Degrees);
    }


    /***********************************************************//**
    *   @brief  Get the sin of the Math::Radian object.
    *   @param  deg a Math::Radian object which will be used to
    *           calculate the sign.
    *   @return a float representing the sin of the input
    *           Math::Radian object.
    ***************************************************************/
    template <class T>
    float sin(const Radian<T> &rad)
    {
        return std::sin(rad.m_Radians);
    }


    /***********************************************************//**
    *   @brief  Get the sin of the Math::Degree object.
    *   @param  deg a Math::Degree object which will be used to
    *           calculate the sign.
    *   @return a float representing the sin of the input
    *           Math::Degree object.
    ***************************************************************/
    template <class P>
    float sin(const Degree<P> &deg)
    {
        return std::sin(deg.m_Degrees);
    }
}

#endif // FUNCTIONS_H
