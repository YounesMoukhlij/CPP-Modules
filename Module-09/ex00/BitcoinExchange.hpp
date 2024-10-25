/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/25 12:00:04 by youmoukh         ###   ########.fr       */
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
		void				fileDescriptors();
		bool				parseEntry(std::string& str);
		void				printData(const std::string& infos);
		void				nameChecker(std::string& name);
		void				openingFiles(const std::string& name);
		void				firstCheck(std::string line, int mode);
		
		
		
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