/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:38:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 15:51:01 by youmoukh         ###   ########.fr       */
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
		Bureaucrat& operator=(const Bureaucrat& origine);
		~Bureaucrat();
	
		class GradeTooHighException : public std::exception
		{
			const char 
		};
		class GradeTooLowException : public std::exception
		{
		
		};
	
		const std::string getName() const;
		int getGrade();
	
};

std::ostream& operator<<(std::ostream &f, const Bureaucrat& bureaucrat);
