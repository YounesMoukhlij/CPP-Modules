/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:28:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 14:59:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0x0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int dec )
{
	// std::cout << "Int constructor called" << std::endl;
	_value = dec << _fractionalBits;
}

Fixed::Fixed( const float flo )
{
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(flo * (0x1 << _fractionalBits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
    return (static_cast<float>((_value) / (0x1 << _fractionalBits)));
}

int		Fixed::toInt( void ) const
{
	return (_value >> _fractionalBits);
}

std::ostream& operator << (std::ostream& fileOut, const Fixed& fixed)
{
	fileOut << fixed.toFloat();
	return (fileOut);
}

Fixed::Fixed( const Fixed& origine)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = origine;
}

Fixed& Fixed::operator=( const Fixed& origine) 
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origine)
		_value = origine.getRawBits();
	return (*this);
}

bool	Fixed::operator>( const Fixed& origine ) const
{
	return (this->_value > origine._value);
}

bool	Fixed::operator<( const Fixed& origine ) const
{
	return (this->_value < origine._value);
}

bool	Fixed::operator>=( const Fixed& origine ) const
{
	return (this->_value >= origine._value);
}

bool	Fixed::operator<=( const Fixed& origine ) const
{
	return (this->_value <= origine._value);
}

bool	Fixed::operator==( const Fixed& origine ) const
{
	return (this->_value == origine._value);
}

bool	Fixed::operator!=( const Fixed& origine ) const
{
	return (this->_value != origine._value);
}

Fixed	Fixed::operator+( const Fixed& origine ) const
{
	Fixed	res;

	res.setRawBits(this->_value + origine._value);
	return (res);
}

Fixed	Fixed::operator-( const Fixed& origine ) const
{
	Fixed	res;

	res.setRawBits(this->_value - origine._value);
	return (res);
}

Fixed	Fixed::operator*( const Fixed& origine ) const
{
	Fixed	res;

	res.setRawBits((this->_value * origine._value) >> _fractionalBits);
	return (res);
}

Fixed	Fixed::operator/( const Fixed& origine ) const
{
	Fixed	res;

	res.setRawBits((this->_value << _fractionalBits) / origine._value);
	return (res);
}

Fixed&	Fixed::operator++()
{
	(this->_value)++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	++(this->_value);
	return (old);
}

Fixed&	Fixed::operator--()
{
	(this->_value)--;
	return (*this);
}


Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	--(this->_value);
	return (old);
}

Fixed&	Fixed::min( Fixed& f1, Fixed& f2)
{
	if (f1._value > f2._value)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::min( const Fixed& f1, const Fixed& f2)
{
	if (f1._value > f2._value)
		return (f2);
	return (f1);
}

Fixed&	Fixed::max( Fixed& f1, Fixed& f2)
{
	if (f1._value < f2._value)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::max( const Fixed& f1, const Fixed& f2)
{
	if (f1._value < f2._value)
		return (f2);
	return (f1);
}
