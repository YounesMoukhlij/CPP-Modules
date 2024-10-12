/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 17:58:04 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		Span span(5);
		
		span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(5);

        // This should throw an exception since we are exceeding the maximum size
        span.addNumber(6); // Attempt to add a sixth number
	}
	try
	{
		Span A(12);
		Span B(12);
		
		A.arrayFiller();
		B = A;
		// std::cout << "Displaying B" << std::endl;
		// B.displayArray();
		std::cout << "Displaying A" << std::endl;
		A.displayArray();
		A.addNumber(1999);
		std::cout << "longestSpan : " << A.longestSpan() << std::endl;
		std::cout << "shortestSpan : " << A.shortestSpan() << std::endl;
		std::cout << "Displaying A" << std::endl;
		// A.displayArray();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
