/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:05:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 14:05:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(int you, char **nes)
{
	(void)nes;
	if (you != 1)
	{
		std::cerr << "the program doesn't accepte any arguments" << std::endl;
		return (1);
	}
	try
	{
		Bureaucrat bureaucrat("Youness", 1);
		Intern intern;
		AForm *form1;
		AForm *form2;
		form1 = intern.makeForm("Roboto", "Bender");
		form2 = intern.makeForm("Shrubbery", "meda");
		try
		{
			bureaucrat.signForm(*form1);
			bureaucrat.signForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			bureaucrat.executeForm(*form1);
			form2->execute(bureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete form1;
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}