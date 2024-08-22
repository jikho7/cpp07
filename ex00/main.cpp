#include <iostream>
#include <string>
#include "templates.hpp"

int main()
{
    int a = 5;
    int b = 10;

    float c = 45.2f;
    float d = 8.78f;

    char e = 'z';
    char f = 'a';

    std::cout << a << "\n" << b << std::endl;
    swap<int>(&a, &b);
    std::cout << a << "\n" << b << std::endl;

    std::cout << max<float>(c,d) << std::endl;
    std::cout << max<char>(e,f) << std::endl;


    return (0);
}