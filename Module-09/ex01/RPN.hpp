/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 18:34:27 by youmoukh         ###   ########.fr       */
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

# define M '*'
# define A '+'
# define S '-'
# define D '/'
# define SPACE ' '

class RPN
{
	private:
		std::stack<int>		_stack;
		void		CalculateStaff(int opr, std::stack<int>& _stack);
	public:
		// Canonical Form
 		RPN();
		~RPN();
		RPN(const RPN& origine);
		RPN& operator=(const RPN& origine);
		
		// Member Functions
		int			ValidArg(char _oprt) const;
		void		PolonaiseInverse(const std::string& _array);
		int			OperatorChecker( std::string& _array) ;
		int			IntConversion(const std::string& _array) const;
		void		ParseArguments(const std::string& _array) const;
		void		CheckFlow(int Value_1, int Value_2, char opr) const;
		void		OperationAPPOLO(const std::string& _array, int mode);
	
		

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
		class	ErrorOperation: public std::exception
		{
			public :
				const char* what() const throw();
		};
		class	SmallStack: public std::exception
		{
			public :
				const char* what() const throw();
		};
		
		
};