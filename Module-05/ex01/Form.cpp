/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:08:10 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _gradeSign(0x96), _gradeExecute(0x96)
{
	std::cout << "Form Default Constructor Called" << std::endl;
	this->_indicator = false;
}

Form::Form(const std::string& name, int gradeSigned, int gradeExecute) : _name(name), _gradeSign(gradeSigned), _gradeExecute(gradeExecute)
{
	std::cout << "Form Parameriezed Constructor Called" << std::endl;
	this->_indicator = false;
	if (this->_gradeSign < 0x1 || this->_gradeExecute < 0x1)
		throw GradeTooHighException();
	else if (this->_gradeSign > 0x96 || this->_gradeExecute > 0x96)
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade too low!";
}

void	Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() <= this->_gradeSign)
		this->_indicator = true;
	else
		throw GradeTooLowException();
}

Form::Form(const Form& origine) : _name(origine._name), _gradeSign(origine._gradeSign), _gradeExecute(origine._gradeExecute)
{
	std::cout << "Form copy Constructor Called" << std::endl;
	*this = origine;
}

Form& Form::operator=(const Form& origine)
{
	std::cout << "Form copy assignement  Called" << std::endl;
	if (this != &origine)
	{
		_indicator = origine._indicator;
	}
	return (*this);
}

const std::string& Form::getName(void) const
{
	return (this->_name);
}


int	Form::getGradeSigned(void) const
{
	return (this->_gradeSign);
}

int	Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

std::ostream& operator<<(std::ostream& file, const Form& form)
{
    file << "Form: " << form.getName()
        << ", Signed: " << (form.getIndicator() ? "Yes" : "No")
        << ", Grade required to sign: " << form.getGradeSigned()
        << ", Grade required to execute: " << form.getGradeExecute();
    return file;
}


bool	Form::getIndicator() const
{
	return (_indicator);
}

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}