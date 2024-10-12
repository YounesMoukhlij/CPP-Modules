/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 17:59:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _n(0x0), _i(0x0), _array(0x0)
{
	std::cout << "Default Constructor Called." << std::endl;
}

Span::Span(usd n)
{
	std::cout << "Parametriesed Constructor Called." << std::endl;
	_n = n;
	_i = 0x0;
	_array = new int[n];
	if (!_array)
		throw std::bad_alloc();
}

Span::Span(const Span& origine)
{
	std::cout << "Copy Constructor Called." << std::endl;
	_array = NULL;
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
	_array = 0x0;
	if (this != &origine)
	{
		_n = origine._n;
		_i = origine._i;
		_array = new int[_n];
		if (!_array)
			throw std::bad_alloc();
		for (std::size_t i = 0x0; i < _n ; i++)
			_array[i] = origine._array[i];
	}
	return (*this);
}


int		Span::shortestSpan()
{
	int	lowestSpan = INT_MAX;
	int	difference = 0x0;
	
	if (_n <= 0x1)
		throw std::logic_error("No Enough numbers to look in.");
	std::sort(_array, _array + _n);
	for (usd i = 0x0; i < _n ; i++)
	{
		difference = _array[i + 0x1] - _array[i];
		if (difference < lowestSpan)
			lowestSpan = difference;
	}
	return (lowestSpan);
}

int		Span::longestSpan()
{
	if (_n <= 0x1)
		throw std::logic_error("No Enough numbers to look in.");
	std::sort(_array, _array + _n);
	int	highestSpan = _array[_n - 0x1] - _array[0x0];
	return (highestSpan);
}

void	Span::addNumber(usd n)
{
	if (_i >= _n)
		throw std::out_of_range("Cannot add more numbers; Span is full.");
	_array[_i] = n;
	_i++;
}


void	Span::arrayFiller()
{
	std::srand(std::time(0x0));
	for (usd index = 0x0; index < _n; index++)
	{
		int _value = std::rand() % 1000;
		ad
		_array[index] = _value;
	}
	_i = _n;
}


void	Span::displayArray()
{
	for (usd i = 0x0; i < _n ; i++)
		std::cout << "[" << i << "]"<< _array[i] << std::endl;
}