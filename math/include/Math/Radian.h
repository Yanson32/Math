#ifndef MATH_RADIAN_H
#define MATH_RADIAN_H

#include <Math/Constants.h>
#include <iostream>

namespace Math
{
	template <class T>
	class Degree;

	template <class T>
	class Radian final
	{
	public:
		/****************************************************************************//**
		*   @brief  Default constructor
		********************************************************************************/
		Radian() = default;

		/****************************************************************************//**
		*   @brief  Single argument constructor.
		*	@param[in] radian - A floating point representation of a radian.
		********************************************************************************/
		Radian(const float radian);


		/****************************************************************************//**
		*   @brief  Single argument template constructor.
		*   @tparam P - Type for the underling degree object.
		*   @param[in] degree - An object of the degree class.
		********************************************************************************/
		template <class P>
		Radian(const Degree<P> &degree);


		/****************************************************************************//**
		*   @brief  Overload the insertion operator.
		*   @param[in, out] rad - The stream where the data is.
		*   @param[in] rad - The Radian object will store data from the stream.
		********************************************************************************/
		template <class P>            
		friend std::iostream& operator >> (std::iostream& in, Radian<P> &rad);


		/***************************************************************************//**
		*   @brief  Overload the addition operator.
		*   @param[in] rad - A Radian object to be added to the current object
		*   @return A Radian object that is equal to the sum of the current object
		*           and the parameter.
		*******************************************************************************/
		Radian<T> operator + (const Radian<T> &rad) const;


		/***************************************************************************//**
		*   @brief  Overload the addition operator.
		*   @param[in] deg - A Degree object to be added to the current object
		*   @return A Radian object that is equal to the sum of the current object
		*           and the parameter.
		*******************************************************************************/
		template <class P>            
		Radian<T> operator + (const Degree<P> &deg) const;


		/***************************************************************************//**
		*   @brief  Overload the subtraction operator.
		*   @param[in] rad - A Radian object to be subtracted from the current object
		*   @return A Radian object that is equal to the difference of the current 
		*   object and the parameter.
		*******************************************************************************/
		Radian<T> operator - (const Radian<T> &rad) const;


		/***************************************************************************//**
		*   @brief  Overload the subtraction operator.
		*   @param[in] deg - A Degree object to be subtracted from the current object
		*   @return A Radian object that is equal to the difference of the current
		*   object and the parameter.
		*******************************************************************************/
		template <class P>            
		Radian<T> operator - (const Degree<P> &deg) const;


		/***************************************************************************//**
		*   @brief  Overload the assignment operator.
		*   @param[in] rad - A Radian object that will be used to retrive data from.
		*   @return A Reference to the current Radian object.
		*******************************************************************************/
		template <class P>
		bool operator == (const Radian<P> &rad) const;


		/***************************************************************************//**
		*   @brief  Overload the assignment operator.
		*   @param[in] deg - A Degree object that will be used to retrive data from.
		*   @return A Reference to the current Radian object.
		*******************************************************************************/
		template <class P>            
		bool operator == (const Degree<P> &deg) const;


		/***************************************************************************//**
		*   @brief  Overload the not equal operator.
		*   @param[in] rad - A Radian object that will be checked for inequality.
		*   @return A boolean True value when the objects are not equal and false
		*           otherwise.
		*******************************************************************************/
		bool operator != (const Radian<T> &rad) const;


		/***************************************************************************//**
		*   @brief  Overload the not equal operator.
		*   @param[in] deg - A Degree object that will be checked for inequality.
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
		*   @param[in] rad - A Radian object that will be used to retrive data from.
		*   @return A Reference to the current Radian object.
		*******************************************************************************/
		template <class P>
		Radian<T>& operator = (const Radian<P> &rad);


		/***************************************************************************//**
		*   @brief  Overload the assignment operator.
		*   @param[in] deg - A Degree object that will be used to retrive data from.
		*   @return A Reference to the current Radian object.
		*******************************************************************************/
		template <class P>            
		Radian<T>& operator = (const Degree<P> &deg);


		/***************************************************************************//**
		*   @brief  Scalar multiplication
		*   @tparam	P - The type of the scalar
		*   @param[in] param - Multiply the radian object by the input parameter.
		*   @return A Radian object set to the new value.
		*******************************************************************************/
		template <class P>
		Radian<T> operator * (const P param) const;
	private:
		float m_Radians = 0;

		friend float cos(const Radian &rad);
		friend float sin(const Radian &rad);
	};

	/****************************************************************************//**
	*   @brief  Overload the insertion operator.
	*   @param[in, out] rad - The stream where the data is.
	*   @param[in] rad - The Radian object will store data from the stream.
	********************************************************************************/
	template <class P>    
	std::iostream& operator >> (std::iostream& in, Radian<P> &rad);


	/****************************************************************************//**
	*   @brief  Overload the extraction operator.
	*   @param[in, out] rad - The stream where the data will be inserted.
	*   @param[in] rad - The Radian object stores data that will be inserted into the 
	*   stream.
	********************************************************************************/
	template <class P>    
	std::ostream& operator << (std::ostream& in, const Radian<P> &rad);


	/***************************************************************************//**
	*   @brief  Scalar multiplication
	*   @tparam	P - The type of the scalar
	*   @param[in] param - Multiply the radian object by the input parameter.
	*   @return A Radian object set to the new value.
	*******************************************************************************/
	template <class T>
	template <class P>
	Math::Radian<T> Radian<T>::operator * (const P param) const
	{
		return Math::Radian<T>(m_Radians * param);
	}


	/****************************************************************************//**
	*   @brief  Single argument constructor.
	*   @param[in] radian - A floating point representation of a radian.
	********************************************************************************/
	template <class T>
	Radian<T>::Radian(const float radian):
	m_Radians(radian)
	{

	}


	/****************************************************************************//**
	*   @brief  Single argument template constructor.
	*   @tparam P - Type for the underling degree object.
	*   @param[in] degree - An object of the degree class.
	********************************************************************************/
	template <class T>
	template <class P>
	Radian<T>::Radian(const Degree<P> &degree):
	m_Radians(static_cast<T>(degree) * (pie / 180))
	{

	}


	/***************************************************************************//**
	*   @brief  Overload the addition operator.
	*   @param[in] rad - A Radian object to be added to the current object
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
	*   @param[in] deg - A Degree object to be added to the current object
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
	*   @param[in] rad - A Radian object to be subtracted from the current object
	*   @return A Radian object that is equal to the difference of the current 
	*   object and the parameter.
	*******************************************************************************/
	template <class T>
	Radian<T> Radian<T>::operator - (const Radian<T> &rad) const
	{
		return Math::Radian<T>(this->m_Radians - rad.m_Radians);
	}


	/***************************************************************************//**
	*   @brief  Overload the subtraction operator.
	*   @param[in] deg - A Degree object to be subtracted from the current object
	*   @return A Radian object that is equal to the difference of the current 
	*   	object and the parameter.
	*******************************************************************************/
	template <class T>
	template <class P>
	Radian<T> Radian<T>::operator - (const Degree<P> &deg) const
	{
		return Radian<T>(this->m_Radians - Math::Radian<T>(deg).m_Radians);
	}


	/***************************************************************************//**
	*   @brief  Overload the assignment operator.
	*   @param[in] rad - A Radian object that will be used to retrive data from.
	*   @return A Reference to the current Radian object.
	*******************************************************************************/
	template <class T>
	template <class P>
	Radian<T>& Radian<T>::operator = (const Radian<P> &rad)
	{
		if(this != &rad)
		this->m_Radians = rad.m_Radians;

		return *this;
	}


	/***************************************************************************//**
	*   @brief  Overload the assignment operator.
	*   @param[in] deg - A Degree object that will be used to retrive data from.
	*   @return A Reference to the current Radian object.
	*******************************************************************************/
	template <class T>
	template <class P>
	Radian<T>& Radian<T>::operator = (const Degree<P> &deg)
	{
		this->m_Radians = static_cast<T>(Math::Radian<P>(deg));

		return *this;
	}


	/***************************************************************************//**
	*   @brief  Overload the not equal operator.
	*   @param[in] rad - A Radian object that will be checked for inequality.
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
	*   @param[in] deg - A Degree object that will be checked for inequality.
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


	/***************************************************************************//**
	*   @brief  Overload the assignment operator.
	*   @param[in] rad - A Radian object that will be used to retrive data from.
	*   @return A Reference to the current Radian object.
	*******************************************************************************/
	template <class T>
	template <class P>
	bool Radian<T>::operator == (const Radian<P> &rad) const
	{
		return this->m_Radians == static_cast<T>(rad);
	}


	/***************************************************************************//**
	*   @brief  Overload the assignment operator.
	*   @param[in] deg - A Degree object that will be used to retrive data from.
	*   @return A Reference to the current Radian object.
	*******************************************************************************/
	template <class T>
	template <class P>
	bool Radian<T>::operator == (const Degree<P> &deg) const
	{
		return this->m_Radians == static_cast<T>(Math::Radian<P>(deg));
	}


	/***************************************************************************//**
	*   @brief  Overload the insertion operator.
	*   @param[in, out] rad - The stream where the data is.
	*   @param[in] rad - The Radian object will store data from the stream.
	*******************************************************************************/
	template <class P>
	std::iostream& operator >> (std::iostream& in, Radian<P> &rad)
	{
		in >> rad.m_Radians;
		return in;
	}


	/****************************************************************************//**
	*   @brief  Overload the extraction operator.
	*   @param[in, out] out - The stream where the data will be inserted.
	*   @param[in] rad - The Radian object stores data that will be inserted into 
	*   the stream.
	********************************************************************************/
	template <class P>    
	std::ostream& operator << (std::ostream& out, const Radian<P> &rad)
	{
		out << static_cast<P>(rad);
		return out;
	}
}
#endif // MATH_RADIAN_H
