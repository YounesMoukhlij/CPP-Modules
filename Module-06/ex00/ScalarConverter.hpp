/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 15:09:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
#include <sstream>


# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define MINUSINF 4
# define PLUSINF 5
# define NANF 6
# define STRING 7

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& origine);
		~ScalarConverter();
		ScalarConverter& operator= (const ScalarConverter& origine);
		
		int	getType(const std::string &str);
		int	typeDetectionOperation(const std::string &str);
		int	AnoramlType(const std::string &str);
		void	charOperation(const std::string& str);
		void	intOperation(const std::string& str);
		void	floatOperation(const std::string& str);
		void	doubleOperation(const std::string& str);
		void	minusInfAndMinusInffOperation(void);
		void	plusInfAndPlusInffOperation(void);
		void	nanAndNanfOperation(void);
		void	stringOperation(void);
		void convert(const std::string& );
};