/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:37:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#includ

class ShrubberyCreationForm : public AForm
{
private:
	/* data */
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm(const std::string& target)
        : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

    void execute(Bureaucrat const & executor) const {
        validateExecution(executor);
        std::ofstream outfile(target + "_shrubbery");
        outfile << "ASCII Trees\n";
        outfile.close();
    }
};

