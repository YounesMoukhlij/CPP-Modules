/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:07:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/19 16:31:54 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( int ac, char **av )
{
	(void) ac;
	Fixed a;
	
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );
	
	// a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "\n\n\n\n\n\n";
	// std::cout << "a is " << a.getRawBits() << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}