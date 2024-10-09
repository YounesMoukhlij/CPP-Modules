/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:25:53 by youmoukh         ###   ########.fr       */
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

void	BitcoinExchange::NameChecker(std::string& name)
{
	std::string target1 = ".txt";
	std::string target2 = ".csv";
	std::string	Extention;
	if (name.size() < 4)
	{
		(1) & (std::cerr << name << ": ", throw InvalidName(), int i = 1;);
	}
	Extention = name.substr(name.size() - 4);
	if (Extention != target1 && Extention != target2)
	{
		std::cerr << name << ": ";
		throw InvalidName();
	}
}


text.csv