#ifndef TEMP_H
#define TEMP_H

template <typename T>
void swap(T *x, T *y)
{
    T temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

template <typename T> 
T const & min(T const &x, T const &y)
{
    return (y<=x ? y : x );
}

template <typename T> 
T max(T const & x, T const & y)
{
    return (y>=x ? y : x );
}

#endif