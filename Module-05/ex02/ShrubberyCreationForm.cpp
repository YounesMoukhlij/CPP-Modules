/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:00:43 by youmoukh         ###   ########.fr       */
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


ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	
}
			


void execute(Bureaucrat const & executor) const
{
    validateExecution(executor);
    std::ofstream outfile(target + "_shrubbery");
    outfile << "ASCII Trees\n";
    outfile.close();
	

void	ShrubberyCreationForm::ShrubberyAction(void) const
{
	std::ofstream	out_file;

	out_file.open(this->_target + "_shrubbery");
	if (!out_file.is_open())
	{
		std::cerr << "can't create the file " << this->target  << "_shrubbery" << std::endl;
		throw FileCreationException;
	}
	out_file.close();
}
