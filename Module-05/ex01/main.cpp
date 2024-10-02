/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/02 13:29:40 by youmoukh         ###   ########.fr       */
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

    try {
        Bureaucrat john("John Doe", 2);
        Form taxForm("Tax Form", 3, 5);

        std::cout << taxForm << std::endl;
        john.signForm(taxForm);
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
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
