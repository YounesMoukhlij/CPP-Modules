/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 13:36:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Student"), _gradeSign(0x96), _gradeExecute(0x96)
{
	std::cout << "AForm Default Constructor Called" << std::endl;
	this->_indicator = false;
}

AForm::AForm(const std::string& name, int gradeSigned, int gradeExecute) : _name(name), _gradeSign(gradeSigned), _gradeExecute(gradeExecute)
{
	std::cout << "AForm Parameriezed Constructor Called" << std::endl;
	this->_indicator = false;
	if (this->_gradeSign < 0x1 || this->_gradeExecute < 0x1)
		throw GradeTooHighException();
	else if (this->_gradeSign > 0x96 || this->_gradeSign > 0x96)
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "AForm: Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "AForm: Grade too low!";
}

void	AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() >= this->_gradeSign)
		this->_indicator = true;
	else
		throw GradeTooLowException();
}

AForm::AForm(const AForm& origine) : _name(origine._name), _gradeSign(origine._gradeSign), _gradeExecute(origine._gradeExecute)
{
	std::cout << "AForm copy Constructor Called" << std::endl;
	*this = origine;
}

AForm& AForm::operator=(const AForm& origine)
{
	std::cout << "AForm copy assignement  Called" << std::endl;
	if (this != &origine)
		*this = origine;
	return (*this);
}

const std::string& AForm::getName(void) const
{
	return (this->_name);
}


int	AForm::getGradeSigned(void) const
{
	return (this->_gradeSign);
}

int	AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

std::ostream& operator<<(std::ostream& file, const AForm& AForm)
{
    file << "AForm: " << AForm.getName()
        << ", Signed: " << (AForm.getIndicator() ? "Yes" : "No")
        << ", Grade required to sign: " << AForm.getGradeSigned()
        << ", Grade required to execute: " << AForm.getGradeExecute();
    return file;
}


bool	AForm::getIndicator() const
{
	return (_indicator);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor Called" << std::endl;
}



void	AForm::executionChecker(const Bureaucrat& bur) const
{
	if (!_gradeSign)
		throw GradeNotSignedException();
	if (bur.getGrade() > this->_gradeExecute)
		throw GradeTooLowException();
}

