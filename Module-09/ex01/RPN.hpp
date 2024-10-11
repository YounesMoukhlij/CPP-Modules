/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:35:52 by youmoukh         ###   ########.fr       */
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
		std::stack<int>		stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN& origine);
		RPN& operator=(const RPN& origine);
		
		void		ParseArguments(const std::string& str) const;
		void		PolonaiseInverse(std::string& str);
		

		class	ErrorInvalidArgument : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class	ErrorOverFlow : public std::exception
		{
			public :
				const char* what() const throw();
		};
};