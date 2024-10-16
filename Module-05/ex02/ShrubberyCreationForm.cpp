/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:00:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
	std::cout << "Shrubbery Default Constructor Called" << std::endl;
	this->_target = "defaultTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target): AForm("Shrubbery", 145, 137)
{
	std::cout << "Shrubbery Parametriesed Constructor Called" << std::endl;
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origine) : AForm(origine.getName(), origine.getGradeSigned(), origine.getGradeExecute())
{
	std::cout << "Shrubbery copy Constructor Called" << std::endl;
	*this = origine;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor Called" << std::endl;
	
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubbery)
{
	std::cout << "Shrubbery copy assignement Called" << std::endl;
	if (this != &shrubbery)
		_target = shrubbery._target;
	return (*this);
}			

const char* ShrubberyCreationForm::FileCreationException::what() const throw()
{
	return "failed to creat the output file!";
}

void	ShrubberyCreationForm::ShrubberyAction(void) const
{
	std::ofstream	file;
    std::string 	tree;

	file.open(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cerr << "can't create the file " << this->_target  << "_shrubbery" << std::endl;
		throw FileCreationException();
	}
	
	tree += "         #\n";
    tree += "        ###\n";
    tree += "       #####\n";
    tree += "      ###o###\n";
    tree += "    #######o###\n";
    tree += "   ##o#\\#|#/###\n";
    tree += "    ###\\|/#o#\n";
    tree += "     ###|||###\n";
    tree += "        |||\n";
    tree += "        |||\n";
    tree += "        |||\n";
    tree += "        |||\n";
    tree += "       -----\n";
	
	file << tree;
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & bur) const
{
	executionChecker(bur);
	try
	{
		ShrubberyAction();
		std::cout << bur.getName() << " executed " << this->_target << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}