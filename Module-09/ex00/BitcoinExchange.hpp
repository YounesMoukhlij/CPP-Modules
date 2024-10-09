/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 16:01:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <sstream>

# define IGNORE(param) (void)(param)

class BitcoinExchange
{
	private:
		std::ifstream					infile;
		std::ifstream					dataBase;
		std::string						date;
		std::map<std::string, float>	dataMap;
		float							value;
		
	public :
		// canonical Form
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& origine);
		BitcoinExchange&	operator=(const BitcoinExchange& origine);
		
		
		
		// Member Functions
		void				loadData();
		void				readData();
		void				nameChecker(std::string& name, int i);
		void				openingFiles(const std::string& name, int j);
		void				fillData(const std::string& infos);
		void				fileDescriptors();
		
		
		// Exceptions
		class	Invalidfile: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	InvalidData: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	InvalidName: public std::exception
		{
			public:
				const char* what() const throw();
		};
};