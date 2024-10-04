/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:56:55 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 14:08:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	
}

Intern::Intern(const Intern& intern)
{
	if (this != &intern)
		*this = intern;
}

Intern::~Intern(void)
{

}

Intern& Intern::operator=(const Intern& intern)
{
	(void)intern;
	return (*this);
}

AForm* Intern::makeForm(const std::string& _name, const std::string& _target)
{
	std::string Names[] = {"Shrubbery", "Roboto", "Presidential"};
	AForm *form;

	int i = -0x1;
	int checker = -0x1;
	while (++i < 0x3)
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
			throw FormNotExistException;
	}
	if (!form)
		throw FailedAllocateMemoryException;
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