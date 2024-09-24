/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:49:08 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 18:52:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;

	std::cout << "Go to randomChump function." << std::endl;
	randomChump("STACK_ZOMBIE");
	std::cout << "Back from randomChump function." << std::endl;
	std::cout << "Go to Heap allocation." << std::endl;
	Zombie *z = newZombie("HEAP_ZOMBIE");
	z->announce();
	delete(z);
	std::cout << "Back from Heap allocation." << std::endl;
	return (EXIT_SUCCESS);
}
