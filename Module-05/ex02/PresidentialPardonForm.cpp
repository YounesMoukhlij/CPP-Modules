/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:52:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:01:12 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentForm", 25, 5)
{
	this->_target = "defaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm("PresidentForm", 25, 5)
{
	this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& PresidentForm) : AForm(PresidentForm.getName(), PresidentForm.getGradeRequiredtoSign(), PresidentForm.getGradeRequiredtoExcute())
{
	*this = PresidentForm;	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& PresidentForm)
{
	if (this != &PresidentForm)
		this->_target = PresidentForm.target;
	return (*this);
}

void	PresidentialPardonForm::PresidentialPardonFormAction(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & bur) const
{
	executionChecker(bur);
	PresidentialPardonFormAction();
}

const std::string&  PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}