#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
template <typename T>
class Array
{
		T               *_ptr;
		unsigned int    _size;


	public:
	// Exceptions
		class outOfBoundsException : public std::exception
		{
			public :
			virtual const char* what() const throw()
			{
				return ("Index out of bound.\n");
			}
		};
	// Constructor and destructor
		Array();
		Array(unsigned int n);
		~Array();
	// Copy constructor and assignement copy
		Array(const Array &other);
		Array operator=(const Array &other);
	// Operator surcharger
		T& operator[](unsigned int index);
	// Methodes
		void print() const;
		unsigned int size() const;
	// Getteurs
		T* getElement() const;
};

#include "Array.tpp"

#endif
