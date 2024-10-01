/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 18:15:29 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Student"), _gradeSign(150), _gradeExecute(150)
{
// 	std::cout << "Form Default Constructor Called" << std::endl;
	this->_indicator = false;
}

Form::Form(const std::string& name, int gradeSigned, int gradeExecute) : _name(name), _gradeExecute(gradeExecute),  _gradeSign(gradeSigned)
{
	this->_indicator = false;
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeSign > 150)
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

Form::Form(const Form& origine)
{
	std::cout << "Form copy Constructor Called" << std::endl;
	*this = origine;
}


Form& Form::operator=(const Form& origine)
{
	std::cout << "Form copy assignement  Called" << std::endl;
	if (this != &origine)
		*this = origine;
	return (*this);
}

const std::string& Form::getName(void) const
{
	return (this->_name);
}

bool Form::Signed() const
{
	return (_indicator);
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
	file << "Form " << form.getName() << ", Sign Status: " << (form.Signed() ? "Signed" : "Not Signed") << ", Grade Required to Sign: " << form.getGradeSigned() << ", Grade Required to Execute: " << form.getGradeExecute() << std::endl;
	return file;
}
