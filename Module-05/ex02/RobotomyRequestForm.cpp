/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:51:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:10:54 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robot", 72, 45)
{
	std::cout << "Robotomy Default Constructor Called." << std::endl;
	std::srand(std::time(0x0));
	this->_target = "defaultTarget";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target): AForm(_target, 72, 45)
{
	std::cout << "Robotomy parametriesed Constructor Called." << std::endl;
	std::srand(std::time(0x0));
	this->_target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origine) : AForm(origine.getName(), origine.getGradeSigned(), origine.getGradeExecute())
{
	std::cout << "Robotomy Copy Constructor Called." << std::endl;
	std::srand(std::time(0x0));
	*this = origine;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Destructor Called." << std::endl;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& origine)
{
	std::cout << "Robotomy Copy assignement Called." << std::endl;
	if (this != &origine)
	{
		*this = origine;
		
		// this->_target = origine._target;
	}
	return (*this);
}


const std::string& RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & bur) const
{
	executionChecker(bur);
	std::cout << bur.getName() << " executed " << this->_target << std::endl;
	std::cout << "Drilling noises..." << std::endl;
	if (std::rand() % 0x2)
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed." << std::endl;
}