#include "Math/Constants.h"
#include "Math/Degree.h"
#include "Math/Radian.h"

namespace Math
{
    /************************************************************//**
    *   @brief  Single parameter constructor
    *   @param  construct a Degree object from a float.
    ****************************************************************/
    Degree::Degree(const float degree):
    m_Degrees(degree)
    {

    }


    /************************************************************//**
    *   @brief  Construct a Degree object from a Radian object
    *   @param  A Radian object which will be converted to a degree
    *           object.
    ****************************************************************/
    Degree::Degree(const Radian &radian):
    m_Degrees(radian * 180 / pie)
    {

    }


    /************************************************************//**
    *   @brief  Checks for equality between two Degree objects.
    *   @param  A degree object equality will be checked against.
    *   @return True if the two objects are equal and false otherwise
    ****************************************************************/
	bool Degree::operator == (const Degree &param) const
	{
		return this->m_Degrees == param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks that two Degree objects are not equal.
    *   @param  A degree object equality will be checked against.
    *   @return True if the two objects are not equal and false otherwise
    ****************************************************************/
	bool Degree::operator != (const Degree &param) const
	{
		return this->m_Degrees != param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than or equal to
    *           the parameter.
    *   @param  A degree object equality will be checked against.
    *   @return True if this object is less than or equal to parameter
    *           and false otherwise
    ****************************************************************/
	bool Degree::operator <= (const Degree &param) const
	{
		return this->m_Degrees <= param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           the parameter.
    *   @param  A degree object equality will be checked against.
    *   @return True if this object is greater than or equal to
    *           parameter and false otherwise
    ****************************************************************/
	bool Degree::operator >= (const Degree &param) const
	{
		return this->m_Degrees >= param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than parameter
    *   @param  A Degree object .
    *   @return True if this object is less than parameter and
    *           false otherwise
    ****************************************************************/
	bool Degree::operator < (const Degree &param) const
	{
		return this->m_Degrees < param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than parameter
    *   @param  A Degree object .
    *   @return True if this object is greater than parameter and
    *           false otherwise
    ****************************************************************/
	bool Degree::operator > (const Degree &param) const
	{
		return this->m_Degrees > param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           a Radian object
    *   @param  A Radian object equality will be checked against.
    *   @return True if this object is equal to parameter and
    *           false otherwise
    ****************************************************************/
	bool Degree::operator == (const Radian &param) const
	{
		return this->m_Degrees == Degree(param).m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is not equal to a Radian object
    *   @param  A Radian object equality will be checked against.
    *   @return True if this object is not equal to parameter and
    *           false otherwise
    ****************************************************************/
	bool Degree::operator != (const Radian &param) const
	{
		return this->m_Degrees != Degree(param).m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than or equal to
    *           a Radian object
    *   @param  A Radian object equality will be checked against.
    *   @return True if this object is less than or equal to
    *           parameter and false otherwise
    ****************************************************************/
	bool Degree::operator <= (const Radian &param) const
	{
		return this->m_Degrees <= Degree(param).m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           a Radian object
    *   @param  A Radian object equality will be checked against.
    *   @return True if this object is greater than or equal to
    *           parameter and false otherwise
    ****************************************************************/
	bool Degree::operator >= (const Radian &param) const
	{
		return this->m_Degrees >= Degree(param).m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than parameter
    *   @param  A Radian object .
    *   @return True if this object is less than parameter and
    *           false otherwise
    ****************************************************************/
	bool Degree::operator < (const Radian &param) const
	{
		return this->m_Degrees < Math::Degree(param).m_Degrees;
	}


    /************************************************************//**
    *   @brief  Insertion operator overload
    *   @param  output stream where the Degree object will be printed.
    *   @param  A Degree object which will be printed to output stream.
    *   @return The output stream the Degree object was printed to.
    ****************************************************************/
	std::ostream& operator << (std::ostream& out, const Degree &param)
	{
		return out << param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Extraction operator overload
    *   @param  input stream where the Degree object will be extracted.
    *   @param  A Degree object which will store the extracted object.
    *   @return The input stream the Degree object was extracted from.
    ****************************************************************/
	std::istream& operator >> (std::istream& in, const Degree &param)
	{
		return in >> param.m_Degrees;
	}
}
