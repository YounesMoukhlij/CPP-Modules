/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 11:48:02 by youmoukh         ###   ########.fr       */
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

}

int    Span::addNumber(unsigned int n)
{
	if (i < _i)
		_array[i] = n;
	else
		throw std::out_of_range ("Cannot add the number, Out of range.");
}
