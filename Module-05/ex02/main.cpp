/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:09:40 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(int you, char **nes)
{
	(void) nes;
	if (you != 0x1)
	{
		std::cerr << "Program doesn't accepte any arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	
	// Testing Operator =
	
	
    std::cout << "1st Try" << std::endl;
    std::cout << std::endl;
	try
	{
		Bureaucrat bureaucrat("Mr", 20);
		RobotomyRequestForm roboto("RRAATAATATA");
		
		bureaucrat.signForm(roboto);
		bureaucrat.executeForm(roboto);
		std::cout << roboto;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "2nd Try" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Younes", 100);
		ShrubberyCreationForm shrubbery("Hayeler");
		
		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
		std::cout << shrubbery;
	}
	catch (const std::exception& e)
	{
			std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "3rd Try" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		std::srand(std::time(0x0));
		Bureaucrat bureaucrat("YOUNAN", 6);
		PresidentialPardonForm presidential("presidential");
		bureaucrat.signForm(presidential);
		bureaucrat.executeForm(presidential);
		std::cout << presidential;
	}
	catch (const std::exception& e)
	{
			std::cerr << e.what() << std::endl;
	}
    return (EXIT_SUCCESS);
}
        