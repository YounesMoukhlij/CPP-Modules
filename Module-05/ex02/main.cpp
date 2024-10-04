/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 13:44:31 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

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
		Bureaucrat bureaucrat("oooooo", 1);
		RobotomyRequestForm roboto("roboto");
		
		bureaucrat.signForm(roboto);
		roboto.execute(bureaucrat);
		std::cout << roboto;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	// try
	// {
	// 	Bureaucrat bureaucrat("zak", 1);
	// 	ShrubberyCreationForm shrubbery("shrubbery");
	// 	bureaucrat.signForm(shrubbery);
	// 	shrubbery.execute(bureaucrat);
	// 	std::cout << shrubbery;
	// }
	// catch (const std::exception& e)
	// {
	// 		std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	std::srand(std::time(nullptr));
	// 	Bureaucrat bureaucrat("zak", 4);
	// 	PresidentialPardonForm presidential("presidential");
	// 	bureaucrat.signForm(presidential);
	// 	presidential.execute(bureaucrat);
	// 	std::cout << presidential;
	// }
	// catch (const std::exception& e)
	// {
	// 		std::cerr << e.what() << std::endl;
	// }
    return (EXIT_SUCCESS);
}
