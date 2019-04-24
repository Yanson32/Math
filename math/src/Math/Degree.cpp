#include "Math/Constants.h"
#include "Math/Degree.h"
#include "Math/Radian.h"

namespace Math
{
    Degree::Degree(const float degree):
    m_Degrees(degree)
    {

    }

    Degree::Degree(const Radian &radian):
    m_Degrees(radian * 180 / pie)
    {

    }

	bool Degree::operator == (const Degree &param) const
	{
		return this->m_Degrees == param.m_Degrees;
	}
	bool Degree::operator != (const Degree &param) const
	{
		return this->m_Degrees != param.m_Degrees;
	}
	bool Degree::operator <= (const Degree &param) const
	{
		return this->m_Degrees <= param.m_Degrees;
	}
	bool Degree::operator >= (const Degree &param) const
	{
		return this->m_Degrees >= param.m_Degrees;
	}

	bool Degree::operator == (const Radian &param) const
	{
		return this->m_Degrees == Degree(param).m_Degrees;
	}
	bool Degree::operator != (const Radian &param) const
	{
		return this->m_Degrees != Degree(param).m_Degrees;
	}
	bool Degree::operator <= (const Radian &param) const
	{
		return this->m_Degrees <= Degree(param).m_Degrees;
	}
	bool Degree::operator >= (const Radian &param) const
	{
		return this->m_Degrees >= Degree(param).m_Degrees;
	}

	//Less than 
	bool Degree::operator < (const Degree &param) const
	{
		return this->m_Degrees < param.m_Degrees;
	}

	bool Degree::operator < (const Radian &param) const
	{
		return this->m_Degrees < Math::Degree(param).m_Degrees;
	}

	//Greater than 
	bool Degree::operator > (const Degree &param) const
	{
		return this->m_Degrees > param.m_Degrees;
	}
}
