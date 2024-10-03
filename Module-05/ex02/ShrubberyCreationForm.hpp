/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 18:03:29 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& origine);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& origine);

		const	std::string&	getTarget(void) const;
		void	ShrubberyAction(void) const;
		void	execute(const Bureaucrat& bur) const;

		class FileCreationException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

