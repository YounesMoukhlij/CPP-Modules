/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 12:47:23 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
	_i = 0x0;
	_array = NULL;
	_n = 0x0;
	std::cout << "Default Constructor Called." << std::endl;
}

Span::Span(unsigned int n)
{
	_array = new int[n];
	_n = n;
	_i = 0x0;
	std::cout << "Parametriesed Constructor Called." << std::endl;
}

Span::Span(const Span& origine)
{
	std::cout << "Copy Constructor Called." << std::endl;
	if (this != &origine)
	{
		_n = origine._n;
		_i = origine._i;
		_array = new int[_n];
		for (std::size_t i = 0x0; i < _n ; i++)
			_array[i] = origine._array[i];
	}
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
		throw std::out_of_range("No Enough numbers to look in.");
	std::sort(_array, _array + _n);
	for (unsigned int i = 0; i < _n ; i++)
	{
		difference = _array[i] - _array[i - 0x1];
		if (difference < lowestSpan)
			lowestSpan = difference;
	}
	return (lowestSpan);
}

int		Span::longestSpan()
{
	if (_n <= 0x1)
		throw std::out_of_range("No Enough numbers to look in.");
		
	std::cout << "before sorting" << std::endl;
	for (unsigned int i = 0; i< _n ; i++)
	{
		std::cout << _array[i] << std::endl;
	}
	std::sort(_array, _array + _n);
	int	highestSpan = _array[_n - 0x1] - _array[0x0];
	
	std::cout << "after sorting" << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	for (unsigned int i = 0; i< _n ; i++)
	{
		std::cout << _array[i] << std::endl;
	}
	return (highestSpan);
}

void	Span::addNumber(unsigned int n)
{
	if (_n <= _i)
	{
		_array[_i] = n;
		_i++;
	}
	else
		throw std::out_of_range ("Cannot add the number, Out of range.");
}


void	Span::arrayFiller()
{
	for (unsigned int index = 0x0; index < _n; index++)
	{
		int _value = std::rand() % 100;
		_array[index] = _value;
	}
	_i = _n;
}


void	Sp