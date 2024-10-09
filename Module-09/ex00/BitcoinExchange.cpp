/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 16:48:59 by youmoukh         ###   ########.fr       */
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
		(1) & (std::cerr << name << ": ", throw InvalidName(), i = 0x1);
	if (name.substr(name.size() - 4, name.size()) != ".txt" && name.substr(name.size() - 4, name.size()) != ".csv")
		(1) & (std::cerr << name << ": ", throw InvalidName(), i = 0x2);
}

const char*	BitcoinExchange::InvalidName::what() const throw()
{
	return ("Invalide File Name!");
}

const char*	BitcoinExchange::Invalidfile::what() const throw()
{
	return ("Cannot open the file!");
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


void	BitcoinExchange::loadData(void)
{
	std::string		line;
	size_t			delPos;
	std::string		rate;
	float			rateV;
	

	std::getline(dataBase, line);
	line = trim(line);
	if (line.compare("date,exchange_rate"))
		throw InvalidData();
	while (std::getline(dataBase, line))
	{
		delPos = line.find(',');
		if (delPos == std::string::npos)
		{
			infile.close();
			dataBase.close();
			throw InvalidData();
		}
		date = trim(line.substr(0x0, delPos));
		rate = trim(line.substr(delPos + 1));
		std::stringstream	_Float(rate);
		_Float >> rateV;
		if (_Float.fail() || !_Float.eof())
		{
			infile.close();
			dataBase.close();
			throw InvalidData();
		}
		dataMap[date] = rateV;
	}
	// print map
	// for (std::map<std::string, float>::const_iterator it = dataMap.begin() ; it != dataMap.end() ; it++)
	// {
	// 	std::cout << it->first << " - " << it->second << std::endl;
	// }

	
}

void	BitcoinExchange::fillData(const std::string& inputDate)
{
	std::map<std::string, float>::const_iterator it;

	it = dataMap.lower_bound(inputDate);
	if (it != dataMap.end() && it->first == inputDate)
		std::cout << inputDate << " => " << value << " = " << static_cast<float>(it->second * value) << std::endl;
	else
	{
		if (it != dataMap.begin())
		{
			--it;
			if (it->first < inputDate)
				std::cout << inputDate << " => " << value << " = " <<  static_cast<float>(it->second * value) << std::endl;
			else
				std::cerr << "No date found in the database for: " << inputDate << std::endl;
		}
		else
			std::cerr << "No date found in the database for: " << inputDate << std::endl;
	}
	
}


bool	parseEntry(std::string& str)
{
	std::string	strV;
	std::string	_date;
	float		_value;
	size_t		delPos;
	std::string	year;
	std::string	month;
	std::string	day;

	delPos = str.find('|');
	if (delPos == std::string::npos)
		return ((std::cerr << "Error : bad input => " << str << std::endl), false);
	_date = trim(str.substr(0x0, delPos));
	strV = trim(str.substr(delPos + 0x1));
	// check dates
	if (_date.size() != 0xA || _date[0x4] != '-' || _date[0x7] != '-' )
		return ((std::cerr << "Error : bad input : " << str << std::endl), false);
	year = _date.substr(0, 4);
	month = _date.substr(5, 2);
	day = _date.substr(8, 2);
	std::stringstream strFloat(strV);
	strFloat >> _value;
	if (!(!strFloat.fail() && strFloat.eof()))
		return ((std::cerr << "Error: too larsssge a number." << std::endl), false);
	if (_value > 3E8)
		return ((std::cerr << "Error: too large a number." << std::endl), false);
	if (_value < 0x0)
		return ((std::cerr << "Error : not a positive number." << std::endl), false);
	return (true);
}



void	BitcoinExchange::readData(void)
{
	std::string	line;

	std::getline(infile, line);
	line = trim(line);
	if (line != "date | value")
		throw InvalidData();
	while (std::getline(infile, line))
	{
		if (!parseEntry(line))
			continue;
		else
			fillData(date);
	}
}


void	BitcoinExchange::fileDescriptors(void)
{
	infile.close();
	dataBase.close();
}