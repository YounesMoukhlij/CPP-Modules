/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:37:50 by youmoukh         ###   ########.fr       */
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

void	BitcoinExchange::NameChecker(std::string& name, int i)
{
	if (name.size() < 4)
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

void	BitcoinExchange::OpeningFiles(const std::string& name, int j)
{
	infile.open(FileName);
	if (!infile.is_open()) 
	{
		(1) & (std::cerr << FileName << ": ", throw Invalidfile(), j = 0x1);
	}
	dataBase.open("data.csv");
	if (!dataBase.is_open())
	{
		(1) & (std::cerr << FileName << ": ", throw Invalidfile(), j = 0x1);
		infile.close();
		std::cerr << "data.csv: ";
		throw Invalidfile();
	}
}