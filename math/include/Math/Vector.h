#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H

#include "math_export.h"

/*******************************************************************//**
*   @author Wayne J Larson Jr
*   @brief  The Vector class is designed to mimic the mathmatical
*           concept of a vector.
***********************************************************************/
namespace Math
{
    template <class T>
    class MATH_EXPORT Vector final
    {
        public:
            Vector() = default;
            explicit Vector(const Radian<T> &direction, unsigned magnitude);

            template <class P>
            explicit Vector(const Degree<T> &direction, unsigned magnitude);


            /****************************************************************//**
            *   @brief  Get the x axis movemet in cartesian coordinates
            *   @return the movement on the x axis in cartesian coordinates
            ********************************************************************/
            float GetX() const;


            /****************************************************************//**
            *   @brief  Get the y axis movemet in cartesian coordinates
            *   @return the movement on the y axis in cartesian coordinates
            ********************************************************************/
            float GetY() const;
            unsigned magnitude;
            Radian<T> direction;
    };

    template <class T>
    Vector<T>::Vector(const Radian &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }

    template <class T>
    Vector<T>::Vector(const Degree &direction, unsigned magnitude):
    magnitude(magnitude),
    direction(direction)
    {

    }

    /****************************************************************//**
    *   @brief  Get the x axis movemet in cartesian coordinates
    *   @return the movement on the x axis in cartesian coordinates
    ********************************************************************/
    template <class T>
    float Vector<T>::GetX() const
    {
        return Math::cos(direction);
    }

    /****************************************************************//**
    *   @brief  Get the y axis movemet in cartesian coordinates
    *   @return the movement on the y axis in cartesian coordinates
    ********************************************************************/
    template <class T>
    float Vector<T>::GetY() const
    {
        return Math::sin(direction);
    }
}
#endif // MATH_VECTOR_H
