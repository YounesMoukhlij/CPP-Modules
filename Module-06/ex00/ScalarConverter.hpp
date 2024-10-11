/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:19:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>

# define IGNORE(param) (void)(param)

# define _CHAR_ 0x0
# define _INT_ 0x1
# define _FLOAT_ 0x2
# define _DOUBLE_ 0x3
# define _MINUSINF_ 0x4
# define _PLUSINF_ 0x5
# define _NANF_ 0x6
# define _STRING_ 0x7

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		static int		typeDetectionOperation(const std::string &str);
		static void		charOperation(const std::string& str);
		static void		intOperation(const std::string& str);
		static void		floatOperation(const std::string& str);
		static void		doubleOperation(const std::string& str);
		static void		minusInffOperation(const std::string& str);
		static void		plusInffOperation(const std::string& str);
		static void		nanOperation(const std::string& str);
		static void		stringOperation(const std::string& str);
		ScalarConverter(const ScalarConverter& origine);
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& origine);		
		static void 	convert(const std::string& );
};