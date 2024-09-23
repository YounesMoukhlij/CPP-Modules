/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:19:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 18:33:09 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor is Called" << std::endl;
}

void Zombie::getName(std::string n_name)
{
	name = n_name;
}

Zombie::~Zombie()
{
    std::cout << "Destructor is destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
