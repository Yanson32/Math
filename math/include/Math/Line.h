/*********************************************************//**
*   @author Wayne J Larson Jr.
*   @date   4/26/22
*   @description This class represents a line segment.
*************************************************************/
#ifndef MATH_LINE_H
#define MATH_LINE_H
#include "Math/Vector2.h"
#include <cmath>

namespace Math
{
    template <class T>
    class Line final
    {
        public:
            /*********************************************************//**
            *   @brief Constructor 
            *************************************************************/
            Line();

            
            /*********************************************************//**
            *   @brief Constructor 
            *   @param start is the starting point (x and y coordinat) 
            *          of the line.
            *   @param end if the ending point (x and y coordinat) of 
            *          the line.
            *************************************************************/
            Line(const Vector2<T> &start, const Vector2<T> &end);
            

            /*********************************************************//**
            *   @brief This method reverses the line. Reversing the line
            *          is when the start point and end points of the line
            *          are swapped.
            *   @return A new line object but with the start and end points
            *           swapped.
            *************************************************************/
            Line<T> Reverse() const;
            

            /*********************************************************//**
            *   @brief This method returns a line representing the left 
            *          normal of the line. A left normal is a line that
            *          is perpendicular to the parent line, on the left
            *          side, and starting at the parent line's end point. 
            *   @return A line segment that represents the left normal
            *           of the parent line.
            *************************************************************/
            Line<T> LeftNormal() const;
            

            /*********************************************************//**
            *   @brief This method returns a line representing the right
            *          normal of the line. A right normal is a line that
            *          is perpendicular to the parent line, on the right 
            *          side, and starting at the parent line's end point. 
            *   @return A line segment that represents the right normal
            *           of the parent line.
            *************************************************************/
            Line<T> RightNormal() const;
            
            
            /*********************************************************//**
            *   @brief This method returns the magnitude (lenght) of the
            *          line. 
            *   @return The magnitude of the line. 
            *************************************************************/
            unsigned Magnitude() const;
            

            /*********************************************************//**
            *   @brief  This method checks for equality between two lines.
            *           A line is considered equal if the start and end
            *           points are the same. 
            *   @return True is returned if the lines are equal and false
            *           otherwise. 
            *************************************************************/
			bool operator == (const Math::Line<T> &param) const;
            

            /*********************************************************//**
            *   @brief  This method checks unequal lines. Two lines are 
            *           considered to be unequal, when the start and end
            *           point of the current line, is different form the 
            *           start and end point of the input line.
            *   @return True is returnd if the lines are not equal and 
            *           false otherwise. 
            *************************************************************/
			bool operator != (const Math::Line<T> &param) const;
            

            Vector2<T> m_Start;                    //The starting point (x,y coordinate) of the line.
            Vector2<T> m_End;                      //The ending point (x,y coordinate) of the line.
    };

    
    /*********************************************************//**
    *   @brief Constructor 
    *************************************************************/
    template <class T>
    Line<T>::Line():m_Start(0, 0), m_End(0, 0)
    {

    }

    /*********************************************************//**
    *   @brief Constructor 
    *   @param start is the starting point (x and y coordinat) 
    *          of the line.
    *   @param end if the ending point (x and y coordinat) of 
    *          the line.
    *************************************************************/
    template <class T>
    Line<T>::Line(const Vector2<T> &start, const Vector2<T> &end): m_Start(start), m_End(end)
    {

    }

    
    /*********************************************************//**
    *   @brief This method reverses the line. Reversing the line
    *          is when the start point and end points of the line
    *          are swapped.
    *   @return A new line object but with the start and end points
    *           swapped.
    *************************************************************/
    template <class T>
    Line<T> Line<T>::Reverse() const
    {
        return Line<T>(m_End, m_Start);
    }

    
    /*********************************************************//**
    *   @brief This method returns a line representing the left 
    *          normal of the line. A left normal is a line that
    *          is perpendicular to the parent line, on the left
    *          side, and starting at the parent line's end point. 
    *   @return A line segment that represents the left normal
    *           of the parent line.
    *************************************************************/
    template <class T>
    Line<T> Line<T>::LeftNormal() const
    {
        T dx = m_End.x - m_Start.x;
        T dy = m_End.y - m_Start.y;
        return Line<T>(m_Start, {-dy, dx});
    }

    
    /*********************************************************//**
    *   @brief This method returns a line representing the right
    *          normal of the line. A right normal is a line that
    *          is perpendicular to the parent line, on the right 
    *          side, and starting at the parent line's end point. 
    *   @return A line segment that represents the right normal
    *           of the parent line.
    *************************************************************/
    template <class T>
    Line<T> Line<T>::RightNormal() const
    {
        T dx = m_End.x - m_Start.x;
        T dy = m_End.y - m_Start.y;
        return Line<T>(m_Start, {dy, -dx});
    }

    
    /*********************************************************//**
    *   @brief This method returns the magnitude (lenght) of the
    *          line. 
    *   @return The magnitude of the line. 
    *************************************************************/
    template <class T>
    unsigned Line<T>::Magnitude() const
    {
        auto a = std::abs(m_End.x - m_Start.x);
        auto b = std::abs(m_End.y - m_Start.y);
        return std::sqrt(a * a + b * b);
    }

    
    /*********************************************************//**
    *   @brief  This method checks for equality between two lines.
    *           A line is considered equal if the start and end
    *           points are the same. 
    *   @return True is returned if the lines are equal and false
    *           otherwise. 
    *************************************************************/
    template <class T>
	bool Line<T>::operator == (const Math::Line<T> &param) const
	{
		if (this->m_Start.x == param.m_Start.x && this->m_Start.y == param.m_Start.y)
			if (this->m_End.x == param.m_End.x && this->m_End.y == param.m_End.y)
				return true;

		return false;
	}

    
    /*********************************************************//**
    *   @brief  This method checks unequal lines. Two lines are 
    *           considered to be unequal, when the start and end
    *           point of the current line, is different form the 
    *           start and end point of the input line.
    *   @return True is returnd if the lines are not equal and 
    *           false otherwise. 
    *************************************************************/
    template <class T>
	bool Line<T>::operator != (const Math::Line<T> &param) const
	{
		if (this->m_Start.x != param.m_Start.x)
			return true;

		if (this->m_Start.y != param.m_Start.y)
			return true;

		if (this->m_End.x != param.m_End.x)
			return true;

		if (this->m_End.y != param.m_End.y)
			return true;

        return false;
	}
}

#endif // MATH_LINE_H
