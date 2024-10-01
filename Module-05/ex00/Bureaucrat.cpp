/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:37:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 16:46:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
	if (grade < 0x1)
	{
		throw GradeTooLowException();
	}
	if (grade > 156)
	{
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& origine)
{
	std::cout << "Bureaucrat copy Constructor Called" << std::endl;
	*this = origine;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& origine)
{
	if (this != &origine)
	std::cout << "Bureaucrat copy assignement  Called" << std::endl;
}

const std::string Bureaucrat::getName() const 
{
	return (_name);
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade + 1 > 156)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade - 0x1 < 0x1)
		throw GradeTooHighException();
	_grade--;
}

std::ostream& operator<<(std::ostream& file, const Bureaucrat& bureaucrat)
{
	file << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "."
	
}