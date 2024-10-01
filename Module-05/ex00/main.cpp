/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 17:34:59 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
	{
        Bureaucrat bob("Hemed lkhwaf", 1);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << "After incrementing: " << bob << std::endl;

        bob.incrementGrade();  // This should throw GradeTooHighException
    }
    catch (std::exception& o)
	{
        std::cerr << "Exception caught: " << o.what() << std::endl;
    }

    try
	{
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;

        alice.decrementGrade();  // This should throw GradeTooLowException
    }
    catch (std::exception& e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}