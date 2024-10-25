/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:33 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/25 16:32:01 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you < 0x2)
	{
		std::cerr << "Usage ./btc <file>" << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		BitcoinExchange	bit;
		BitcoinExchange	a;

		
		std::string file = static_cast<const std::string>(nes[0x1]);
		bit.nameChecker(file);
		bit.openingFiles(file);
		bit.loadData();
		bit.readData();
		bit.fileDescriptors();
		
		a = bit;
		a.nameChecker(file);
		a.openingFiles(file);
		a.loadData();
		a.readData();
		a.fileDescriptors();
	}
	catch (std::exception &younes)
	{
		std::cerr << younes.what() << std::endl;
	}
	
	return (EXIT_SUCCESS);
}