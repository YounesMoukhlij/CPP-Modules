/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 13:44:59 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& origine)
{
	if (this != &origine)
		*this = origine;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& origine)
{
	if (this != &origine)
	{
		
	}
	return (*this);
}

void	BitcoinExchange::nameChecker(std::string& name, int i)
{
	if (name.size() < 0x4)
	{
		(1) & (std::cerr << name << ": ", throw InvalidName(), i = 0x1);
	}
	if (name.substr(name.size() - 4, name.size()) != ".txt" && name.substr(name.size() - 4, name.size()) != ".csv")
	{
		(1) & (std::cerr << name << ": ", throw InvalidName(), i = 0x2);
	}
}

const char*	BitcoinExchange::InvalidName::what() const throw()
{
	return ("Invalide File Name!");
}

const char*	BitcoinExchange::Invalidfile::what() const throw()
{
	return ("can't open the file!");
}

const char*	BitcoinExchange::InvalidData::what() const throw()
{
	return ("Invalide Data input!");
}

void	BitcoinExchange::openingFiles(const std::string& name, int j)
{
	infile.open(name);
	if (!infile.is_open()) 
		(1) & (std::cerr << name << ": ", throw Invalidfile(), j = 0x1);
	dataBase.open("data.csv");
	if (!dataBase.is_open())
	{
		(1) & (std::cerr << name << ": ", throw Invalidfile(), j = 0x1);
		infile.close();
		(1) & (std::cerr << "data.csv: ", throw Invalidfile(), j = 0x2);
	}
}



void	BitcoinExchange::loadData(void)
{
	std::string	line;
	size_t		delPos;

	std::getline(dataBase, line);
	line = std::remove(line.begin(), line.end(), ' ');
	if (line != "date,exchange_rate")
		throw	InvalidData();
	while (getline(dataBase, line))
	{
		delPos = line.find(',');
		if (delPos == std::string::npos)
		{
			throw InvalidData();
		}
	}
}