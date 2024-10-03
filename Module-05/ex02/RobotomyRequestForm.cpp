/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:51:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:19:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robot", 72, 45)
{
	this->target = "defaultTarget";
	std::srand(std::time(nullptr));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target): AForm("Robot", 72, 45)
{
	this->target = _target;
	std::srand(std::time(nullptr));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Robot) : AForm(Robot.getName(), Robot.getGradeRequiredtoSign(), Robot.getGradeRequiredtoExcute())
{
	*this = Robot;
	std::srand(std::time(nullptr));
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& Robot)
{
	if (this != &Robot)
		this->target = Robot.target;
	return (*this);
}


const std::string& RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::RobotomyRequestFormAction(void) const
{
	std::cout << "Drilling noises..." << std::endl;
	if (std::rand() % 2)
		std::cout << this->target << " has been robotomized successfully 50% of the time .\n";
	else
		std::cout << "The robotomy of " << this->target << " failed.\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	executionCh(executor);
	RobotomyRequestFormAction();
}