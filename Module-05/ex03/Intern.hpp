/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:56:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 14:04:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		
	public:
		Intern(void);
		Intern(const Intern&);
		~Intern();

		Intern& operator=(const Intern&);

		AForm*	makeForm(const std::string&, const std::string&);

		class FormNotExistException : public std::exception
		{
			public:
				const char *what() const throw();
		} FormNotExistException;

		class FailedAllocateMemoryException: public std::exception
		{
			public:
				const char* what() const throw();
		} FailedAllocateMemoryException;
};

