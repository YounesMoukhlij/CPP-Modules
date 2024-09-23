/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:50 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 18:34:29 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void	low()
{
	system("leaks zombie");
}

int main(int ac, char **av)
{
	(void) av;
	int	number = 0x5;

	atexit(low);
	if (ac != 0x1)
	{
		std::cerr << "the program doesn't take any args!"  << std::endl;
		return (0x1);
	}
	Zombie *z = zombieHorde(number, "younan");
    for (int i = 0x0; i < number; i++)
		  z[i].announce();
    delete [] z;
	return (0x0);
}
