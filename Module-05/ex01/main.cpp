/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/10 12:23:07 by youmoukh         ###   ########.fr       */
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

    try
	 {
        Bureaucrat alice("Alice", 0xA);
        Form contract("BzikerMann", 0xA, 2 * 0xA);
		
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
