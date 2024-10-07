/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 11:38:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
	_array = 0x0;
	_n = 0x0;
}

Span::Span(unsigned int n)
{

}

Span::Span(const Span& origine)
{
	if (this != &origine)
	{
		_n = origine._n;
		_array = new _array[_n];
		for (std::size_t i = 0x0; i < _size ; i++)
			_array[i] = origine._array[i];
	}
}
Span::~Span()
{

}

Span&   Span::operator=(const Span& origine)
{
	_array = 0x0;
	if (this != &origine)
	{
		_size = origine._size;
		_array = new T[_size];
		for (std::size_t i = 0x0; i < _size ; i++)
			_array[i] = origine._array[i];
	}
}


int		Span::shortestSpan()
{

}

int		Span::longestSpan()
{

}

int    Span::addNumber()
{

}
