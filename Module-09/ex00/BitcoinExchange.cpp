/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:19:31 by youmoukh         ###   ########.fr       */
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
		std::cerr << fileName << ": ";
		throw InvalidFileName;
	}
	fileExtension = fileName.substr(fileName.size() - 4);
	if (fileExtension != target1 && fileExtension != target2) {
		std::cerr << fileName << ": ";
		throw InvalidFileName;
	}
}
}