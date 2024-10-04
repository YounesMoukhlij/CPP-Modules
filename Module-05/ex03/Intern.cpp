/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:56:55 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 14:06:37 by youmoukh         ###   ########.fr       */
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
	AForm *pointer;
	std::string Names[] = {"Shrubbery", "Roboto", "Presidential"};

	int i = -1;
	int found = -1;
	while (++i < 3)
	{
		if (Names[i] == _name)
			found = i;
	}
	switch (found)
	{
		case 0:
			pointer = new ShrubberyCreationForm(_target);
			break;
		case 1:
			pointer = new RobotomyRequestForm(_target);
			break;
		case 2:
			pointer = new PresidentialPardonForm(_target);
			break;
		default:
			throw FormNotExistException;
	}
	if (!pointer)
		throw FailedAllocateMemoryException;
	std::cout << "Intern creates " << _target << std::endl;
	return (pointer);
}

const char* Intern::FormNotExistException::what() const throw()
{
	return ("Form not found!");
}

const char* Intern::FailedAllocateMemoryException::what() const throw()
{
	return ("Failed to allocate memory!");
}