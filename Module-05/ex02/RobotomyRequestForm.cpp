/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:51:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:29:43 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robot", 72, 45)
{
	this->_target = "defaultTarget";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target): AForm("Robot", 72, 45)
{
	this->_target = _target;
	std::srand(std::time(0x0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origine) : AForm(origine.getName(), origine.getGradeSigned(), origine.getGradeExecute())
{
	*this = origine;
	std::srand(std::time(0x0));
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& origine)
{
	if (this != &origine)
		this->_target = origine._target;
	return (*this);
}


const std::string& RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::RobotomyRequestFormAction(void) const
{
	std::cout << "Drilling noises..." << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully 50% of the time.\n";
	else
		std::cout << "The robotomy of " << this->_target << " failed.\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const & bur) const
{
	executionChecker(bur);
	RobotomyRequestFormAction();
}