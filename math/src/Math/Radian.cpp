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
    m_Radians(degree * pie / 180)
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
