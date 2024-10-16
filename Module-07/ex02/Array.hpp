/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 14:34:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>

# define MAX_VAL 750
# define IGNORE(param) (void)(param)

template<class T>
class Array
{
	private:
		T* 			_array;
		std::size_t _size;
	public:
		Array();
		~Array();
		Array(std::size_t n);
		Array(const Array& origine);
		Array& operator=(const Array &origine);

		std::size_t		getSize() const;
		T&				operator[](std::size_t index);
		const T&		operator[](std::size_t index) const;
};

template<class T>
Array<T>::~Array()
{
	std::cout << "Array Destructor Called." << std::endl;
	delete [] _array;
	_array = 0x0;
}

template<class T>
Array<T>::Array() : _array(0x0), _size(0x0)
{
	std::cout << "Array Default Constructor Called." << std::endl;
	
}

template<class T>
Array<T>::Array(std::size_t n) : _size(n)
{
	std::cout << "Array Parametrised Constructor Called." << std::endl;
	if (n == 0x0)
		_array = 0x0;
	else
	{
		_array = new T[n];
		if (!_array)
			throw std::bad_alloc();
	}
}

template<class T>
Array<T>::Array(const Array& origine)
{
	std::cout << "Array Copy Constructor Called." << std::endl;
	if (_array)
		delete [] _array;
	if (this != &origine)
		*this = origine;
}

template<class T>
Array<T>& Array<T>::operator=(const Array &origine)
{
	std::cout << "Array Copy Assignement Called." << std::endl;
	if (this != &origine)
	{
		if (_array)
			delete [] _array;
		_size = origine._size;
		if (_size > 0x0)
		{
			_array = new T[_size];
			if (!_array)
				throw std::bad_alloc();
			for (std::size_t i = 0x0; i < _size ; i++)
				_array[i] = origine._array[i];
		}
		else
			_array = 0x0;
	}
	return (*this);
}

template<class T>
std::size_t Array<T>::getSize( void ) const
{
	return (_size);
}

template<class T>
const T& Array<T>::operator[](std::size_t index) const
{
    if (index >= _size)
	{
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

template<class T>
T& Array<T>::operator[](std::size_t index)
{
    if (index >= _size)
	{
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}


