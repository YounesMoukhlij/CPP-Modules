/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/26 16:32:19 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	value = 0x0;
	date = "";
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
		value = origine.value;
		date = origine.date;
		dataMap = origine.dataMap;
	}
	return (*this);
}

void	BitcoinExchange::nameChecker(std::string& name)
{
	if (name.size() < 0x4)
	{
		std::cerr << name << ": ";
		throw InvalidName();
	}
	if (name.substr(name.size() - 4, name.size()) != ".txt" && name.substr(name.size() - 4, name.size()) != ".csv")
	{
		std::cerr << name << ": ";
		throw InvalidName();
	}
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

void	BitcoinExchange::openingFiles(const std::string& name)
{
	infile.open(name);
	if (!infile.is_open())
	{
		std::cerr << name << ": ";
		throw Invalidfile();
	}
	dataBase.open("data.csv");
	if (!dataBase.is_open())
	{
		infile.close(), std::cerr << "data.csv: ";
		throw Invalidfile();
	}
}


std::string trim(const std::string& str)
{
    std::string::size_type first = str.find_first_not_of(" ");
    if (first == std::string::npos)
        return ("");
    std::string::size_type last = str.find_last_not_of(" ");
    return str.substr(first, last - first + 1);
}


void	BitcoinExchange::firstCheck(std::string line, int mode)
{
	if (mode)
	{
		if (line.compare("date,exchange_rate"))
			throw InvalidData();
	}
	if (!mode)
	{
		if (line != "date | value")
			throw InvalidData();
	}
}

void	BitcoinExchange::loadData(void)
{
	std::string		line;
	size_t			delPos;
	std::string		rate;
	float			rateV;

	std::getline(dataBase, line);
	firstCheck(line = trim(line), 0x1);
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
			fileDescriptors();
			throw InvalidData();
		}
		dataMap[date] = rateV;
	}
}

void	BitcoinExchange::printData(const std::string& inputDate)
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


bool	BitcoinExchange::parseEntry(std::string& str)
{
	int 		_year;
	int 		_month;
	int 		_day;
	std::string	day;
	std::string	strV;
	std::string	year;
	std::string	month;
	size_t		delPos;
	bool		isLeapYear;


	delPos = str.find('|');
	if (delPos == std::string::npos)
		return ((std::cerr << "Error : bad input => " << str << std::endl), false);
	date = trim(str.substr(0x0, delPos));
	strV = trim(str.substr(delPos + 0x1));
	// check dates
	if (date.size() != 10 || date[0x4] != '-' || date[0x7] != '-' )
		return ((std::cerr << "Error : bad input : " << str << std::endl), false);
	day = date.substr(0x8, 0x2);
	year = date.substr(0x0, 0x4);
	month = date.substr(0x5, 0x2);

	std::stringstream _intY(year);
	std::stringstream _intM(month);
	std::stringstream _intD(day);

	_intY >> _year;
	_intM >> _month;
	_intD >> _day;
	std::string ss = year + "-" + month + "-" + day;
	if (_month <= 0x0 || _month > 12 || _day <= 0x0 || _year <= 0x0 || _day > 31)
		return ((std::cerr << "Error : bad input => " << ss << std::endl), false);
	if (_month == 2) {
			isLeapYear = (_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0);
		if (_day > (isLeapYear ? 29 : 28))
			return false;
	}
	if (_month == 2)
	{

		if (_day > 28 || _day > 29)
			return ((std::cerr << "Error : bad input => " << ss << std::endl), false);
	}
	std::stringstream stringFloat(strV);
	stringFloat >> value;
	if (!(!stringFloat.fail() && stringFloat.eof()))
	{
		fileDescriptors();
		throw InvalidData();
	}
	if (value > 1000)
		return ((std::cerr << "Error: too large a number." << std::endl), false);
	if (value < 0x0)
		return ((std::cerr << "Error : not a positive number." << std::endl), false);
	return (true);
}



void	BitcoinExchange::readData(void)
{
	std::string	line;

	std::getline(infile, line);
	firstCheck(line = trim(line), 0x0);
	while (std::getline(infile, line))
	{
		if (!parseEntry(line))
			continue;
		else
			printData(date);
	}
}


void	BitcoinExchange::fileDescriptors(void)
{
	infile.close();
	dataBase.close();
}
