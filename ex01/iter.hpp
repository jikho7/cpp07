#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T, typename F>
void iter(T *array, int size, F function)
{
    for (int i = 0 ; i < size ; i++)
    {
        function(array[i]);
    }
}

#endif
