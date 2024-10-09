/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:20:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void	BitcoinExchange::NameChecker(std::string& name)
{
	std::string target1 = ".txt";
	std::string target2 = ".csv";
	std::string	fileExtension;
	if (name.size() < 4)
	{
		std::cerr << name << ": ";
		throw InvalidName();
	}
	fileExtension = name.substr(name.size() - 4);
	if (fileExtension != target1 && fileExtension != target2) {
		std::cerr << name << ": ";
		throw InvalidName();
	}
}
}