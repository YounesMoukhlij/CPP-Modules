/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 14:36:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int you, char **nes)
{
	(void)nes;
	if (you != 0x1)
	{
		std::cerr << "Program doesn't accepte any arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Form A("A", 0x1, 0x5);
	Form B("B", 0x3, 0x4);
	
	A = B;
	std::cout << A.getIndicator() << std::endl;
    try
	 {
        Bureaucrat alice("Alice", 45);
        Form contract("BzikerMann", 10, 2 * 0xA);
		
        std::cout << contract << std::endl;  // Show initial form status
        alice.signForm(contract);           // Try to sign the form
        std::cout << contract << std::endl;  // Show after Signature
    }
	catch (std::exception& e)
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}
