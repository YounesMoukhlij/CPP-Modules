/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:30:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default constructor called." << std::endl;
}

RPN::~RPN()
{
	std::cout << "destructor called." << std::endl;
}

RPN::RPN(const RPN& origine)
{
	std::cout << "Copy constructor called." << std::endl;
	if (this != &origine)
		*this = origine;
}

RPN& RPN::operator=(const RPN& origine)
{
	std::cout << "Copy Assignement called." << std::endl;
	return (*this);
}

bool	RPN::ValidArguments(const std::string& _array, size_t length) const
{
	static size_t	_Dcounter;
	static size_t	_Ocounter;

	for (size_t i = 0x0; i < length; i++)
	{
		// first number 
	}
	return (true);
}

int	RPN::OperatorChecker( std::string& _array) 
{
	int	indicator = -0x1;
	std::string oprt[4] = {"*", "/", "+", "-"};
	
	for (int i = 0x0; i < 0x4; i++)
	{
		if (_array[0] == oprt[i][0])
			indicator = i;
	}
	switch(indicator)
	{
		case 0x0:
			return (MULT);
		case 0x1:
			return (DIV);
		case 0x2:
			return (ADD);
		case 0x3:
			return (SOUS);
		default:
			return (NOTHING);
	}
}

int	RPN::IntConversion(const std::string& _array) const
{
	int					_intValue;
	std::stringstream	str(_array);
	
	str >> _intValue;
	
	return (_intValue);
}

void	RPN::CheckFlow(int Value_1, int Value_2, char opr) const
{
	switch (opr)
	{
		case M:
		{
			if (Value_1 != 0x0 && Value_2 != 0x0)
				throw ErrorOperation();
			if (Value_1 * Value_2 > INT_MAX || Value_1 * Value_2 < INT_MIN)
				throw ErrorFlow();
			break;
		}
		case D:
		{
			if (Value_1 == 0x0)
				throw std::invalid_argument("Division by zero");
			if (Value_2 == INT_MIN && Value_1 == -0x1)
 				throw ErrorFlow();
			break;
		}
		case A:
		{
			if ((Value_1 > 0x0 && Value_2 > INT_MAX - Value_1) ||
				(Value_1 < 0x0 && Value_2 < INT_MIN - Value_1))
				throw ErrorFlow();
			break;
		}
		case S:
		{
			if (Value_1 < 0x0 && Value_2 > INT_MAX + Value_1)
				throw ErrorFlow();
			break;
		}
	}
}

void	RPN::PolonaiseInverse(std::string& _array)
{

}

void	RPN::ParseArguments(const std::string& _array) const
{
	if (!isdigit(static_cast<int>(_array[0])))
		throw ErrorArgument();
	if (!ValidArguments(_array, _array.size()))
		throw ErrorArgument();
}

const char* RPN::ErrorArgument::what() const throw()
{
	return ("Invalid Argument.");
}

const	char* RPN::ErrorFlow::what() const throw()
{
	return ("Overflow Problem had Occured.");
}

const	char* RPN::ErrorOperation::what() const throw()
{
	return ("Cannot Multiply by 0.");
}
