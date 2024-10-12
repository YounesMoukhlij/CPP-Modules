/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 17:36:51 by youmoukh         ###   ########.fr       */
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
		Span A(10000);
		Span B(12);
		
		A.arrayFiller();
		B = A;
		std::cout << "Displaying B" << std::endl;
		// B.displayArray();
		std::cout << "Displaying A" << std::endl;
		// A.displayArray();
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
