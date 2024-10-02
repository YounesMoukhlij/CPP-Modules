/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/02 14:38:11 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_indicator;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
		~Form();
		Form();
		// Form(const Form& origine);
		Form(const std::string& name, int gradeSigned, int gradeExecute);
		Form& operator=(const Form& origine);

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
		int					getGradeSigned(void) const;
		int					getGradeExecute(void) const;
		bool				Signed(void ) const;
		const std::string&	getName() const;
		bool				getIndicator() const;
		void				beSigned(const Bureaucrat &bur);

};


std::ostream& operator<<(std::ostream& file, const Form& from);
