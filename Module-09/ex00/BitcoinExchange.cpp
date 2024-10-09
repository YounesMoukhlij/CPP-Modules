/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 14:54:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <unistd.h>

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
		(1) & (infile.close(), std::cerr << "data.csv: ", throw Invalidfile(), j = 0x2);
}


std::string trim(const std::string& str)
{
    std::string::size_type first = str.find_first_not_of(" ");
    if (first == std::string::npos)
        return ("");
    std::string::size_type last = str.find_last_not_of(" ");
    return str.substr(first, last - first + 1);
}


void	BitcoinExchange::addToDataBaseMap(const std::string& _str, size_t _posDelimiter)
{
	std::string	_date;
	std::string	_rate;
	float		_rateValue;

	_date = _str.substr(0, _posDelimiter);
	_rate = _str.substr(_posDelimiter + 1);
	_date = trimString(_date);
	_rate = trimString(_rate);
	std::stringstream	rateFloat(_rate);
	rateFloat >> _rateValue;
	if (rateFloat.fail() || !rateFloat.eof())
	{
		closeFds();
		throw ErrorInvalidData;
	}
	dataBaseMap[_date] = _rateValue;
}

void	BitcoinExchange::loadData(void)
{
	std::string		line;
	size_t			delPos;
	std::string		date;
	std::string		rate;
	std::string		rateV;
	

	std::getline(dataBase, line);
	line = trim(line);
	if (line != "date,exchange_rate")
		throw InvalidData();
	while (std::getline(dataBase, line))
	{
		delPos = line.find(',');
		std::cout << delPos << std::endl;
		if (delPos == std::string::npos)
		{
			infile.close();
			dataBase.close();
			throw InvalidData();
		}
		date = line.substr(0x0, delPos);
		rate = line.substr(delPos + 1);
		date = trim(date);
		rate = trim(rate);
		std::stringstream	_Float(rate);
		_Float rateV >>;
		
	}
}