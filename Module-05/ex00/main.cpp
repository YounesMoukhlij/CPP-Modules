/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:01:17 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int you, char **nes)
{
    (void)nes;
	if (you != 0x1)
	{
		std::cerr << "Program doesn't accepte any arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	
	// Testing Operator=
	Bureaucrat A("younes", 12);
	Bureaucrat B("moukhlij", 30);

	B = A;

	std::cout << B << std::endl;
	
    std::cout << "1st Try" << std::endl;
    try
	{
        Bureaucrat bob("Hemed lkhwaf", 0x1);
        std::cout << bob << std::endl;

        bob.incrementGrade(); // This should throw GradeTooHighException Exception
        std::cout << "After incrementing: " << bob << std::endl;
    }
    catch (std::exception& o)
	{
        std::cerr << "\033[32mException caught: " << o.what() << "\033[0m" <<std::endl;
    }

	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "2nd Try" << std::endl;

    try
	{
        Bureaucrat young("Alice", 0x9C);
        std::cout << young << std::endl;

        young.decrementGrade();  // This should throw GradeTooLowException Exception
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;

    }
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "3rd Try" << std::endl;
    try
	{
        Bureaucrat brucelee("Sa3iiid weld l7awat", 0xA);
        std::cout << brucelee << std::endl;

        brucelee.decrementGrade();  // This should throw Nothing 0_0
        std::cout << "After decrementing: " << brucelee << std::endl;

        brucelee.incrementGrade();  // This should throw Nothing 0_0
        std::cout << "After incrementing: " << brucelee << std::endl;
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;
    }
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "4th Try" << std::endl;
    try
	{
        Bureaucrat mouuuu("zghayda HaFiid", 0x0); // This should throw GradeTooHighException
        std::cout << mouuuu << std::endl;

        mouuuu.decrementGrade();  // This should throw Nothing 0_0
        std::cout << "After decrementing: " << mouuuu << std::endl;

        mouuuu.incrementGrade();  // This should throw Nothing 0_0
        std::cout << "After incrementing: " << mouuuu << std::endl;
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;
    }
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "5th Try" << std::endl;
    try
	{
        Bureaucrat fouuuu("TiTan", 0x96 + 0x1); // This should throw GradeTooLowException
        std::cout << fouuuu << std::endl;
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;
    }
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "6th Try" << std::endl;
    try
	{
        Bureaucrat loooo; // This should throw GradeTooLowException
        std::cout << loooo << std::endl;
    }
    catch (std::exception& y)
	{
        std::cerr << "\033[32mException caught: " << y.what() << "\033[0m" <<std::endl;
    }

    return (EXIT_SUCCESS);
}
