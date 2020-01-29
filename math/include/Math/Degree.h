/************************************************************//**
*   @author Wayne J Larson Jr.
*   @date   5/20/19
*   @brief  This file defines a class to represent the math
*           concept of degrees.
****************************************************************/
#ifndef MATH_DEGREE_H
#define	MATH_DEGREE_H

#include <iostream>

#include "math_export.h"
namespace Math
{
    class Radian;
    class MATH_EXPORT Degree final
    {
        public:
            /************************************************************//**
            *   @brief  The default constructor
            ****************************************************************/
            Degree() = default;


            /************************************************************//**
            *   @brief  Single parameter constructor
            *   @param  construct a Degree object from a float.
            ****************************************************************/
            Degree(const float degree);


            /************************************************************//**
            *   @brief  Construct a Degree object from a Radian object
            *   @param  A Radian object which will be converted to a degree
            *           object.
            ****************************************************************/
            explicit Degree(const Radian &radian);


            /************************************************************//**
            *   @brief  Multiplication operator
            *   @tparam The datatype of the object to be multiplied by
            *   @param  The object to be multiplied by.
            *   @return template parameter
            ****************************************************************/
            template <class T>
            Math::Degree operator * (const T param) const;


            /************************************************************//**
            *   @brief  Checks for equality between two Degree objects.
            *   @param  A degree object equality will be checked against.
            *   @return True if the two objects are equal and false otherwise
            ****************************************************************/
			bool operator == (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks that two Degree objects are not equal.
            *   @param  A degree object equality will be checked against.
            *   @return True if the two objects are not equal and false otherwise
            ****************************************************************/
			bool operator != (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than or equal to
            *           the parameter.
            *   @param  A degree object equality will be checked against.
            *   @return True if this object is less than or equal to parameter
            *           and false otherwise
            ****************************************************************/
			bool operator <= (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           the parameter.
            *   @param  A degree object equality will be checked against.
            *   @return True if this object is greater than or equal to
            *           parameter and false otherwise
            ****************************************************************/
			bool operator >= (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than parameter
            *   @param  A Degree object .
            *   @return True if this object is less than parameter and
            *           false otherwise
            ****************************************************************/
			bool operator < (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than parameter
            *   @param  A Degree object .
            *   @return True if this object is greater than parameter and
            *           false otherwise
            ****************************************************************/
			bool operator > (const Degree &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           a Radian object
            *   @param  A Radian object equality will be checked against.
            *   @return True if this object is equal to parameter and
            *           false otherwise
            ****************************************************************/
			bool operator == (const Radian &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is not equal to a Radian object
            *   @param  A Radian object equality will be checked against.
            *   @return True if this object is not equal to parameter and
            *           false otherwise
            ****************************************************************/
			bool operator != (const Radian &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than or equal to
            *           a Radian object
            *   @param  A Radian object equality will be checked against.
            *   @return True if this object is less than or equal to
            *           parameter and false otherwise
            ****************************************************************/
			bool operator <= (const Radian &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is greater than or equal to
            *           a Radian object
            *   @param  A Radian object equality will be checked against.
            *   @return True if this object is greater than or equal to
            *           parameter and false otherwise
            ****************************************************************/
			bool operator >= (const Radian &param) const;


            /************************************************************//**
            *   @brief  Checks if this object is less than parameter
            *   @param  A Radian object .
            *   @return True if this object is less than parameter and
            *           false otherwise
            ****************************************************************/
			bool operator < (const Radian &param) const;


            /************************************************************//**
            *   @brief  Insertion operator overload
            *   @param  output stream where the Degree object will be printed.
            *   @param  A Degree object which will be printed to output stream.
            *   @return The output stream the Degree object was printed to.
            ****************************************************************/
			friend std::ostream& operator << (std::ostream& out, const Degree &param);


            /************************************************************//**
            *   @brief  Extraction operator overload
            *   @param  input stream where the Degree object will be extracted.
            *   @param  A Degree object which will store the extracted object.
            *   @return The input stream the Degree object was extracted from.
            ****************************************************************/
			friend std::istream& operator >> (std::istream& in, const Degree &param);

        private:
            float m_Degrees = 0;
            friend class Radian;
            friend float cos(const Degree &deg);
            friend float sin(const Degree &deg);
    };


    /************************************************************//**
    *   @brief  Multiplication operator
    *   @tparam The datatype of the object to be multiplied by
    *   @param  The object to be multiplied by.
    *   @return template parameter
    ****************************************************************/
    template <class T>
    Math::Degree Degree::operator * (const T param) const
    {
        return Math::Degree(m_Degrees * param);
    }

}
#endif
