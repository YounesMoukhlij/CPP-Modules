/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:22:24 by youmoukh         ###   ########.fr       */
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

// void	RPN::isOperationValid(int firstValue, int secondValue, char _operator) const
// {
// 	switch (_operator)
// 	{
// 		case '*':
// 			if (firstValue != 0 && secondValue != 0 &&
// 				(firstValue * secondValue > INT_MAX || firstValue * secondValue < INT_MIN))
// 				throw ErrorOverFlow;
// 			break;
// 		case '/':
// 			if (firstValue == 0)
// 				throw std::invalid_argument("Division by zero");
// 			if (secondValue == INT_MIN && firstValue == -1)
//  				throw ErrorOverFlow;
// 			break;
// 		case '+':
// 			if ((firstValue > 0 && secondValue > INT_MAX - firstValue) ||
// 				(firstValue < 0 && secondValue < INT_MIN - firstValue))
// 				throw ErrorOverFlow;
// 			break;
// 		case '-':
// 			if (firstValue < 0 && secondValue > INT_MAX + firstValue)
// 				throw ErrorOverFlow;
// 			break;
// 	}
// }

// void	RPN::operationCalcule(std::string& _piece, std::stack<int>& _stack) {

// 	int	firstValue;
// 	int secondValue;

// 	if (_stack.size() < 2)
// 		throw ErrorInvalidArgument;
// 	firstValue = _stack.top(), _stack.pop();
// 	secondValue = _stack.top(), _stack.pop();
// 	switch (whichOperator(_piece))
// 	{
// 		case 1:
// 			_stack.push(firstValue * secondValue);
// 			isOperationValid(firstValue, secondValue, '*');
// 			break;
// 		case 2:
// 			isOperationValid(firstValue, secondValue, '/');
// 			_stack.push(secondValue / firstValue);
// 			break;
// 		case 3:
// 			isOperationValid(firstValue, secondValue, '+');
// 			_stack.push(firstValue + secondValue);
// 			break;
// 		case 4:
// 			isOperationValid(firstValue, secondValue, '-');
// 			_stack.push(secondValue - firstValue);
// 			break;
// 		default:
// 			throw	ErrorInvalidArgument;
// 	}
// }

void	RPN::PolonaiseInverse(std::string& _array)
{
	// std::string			_piece;
	// std::stringstream	inputString(array);
	// while (getline(inputString, _piece, ' '))
	// {
	// 	if (isdigit(_piece[0]))
	// 		_rpnStack.push(strToInt(_piece));
	// 	else
	// 		operationCalcule(_piece, _rpnStack);
	// }
	// std::cout << "the result is: " << _rpnStack.top() << std::endl;
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
