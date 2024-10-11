/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 16:14:06 by youmoukh         ###   ########.fr       */
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

bool	RPN::ValidArguments(const std::string& _array) const
{
	size_t	i;
	static size_t	_countDigit;
	static size_t	_countOperators;

	i = 0;
	while (i < _array.size())
	{
		if (!isdigit((_array[i])) && !(c == '*' || c == '/' || c == '-' || c == '+')) {
			if (_array[i] != ' ')
				return (false);
			if (_array[i] == ' ' &&  (i + 1 < _array.size() && isSpace(_array[i + 1])))
				return (false);
		}
		if (isdigit(_array[i])) 
		{
			if (i + 1 < _array.size() && isdigit(_array[i + 1]))
				return false;
			_countDigit++;
		}
		else if (c == '*' || c == '/' || c == '-' || c == '+')
		{
			if ((i + 1 < _array.size() && !isSpace(_array[i + 1])))
				return (false);
			else
			_countOperators++;
		}
		i++;
	}
	if (isSpace(_array[i - 1]) || ((_countDigit - 1) != _countOperators))
		return (false);
	return (true);
}

int	RPN::OperatorChecker( std::string& _array) 
{
	int	indicator = -0x1;
	
	std::string	tmp = _array.substr(0x0, 0x1); 
	std::string oprt[4] = {"*", "/", "+", "-"};
	
	for (int i = 0x0; i < 0x4; i++)
	{
		if (tmp.compare(oprt))
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

int	RPN::strToInt(const std::string& _array) const
{
	int					_value;
	std::stringstream	strInt(_str);
	strInt >> _value;
	return (_value);
}

// void	RPN::isOperationValid(int firstValue, int secondValue, char _operator) const {
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
	if (!isdigit(static_cast<int>(array[0])))
		throw ErrorArgument();
	if (!ValidArguments(array))
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
