/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:32:08 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "Intern.hpp"
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
	Intern A;
	Intern B;

	A = B;
	
	Bureaucrat AA("AA", 1);
	Bureaucrat BB(AA);

	std::cout << BB << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Younes", 1);
		Intern intern;
		AForm *form1;
		AForm *form2;
		AForm *form3;

		form1 = intern.makeForm("Roboto", "Bender");
		form2 = intern.makeForm("Presidential", "LuckyLUCK");
		form3 = intern.makeForm("Shrubbery", "BruceWILISS");
		try
		{
			bureaucrat.executeForm(*form1);
			bureaucrat.signForm(*form1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			bureaucrat.executeForm(*form2);
			bureaucrat.signForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			bureaucrat.executeForm(*form3);
			bureaucrat.signForm(*form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete form1;
		delete form2;
		delete form3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (EXIT_SUCCESS);
}
