/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:52:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/10 16:49:17 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentForm", 0x19, 0x5)
{
	std::cout << "PresidentialPardonForm default Constructor Called." << std::endl;
	this->_target = "defaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm(_target, 0x19, 0x5)
{
	std::cout << "PresidentialPardonForm Parametriesed Constructor Called." << std::endl;

	this->_target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& PresidentForm) : AForm(PresidentForm.getName(), PresidentForm.getGradeSigned(), PresidentForm.getGradeExecute())
{
	std::cout << "PresidentialPardonForm Copy Constructor Called." << std::endl;
	if (this != &PresidentForm)
		*this = PresidentForm;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor Called." << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& PresidentForm)
{
	std::cout << "PresidentialPardonForm Copy Assignement Called." << std::endl;
	if (this != &PresidentForm)
		this->_target = PresidentForm._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & bur) const
{
	executionChecker(bur);
	
	std::cout << bur.getName() << " executed " << this->_target << std::endl;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string&  PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}
