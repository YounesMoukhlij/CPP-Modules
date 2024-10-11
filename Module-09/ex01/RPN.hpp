/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:03:53 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <sstream>

# define IGNORE(param) (void)(param)

# define MULT 0x1
# define DIV  0x
# define ADD  0x2
# define SOUS 0x3
# define NOTHING -0x1

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