/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:02:11 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <sstream>

# define IGNORE(param) (void)(param)

# define F0x0
# define DIV 0x1
# define ADD 
# define

class RPN
{
	private:
		std::stack<int>		_stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN& origine);
		RPN& operator=(const RPN& origine);
		
		void		ParseArguments(const std::string& array) const;
		void		PolonaiseInverse(std::string& array);
		

		class	ErrorArgument : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class	ErrorFlow : public std::exception
		{
			public :
				const char* what() const throw();
		};
};