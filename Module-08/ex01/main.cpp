/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 17:32:07 by youmoukh         ###   ########.fr       */
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
		Span A(2);
		Span B(12);
		
		
		A.arrayFiller();
		A.displayArray();
		A.addNumber(1999);
		std::cout << "longestSpan : " << A.longestSpan() << std::endl;
		std::cout << "shortestSpan : " << A.shortestSpan() << std::endl;
		a.displayArray();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caugth : " << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
