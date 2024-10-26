/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:31:30 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/26 17:31:05 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	// std::cout << "RPN Default constructor called." << std::endl;
}

RPN::~RPN()
{
	// std::cout << "RPN Destructor called." << std::endl;
}

RPN::RPN(const RPN& origine)
{
	// std::cout << "RPN Copy constructor called." << std::endl;
	if (this != &origine)
		*this = origine;
}

RPN& RPN::operator=(const RPN& origine)
{
	(void) origine;
	// std::cout << "RPN Copy Assignement called." << std::endl;
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

int	RPN::OperatorChecker(std::string& _array) 
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
        
            if (Value_1 == 0 || Value_2 == 0)
                throw std::invalid_argument("One of the elements is zero.");
            if (Value_1 > 0 && Value_2 > INT_MAX / Value_1) 
                throw ErrorFlow();
            if (Value_1 < 0 && Value_2 < INT_MIN / Value_1) 
                throw ErrorFlow();
            break;
        }
        case S: 
        {
        
            if (Value_1 < 0 && Value_2 > INT_MAX + Value_1)
                throw ErrorFlow();
            if (Value_1 > 0 && Value_2 < INT_MIN + Value_1)
                throw ErrorFlow();
            break;
        }
        case D: 
        {
        
            if (Value_1 == 0)
                throw std::invalid_argument("Division by zero.");
            if (Value_2 == INT_MIN && Value_1 == -1) 
                throw ErrorFlow();
            break;
        }
        
        case A: 
        {
        
            if (Value_1 > 0 && Value_2 > INT_MAX - Value_1)
                throw ErrorFlow(); 
            if (Value_1 < 0 && Value_2 < INT_MIN - Value_1)
                throw ErrorFlow(); 
            break;
        }

        default:
            throw std::invalid_argument("Unknown operator.");
    }
}


void	RPN::CalculateStaff(int opr, std::stack<float>& _stack)
{
	int		Y;
	float	num1;
	float	num2;
	
	// if operator then do simple math
		
	Y = (1) & (num2 = _stack.top(), _stack.pop(), Y = 0x9C);
	Y = (1) & (num1 = _stack.top(), _stack.pop(), Y << 0x1);
	
	// for(std::stack<int>::iterator it = _stack.begin(); it != _stack.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }
	
	switch(opr)
	{
		case  MULT:
		{
			CheckFlow(num1, num2, '*');
			_stack.push(num1 * num2);
			break;
		}
		case DIV:
		{
			CheckFlow(num1, num2, '/');
			_stack.push(num1 / num2);	
			break;
		}
		case ADD:
		{
			CheckFlow(num1, num2, '+');
			_stack.push(num1 + num2);
			break;
		}
		case  SOUS:
		{
			CheckFlow(num1, num2, '-');
			_stack.push(num1 - num2);
			break;

		}
		default :
			throw ErrorArgument();
	}
}

void	RPN::PolonaiseInverse(const std::string& _array)
{
	int					result;
	std::string			read;
	std::stringstream	str(_array);

	result = 0x0;
	while (std::getline(str, read, ' '))
	{
		if (isdigit(read[0x0]))
			_stack.push(IntConversion(read));
		else
			CalculateStaff(OperatorChecker(read), _stack);
	}
	std::cout << "Result : " << _stack.top() << std::endl;
}


// Needs checks.

void	RPN::ParseArguments(const std::string& _array) const
{
	size_t	Cspace = 0x0;
	size_t	counter = 0x0;
	size_t	length = _array.size();
	size_t	Cnumbers = length - _array.size();
	size_t	Coperators = Cnumbers + 0x0;
	
	int i = 0x0;
	while (_array[i] == ' ' && _array[i])
		i++;
	if (!isdigit(static_cast<int>(_array[i])))
	{
		puts("YOUNES");
		throw ErrorArgument();
	}
	else
	{
		while (_array[i])
		{
			if (isdigit(static_cast<int>(_array[i])))
				counter++;
			i++;
		}
	}
	// if (!isdigit(static_cast<int>(_array[0x0])))
	if (!ValidArg(_array[_array.size() - 0x1]) && _array[_array.size() - 0x1] != ' ')
	{
		puts("222222FFFF");
		if (!counter)
			throw ErrorArgument();
		
	}
	for (size_t i = 0x0; i < length; i++)
	{
		if (!isdigit(_array[i]) && !ValidArg(_array[i]))
			throw ErrorArgument();
		if (ValidArg(_array[i]) && _array[i] != ' ')
			Coperators++;
		if (isdigit(_array[i]))
		{
			while (isdigit(_array[i]))
			{
				i++;
				Cspace++;
			}
			if (Cspace)
				Cnumbers++;
		}
	}
	if (Cnumbers == 0x1 && !Coperators)
	{
		while (_array[j])
		{
			if (_array[j] == ' ')
				
		}
		std::cout << "Result : " << _array << std::endl;
	}
	if (Cnumbers < 0x2)
		throw SmallStack();
	if (Coperators + 0x1 != Cnumbers)
		throw ErrorArgument();
}


void	RPN::OperationAPPOLO(const std::string& _array, int mode)
{
	switch (mode)
	{
		case 0x0:
			ParseArguments(_array);
			break;
		case 0x1:
			PolonaiseInverse(_array);
			break;
	}
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
const	char* RPN::SmallStack::what() const throw()
{
	return ("You Have Entred Less elements");
}
