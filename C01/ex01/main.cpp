/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:50 by youmoukh          #+#    #+#             */
/*   Updated: 2024/04/22 17:18:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void print_name(int num, Zombie *z)
{
    for (int i = 0; i < num; i++)
		  z[i].announce();
}

void show(void)
{
	system("leaks zombie");
}

int main(int ac, char **av)
{
	int	number = 4;

	atexit(show);
	if (ac != 1)
	{
		std::cerr << "the program doesn't take any args!"  << std::endl;
		return (1);
	}
	Zombie *z = zombieHorde(number, "younan");
	print_name(number, z);
    delete [] z;
	return (0x0);
}
