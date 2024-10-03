/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137)
{
	this->_target = "defaultTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target): AForm("Shrubbery", 145, 137)
{
	this->target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery) : AForm(shrubbery.getName(), shrubbery.getGradeRequiredtoSign(), shrubbery.getGradeRequiredtoExcute())
{
	*this = shrubbery;	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubbery)
{
	if (this != &shrubbery)
		this->target = shrubbery.target;
	return (*this);
}			



void	ShrubberyCreationForm::ShrubberyAction(void) const
{
	std::ofstream	file;

	file.open(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cerr << "can't create the file " << this->_target  << "_shrubbery" << std::endl;
		throw FileCreationException;
	}
	file.close();
}
