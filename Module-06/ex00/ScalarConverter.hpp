/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 16:15:18 by youmoukh         ###   ########.fr       */
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
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter& origine) = delete;
		~ScalarConverter() = delete;
		ScalarConverter& operator= (const ScalarConverter& origine);
		
		static int		typeDetectionOperation(const std::string &str);
		static void		charOperation(const std::string& str);
		static void		intOperation(const std::string& str);
		static void		floatOperation(const std::string& str);
		static void		doubleOperation(const std::string& str);
		static void		minusInffOperation(const std::string& str);
		static void		plusInffOperation(const std::string& str);
		static void		nanOperation(const std::string& str);
		static void		stringOperation(const std::string& str);
		static void 	convert(const std::string& );
};