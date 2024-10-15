/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/13 15:57:05 by youmoukh         ###   ########.fr       */
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

	std::cout << std::endl; std::cout << "\033[42m  ----- 00 Test Overflow -----\033[0m" << std::endl; std::cout << std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}

	try
	{
		Span span(2);
		span.addNumber(-2147483648);
        span.addNumber(10);
		std::cout << "shortestSpan A : " << span.shortestSpan() << std::endl;
		std::cout << "longestSpan A : " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}


	std::cout << std::endl; std::cout << "\033[42m  ----- 1st Test -----\033[0m" << std::endl; std::cout << std::endl;

	try
	{
		Span span(5);

		span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(5);
		/*
			- Attempt to add a sixth number
		*/
        span.addNumber(6); // Should throw the EXcePtionisto
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}

	std::cout << std::endl; std::cout << "\033[42m  ----- 2nd Test -----\033[0m" << std::endl; std::cout << std::endl;

	try
	{
		Span A(12);
		Span B(12);

		A.arrayFiller(); // Just a addNumber but autoMatized by ME OFC ^_*
		B = A;

		Span C(B);
		Span D(2);
		D = C;
		std::cout << "Displaying B" << std::endl;
		B.displayArray();
		std::cout << "Displaying A" << std::endl;
		A.displayArray();
		std::cout << "Displaying C" << std::endl;
		C.displayArray();
		std::cout << "Displaying D" << std::endl;
		D.displayArray();
		std::cout << "longestSpan A : " << A.longestSpan() << std::endl;
		std::cout << "shortestSpan A : " << A.shortestSpan() << std::endl;
		std::cout << "longestSpan D : " << D.longestSpan() << std::endl;
		std::cout << "shortestSpan D : " << D.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
