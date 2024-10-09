/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:24:08 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// std::cout << "called constructor by default!" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& _obj) {
	if (this != &_obj)
		*this = _obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& _obj) {
	if (this != &_obj) {
		dataBaseMap = _obj.dataBaseMap;
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
		std::cerr << name << ": ";
		throw InvalidName();
	}
	Extention = name.substr(name.size() - 4);
	if (Extention != target1 && Extention != target2) {
		std::cerr << name << ": ";
		throw InvalidName();
	}
}


text.csv