/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:11:08 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <sstream>

# define IGNORE(param) (void)(param)

# define MULT 0x1
# define DIV  0x2
# define ADD  0x3
# define SOUS 0x4
# define NOTHING -0x1

class RPN
{
	private:
		std::stack<int>		_stack;
	public:
		// Canonical Form
 		RPN();
		~RPN();
		RPN(const RPN& origine);
		RPN& operator=(const RPN& origine);
		
		// Member Functions
		void		PolonaiseInverse(std::string& _array);
		bool		ValidArguments(const std::string& _array) const;
		void		ParseArguments(const std::string& _array) const;
		int			OperatorChecker( std::string& _array) ;
		

		// Exception
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