/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 16:28:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

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
	
   		class GradeTooHighException : public std::exception
		{
   			public:
   			    const char* what() const noexcept override
				{
   			        return "Grade is too high!";
   			    }
   		};

   		class GradeTooLowException : public std::exception
		{
   			public:
   			    const char* what() const noexcept override
				{
   			        return "Grade is too low!";
   			    }
   		};
			
		const std::string	getName() const;
		int 				getGrade();
		void
	
};

std::ostream& operator<<(std::ostream &f, const Bureaucrat& bureaucrat);
