/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:28:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/19 15:47:24 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(2)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    std::cout << "Int num ~~~~ " << num << std::endl;
    std::cout << "Int value ~ " << _value << std::endl;
    _value = num << _fractionalBits;  
    std::cout << "Int value :::" << _value << std::endl;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    std::cout << " 2> " << num << std::endl;
    _value = roundf(num * (1 << _fractionalBits));
    std::cout << " 1 1 1 1 1 1 1> " << _value << std::endl;
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other._value;  
    return *this;  
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(_value) / (1 << _fractionalBits));  
}

int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;  
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	std::cout << "called " << std::endl;
    os << fixed.toFloat();  
    return os;
}