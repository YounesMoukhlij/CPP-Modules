/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/10 13:01:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <fstream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& origine);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat& operator=(const Bureaucrat& origine);
		~Bureaucrat();
	
		const std::string&	getName() const;
		int 				getGrade() const ;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm& form) const;
		void				executeForm(AForm const& form);
   		class GradeTooHighException : public std::exception
		{
   			public:
   			    const char* what() const throw();
   		};

   		class GradeTooLowException : public std::exception
		{
   			public:
   			    const char* what() const throw();
   		};
};

std::ostream& operator<<(std::ostream& file, const Bureaucrat& bureaucrat);

