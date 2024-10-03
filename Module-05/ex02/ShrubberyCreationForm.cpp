/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:12:29 by youmoukh         ###   ########.fr       */
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
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origine) : AForm(origine.getName(), origine.getGradeSigned(), origine.getGradeExecute())
{
	*this = origine;	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor Called" << std::endl;
	
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubbery)
{
	if (this != &shrubbery)
		this->_target = shrubbery._target;
	return (*this);
}			

std::string generateAsciiTree()
{
    std::string tree;

    tree += "       ###\n";
    tree += "      #o###\n";
    tree += "    #####o###\n";
    tree += "   #o#\\#|#/###\n";
    tree += "    ###\\|/#o#\n";
    tree += "     # }|{  #\n";
    tree += "       }|{\n";
    tree += "       }|{\n";
    tree += "       }|{\n";
    tree += "       }|{\n";
    tree += "      -----\n";

    return tree;
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
	std::string = generat
	file << generateAsciiTree();
	file.close();
}
