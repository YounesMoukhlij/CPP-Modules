/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;	
}


ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
	
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
