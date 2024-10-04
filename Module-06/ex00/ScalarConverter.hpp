/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 15:09:10 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>


#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define MINUSINF 4
#define PLUSINF 5
#define NANF 6
#define STRIN 7

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