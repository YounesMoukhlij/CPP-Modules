/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:50:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:43:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator= (const ShrubberyCreationForm&);

		const	std::string&	getTarget(void) const;
		void	ShrubberyAction(void) const;
		void	execute(Bureaucrat const & executor) const;

		class FileCreationException : public std::exception
		{
			public:
				const char* what() const throw();
		} FileCreationException;
};

