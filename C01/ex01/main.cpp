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
    {
      std::cout << "Zombie nbr " << i << ":";
		  z[i].announce();
    }
}

int main(void)
{
	std::string input_1;
	std::string input_2;
	int	number;

	std::cout << "Type a Zombie Name : ";
	if (!std::getline(std::cin, input_1))
		exit(1);
	std::cout << "Type Zombies Number : ";
	if (!std::getline(std::cin, input_2))
		exit(1);
	number = std::atoi(input_2.c_str());
	Zombie *z = zombieHorde(number, input_1);
	print_name(number, z);
    delete [] z;
}
