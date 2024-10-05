/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 13:00:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>

# define IGNORE(param) (void)(param)
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
	private:
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
		ScalarConverter();
		ScalarConverter(const ScalarConverter& origine);
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& origine);		
		static void 	convert(const std::string& );
};