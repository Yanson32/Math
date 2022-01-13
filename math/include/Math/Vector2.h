#ifndef MATH_C_VECTOR_H
#define MATH_C_VECTOR_H
/************************************************************//**
*	@author	Wayne J Larson Jr.
*	@date	5/7/2018
****************************************************************/

#include <cmath>
#include <stdexcept>

namespace Math
{
    template <class T>
	class Vector2
	{
	public:
		/************************************************************//**
		*	@brief	Default constructor
		****************************************************************/
		Vector2();


		/************************************************************//**
		*	@brief	Constructor with two arguments.
		*	@param	newX movement on the x axis.
		*	@param	newY movement on the y axis.
		****************************************************************/
		Vector2(const T newX, const T newY);


		/************************************************************//**
		*	@brief	Get the vectors magnitude.
		*	@return	The magnitude of the vector
		****************************************************************/
		T magnitude() const;


		/************************************************************//**
		*	@brief	Set the vectors magnitude to one, with the same
		*			direction.
		****************************************************************/
		void normalize();


		/************************************************************//**
		*	@brief	Scale the vector according to the input param.
		*	@param	scalar the amout of scaling to occur.
		*	@return	A vector that has been scaled in comparison to
		*		    this vector object.
		****************************************************************/
		Vector2<T> operator * (const T scalar);


		/************************************************************//**
		*	@brief	Get the difference between two vectors
		*	@param	param a vector to subtract from this vector object.
		*	@return	A vector representing the difference between this
		*			vector and the input vector (param)
		****************************************************************/
		Vector2<T> operator - (const Vector2<T> param);


		/************************************************************//**
		*	@brief	Get the sum of two vectors
		*	@param	param a vector to be added to this vector object.
		*	@return	A vector representing the sum of this
		*			vector and the input vector (param)
		****************************************************************/
		Vector2<T> operator + (const Vector2<T> param);


		/************************************************************//**
		*	@brief	Calculate the dot product of two vectors.
		*	@param	param a vector that will be used to calculate the
		*			dot product against.
		*	@return	The dot product of this vector and the input vector.
		****************************************************************/
		T dot(const Vector2<T> param);


		/************************************************************//**
		*	@brief	Destructor
		****************************************************************/
		~Vector2();
		T x = 0;
		T y = 0;
	};


	/************************************************************//**
	*	@brief	Default constructor
	****************************************************************/
    template <class T>
	Vector2<T>::Vector2()
	{

	}


	/************************************************************//**
	*	@brief	Constructor with two arguments.
	*	@param	newX movement on the x axis.
	*	@param	newY movement on the y axis.
	****************************************************************/
    template <class T>
	Vector2<T>::Vector2(const T newX, const T newY) :
		x(newX),
		y(newY)
	{

	}


	/************************************************************//**
	*	@brief	Get the vectors magnitude.
	*	@return	The magnitude of the vector
	****************************************************************/
    template <class T>
	T Vector2<T>::magnitude() const
	{
		//Use pythagorean theorem to calculate magnitude
		return std::sqrt(x * x + y * y);
	}


	/************************************************************//**
	*	@brief	Set the vectors magnitude to one, with the same
	*			direction.
	****************************************************************/
    template <class T>
	void Vector2<T>::normalize()
	{
		T mag = magnitude();
		if (!mag)
			throw std::runtime_error("cannot divide by zero [Vector2::normalize]");

		x = x / mag;
		y = y / mag;
	}


	/************************************************************//**
	*	@brief	Scale the vector according to the input param.
	*	@param	scalar the amout of scaling to occur.
	*	@return	A vector that has been scaled in comparison to
	*		    this vector object.
	****************************************************************/
    template <class T>
	Vector2<T> Vector2<T>::operator * (const T scalar)
	{
		Vector2<T> vec;
		vec.x  = x * scalar;
        vec.y  = y * scalar;
		return vec;
	}


	/************************************************************//**
	*	@brief	Get the difference between two vectors
	*	@param	param a vector to subtract from this vector object.
	*	@return	A vector representing the difference between this
	*			vector and the input vector (param)
	****************************************************************/
    template <class T>
	Vector2<T> Vector2<T>::operator - (const Vector2<T> param)
	{
		T xAxis = x - param.x;
		T yAxis = y - param.y;
		return Vector2<T>(xAxis, yAxis);
	}


	/************************************************************//**
	*	@brief	Get the sum of two vectors
	*	@param	param a vector to be added to this vector object.
	*	@return	A vector representing the sum of this
	*			vector and the input vector (param)
	****************************************************************/
    template <class T>
	Vector2<T> Vector2<T>::operator + (const Vector2<T> param)
	{
		T xAxis = x + param.x;
		T yAxis = y + param.y;
		return Vector2<T>(xAxis, yAxis);
	}


	/************************************************************//**
	*	@brief	Calculate the dot product of two vectors.
	*	@param	param a vector that will be used to calculate the
	*			dot product against.
	*	@return	The dot product of this vector and the input vector.
	****************************************************************/
    template <class T>
	T Vector2<T>::dot(const Vector2<T> param)
	{
		return x  * param.x + y * param.y;
	}


	/************************************************************//**
	*	@brief	Destructor
	****************************************************************/
    template <class T>
	Vector2<T>::~Vector2()
	{

	}
}

#endif
