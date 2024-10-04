/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 14:54:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>

typedef enum s_type{
	_CHAR,
	_INT,
	_FLOAT,
	_DOUBLE,
	_MINUSINF,
	_PLUSINF,
	_NANF,
	_STRING
}	t_type;

class ScalarConverter
{
	private:
		static int	getType(const std::string &str);
		static int	detectType(const std::string &str);
		static int	AnoramlType(const std::string &str);
		static void	charCase(const std::string& str);
		static void	intCase(const std::string& str);
		static void	floatCase(const std::string& str);
		static void	doubleCase(const std::string& str);
		static void	minusInfAndMinusInffCase(void);
		static void	plusInfAndPlusInffCase(void);
		static void	nanAndNanfCase(void);
		static void	stringCase(void);
		ScalarConverter();
		ScalarConverter(const ScalarConverter& );
	public:
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& );
		static void convert(const std::string& );
};