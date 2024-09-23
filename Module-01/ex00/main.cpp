/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:49:08 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 13:03:37 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;

	std::cout << "\033[42m Go to randomChump function\033[0m" << std::endl;
	randomChump("STACK_ZOMBIE");
	std::cout << "\033[41m back from randomChump function \033[0m" << std::endl;
	std::cout << "\033[44m Go to Heap allocation\033[0m" << std::endl;
	Zombie *z = newZombie("HEAP_ZOMBIE");
	z->announce();
	delete(z);
	std::cout << "\033[46m Back from Heap allocation\033[0m" << std::endl;
	return (0x0);
}
