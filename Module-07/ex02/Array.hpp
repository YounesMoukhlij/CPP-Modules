/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 18:58:44 by youmoukh         ###   ########.fr       */
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
		T* _array;
		size_t _size;
	public:
		Array();
		~Array();
		Array(size_t n);
		Array(const Array& origine);
		Array& operator=(const Array &origine);

		size_t	getSize() const;
		T&				operator[](size_t index);
		const T&		operator[](size_t index) const;
};

template<class T>
Array<T>::~Array()
{
	std::cout << "Array Destructor Called." << std::endl;
	delete [] _array;
}

template<class T>
Array<T>::Array() : _array(0x0), _size(0x0)
{
}

template<class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n];
}

template<class T>
Array<T>::Array(const Array& origine)
{
	_array = 0x0;
	if (this != &origine)
	{
		_size = origine._size;
		_array = new T[_size];
		for (size_t i = 0x0; i < _size ; i++)
			_array[i] = origine._array[i];
	}
}

template<class T>
Array<T>& Array<T>::operator=(const Array &origine)
{
	if (this != &origine)
	{
		if (_array)
			delete [] _array;
		_size = origine._size;
		_array = new T[_size];
		for (size_t i = 0x0; i < _size ; i++)
			_array[i] = origine._array[i];
	}
	return (*this);
}

template<class T>
unsigned int Array<T>::getSize( void ) const
{
	return (_size);
}

template<class T>
const Array<T>& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
	{
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

template<class T>
Array<T>& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
	{
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}


