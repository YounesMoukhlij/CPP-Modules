/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:56:55 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:30:32 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor Called." << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Intern Copy Constructor Called." << std::endl;
	
	if (this != &intern)
		*this = intern;
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor Called." << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	(void) intern;
	std::cout << "Intern Copy Assignement Called." << std::endl;
	return (*this);
}

AForm* Intern::makeForm(const std::string& _name, const std::string& _target)
{
	std::string Names[] = {"Shrubbery", "Roboto", "Presidential"};
	AForm 		*form;

	int checker = -0x1;
	for (int i = 0x0; i < 0x3; i++)
	{
		if (Names[i] == _name)
			checker = i;
	}
	switch (checker)
	{
		case 0x0:
			form = new ShrubberyCreationForm(_target);
			break;
		case 0x1:
			form = new RobotomyRequestForm(_target);
			break;
		case 0x2:
			form = new PresidentialPardonForm(_target);
			break;
		default:
			throw NoFormExist();
	}
	if (!form)
		throw MemoryFailedAllocation();
	std::cout << "Intern creates " << _target << std::endl;
	return (form);
}

const char* Intern::NoFormExist::what() const throw()
{
	return ("Form not found!");
}

const char* Intern::MemoryFailedAllocation::what() const throw()
{
	return ("Failed to allocate memory!");
}