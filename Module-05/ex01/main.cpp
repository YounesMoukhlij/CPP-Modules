/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 16:40:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int you, char **nes)
{
	(void)nes;
	if (you != 1)
	{
		std::cerr << "Program doesn't accepte any arguments" << std::endl;
		return (1);
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

    // try {
    //     Bureaucrat jane("Jane Smith", 150);
    //     Form payrollForm("Payroll Form", 100, 50);

    //     std::cout << payrollForm << std::endl;
    //     jane.signForm(payrollForm);  // This will throw because Jane's grade is too low
    // }
    // catch (const std::exception& e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }
    return 0;
}
