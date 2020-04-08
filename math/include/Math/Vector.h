#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H

#include "Math/Radian.h"
#include "Math/Functions.h"

/*******************************************************************//**
*   @author Wayne J Larson Jr
*   @brief  The Vector class is designed to mimic the mathmatical
*           concept of a vector.
***********************************************************************/
namespace Math
{
    template <class T>
    class Vector final
    {
        public:
            Vector() = default;
            explicit Vector(const Radian<T> &direction, unsigned magnitude);

            template <class P>
            explicit Vector(const Degree<P> &direction, unsigned magnitude);


            /****************************************************************//**
            *   @brief  Get the x axis movemet in cartesian coordinates
            *   @return the movement on the x axis in cartesian coordinates
            ********************************************************************/
            T GetX() const;


            /****************************************************************//**
            *   @brief  Get the y axis movemet in cartesian coordinates
            *   @return the movement on the y axis in cartesian coordinates
            ********************************************************************/
            T GetY() const;
            unsigned magnitude;
            Radian<T> direction;
    };

    template <class T>
    Vector<T>::Vector(const Radian<T> &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }

    template <class T>
    template <class P>
    Vector<T>::Vector(const Degree<P> &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }

    /****************************************************************//**
    *   @brief  Get the x axis movemet in cartesian coordinates
    *   @return the movement on the x axis in cartesian coordinates
    ********************************************************************/
    template <class T>
    T Vector<T>::GetX() const
    {
        return Math::cos(direction);
    }

    /****************************************************************//**
    *   @brief  Get the y axis movemet in cartesian coordinates
    *   @return the movement on the y axis in cartesian coordinates
    ********************************************************************/
    template <class T>
    T Vector<T>::GetY() const
    {
        return Math::sin(direction);
    }
}
#endif // MATH_VECTOR_H
