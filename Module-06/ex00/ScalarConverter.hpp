/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 15:36:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>


# define _CHAR_ 0
# define _INT_ 1
# define _FLOAT_ 2
# define _DOUBLE_ 3
# define _MINUSINF_ 4
# define _PLUSINF_ 5
# define _NANF_ 6
# define _STRING_ 7

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& origine);
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& origine);
		
		static int		typeDetectionOperation(const std::string &str);
		static void		charOperation(const std::string& str);
		static void		intOperation(const std::string& str);
		static void		floatOperation(const std::string& str);
		static void		doubleOperation(const std::string& str);
		static void		minusInffOperation(void);
		static void		plusInfOperation(void);
		static void		nanOperation(void);
		static void		stringOperation(void);
		static void 	convert(const std::string& );
};