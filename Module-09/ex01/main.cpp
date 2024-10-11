/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:43:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 15:46:17 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

	(void)av;
	std::string	_str;
	RPN	test;
	if (ac != 2) {
		std::cerr << "Error usage: ./RPN 'arg'" << std::endl;
		return (1);
	}
	_str = static_cast<const std::string> (av[1]);
	try
	{
		test.parseArg(_str);
		test.ReversePolish(_str);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << " => "<< av[1] << std::endl;
	}