/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 15:08:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>


	#define _CHAR,
	#define _INT,
	#define _FLOAT,
	#define _DOUBLE,
	#define _MINUSINF,
	#define _PLUSINF,
	#define _NANF,
	#define _STRING

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& origine);
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& origine);
		
		static int	getType(const std::string &str);
		static int	typeDetectionOperation(const std::string &str);
		static int	AnoramlType(const std::string &str);
		static void	charOperation(const std::string& str);
		static void	intOperation(const std::string& str);
		static void	floatOperation(const std::string& str);
		static void	doubleOperation(const std::string& str);
		static void	minusInfAndMinusInffOperation(void);
		static void	plusInfAndPlusInffOperation(void);
		static void	nanAndNanfOperation(void);
		static void	stringOperation(void);
		static void convert(const std::string& );
};