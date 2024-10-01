/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:37:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 17:25:50 by youmoukh         ###   ########.fr       */
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
		throw GradeTooHighException();
	}
	if (grade > 156)
	{
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& origine)
{
	std::cout << "Bureaucrat copy Constructor Called" << std::endl;
	*this = origine;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& origine)
{
	std::cout << "Bureaucrat copy assignement  Called" << std::endl;
	if (this != &origine)
		*this = origine;
	return (*this);
}

const std::string& Bureaucrat::getName() const 
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade + 1 > 156)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade - 0x1 < 0x1)
		throw GradeTooLowException();
	_grade++;
}

std::ostream& operator<<(std::ostream& file, const Bureaucrat& bureaucrat)
{
	file << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return file;
}

const char* Bureaucrat::GradeTooHighException::what() const
{
   	return ("Grade is too high!");
}
const char* Bureaucrat::GradeTooLowException::what() const
{
   	return ("Grade is too L!");
}