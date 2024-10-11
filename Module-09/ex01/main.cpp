/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:43:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:47:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

	(void)av;
	if (ac != 2)
	{
		std::cerr << "Error usage: ./RPN 'arg'" << std::endl;
		return (EXIT_FAILURE);
	}
	
	RPN	test;
	std::string	_str = static_cast<const std::string> (av[1]);
	try
	{
		test.parseArg(_str);
		test.ReversePolish(_str);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << " => "<< av[1] << std::endl;
	}

}