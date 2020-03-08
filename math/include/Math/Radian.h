#ifndef MATH_RADIAN_H
#define MATH_RADIAN_H

#include "math_export.h"
#include <Math/Constants.h>
#include <iostream>

namespace Math
{
    template <class T>
    class Degree;

    template <class T>
    class MATH_EXPORT Radian final
    {
        public:
            Radian() = default;
            Radian(const float radian);
            template <class P>
            explicit Radian(const Degree<P> &degree);


            /****************************************************************************//**
            *   @brief  Overload the insertion operator.
            *   @param  The stream where the data is.
            *   @param  The Radian object will store data from the stream.
            ********************************************************************************/
            template <class P>            
            friend std::iostream& operator >> (std::iostream& in, Radian<P> &rad);


            /****************************************************************************//**
            *   @brief  Overload the extraction operator.
            *   @param  The stream where the data will be inserted.
            *   @param  The Radian object stores data that will be inserted into the stream.
            ********************************************************************************/
            //friend std::ostream& operator << (std::ostream& out, const Radian &rad);


            /***************************************************************************//**
            *   @brief  Overload the addition operator.
            *   @param  A Radian object to be added to the current object
            *   @return A Radian object that is equal to the sum of the current object
            *           and the parameter.
            *******************************************************************************/
            Radian<T> operator + (const Radian<T> &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the addition operator.
            *   @param  A Degree object to be added to the current object
            *   @return A Radian object that is equal to the sum of the current object
            *           and the parameter.
            *******************************************************************************/
            template <class P>            
            Radian<T> operator + (const Degree<P> &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the subtraction operator.
            *   @param  A Radian object to be subtracted from the current object
            *   @return A Radian object that is equal to the difference of the current object
            *           and the parameter.
            *******************************************************************************/
            Radian<T> operator - (const Radian<T> &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the subtraction operator.
            *   @param  A Degree object to be subtracted from the current object
            *   @return A Radian object that is equal to the difference of the current object
            *           and the parameter.
            *******************************************************************************/
            template <class P>            
            Radian<T> operator - (const Degree<P> &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Radian object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            bool operator == (const Radian<T> &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Degree object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            template <class P>            
            bool operator == (const Degree<P> &deg) const;


            /***************************************************************************//**
            *   @brief  Overload the not equal operator.
            *   @param  A Radian object that will be checked for inequality.
            *   @return A boolean True value when the objects are not equal and false
            *           otherwise.
            *******************************************************************************/
            bool operator != (const Radian<T> &rad) const;


            /***************************************************************************//**
            *   @brief  Overload the not equal operator.
            *   @param  A Degree object that will be checked for inequality.
            *   @return A boolean True value when the objects are not equal and false
            *           otherwise.
            *******************************************************************************/
            template <class P>            
            bool operator != (const Degree<P> &deg) const;


            /***************************************************************************//**
            *   @brief  Type cast operator for converting to float.
            *******************************************************************************/
            operator float() const;


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Radian object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            Radian<T>& operator = (const Radian<T> &rad);


            /***************************************************************************//**
            *   @brief  Overload the assignment operator.
            *   @param  A Degree object that will be used to retrive data from.
            *   @return A Reference to the current Radian object.
            *******************************************************************************/
            template <class P>            
            Radian<T>& operator = (const Degree<P> &deg);

            template <class P>
            Radian<T> operator * (const P param) const;
        private:
            float m_Radians = 0;
            //friend class Degree<T>;
            friend float cos(const Radian &rad);
            friend float sin(const Radian &rad);
    };

    /****************************************************************************//**
    *   @brief  Overload the insertion operator.
    *   @param  The stream where the data is.
    *   @param  The Radian object will store data from the stream.
    ********************************************************************************/
    template <class P>    
    std::iostream& operator >> (std::iostream& in, Radian<P> &rad);


    /****************************************************************************//**
    *   @brief  Overload the extraction operator.
    *   @param  The stream where the data will be inserted.
    *   @param  The Radian object stores data that will be inserted into the stream.
    ********************************************************************************/
    template <class P>    
    std::ostream& operator << (std::ostream& in, const Radian<P> &rad);

    template <class T>
    template <class P>
    Math::Radian<T> Radian<T>::operator * (const P param) const
    {
        return Math::Radian<T>(m_Radians * param);
    }

    template <class T>
    Radian<T>::Radian(const float radian):
    m_Radians(radian)
    {

    }

    template <class T>
    template <class P>
    Radian<T>::Radian(const Degree<P> &degree):
    m_Radians(static_cast<T>(degree) * (pie / 180))
    {

    }


    /***************************************************************************//**
    *   @brief  Overload the addition operator.
    *   @param  A Radian object to be added to the current object
    *   @return A Radian object that is equal to the sum of the current object
    *           and the parameter.
    *******************************************************************************/
    template <class T>
    Radian<T> Radian<T>::operator + (const Radian &rad) const
    {
        return Radian<T>(this->m_Radians + rad.m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the addition operator.
    *   @param  A Degree object to be added to the current object
    *   @return A Radian object that is equal to the sum of the current object
    *           and the parameter.
    *******************************************************************************/
    template <class T>
    template <class P>
    Radian<T> Radian<T>::operator + (const Degree<P> &deg) const
    {
        return Radian<T>(this->m_Radians + Math::Radian<T>(deg).m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the subtraction operator.
    *   @param  A Radian object to be subtracted from the current object
    *   @return A Radian object that is equal to the difference of the current object
    *           and the parameter.
    *******************************************************************************/\
    template <class T>
    Radian<T> Radian<T>::operator - (const Radian<T> &rad) const
    {
        return Math::Radian<T>(this->m_Radians - rad.m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the subtraction operator.
    *   @param  A Degree object to be subtracted from the current object
    *   @return A Radian object that is equal to the difference of the current object
    *           and the parameter.
    *******************************************************************************/
    template <class T>
    template <class P>
    Radian<T> Radian<T>::operator - (const Degree<P> &deg) const
    {
        return Radian<T>(this->m_Radians - Math::Radian<T>(deg).m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the assignment operator.
    *   @param  A Radian object that will be used to retrive data from.
    *   @return A Reference to the current Radian object.
    *******************************************************************************/
    template <class T>
    Radian<T>& Radian<T>::operator = (const Radian<T> &rad)
    {
        if(this != &rad)
            this->m_Radians = rad.m_Radians;

        return *this;
    }


    /***************************************************************************//**
    *   @brief  Overload the assignment operator.
    *   @param  A Degree object that will be used to retrive data from.
    *   @return A Reference to the current Radian object.
    *******************************************************************************/
    template <class T>
    template <class P>
    Radian<T>& Radian<T>::operator = (const Degree<P> &deg)
    {
        this->m_Radians = static_cast<T>(deg);

        return *this;
    }


    /***************************************************************************//**
    *   @brief  Overload the not equal operator.
    *   @param  A Radian object that will be checked for inequality.
    *   @return A boolean True value when the objects are not equal and false
    *           otherwise.
    *******************************************************************************/
    template <class T>
    bool Radian<T>::operator != (const Radian<T> &rad) const
    {
        return this->m_Radians != rad.m_Radians;
    }


    /***************************************************************************//**
    *   @brief  Overload the not equal operator.
    *   @param  A Degree object that will be checked for inequality.
    *   @return A boolean True value when the objects are not equal and false
    *           otherwise.
    *******************************************************************************/
    template <class T>
    template <class P>
    bool Radian<T>::operator != (const Degree<P> &deg) const
    {
        return this->m_Radians != static_cast<T>(deg);
    }


    /***************************************************************************//**
    *   @brief  Type cast operator for converting to float.
    *******************************************************************************/
    template <class T>
    Radian<T>::operator float() const
    {
        return m_Radians;
    }

    template <class T>
    bool Radian<T>::operator == (const Radian<T> &rad) const
    {
        float top = rad.m_Radians;
        float bottom = rad.m_Radians;

        return this->m_Radians >= bottom && this->m_Radians <= top;
    }

    template <class T>
    template <class P>
    bool Radian<T>::operator == (const Degree<P> &deg) const
    {
        return this->m_Radians == static_cast<T>(deg);
    }


    /***************************************************************************//**
    *   @brief  Overload the insertion operator.
    *   @param  The stream where the data is.
    *   @param  The Radian object will store data from the stream.
    *******************************************************************************/
    template <class P>
    std::iostream& operator >> (std::iostream& in, Radian<P> &rad)
    {
        in >> rad.m_Radians;
        return in;
    }


    /****************************************************************************//**
    *   @brief  Overload the extraction operator.
    *   @param  The stream where the data will be inserted.
    *   @param  The Radian object stores data that will be inserted into the stream.
    ********************************************************************************/
    template <class P>    
    std::ostream& operator << (std::ostream& out, const Radian<P> &rad)
    {
         out << static_cast<P>(rad);
         return out;
    }
}
#endif // MATH_RADIAN_H
