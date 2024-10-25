/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:33 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/25 13:02:03 by youmoukh         ###   ########.fr       */
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
	
	// BitcoinExchange	bit;
	// try
	// {
	// 	std::string file = static_cast<const std::string>(nes[0x1]);
	// 	bit.nameChecker(file);
	// 	bit.openingFiles(file);
	// 	bit.loadData();
	// 	bit.readData();
	// 	bit.fileDescriptors();
	// }
	// catch (std::exception &younes)
	// {
	// 	std::cerr << younes.what() << std::endl;
	// }
	
	std::map<std::string, float>	data;

	data.insert(std::make_pair("2024-10-25", 0x1));
	data.insert({std::}"2024-10-26", 0x2));
	
	return (EXIT_SUCCESS);
}