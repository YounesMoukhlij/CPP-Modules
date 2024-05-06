/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:19:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/04/22 17:57:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::nameZombie(std::string str)
{
	name = str;
}

Zombie::Zombie(int numZombies, std::string z)
{
	for (int i = 0; i < numZombies; i++)
		z[i].nameZombie(name);
}

Zombie::~Zombie()
{
    std::cout << name << ": is destroyed\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
