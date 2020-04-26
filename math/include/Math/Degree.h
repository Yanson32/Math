/************************************************************//**
*   @author Wayne J Larson Jr.
*   @date   5/20/19
*   @brief  This file defines a class to represent the math
*           concept of degrees.
****************************************************************/
#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H

#include <iostream>
#include <Math/Constants.h>

namespace Math
{
    template <class T>
    class Radian;

    template <class T>
    class Degree final
    {
        public:
            /************************************************************//**
            *   @brief  The default constructor
            ****************************************************************/
            Degree() = default;


            /************************************************************//**
            *   @brief  Single parameter constructor
            *   @param[in] degree - construct a Degree object from a float.
            ****************************************************************/
            Degree(const float degree);


            /************************************************************//**
            *   @brief  Construct a Degree object from a Radian object
            *   @param[in] radian - A Radian object which will be converted to a degree
            *           object.
            ****************************************************************/
            template <class P>            
            Degree(const Radian<P> &radian);


            /************************************************************//**
            *   @brief  Multiplication operator
            *   @tparam P - The datatype of the object to be multiplied by
            *   @param[in] param - The object to be multiplied by.
            *   @return template parameter
            ****************************************************************/
            template <class P>
            Degree<T> operator * (const P param) const;


            /************************************************************//**
            *   @brief  Checks for equality between two Degree objects.
            *   @param[in] param - A degree object equality will be checked against.
            *   @return True if the two objects are equal and false otherwise
            ****************************************************************/
            template <class P>
			bool operator == (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks that two Degree objects are not equal.
            *   @param[in] param - A degree object equality will be checked against.
            *   @return True if the two objects are not equal and false otherwise
            ****************************************************************/
            template <class P>
			bool operator != (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than or equal to
            *           the parameter.
            *   @param[in] param - A degree object equality will be checked against.
            *   @return True if this object is less than or equal to parameter
            *           and false otherwise
            ****************************************************************/
            template <class P>
			bool operator <= (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           the parameter.
            *   @param[in] param - A degree object equality will be checked against.
            *   @return True if this object is greater than or equal to
            *           parameter and false otherwise
            ****************************************************************/
            template <class P>
			bool operator >= (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than parameter
            *   @param[in] param - A Degree object .
            *   @return True if this object is less than parameter and
            *           false otherwise
            ****************************************************************/
            template <class P>
			bool operator < (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than parameter
            *   @param[in] param - A Radian object .
            *   @return True if this object is less than parameter and
            *           false otherwise
            ****************************************************************/
            template <class P>			
            bool operator < (const Radian<P> &param) const;

            /************************************************************//**
            *   @brief  Checks if this object is greater than parameter
            *   @param[in] param - A Degree object .
            *   @return True if this object is greater than parameter and
            *           false otherwise
            ****************************************************************/
            template <class P>
			bool operator > (const Degree<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           a Radian object
            *   @param[in] param - A Radian object equality will be checked against.
            *   @return True if this object is equal to parameter and
            *           false otherwise
            ****************************************************************/
            template <class P>
			bool operator == (const Radian<P> &param) const;


            /************************************************************//**
            *   @brief  Assign a Degree object to another Degree object.
            *   @param[in] deg - The Degree object will be used to assign its value
            *           to the current object.
            *   @return The current Degree object with the new value.
            ****************************************************************/
            template <class P>
            Degree<T>& operator = (const Degree<P> &deg);


            /************************************************************//**
            *   @brief  Assign a Radian object to a Degree object.
            *   @param[in] rad - The Radian object will be used to assign its value
            *           to the current Degree object.
            *   @return The current Degree object with it's new value.
            ****************************************************************/
            template <class P>
            Degree<T>& operator = (const Radian<P> &rad);


            /************************************************************//**
            *   @brief  Checks if this object is not equal to a Radian object
            *   @param[in] param - A Radian object equality will be checked against.
            *   @return True if this object is not equal to parameter and
            *           false otherwise
            ****************************************************************/
            template <class P>
			bool operator != (const Radian<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than or equal to
            *           a Radian object
            *   @param[in] param - A Radian object equality will be checked against.
            *   @return True if this object is less than or equal to
            *           parameter and false otherwise
            ****************************************************************/
            template <class P>
			bool operator <= (const Radian<P> &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           a Radian object
            *   @param[in] param - A Radian object equality will be checked against.
            *   @return True if this object is greater than or equal to
            *           parameter and false otherwise
            ****************************************************************/
            template <class P>
			bool operator >= (const Radian<P> &param) const;


            /***************************************************************************//**
            *   @brief  Type cast operator for converting to float.
            *******************************************************************************/
            operator float() const;


            /************************************************************//**
            *   @brief  Insertion operator overload
            *   @param[in, out] out - output stream where the Degree object will be printed.
            *   @param[in] param - A Degree object which will be printed to output stream.
            *   @return The output stream the Degree object was printed to.
            ****************************************************************/
            //template <class P>
			//friend std::ostream& operator << (std::ostream& out, const Degree<P> &param);


            /************************************************************//**
            *   @brief  Extraction operator overload
            *   @param[in, out] in - input stream where the Degree object will 
	    *   be extracted.
            *   @param[in] param  A Degree object which will store the extracted object.
            *   @return The input stream the Degree object was extracted from.
            ****************************************************************/
            //template <class P>
			//friend std::istream& operator >> (std::istream& in, const Degree<P> &param);

        private:
            T m_Degrees = 0;
            //friend class Radian;

            template <class P>
            friend T cos(const Degree<T> &deg);

            template <class P>
            friend T sin(const Degree<T> &deg);
    };


    /************************************************************//**
    *   @brief  Multiplication operator
    *   @tparam P - The datatype of the object to be multiplied by
    *   @param[in] param - The object to be multiplied by.
    *   @return template parameter
    ****************************************************************/
    template <class T>
    template <class P>
    Degree<T> Degree<T>::operator * (const P param) const
    {
        return Degree<T>(m_Degrees * static_cast<T>(param));
    }

    /************************************************************//**
    *   @brief  Single parameter constructor
    *   @param[in] degree - construct a Degree object from a float.
    ****************************************************************/
    template <class T>
    Degree<T>::Degree(const float degree):
    m_Degrees(degree)
    {

    }


    /************************************************************//**
    *   @brief  Construct a Degree object from a Radian object
    *   @param[in] radian - A Radian object which will be converted to a degree
    *           object.
    ****************************************************************/
    template <class T>
    template <class P> 
    Degree<T>::Degree(const Radian<P> &radian):
    m_Degrees(static_cast<T>(radian) * (180 / pie))
    {

    }


    /************************************************************//**
    *   @brief  Checks for equality between two Degree objects.
    *   @param[in] param - A degree object equality will be checked against.
    *   @return True if the two objects are equal and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator == (const Degree<P> &param) const
	{
        return this->m_Degrees == param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Assign a Degree object to another Degree object.
    *   @param[in] deg - The Degree object will be used to assign its value
    *           to the current object.
    *   @return The current Degree object with the new value.
    ****************************************************************/
    template <class T>
    template <class P>
    Degree<T>& Degree<T>::operator = (const Degree<P> &deg)
    {
        if(this != &deg)
            this->m_Degrees = deg.m_Degrees;
        return *this;
    }


    /************************************************************//**
    *   @brief  Assign a Radian object to a Degree object.
    *   @param[in] rad - The Radian object will be used to assign its value
    *           to the current Degree object.
    *   @return The current Degree object with it's new value.
    ****************************************************************/
    template <class T>
    template <class P>
    Degree<T>& Degree<T>::operator = (const Radian<P> &rad)
    {
        this->m_Degrees = static_cast<T>(Math::Degree<P>(rad));
        return *this;
    }


    /************************************************************//**
    *   @brief  Checks that two Degree objects are not equal.
    *   @param[in] param - A degree object equality will be checked against.
    *   @return True if the two objects are not equal and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator != (const Degree<P> &param) const
	{
		return this->m_Degrees  != param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than or equal to
    *           the parameter.
    *   @param[in] param - A degree object equality will be checked against.
    *   @return True if this object is less than or equal to parameter
    *           and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator <= (const Degree<P> &param) const
	{
		return this->m_Degrees <= param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           the parameter.
    *   @param[in] param - A degree object equality will be checked against.
    *   @return True if this object is greater than or equal to
    *           parameter and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator >= (const Degree<P> &param) const
	{
		return this->m_Degrees >= param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than parameter
    *   @param[in] param - A Degree object .
    *   @return True if this object is less than parameter and
    *           false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator < (const Degree<P> &param) const
	{
		return this->m_Degrees < param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than parameter
    *   @param[in] param - A Radian object .
    *   @return True if this object is less than parameter and
    *           false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
    bool Degree<T>::operator < (const Radian<P> &param) const
    {
        return this->m_Degrees < Math::Degree<T>(param).m_Degrees;
    }

    /************************************************************//**
    *   @brief  Checks if this object is greater than parameter
    *   @param[in] param - A Degree object .
    *   @return True if this object is greater than parameter and
    *           false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator > (const Degree<P> &param) const
	{
		return this->m_Degrees > param.m_Degrees;
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           a Radian object
    *   @param[in] param - A Radian object equality will be checked against.
    *   @return True if this object is equal to parameter and
    *           false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator == (const Radian<P> &param) const
	{

        return this->m_Degrees == static_cast<T>(param);
	}


    /************************************************************//**
    *   @brief  Checks if this object is not equal to a Radian object
    *   @param[in] param - A Radian object equality will be checked against.
    *   @return True if this object is not equal to parameter and
    *           false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator != (const Radian<P> &param) const
	{
		return this->m_Degrees != static_cast<T>(param);
	}


    /************************************************************//**
    *   @brief  Checks if this object is less than or equal to
    *           a Radian object
    *   @param[in] param - A Radian object equality will be checked against.
    *   @return True if this object is less than or equal to
    *           parameter and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator <= (const Radian<P> &param) const
	{
		return this->m_Degrees <= static_cast<T>(param);
	}


    /************************************************************//**
    *   @brief  Checks if this object is greater than or equal to
    *           a Radian object
    *   @param[in] param - A Radian object equality will be checked against.
    *   @return True if this object is greater than or equal to
    *           parameter and false otherwise
    ****************************************************************/
    template <class T>
    template <class P>
	bool Degree<T>::operator >= (const Radian<P> &param) const
	{

		return this->m_Degrees >= static_cast<T>(param);
	}


    /***************************************************************************//**
    *   @brief  Type cast operator for converting to float.
    *******************************************************************************/
    template <class T>
    Degree<T>::operator float() const
    {
        return m_Degrees;
    }


    /************************************************************//**
    *   @brief  Insertion operator overload
    *   @param[in, out] out - output stream where the Degree object 
    *   will be printed.
    *   @param[in] param - A Degree object which will be printed to 
    *   output stream.
    *   @return The output stream the Degree object was printed to.
    ****************************************************************/
    template <class P>
	std::ostream& operator << (std::ostream& out, const Degree<P> &param)
	{
		return out << static_cast<P>(param);
	}


    /************************************************************//**
    *   @brief  Extraction operator overload
    *   @param[in, out] in - input stream where the Degree object will 
    *   be extracted.
    *   @param[in] param - A Degree object which will store the extracted object.
    *   @return The input stream the Degree object was extracted from.
    ****************************************************************/
    template <class P>
	std::istream& operator >> (std::istream& in, const Degree<P> &param)
	{
		return in >> param.m_Degrees;
	}
}
#endif
