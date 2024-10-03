/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:37:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:40:28 by youmoukh         ###   ########.fr       */
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
	if (grade > 0x9C)
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
	if (_grade - 0x1 < 0x1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 0x1 > 0x9C)
		throw GradeTooLowException();
	_grade++;
}

std::ostream& operator<<(std::ostream& file, const Bureaucrat& bureaucrat)
{
	file << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return file;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
   	return ("Grade is too high!");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
   	return ("Grade is too Low!");
}


void	Bureaucrat::signForm(Form& form) const
{
	// if (form.getIndicator() == true)
	// 	std::cout << Bureaucrat::getName() << form.getName() << std::endl;
	// else
	// 	std::cout << Bureaucrat::getName() << " Couldn't sign "<< form.getName() << " because " << "." << std::endl;
	
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &younes)
	{
		std::cout << _name << " Couldn't sign "<< form.getName() << " because " << younes.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
	{
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
	catch (std::exception& e)
	{
        std::cout << name << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}
