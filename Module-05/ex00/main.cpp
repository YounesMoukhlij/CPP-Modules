/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 17:39:09 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
	{
        Bureaucrat bob("Hemed lkhwaf", 0x1);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << "After incrementing: " << bob << std::endl;

        bob.incrementGrade();  // This should throw GradeTooHighException Exception
    }
    catch (std::exception& o)
	{
        std::cerr << "\033[32mException caught: " << o.what() << "\033[0m" <<std::endl;
    }

    try
	{
        Bureaucrat alice("Alice", 0x9C);
        std::cout << alice << std::endl;

        alice.decrementGrade();  // This should throw GradeTooLowException Exception
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;
		
    }

    return 0;
}