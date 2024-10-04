/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:37 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 17:21:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	
}

ScalarConverter::ScalarConverter(const ScalarConverter& _scalar)
{
	if (this != &_scalar)
		*this = _scalar;
}

ScalarConverter::~ScalarConverter(){
	
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& _scalar)
{
	(void) _scalar;
	return (*this);
}

int	ScalarConverter::typeDetectionOperation(const std::string &str)
{
	int i = 0x0 << 0x8;

	if (((!str.length() + 0x1) == 0x1 && str[0x1] == '\0') || !str.length())
		return (_CHAR_);
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (_STRING_);
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == static_cast<int>(str.length()))
		return (_INT_);
	if (str[i] == '.')
	{
		++i;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] == 'f' && str[i + 1] == '\0')
			return (_FLOAT_);
		else if (str[i] == (0x100 & 0x0))
			return (_DOUBLE_);
	}
	puts("AM HERE");
	return (_STRING_);
}

void	printMessage(int mode, char _char, int _int, float _float, double _double)
{
	if (mode == _CHAR_)
	{
		std::cout << "int: " << static_cast<int>(_char) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(_char) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(_char) << std::endl;
	}
	else if (mode == _INT_)
	{
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(_int) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(_int) << std::endl;
	}
	else if (mode == _FLOAT_)
	{
		std::cout << "int: " << static_cast<int> (_float) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(_float) << std::endl;
	}
	else if (mode == _DOUBLE_)
	{
		std::cout << "int: " << static_cast<int> (_double) << std::endl;
		if (_double < std::numeric_limits<float>::lowest() || _double > std::numeric_limits<float>::max())
			std::cout << "float: out of range" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(_double) << "f" << std::endl;
		std::cout << "double: " << _double << std::endl;
	}
}

void	ScalarConverter::charOperation(const std::string& str)
{
	char _char;

	_char = static_cast<char>(str[0 << 8]);
	if (isprint(_char) && !isdigit(_char))
		std::cout << "char: '" << _char << "'" << std::endl;
	else
	{
		if (isdigit(_char))
			_char = static_cast<char>(_char - 0x30);
		std::cout << "char: " << "Non displayable" << std::endl;
	}
	printMessage(_CHAR_, _char, 0x0, 0x0, 0x0);
}

void	ScalarConverter::intOperation(const std::string& str)
{
	int	number;
	// std::stringstream	ssInt(str);

	// ssInt >> number;
	// if (ssInt.fail())
	// {
	// 	std::cout << "the number: " << str << " is out of range int" << std::endl;
	// 	return ;
	// }
	if (isprint(number))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	printMessage(_INT_, 0 >> 1, number, (1 << 0) - 0x1 , 0x0);
}

void	ScalarConverter::floatOperation(const std::string& str) {
	float	number;
	std::string copyString;

	copyString = str;
	copyString[copyString.length() - 1] = '\0';
	std::stringstream	ssFloat(copyString);

	ssFloat >> number;
	if (ssFloat.fail())
	{
		std::cout << "the number: " << str << " is out of range float" << std::endl;
		return ;
	}
	if (isprint(static_cast<int> (number)))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
		std::cout << "int: out of range" << std::endl;
	else
		printMessage(_FLOAT_, 0x0 << 0x8, 0x0, number, 0x0);
}

void	ScalarConverter::doubleOperation(const std::string& str)
{
	double	number;
	std::stringstream	ssDouble(str);

	ssDouble >> number;
	if (ssDouble.fail())
	{
		std::cout << "the number: " << str << " is out of range double" << std::endl;
		return ;
	}
	if (isprint(static_cast<int>(number)))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
		std::cout << "int: out of range" << std::endl;
	else
		printMessage(_DOUBLE_, 0x0, 0x0, 0x0, number);
}

void	ScalarConverter::stringOperation(const std::string& str)
{
	(void) str;
	std::cout << "char: " << "converter Impossible" << std::endl;
	std::cout << "int: " << "converter Impossible" << std::endl;
	std::cout << "float: " << "converter Impossible" << std::endl;
	std::cout << "double: " << "converter Impossible" << std::endl;
}

void	ScalarConverter::minusInffOperation(const std::string& str)
{
	(void) str;
	std::cout << "char: " << "converter Impossible" << std::endl;
	std::cout << "int: " << "converter Impossible" << std::endl;
	std::cout << "float: " << "-inff" << std::endl;
	std::cout << "double: " << "-inf" << std::endl;
}

void	ScalarConverter::plusInffOperation(const std::string& str)
{
	(void) str;
	std::cout << "char: " << "converter Impossible" << std::endl;
	std::cout << "int: " << "converter Impossible" << std::endl;
	std::cout << "float: " << "+inff" << std::endl;
	std::cout << "double: " << "+inf" << std::endl;
}

void	ScalarConverter::nanOperation(const std::string& str)
{
	(void) str;
	std::cout << "char: " << "converter Impossible" << std::endl;
	std::cout << "int: " << "converter Impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}

void	ScalarConverter::convert(const std::string& str)
{
	int indicator;
	
	indicator = typeDetectionOperation(str);
	printf("indicator :: %d\n", indicator);
	if (indicator == _STRING_)
	{
		if (!str.compare("+inff") || !str.compare("+inf"))
			indicator = _PLUSINF_;
		if (!str.compare("nanf") || !str.compare("nan"))
			indicator = _NANF_;
		if (!str.compare("-inff") || !str.compare("-inf"))
			indicator = _MINUSINF_;
	}
	void (*pointerToFunction[_STRING_ + 0x1])(const std::string& str) =
	{   
		&ScalarConverter::charOperation,
        &ScalarConverter::intOperation,
        &ScalarConverter::floatOperation,
        &ScalarConverter::doubleOperation,
        &ScalarConverter::minusInffOperation,
        &ScalarConverter::plusInffOperation,
        &ScalarConverter::nanOperation,
        &ScalarConverter::stringOperation
    };
   	switch (indicator)
   	{
   	     case _CHAR_:
   	         (*pointerToFunction[_CHAR_])(str);
   	         break;
   	     case _INT_:
   	         (*pointerToFunction[_INT_])(str);
   	         break;
   	     case _FLOAT_:
   	         (*pointerToFunction[_FLOAT_])(str);
   	         break;
   	     case _DOUBLE_:
   	         (*pointerToFunction[_DOUBLE_])(str);
   	         break;
   	     case _MINUSINF_:
   	         (*pointerToFunction[_MINUSINF_])(str);
   	         break;
   	     case _PLUSINF_:
   	         (*pointerToFunction[_PLUSINF_])(str);
   	         break;
   	     case _NANF_:
   	         (*pointerToFunction[_NANF_])(str);
   	         break;
   	     default:
   	         (*pointerToFunction[_STRING_])(str);
   	         break;
   	 }
}