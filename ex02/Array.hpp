#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array
{
        T               *_ptr;
        unsigned int    _size;

        class outOfBoundsException : public std::exception
        {
            public :
            virtual const char* what() const throw()
            {
                return ("Index out of bound.\n");
            }
        };

    public:
        Array();
        Array(unsigned int n);
        ~Array();

        Array(const Array &other);
        Array operator=(const Array &other);
        T& operator[](unsigned int index);
        void print();
        T* getElement();
        unsigned int size() const;

};

#include "Array.tpp"

#endif