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

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}

Form::Form()
{
	std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Form Default Constructor Called" << std::endl;
	if (grade < 0x1)
	{
		throw GradeTooHighException();
	}
	if (grade > 0x9C)
	{
		throw GradeTooLowException();
	}
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
