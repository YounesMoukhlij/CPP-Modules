/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:57:37 by youmoukh         ###   ########.fr       */
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

bool	RPN::isOperator(char c) const
{
	return (c == '*' || c == '/' || c == '-' || c == '+');
}

bool	RPN::isSpace(char c) const
{
	return (c == ' ');
}

bool	RPN::isValidChracters(const std::string& _str) const {
	size_t	i;
	static size_t	_countDigit;
	static size_t	_countOperators;

	i = 0;
	while (i < _str.size())
	{
		if (!isdigit((_str[i])) && !(c == '*' || c == '/' || c == '-' || c == '+')) {
			if (_str[i] != ' ')
				return (false);
			if (_str[i] == ' ' &&  (i + 1 < _str.size() && isSpace(_str[i + 1])))
				return (false);
		}
		if (isdigit(_str[i])) 
		{
			if (i + 1 < _str.size() && isdigit(_str[i + 1]))
				return false;
			_countDigit++;
		}
		else if (c == '*' || c == '/' || c == '-' || c == '+')
		{
			if ((i + 1 < _str.size() && !isSpace(_str[i + 1])))
				return (false);
			else
			_countOperators++;
		}
		i++;
	}
	if (isSpace(_str[i - 1]) || ((_countDigit - 1) != _countOperators))
		return (false);
	return (true);
}

int	RPN::whichOperator(const std::string& _str) const
{
	std::string oprt[4] = ["*", "/", "+", "-"];
	if (_str[0] == '*')
		return (1);
	else if (_str[0] == '/')
		return (2);
	else if (_str[0] == '+')
		return (3);
	else if (_str[0] == '-')
		return (4);
	return (-1);
}

int	RPN::strToInt(const std::string& _str) const {
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

void	RPN::PolonaiseInverse(std::string& array)
{
	std::string			_piece;
	std::stringstream	inputString(array);
	while (getline(inputString, _piece, ' '))
	{
		if (isdigit(_piece[0]))
			_rpnStack.push(strToInt(_piece));
		else
			operationCalcule(_piece, _rpnStack);
	}
	std::cout << "the result is: " << _rpnStack.top() << std::endl;
}

void	RPN::ParseArguments(const std::string& array) const
{
	if (!isdigit(static_cast<int> (array[0])))
		throw ErrorArgument();
	if (!isValidChracters(array))
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