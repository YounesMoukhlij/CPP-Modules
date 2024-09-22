/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/22 16:04:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()  : _value(0x2)
{
    std::cout << "\033[32mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "\033[33mCopy constructor called\033[0m" << std::endl;
	*this = other;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( _value );
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return ( *this );
}

Fixed::~Fixed()
{
    std::cout << "\033[41mDestructor called\033[0m" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}
