/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:20:30 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


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
	if (Extention != target1 && fileExtension != target2) {
		std::cerr << name << ": ";
		throw InvalidName();
	}
}
}