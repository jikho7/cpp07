#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void increment(T &it)
{
    it += 5;
}

template <typename T>
void decrement(T &it)
{
    it -= 1;
}

template <typename T>
void print(const T element)
{
    std::cout << element << " ";
}

template <typename T>
void iter(T *array, int size, void (*function) (T))
{
    for (int i = 0 ; i < size ; i++)
    {
        function(array[i]);
    }
}

#endif
