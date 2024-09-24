/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:51:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 19:04:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	(void) av;
	
	if (ac != 0x1)
	{
		std::cerr << "This Program does not take any arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	Harl	function;

	function.complain("DEBUG");
	function.complain("INFO");
	function.complain("WARNING");
	function.complain("ERROR");
	return (EXIT_SUCCESS);
}
