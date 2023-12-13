#include "Degree.h"
#include "Radian.h"

namespace Math
{
    template <class T>
    class Point
    {
        public:
            Point();
            Point(const T &x, const T &y);
            Point<T> translate(const T &x, const T &y);
            Point<T> translate(const T &x, const T &y) const;
            Point<T> rotate(const Degree<T> &degree, const Point<T> &axis);
            Point<T> rotate(const Degree<T> &degree, const Point<T> &axis) const;
            Point<T> rotate(const Radian<T> &radian, const Point<T> &axis);
            Point<T> rotate(const Radian<T> &radian, const Point<T> &axis) const;
            

            ~Point();
        public:
            T m_x = 0;
            T m_y = 0;

    };


    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T>::Point()
    {
    }

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T>::Point(const T &x, const T &y):m_x(x), m_y(y)
    {
        
    }
    

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::translate(const T &x, const T &y)
    {
       m_x += x;
       m_y += y; 
       return *this; 
    }

    
    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::translate(const T &x, const T &y) const
    {
       return Point(m_x + x, m_y + y); 
    }

    
    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::rotate(const Degree<T> &degree, const Point<T> &axis)
    {
       return Point(0, 0); 
    }
    

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::rotate(const Degree<T> &degree, const Point<T> &axis) const
    {
       return Point(0, 0); 
    }
    

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::rotate(const Radian<T> &degree, const Point<T> &axis)
    {
       return Point(0, 0); 
    }
    

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T> Point<T>::rotate(const Radian<T> &degree, const Point<T> &axis) const
    {
       return Point(0, 0); 
    }
    

    /************************************************************//**
    *   @brief  
    *   @param
    *   @return 
    ****************************************************************/
    template <class T>
    Point<T>::~Point()
    {
    }
}
