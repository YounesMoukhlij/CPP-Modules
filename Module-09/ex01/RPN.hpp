/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:34:59 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<int>		rpnStack;
		bool				isValidChracters(const std::string& _str) const;
		bool				isOperator(char c) const;
		bool				isSpace(char c) const;
		int					strToInt(const std::string& _str) const;
		int					whichOperator(const std::string& _str) const;
		void				isOperationValid(int firstValue, int secondValue, char _operator) const;
		void				operationCalcule(std::string& _piece, std::stack<int>& _stack);
	public:
		RPN();
		~RPN();
		RPN(const RPN& origine);
		RPN& operator=(const RPN& origine);
		
		void	parseArg(const std::string& _str) const;
		void		PolonaiseInverse(std::string& _str); 
		class	ErrorInvalidArgument : public std::exception {
			public :
				const char* what() const throw();
		} ErrorInvalidArgument;

		class	ErrorOverFlow : public std::exception {
			public :
				const char* what() const throw();
		} ErrorOverFlow;
};