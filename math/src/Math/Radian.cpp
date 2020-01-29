#include "Math/Constants.h"
#include "Math/Radian.h"
#include "Math/Degree.h"

namespace {
    const float DIVIATION = 0.001f;
}
namespace Math
{
    Radian::Radian(const float radian):
    m_Radians(radian)
    {

    }

    Radian::Radian(const Degree &degree):
    m_Radians(degree.m_Degrees * (pie / 180))
    {

    }

    float Radian::GetRadians() const noexcept
    {
        return m_Radians;
    }

    void Radian::SetRadians(const float radians) noexcept
    {
        m_Radians = radians;
    }


    /***************************************************************************//**
    *   @brief  Overload the addition operator.
    *   @param  A Radian object to be added to the current object
    *   @return A Radian object that is equal to the sum of the current object
    *           and the parameter.
    *******************************************************************************/
    Math::Radian Radian::operator + (const Radian &rad) const
    {
        return Math::Radian(this->m_Radians + rad.m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the addition operator.
    *   @param  A Degree object to be added to the current object
    *   @return A Radian object that is equal to the sum of the current object
    *           and the parameter.
    *******************************************************************************/
    Math::Radian Radian::operator + (const Degree &deg) const
    {
        return Math::Radian(this->m_Radians + Math::Radian(deg).m_Radians);
    }


    Math::Radian Radian::operator - (const Radian &rad) const
    {
        return Math::Radian(this->m_Radians - rad.m_Radians);
    }


    Math::Radian Radian::operator - (const Degree &deg) const
    {
        return Math::Radian(this->m_Radians - Math::Radian(deg).m_Radians);
    }


    /***************************************************************************//**
    *   @brief  Overload the assignment operator.
    *   @param  A Radian object that will be used to retrive data from.
    *   @return A Reference to the current Radian object.
    *******************************************************************************/
    Math::Radian& Radian::operator = (const Math::Radian &rad)
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
    Math::Radian& Radian::operator = (const Math::Degree &deg)
    {
        this->m_Radians = Math::Radian(deg).m_Radians;

        return *this;
    }

    bool Radian::operator == (const Math::Radian &rad) const
    {
        float top = rad.m_Radians + DIVIATION;
        float bottom = rad.m_Radians - DIVIATION;

        return this->m_Radians >= bottom && this->m_Radians <= top;
    }


    bool Radian::operator == (const Math::Degree &deg) const
    {
        float top = Math::Radian(deg).m_Radians + DIVIATION;
        float bottom = Math::Radian(deg).m_Radians - DIVIATION;

        return this->m_Radians >= bottom && this->m_Radians <= top;
    }


    /***************************************************************************//**
    *   @brief  Overload the insertion operator.
    *   @param  The stream where the data is.
    *   @param  The Radian object will store data from the stream.
    *******************************************************************************/
    std::iostream& operator >> (std::iostream& in, Radian &rad)
    {
        in >> rad.m_Radians;
        return in;
    }


    /****************************************************************************//**
    *   @brief  Overload the extraction operator.
    *   @param  The stream where the data will be inserted.
    *   @param  The Radian object stores data that will be inserted into the stream.
    ********************************************************************************/
    std::ostream& operator << (std::ostream& out, const Radian &rad)
    {
         out << rad.m_Radians;
         return out;
    }
}
