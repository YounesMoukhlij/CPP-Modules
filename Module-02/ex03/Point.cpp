/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:55:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 15:45:56 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
	
}

Point::Point() : x(Fixed(0x0)), y(Fixed(0x0))
{
	// std::cout << "Point Constructor Called" << std::endl;
}

Point::~Point()
{
	// std::cout << "Point Destructor Called" << std::endl;
}

float Point::xValue() const
{
	return (x.toFloat());
}
float Point::yValue() const
{
	return (y.toFloat());
}

Point&	Point::operator=( const Point& origine )
{
	(void)origine;
	return (*this);
}

Point::Point( const Point& origine) : x(origine.x), y(origine.y)
{
	// std::cout << "Point Copy constructor called" << std::endl;
	*this = origine;
}