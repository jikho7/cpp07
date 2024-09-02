#include "Array.hpp"

int main()
{
    Array<int>noParam;
    Array<int> intArray(10);
    Array<char>charArray(20);
    Array<float>floatArray(5);
    Array<double>doubleArray(4);

    std::cout << YELLOW << "Test 1 : Create an empty array" << RESET << std::endl;
    noParam.print();
    std::cout << std::endl;

    std::cout << YELLOW << "Test 2 : Create an array and initialize by default" << RESET << std::endl;
    std::cout << "intArray(10) : " << std::endl;
 intArray.print();
    std::cout << std::endl;

    std::cout << YELLOW << "Test 3 : Create an array, copy it, modify its values and check the original values" << RESET << std::endl;
    Array<int>cpy (intArray);
    std::cout << "Print intArray array and cpy array : " << std::endl;

    std::cout << "Print intArray : ";
 intArray.print();
    std::cout << "Print cpy : ";
    cpy.print();
    std::cout << std::endl;

    std::cout << "Modify a cpy element cpy[5] = 5 : " << std::endl;
    cpy[5] = 5;
    std::cout << "Modify a intArray element intArray[0] = 7 : " << std::endl;
 intArray[0] = 7;

    std::cout << "Print intArray after modifying : ";
 intArray.print();
    std::cout << "Print cpy after mofifying : ";
    cpy.print();
    std::cout << std::endl;

    std::cout << YELLOW << "Test 4 : Accessing to element with the [] operator" << RESET << std::endl;

    std::cout << "Initilization floatArray with [] :" << std::endl;
    floatArray[0] = 1.1f;
    floatArray[1] = 1555.1f;
    floatArray[2] = 144789798.541f;
    floatArray[3] = -1.15156141645f;

    std::cout << "Print cpytArray : " << std::endl;
    cpy.print();
    std::cout << std::endl;

    std::cout << "PrintinttArray : " << std::endl;
    intArray.print();
    std::cout << std::endl;

    std::cout << "Print floatArray : " << std::endl;
    floatArray.print();
    std::cout << std::endl;

    std::cout << "Accessing to cpy[5] : " << cpy[5] << std::endl <<  "Accessing to intArray[0] : " << intArray[0] << std::endl << "Accessing to floatArray[0] : " << floatArray[0]<< std::endl;
    std::cout << std::endl;

    std::cout << YELLOW << "Test 5 : Accessing to element out of range " << RESET << std::endl;

    try
    {
        std::cout << "Accessing to cpy[50] : " << cpy[50] << std::endl <<  "Accessing to intArray[20] : " << intArray[20] << std::endl;
        std::cout << std::endl;
    }
    catch(Array<int>::outOfBoundsException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << YELLOW << "Test 6 : Size function " << RESET << std::endl;

    std::cout << "Size cpy: " << cpy.size() << std::endl;
    std::cout << "Size charArray[20]: " << charArray.size() << std::endl;
    std::cout << "Size noParam: " << noParam.size() << std::endl;
    std::cout << std::endl;

    std::cout << YELLOW << "Test 7 : Print function " << RESET << std::endl;
    charArray[0] = 'a';
    charArray[2] = 'd';
    charArray[4] = 'u';
    charArray[6] = 'e';
    charArray[15] = 'q';
    charArray[19] = 'p';

    doubleArray[0] = 1.56;
    doubleArray[1] = -451.56;
    doubleArray[2] = -999991.56;
    doubleArray[3] = 15656.56541616;

    std::cout << "Print charArray : " << std::endl;
    charArray.print();
    std::cout << std::endl;

    std::cout << "Print doubleArray : " << std::endl;
    doubleArray.print();
    std::cout << std::endl;

    return (0);
}
