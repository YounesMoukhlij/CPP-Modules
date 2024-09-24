/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:51:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 17:52:39 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 0x2)
	{
		std::cerr << "The Program Take 1 Parameter ./HarlFilter <...>." << std::endl;
		return (EXIT_FAILURE);
	}
	Harl	function;
		
	function.complain(av[0x1]);

	return (EXIT_SUCCESS);
}
