/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:42:27 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
        Bureaucrat alice("Alice", 10);
        Form contract("Bouzkri", 30, 20);

        std::cout << contract << std::endl;  // Show initial form status
        alice.signForm(contract);           // Try to sign the form
        std::cout << contract << std::endl;  // Show updated form status
    }
	catch (std::exception& e)
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}
