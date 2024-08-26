#include "iter.hpp"
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
void print(T element)
{
    std::cout << element << " ";
}

int main()
{
    int intArray[] = {-2, 0, 4, 8, 10};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    char charArray[] = {'a', 'b', 'u'};
    size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);
    float floatArray[] = {-5.4f, 2.45f, 98.36f};
    size_t floatArrayLength = sizeof(floatArray) / sizeof(floatArray[0]);

    iter(intArray, intArrayLength, increment<int>);
    //iter(intArray, intArrayLength, decrement<int>);      

    //iter(charArray, charArrayLength, increment<char>);
    iter(charArray, charArrayLength, decrement<char>);  

    iter(floatArray, floatArrayLength, increment<float>);
    //iter(floatArray, floatArrayLength, decrement<float>);  

    std::cout << "intArray" << std::endl;

    for (size_t i = 0 ; i < intArrayLength ; i++)
    {
        print(intArray[i]);
    }

    std::cout << std::endl;
    std::cout << "charArray" << std::endl;

    for (size_t i = 0 ; i < charArrayLength ; i++)
    {
        print(charArray[i]);
    }

    std::cout << std::endl;
    std::cout << "floatArray" << std::endl;

    for (size_t i = 0 ; i < floatArrayLength ; i++)
    {
        print(floatArray[i]);
    }

    return (0);
}