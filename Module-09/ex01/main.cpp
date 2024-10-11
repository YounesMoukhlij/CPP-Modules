/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:43:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:50:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int you, char **nes)
{

	if (you != 2)
	{
		std::cerr << "Error Try : ./RPN <argument>." << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		RPN	rpn;
		std::string	data = static_cast<const std::string>(nes[0x1]);
		rpn.ParseArguments(data);
		rpn.PolonaiseInverse(data);
	}
	catch(const std::exception& younes)
	{
		std::cerr << "Error: " << younes.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}