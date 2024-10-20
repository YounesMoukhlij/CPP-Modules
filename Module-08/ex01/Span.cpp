/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/13 16:20:08 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _n(0x0), _i(0x0), _array(0x0)
{
	std::cout << "Default Constructor Called." << std::endl;
}

Span::Span(long n)
{
	std::cout << "Parametriesed Constructor Called." << std::endl;
	_n = n;
	_i = 0x0;
	_array = new long[n];
	if (!_array)
		throw std::bad_alloc();
}

Span::Span(const Span& origine)
{
	std::cout << "Copy Constructor Called." << std::endl;
	_array = 0x0;
	if (this != &origine)
		*this = origine;
}

Span::~Span()
{
	std::cout << "Destructor Called." << std::endl;
	delete [] _array;
}

Span&   Span::operator=(const Span& origine)
{
	std::cout << "Copy assignement Constructor Called." << std::endl;
	if (this != &origine)
	{
		if (_array != 0x0)
			delete [] _array;
		_n = origine._n;
		_i = origine._i;
		_array = new long[_n];
		if (!_array)
			throw std::bad_alloc();
		for (long i = 0x0; i < _n ; i++)
			_array[i] = origine._array[i];
	}
	return (*this);
}


long		Span::shortestSpan()
{
	long	lowestSpan = INT_MAX;
	long	difference = 0x0;
	long	temp = 0x0;

	if (_n <= 0x1)
		throw std::logic_error("No Enough numbers to look in.");
	std::sort(_array, _array + _n);
	difference = _array[0x1] - _array[0x0];
	for (long i = 0x0; i < _n - 1 ; i++)
	{
		temp = _array[i + 0x1] - _array[i];
		if (difference > temp)
			lowestSpan = temp;
	}
	return (lowestSpan);
}

long		Span::longestSpan()
{
	if (_n <= 0x1)
		throw std::logic_error("No Enough numbers to look in.");
	std::sort(_array, _array + _n);
	long a = _array[_n - 0x1] - _array[0x0];
	return (a);
}

void	Span::addNumber(long n)
{
	if (_i >= _n)
		throw std::out_of_range("Cannot add more numbers; Span is full.");
	_array[_i] = n;
	_i++;
}


void	Span::arrayFiller()
{
	std::srand(std::time(0x0));
	for (long index = 0x0; index < _n; index++)
	{
		long _value = std::rand() % 1000;
		addNumber(_value);
	}
	_i = _n; // Updating the index in array 0_0
}


void	Span::displayArray()
{
	for (long i = 0x0; i < _n ; i++)
		std::cout << "[" << i << "] = "<< _array[i] << std::endl;
}
