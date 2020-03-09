#ifndef MATH_C_VECTOR_H
#define MATH_C_VECTOR_H
/************************************************************//**
*	@author	Wayne J Larson Jr.
*	@date	5/7/2018
****************************************************************/

#include "math_export.h"

namespace Math
{
	class MATH_EXPORT Vector2
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
		Vector2(const float newX, const float newY);


		/************************************************************//**
		*	@brief	Get the vectors magnitude.
		*	@return	The magnitude of the vector
		****************************************************************/
		float magnitude() const;


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
		Vector2 operator * (const float scalar);


		/************************************************************//**
		*	@brief	Get the difference between two vectors
		*	@param	param a vector to subtract from this vector object.
		*	@return	A vector representing the difference between this
		*			vector and the input vector (param)
		****************************************************************/
		Vector2 operator - (const Vector2 param);


		/************************************************************//**
		*	@brief	Get the sum of two vectors
		*	@param	param a vector to be added to this vector object.
		*	@return	A vector representing the sum of this
		*			vector and the input vector (param)
		****************************************************************/
		Vector2 operator + (const Vector2 param);


		/************************************************************//**
		*	@brief	Set the magnitude of the vector
		*	@param	magnitude the new magnitude of the vector.
		****************************************************************/
		void setMagnitude(const float magnitude);


		/************************************************************//**
		*	@brief	Calculate the dot product of two vectors.
		*	@param	param a vector that will be used to calculate the
		*			dot product against.
		*	@return	The dot product of this vector and the input vector.
		****************************************************************/
		float dot(const Vector2 param);


		/************************************************************//**
		*	@brief	Destructor
		****************************************************************/
		~Vector2();


		float x = 0;
		float y = 0;
	};
}

#endif
