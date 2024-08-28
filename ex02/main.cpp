#include "Array.hpp"

int main()
{
    Array<int>noParam;
    Array<int>test(10);
    Array<int>cpy;
    Array<char>charArray(20);
    Array<float>floatArray;
    Array<double>doubleArray(4);

    std::cout << "print test before copy : " << std::endl;
    cpy.print();
    std::cout << "size cpy: " << cpy.size() << std::endl;

    cpy = test;
    std::cout << "copie done" << std::endl;
    std::cout << "size cpy: " << cpy.size() << std::endl;

    std::cout << "print cpy after copy : " << std::endl;
    cpy.print();

    std::cout << "print test after copy : " << std::endl;
    test.print();

    std::cout << "print charArray" << std::endl;
    charArray.print();

    std::cout << "print floatArray" << std::endl;
    floatArray.print();

    std::cout << "print doubleArray" << std::endl;
    doubleArray.print();


    try
    {
        test[-500] = 7;
    }
    catch (const std::exception &outOfRange)
    {
        std::cerr << outOfRange.what() << std::endl;
    }
    std::cout << "idx 0 : " << test.getElement()[0] << std::endl;
    noParam.print();
    std::cout << "size no param : " << noParam.size() << std::endl;
    std::cout << "size test" << std::endl;
    std::cout << "size charArray : " << charArray.size() << std::endl;
    std::cout << "size floatArray : " << floatArray.size() << std::endl;
    std::cout << "size doubleArray : " << doubleArray.size() << std::endl;
    std::cout << std::endl;

    std::cout << "operator [] test " << std::endl;

    doubleArray[0] = 1.1f;
    doubleArray[1] = 2.2f;
    doubleArray[2] = -51.1f;
    doubleArray[3] = 33.2f;

    doubleArray.print();
    return (0);
}