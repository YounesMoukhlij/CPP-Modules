/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 12:02:00 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
	_i = 0x0;
	_array = NULL;
	_n = 0x0;
}

Span::Span(unsigned int n)
{
	_array = new int[n];
	_n = n;
	_i = 0x0;
}

Span::Span(const Span& origine)
{
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
	delete [] _array;
}

Span&   Span::operator=(const Span& origine)
{
	_array = 0x0;
	if (this != &origine)
	{
		_n = origine._n;
		_i = origine._i;
		_array = new int[_n];
		for (std::size_t i = 0x0; i < _n ; i++)
			_array[i] = origine._array[i];
	}
}


int		Span::shortestSpan()
{

}

int		Span::longestSpan()
{
	if (_n <= 0x1)
		throw std::out_of_range("No Enough numbers to look in.");
	std::sort(_array[0x0], _array[_n]);
}

int    Span::addNumber(unsigned int n)
{
	if (_n <= _i)
	{
		_array[_i] = n;
		_i++;
	}
	else
		throw std::out_of_range ("Cannot add the number, Out of range.");
}


void	Span::gimmeSomeGaz()
{
	for (unsigned int index = 0x0; index < _n; index++)
	{
		int _value = std::rand();
		_array[index] = _value;
	}
	_i = _n;
}