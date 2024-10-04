/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 13:23:07 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_indicator;
		const int			_gradeSign;
		const int			_gradeExecute;
	protected:
		void	executionChecker(const Bureaucrat& bur) const;
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm& origine);
		AForm& operator=(const AForm& origine);
		AForm(const std::string& name, int gradeSign, int gradeExecute);

		const std::string&	getName() const;
		bool				getIndicator() const;
		int					getGradeSigned(void) const;
		int					getGradeExecute(void) const;
		void				beSigned(const Bureaucrat &bur);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
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


std::ostream& operator<<(std::ostream& file, const AForm& from);
