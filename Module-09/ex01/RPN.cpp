/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 17:24:41 by youmoukh         ###   ########.fr       */
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
	(void) origine;
	std::cout << "Copy Assignement called." << std::endl;
	return (*this);
}


int	RPN::ValidArg(char _oprt) const
{
	switch (_oprt)
	{
		case M:
			return (M);
		case D:
			return (D);
		case A:
			return (A);
		case S:
			return (S);
		case SPACE:
			return (SPACE);
		default:
			return (MULT - 0x1);
	}
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
		case (MULT - 0x1):
			return (MULT);
		case (DIV - 0x1):
			return (DIV);
		case (ADD - 0x1):
			return (ADD);
		case (SOUS - 0x1):
			return (SOUS);
		default:
			return (MULT - 0x2);
	}
}

// 7 5 - 6 1 + * 8 2 / +

// 2 * 7 + 

int	RPN::IntConversion(const std::string& _array) const
{
	int					_intValue;
	std::stringstream	str(_array);
	
	str >> _intValue;
	
	return (_intValue);
}


// void	RPN::CheckFlow(int Value_1, int Value_2, char opr) const
// {
//     switch (opr)
//     {
//         case M: 
//         {
        
//             if (Value_1 == 0 || Value_2 == 0)
//                 throw std::invalid_argument("One of the elements is zero.");
//             if (Value_1 > 0 && Value_2 > INT_MAX / Value_1) 
//                 throw ErrorFlow();
//             if (Value_1 < 0 && Value_2 < INT_MIN / Value_1) 
//                 throw ErrorFlow();
//             break;
//         }
//         case S: 
//         {
        
//             if (Value_1 < 0 && Value_2 > INT_MAX + Value_1)
//                 throw ErrorFlow();
//             if (Value_1 > 0 && Value_2 < INT_MIN + Value_1)
//                 throw ErrorFlow();
//             break;
//         }
//         case D: 
//         {
        
//             if (Value_1 == 0)
//                 throw std::invalid_argument("Division by zero.");
//             if (Value_2 == INT_MIN && Value_1 == -1) 
//                 throw ErrorFlow();
//             break;
//         }
        
//         case A: 
//         {
        
//             if (Value_1 > 0 && Value_2 > INT_MAX - Value_1)
//                 throw ErrorFlow(); 
//             if (Value_1 < 0 && Value_2 < INT_MIN - Value_1)
//                 throw ErrorFlow(); 
//             break;
//         }

//         default:
//             throw std::invalid_argument("Unknown operator.");
//     }
// }


void	RPN::PolonaiseInverse(std::string& _array)
{
	int					result;
	std::string			_piece;
	std::stringstream	str(_array);
	
	while (getline(str, _piece, ' '))
	{
		std::cout << 	
	}
	std::cout << "The Result : " << result << std::endl;
}

void	RPN::ParseArguments(const std::string& _array) const
{
	size_t	length = _array.size();
	size_t	Cnumbers = length - _array.size();
	size_t	Coperators = Cnumbers + 0x0;
	
	if (!isdigit(static_cast<int>(_array[0x0])))
		throw ErrorArgument();
	if (!ValidArg(_array[_array.size() - 0x1]) && _array[_array.size() - 0x1] != ' ')
		throw ErrorArgument();
	for (static size_t i; i < length; i++)
	{
		if (!isdigit(_array[i]) && !ValidArg(_array[i]))
			throw ErrorArgument();
		if (ValidArg(_array[i]) && _array[i] != ' ')
			Coperators++;
		if (isdigit(_array[i]) && _array[i] != ' ')
			Cnumbers++;
	}
	if (Coperators + 0x1 != Cnumbers)
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
	return ("Dont Foul me, Cannot Multiply Zero by Zero. What the point!!!");
}
