/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 12:23:09 by youmoukh         ###   ########.fr       */
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
	if (_n <= 0x1)
		throw std::out_of_range("No Enough numbers to look in.");
	for (unsigned int i = 0; i < _n ; i++)
	{
		std::cout << _array[i] << std::endl;
	
	}
	std::sort(_array, _array + _n);
	return (0);
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
	
	// std::cout << "after sorting" << std::endl;
	// for (unsigned int i = 0; i< _n ; i++)
	// {
	// 	std::cout << _array[i] << std::endl;
	// }
	return (0);
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