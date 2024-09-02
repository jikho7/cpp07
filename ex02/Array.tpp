#include "Array.hpp"

//##################################################################
//                   Constructor && Destructor                     #
//##################################################################

template<typename T> Array<T>::Array() : _ptr(NULL), _size(0) {}

template<typename T> Array<T>::Array(unsigned int n)
{
    _ptr = new T[n];
    _size = n;

    for (unsigned int i = 0; i < _size; i++)
        _ptr[i] = 0;
}

template<typename T> Array<T>::~Array()
{
    delete[] this->_ptr;
}


//##################################################################
//            Copy constructor and assignement copy                #
//##################################################################

template<typename T>
Array<T>::Array(const Array &other) : _ptr(new T[other._size]), _size(other._size){
    for (unsigned int i = 0; i < this->_size; ++i)
        this->_ptr[i] = other._ptr[i];
}

template<typename T>
Array<T> Array<T>::operator=(const Array &other){
    if(this != &other)
    {
        delete[] this->_ptr;
        this->_size = other._size;
        this->_ptr = new T[this->_size];
        for (unsigned int i = 0 ; i < _size ; i++)
        {
            this->_ptr[i] = other._ptr[i];
        }
    }
    return *this;
}

//##################################################################
//                          SETTERS                                #
//##################################################################

//##################################################################
//                          GETTERS                                #
//##################################################################

template<typename T>
T* Array<T>::getElement() const
{
    if (this->_ptr)
        return(this->_ptr);
    else
        return (NULL);
}

//##################################################################
//                           Methodes                              #
//##################################################################

template<typename T>
void Array<T>::print() const
{
    if (this->_ptr == NULL)
        std::cout << "Array is empty" << std::endl;
    else
    {
        for (unsigned int i = 0 ; i < _size ; i++)
            std::cout << this->_ptr[i] << " ";
        std::cout << std::endl;
    }
}

template <typename T>
unsigned int Array<T>::size() const
{
    unsigned int count;
    if (this->_size)
    {
        for (unsigned int i = 0 ; i <= this->_size ; i++)
            count = i;
        return (count);
    }
    else
        return (0);
}

//##################################################################
//                           Surcharges                            #
//##################################################################

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size) {

        throw outOfBoundsException();
    }
    return this->_ptr[index];
}
