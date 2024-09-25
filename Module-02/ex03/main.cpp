/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:07:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 14:36:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point	a(Fixed(1), Fixed(2));
	Point	b(Fixed(1), Fixed(4));
	Point	c(Fixed(2), Fixed(3));
	Point	p(Fixed(6), Fixed(6));

	std::cout << bsp(a, b, c, p) << std::endl;
	return (EXIT_SUCCESS);
}