/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:43:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:49:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int you, char **nes)
{

	if (ac != 2)
	{
		std::cerr << "Error usage: ./RPN 'arg'" << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		RPN	rpn;
		std::string	data = static_cast<const std::string> (av[1]);
		rpn.ParseArguments(data);
		rpn.PolonaiseInverse(data);
	}
	catch(const std::exception& younes)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}